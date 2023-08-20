#pragma once

#include "GraphicElement.h"

ref class Window : public GraphicElement {
public:
	void draw(Control^ parent) override;
	System::Void pictureBox_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) override;
};
