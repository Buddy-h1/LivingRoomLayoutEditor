#pragma once
#include "GraphicElement.h"

ref class Table : public GraphicElement {
public:
	void draw(Control^ parent) override;
};
