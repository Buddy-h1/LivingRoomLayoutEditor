#include "Table.h"

void Table::draw(Control^ parent) {
	pictureBox->Parent = parent;
	pictureBox->Size = System::Drawing::Size(128, 124);
	pictureBox->Image = Image::FromFile("table.png");
}