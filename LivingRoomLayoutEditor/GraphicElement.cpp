#include "GraphicElement.h"
#include "DrawingField.h"

GraphicElement::GraphicElement() {
	pictureBox = gcnew PictureBox();
	pictureBox->Location = System::Drawing::Point(14, 14);
	pictureBox->BackColor = System::Drawing::Color::Transparent;
	pictureBox->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &GraphicElement::pictureBox_MouseDown);
	pictureBox->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &GraphicElement::pictureBox_MouseUp);
	pictureBox->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &GraphicElement::pictureBox_MouseMove);
}

PictureBox^ GraphicElement::getPictureBox() { return pictureBox; }

System::Void GraphicElement::pictureBox_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	GraphicElement::mousePpressed = false;
}

System::Void GraphicElement::pictureBox_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	mousePpressed = true;
	startLocation = e->Location;
	if (DrawingField::getCurrentPictureBox() != nullptr) {
		DrawingField::getCurrentPictureBox()->BackColor = Color::Transparent;
	}
	DrawingField::setCurrentPictureBox((PictureBox^)sender);
	DrawingField::getCurrentPictureBox()->BackColor = Color::LightGreen;
}

System::Void GraphicElement::pictureBox_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (mousePpressed) {
		int offsetX = e->Location.X - startLocation->X;
		int offsetY = e->Location.Y - startLocation->Y;
		if (pictureBox->Left + offsetX < 13) offsetX = 13 - pictureBox->Left;
		if (pictureBox->Top + offsetY < 13) offsetY = 13 - pictureBox->Top;
		if (pictureBox->Right + offsetX > pictureBox->Parent->Width - 13) offsetX = pictureBox->Parent->Width - pictureBox->Right - 13;
		if (pictureBox->Bottom + offsetY > pictureBox->Parent->Height - 13) offsetY = pictureBox->Parent->Height - pictureBox->Bottom - 13;
		pictureBox->Left += offsetX;
		pictureBox->Top += offsetY;
	}
}