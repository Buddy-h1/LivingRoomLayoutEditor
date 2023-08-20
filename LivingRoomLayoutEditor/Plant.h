#pragma once
#include "GraphicElement.h"

ref class Plant : public GraphicElement {
public:
	void draw(Control^ parent) override;
};
