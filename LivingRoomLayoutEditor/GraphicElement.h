#pragma once
#include <cliext/vector>

using namespace System::Windows::Forms;
using namespace System::Drawing;

ref class GraphicElement abstract {
public:
	GraphicElement();

	PictureBox^ getPictureBox();
	virtual void draw(Control^ parent) = 0;
protected:
	PictureBox^ pictureBox;
	bool mousePpressed;
	Point^ startLocation;
	System::Void pictureBox_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	System::Void pictureBox_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	virtual System::Void pictureBox_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
};