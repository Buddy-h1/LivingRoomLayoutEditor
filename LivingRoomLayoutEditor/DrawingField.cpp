#include "DrawingField.h"

DrawingField::DrawingField() {
	pictureBoxField = gcnew PictureBox();
	pictureBoxField->Image = Image::FromFile("floor.jpg");
	pictureBoxField->Location = System::Drawing::Point(163, 12);
	pictureBoxField->Size = System::Drawing::Size(932, 574);
	pictureBoxField->TabIndex = 0;
	pictureBoxField->Click += gcnew System::EventHandler(this, &DrawingField::DrawingField_Click);
}

void DrawingField::deleteCurrentPE() {
	int index = find(currentPE);
	if (index != -1) {
		listGraphicElements->erase(listGraphicElements->begin() + index);
	}
	delete currentPE;
}

PictureBox^ DrawingField::getCurrentPictureBox() { return currentPE; }
void DrawingField::setCurrentPictureBox(PictureBox^ pictureBox) { currentPE = pictureBox; }
PictureBox^ DrawingField::getPictureBoxField() { return pictureBoxField; }

int DrawingField::find(PictureBox^ pictureBox) {
	if (!listGraphicElements->empty()) {
		for (int i = 0; i < listGraphicElements->size(); i++) {
			if (listGraphicElements[i]->getPictureBox() == pictureBox) return i;
		}
	}
	return -1;
}

void DrawingField::addElement(EnumGraphicElement typeGraphicElement) {
	if (typeGraphicElement == EnumGraphicElement::ARMCHAIR) {
		GraphicElement^ graphElement = gcnew Armchair();
		listGraphicElements->push_back(graphElement);
		graphElement->draw(pictureBoxField);
	}
	else if (typeGraphicElement == EnumGraphicElement::SOFA) {
		GraphicElement^ graphElement = gcnew Sofa();
		listGraphicElements->push_back(graphElement);
		graphElement->draw(pictureBoxField);
	}
	else if (typeGraphicElement == EnumGraphicElement::TABLE) {
		GraphicElement^ graphElement = gcnew Table();
		listGraphicElements->push_back(graphElement);
		graphElement->draw(pictureBoxField);
	}
	else if (typeGraphicElement == EnumGraphicElement::TELEVISOR) {
		GraphicElement^ graphElement = gcnew TV();
		listGraphicElements->push_back(graphElement);
		graphElement->draw(pictureBoxField);
	}
	else if (typeGraphicElement == EnumGraphicElement::PLANT) {
		GraphicElement^ graphElement = gcnew Plant();
		listGraphicElements->push_back(graphElement);
		graphElement->draw(pictureBoxField);
	}
	else if (typeGraphicElement == EnumGraphicElement::DOOR) {
		GraphicElement^ graphElement = gcnew Door();
		listGraphicElements->push_back(graphElement);
		graphElement->draw(pictureBoxField);
	}
	else if (typeGraphicElement == EnumGraphicElement::WINDOW) {
		GraphicElement^ graphElement = gcnew Window();
		listGraphicElements->push_back(graphElement);
		graphElement->draw(pictureBoxField);
	}
}

System::Void DrawingField::DrawingField_Click(System::Object^ sender, System::EventArgs^ e) {
	if (currentPE != nullptr) {
		currentPE->BackColor = Color::Transparent;
		currentPE = nullptr;
	}
}