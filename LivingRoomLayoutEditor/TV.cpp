#include "TV.h"

void TV::draw(Control^ parent) {
	pictureBox->Parent = parent;
	pictureBox->Size = System::Drawing::Size(308, 70);
	pictureBox->Image = Image::FromFile("tv.png");
}