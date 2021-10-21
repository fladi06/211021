#include "Circle.h"
#include <iostream>
#include <fstream>
#include <string>

Circle::Circle()
{
    SetX(0);
    SetY(0);
    SetRadius(0);
    Name = "동그라미";
}

Circle::Circle(int NewX, int NewY, int NewRadius)
{
    SetX(NewX);
    SetY(NewY);
    SetRadius(NewRadius);
    Name = "동그라미";
}

Circle::~Circle()
{
}

void Circle::Draw()
{
    std::cout << "동그라미" << std::endl;
    std::cout << "(" << X << "," << ")" << std::endl;
    std::cout << "Radius :" << Radius << std::endl;

}

void Circle::Save(std::ofstream writeFile)
{
    writeFile << GetName() << std::endl;
    writeFile << GetX() << std::endl;
    writeFile << GetY() << std::endl;
    writeFile << GetRadius() << std::endl;

}

Shapes* Circle::Load(std::ifstream& readFile)
{
    std::string line;

    getline(readFile, line);
    int X = std::stoi(line);
    
    getline(readFile, line);
    int Y = std::stoi(line);
    
    getline(readFile, line);
    int Radius = std::stoi(line);
    
    SetX(X);
    SetY(Y);
    SetRadius(Radius);

    return this;
}
