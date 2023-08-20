#include "Plant.h"

void Plant::draw(Control^ parent) {
	pictureBox->Parent = parent;
	pictureBox->Size = System::Drawing::Size(120, 112);
	pictureBox->Image = Image::FromFile("plant.png");
}