#pragma once

#include "GraphicElement.h"

ref class Door : public GraphicElement {
public:
	void draw(Control^ parent) override;
protected:
	System::Void pictureBox_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) override;
};