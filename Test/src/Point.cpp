#include "Point.h"


Point::Point(const Point &p){
    x = p.x;
    y = p.y;
}

Point::~Point(){
    std::cout << "Call the destruction!" << std::endl;
}

int Point::GetX() const{
    return x;
}

int Point::GetY() const{
    return y;
}