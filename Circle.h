#pragma once
#include "Shapes.h"
class Circle : public Shapes
{
public:
	Circle();
	Circle(int NewX, int NewY, int NewRadius);
	virtual ~Circle();

	inline int GetRadius() { return Radius; }
	inline void SetRadius(int NewRadius) { Radius = NewRadius; }

	virtual void Draw() override;

	virtual void Save(std::ofstream writeFile) override;
	virtual Shapes* Load(std::ifstream& readFile) override;

private:
	int Radius;
};

