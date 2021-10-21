#pragma once
#include <vector>
class Shape;

class Editor
{
public:
	Editor();
	virtual ~Editor();

	void Draw();
	void Save();
	void Load();

	void AddShapes(Shapes* NewShape);

private:
	std::vector<Shapes*>Shapes;
};

