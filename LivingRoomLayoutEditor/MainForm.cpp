#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace LivingRoomLayoutEditor;

[STAThreadAttribute]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	LivingRoomLayoutEditor::MainForm mainForm;
	Application::Run(% mainForm);
	return 0;
}

System::Void MainForm::button_add_armchair_Click(System::Object^ sender, System::EventArgs^ e) {
	drawingField->addElement(EnumGraphicElement::ARMCHAIR);
}
System::Void MainForm::button_add_sofa_Click(System::Object^ sender, System::EventArgs^ e) {
	drawingField->addElement(EnumGraphicElement::SOFA);
}

System::Void MainForm::button_add_tv_Click(System::Object^ sender, System::EventArgs^ e) {
	drawingField->addElement(EnumGraphicElement::TELEVISOR);
}

System::Void MainForm::button_add_table_Click(System::Object^ sender, System::EventArgs^ e) {
	drawingField->addElement(EnumGraphicElement::TABLE);
}

System::Void MainForm::button_add_plant_Click(System::Object^ sender, System::EventArgs^ e) {
	drawingField->addElement(EnumGraphicElement::PLANT);
}

System::Void MainForm::button_add_door_Click(System::Object^ sender, System::EventArgs^ e) {
	drawingField->addElement(EnumGraphicElement::DOOR);
}
System::Void MainForm::button_add_window_Click(System::Object^ sender, System::EventArgs^ e) {
	drawingField->addElement(EnumGraphicElement::WINDOW);
}

System::Void MainForm::button_delete_Click(System::Object^ sender, System::EventArgs^ e) {
	drawingField->deleteCurrentPE();
}

System::Void MainForm::button_save_Click(System::Object^ sender, System::EventArgs^ e) {
	Graphics^ g = Graphics::FromImage(drawingField->getPictureBoxField()->Image);
	if (!drawingField->listGraphicElements->empty()) {
		for each (GraphicElement ^ var in drawingField->listGraphicElements) {
			g->DrawImage(var->getPictureBox()->Image, var->getPictureBox()->Location.X, var->getPictureBox()->Location.Y, var->getPictureBox()->Image->Width, var->getPictureBox()->Image->Height);
			drawingField->getPictureBoxField()->Invalidate();
		}
	}
	saveFileDialog1->Filter = "Images|*.png;*.bmp;*.jpg";
	saveFileDialog1->Title = "Сохранить";
	saveFileDialog1->Filter = "jpeg files (*.jpeg)|*.jpeg|png files (*.png)|*.png|All files (*.*)|*.*";
	if (saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
		drawingField->getPictureBoxField()->Image->Save(saveFileDialog1->FileName);
	}
	drawingField->getPictureBoxField()->Image = Image::FromFile("floor.jpg");
}

System::Void MainForm::button_clear_Click(System::Object^ sender, System::EventArgs^ e) {
	for each (GraphicElement^ var in drawingField->listGraphicElements) {
		delete var->getPictureBox();
	}
	drawingField->listGraphicElements->clear();
	drawingField->setCurrentPictureBox(nullptr);
}

System::Void MainForm::button_rotate_Click(System::Object^ sender, System::EventArgs^ e) {
	if (drawingField->getCurrentPictureBox() != nullptr) {
		drawingField->getCurrentPictureBox()->Size = System::Drawing::Size(drawingField->getCurrentPictureBox()->Height, drawingField->getCurrentPictureBox()->Width);
		drawingField->getCurrentPictureBox()->Image->RotateFlip(RotateFlipType::Rotate90FlipNone);
		drawingField->getCurrentPictureBox()->Invalidate();
	}
}