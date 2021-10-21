#include "Triangle.h"
#include <iostream>
#include <fstream>
#include <string>

Triangle::Triangle()
{
    SetX(0);
    SetY(0);
    SetEdge(0);
    Name = "����";
}

Triangle::Triangle(int NewX, int NewY, int NewEdge)
{
    SetX(NewX);
    SetY(NewY);
    SetEdge(NewEdge);
    Name = "����";
}

Triangle::~Triangle()
{
}

void Triangle::Draw()
{
    std::cout << "����" << std::endl;
    std::cout << "(" << X << "," << ")" << std::endl;
    std::cout << "Edge :" << Edge << std::endl;
}

void Triangle::Save(std::ofstream& writeFile)
{
    writeFile << GetName() << std::endl;
    writeFile << GetX() << std::endl;
    writeFile << GetY() << std::endl;
    writeFile << GetEdge() << std::endl;
}

Shapes* Triangle::Load(std::ifstream& readFile)
{
    std::string line;

    getline(readFile, line);
    int X = std::stoi(line);

    getline(readFile, line);
    int Y = std::stoi(line);

    getline(readFile, line);
    int Edge = std::stoi(line);

    SetX(X);
    SetY(Y);
    SetEdge(Edge);

    return this;
}
