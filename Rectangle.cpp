#include"Rectangle.h"
int Rectangle::numOfRect=0;
Rectangle::Rectangle()
{
width=1,height=1;
numOfRect++;
}
Rectangle::Rectangle(double width,double height)
{
this->width=width,this->height=height;
numOfRect++;
}
void Rectangle::setWidth(double width)
{
this->width=(width>=0)?width:0;
}
double Rectangle::getWidth() const
{
return width;
}
void Rectangle::setHeight(double height)
{
this->height=(height>=0)?height:0;
}
double Rectangle::getHeight() const
{
return height;
}
double Rectangle::getArea() const
{
return width*height;
}
int Rectangle::getNumOfRect()
{
return numOfRect;
}
