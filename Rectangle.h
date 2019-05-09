#ifndef RECTANGLE_H
#define RECTANGLE_H
#include<iostream>
using namespace std;
class Rectangle
{
private:
double width,height;
static int numOfRect;
public:
Rectangle();
Rectangle(double,double);

void setWidth(double);
double getWidth() const;
void setHeight(double);
double getHeight() const;
double getArea() const;
static int getNumOfRect();
};
#endif
