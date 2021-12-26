#pragma once
#include "GraphicElement.h"

ref class TV : public GraphicElement {
public:
	void draw(Control^ parent) override;
};
