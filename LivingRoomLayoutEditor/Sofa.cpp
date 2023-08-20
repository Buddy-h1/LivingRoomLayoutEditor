#include "Sofa.h"

void Sofa::draw(Control^ parent) {
	pictureBox->Parent = parent;
	pictureBox->Size = System::Drawing::Size(271, 128);
	pictureBox->Image = Image::FromFile("sofa.png");
}