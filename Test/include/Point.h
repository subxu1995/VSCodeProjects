#include <iostream>

class Point{
    public:
        Point() = default;
        Point(int x, int y):x(x), y(y){
            std::cout << "Call the constructor!" << std::endl;
        }
        Point(const Point &p);
        ~Point();
        int GetX()const;
        int GetY()const;
    private:
        int x;
        int y;
};