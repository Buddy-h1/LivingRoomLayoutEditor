#pragma once
#include "GraphicElement.h"

ref class Armchair : public GraphicElement {
public:
	void draw(Control^ parent) override;
};