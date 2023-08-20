#include "Door.h"

void Door::draw(Control^ parent) {
	pictureBox->Parent = parent;
	pictureBox->Size = System::Drawing::Size(128, 135);
	pictureBox->Image = Image::FromFile("door.png");
}

System::Void Door::pictureBox_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (mousePpressed) {
		int offsetX = e->Location.X - startLocation->X;
		int offsetY = e->Location.Y - startLocation->Y;
		if (pictureBox->Left + offsetX < 1) offsetX = 1 - pictureBox->Left;
		if (pictureBox->Top + offsetY < 1) offsetY = 1 - pictureBox->Top;
		if (pictureBox->Right + offsetX > pictureBox->Parent->Width - 1) offsetX = pictureBox->Parent->Width - pictureBox->Right - 1;
		if (pictureBox->Bottom + offsetY > pictureBox->Parent->Height - 1) offsetY = pictureBox->Parent->Height - pictureBox->Bottom - 1;
		pictureBox->Left += offsetX;
		pictureBox->Top += offsetY;
	}
}