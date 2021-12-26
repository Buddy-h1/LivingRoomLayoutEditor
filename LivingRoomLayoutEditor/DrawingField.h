#pragma once

#include "EnumGraphicElement.h"
#include "GraphicElement.h"
#include "Armchair.h"
#include "Sofa.h"
#include "TV.h"
#include "Table.h"
#include "Plant.h"
#include "Door.h"
#include "Window.h"


using namespace System::Windows::Forms;
using namespace System::Drawing;

ref class DrawingField {
public:
	DrawingField();
	cliext::vector<GraphicElement^>^ listGraphicElements = gcnew cliext::vector<GraphicElement^>();

	void addElement(EnumGraphicElement typeGraphicElement);
	void deleteCurrentPE();
	int find(PictureBox^ pictureBox);
	PictureBox^ getPictureBoxField();
	static PictureBox^ getCurrentPictureBox();
	static void setCurrentPictureBox(PictureBox^ pictureBox);
	
private:
	static PictureBox^ currentPE;
	PictureBox^ pictureBoxField;
	System::Void DrawingField_Click(System::Object^ sender, System::EventArgs^ e);
};