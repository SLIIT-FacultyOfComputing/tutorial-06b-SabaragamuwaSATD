#include "Box.h"
#include <iostream>
#include<iomanip>
using namespace std;

// Implement setters and getters
void Box:: setLength(int plength)
{
  length=plength;
}
void Box::setHeight(int pheight)
{
  height=pheight;
}
void Box::setWidth(int pwidth)
{
  wisth=pwidth;
}

int Box::getLength()
{
  return length;
}
int Box:: getHeight()
{
  return heigth;
}
int Box::getWidth()
{
  return width;
}

// Implemenet the calcVolume() unction
int Box::calcVolume() {
  reurn width * length * height;
}
