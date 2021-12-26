#include "Armchair.h"

void Armchair::draw(Control^ parent) {
	pictureBox->Parent = parent;
	pictureBox->Size = System::Drawing::Size(129, 133);
	pictureBox->Image = Image::FromFile("armchair.png");
}