#pragma once
#include "Shapes.h"
#include <fstream>

class Triangle : public Shapes
{
public:
	Triangle();
	Triangle(int NewX, int NewY, int NewEdge);
	virtual ~Triangle();

	virtual void Draw() override;
	
	inline int GetEdge() const { return Edge; }
	inline void SetEdge(int NewEdge) { Edge = NewEdge; }

	virtual void Save(std::ofstream& writeFile) override;
	virtual Shapes* Load(std::ifstream& readFile) override;

private:
	int Edge;
};

