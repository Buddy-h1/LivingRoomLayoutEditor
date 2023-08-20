#pragma once
#include "GraphicElement.h"

ref class Sofa : public GraphicElement {
public:
	void draw(Control^ parent) override;
};