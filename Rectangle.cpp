#include "Rectangle.h"
#include <iostream>
#include <fstream>
#include <string>

Rectangle::Rectangle()
{
    SetX(0);
    SetY(0);
    SetWidth(0);
    SetHeight(0);
    Name = "네모";
}

Rectangle::Rectangle(int NewX, int NewY, int NewWidth, int NewHeight)
{
    SetX(NewX);
    SetY(NewY);
    SetWidth(NewWidth);
    SetHeight(NewHeight);
    Name = "네모";
}

Rectangle::~Rectangle()
{
}

void Rectangle::Draw()
{
    std::cout << "네모" << std::endl;
    std::cout << "(" << X << "," << ")" << std::endl;
    std::cout << "Width :" << Width << std::endl;
    std::cout << "Height :" << Height << std::endl;
}

void Rectangle::Save(std::ofstream& writeFile)
{
    writeFile << GetName() << std::endl;
    writeFile << GetX() << std::endl;
    writeFile << GetY() << std::endl;
    writeFile << GetWidth() << std::endl;
    writeFile << GetHeight() << std::endl;
}

Shapes* Rectangle::Load(std::ifstream& readFile)
{
    std::string line;

    getline(readFile, line);
    int X = std::stoi(line);

    getline(readFile, line);
    int Y = std::stoi(line);

    getline(readFile, line);
    int Width = std::stoi(line);
    
    getline(readFile, line);
    int Height = std::stoi(line);

    SetX(X);
    SetY(Y);
    SetWidth(Width);
    SetHeight(Height);

    return this;
}
