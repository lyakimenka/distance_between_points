#pragma once
#include <ostream>
#ifndef POINT_CLASS_HEADER_INCLUDED
#define POINT_CLASS_HEADER_INCLUDED

class Point
{
    double x,y;

public:
    Point(void);
    Point(double new_x, double new_y);

    void Output(void);
    void Input(void);
    double distance(Point other);

    double get_x(void) { return x; }
    double get_y(void) { return y; }

    void set_x(double new_x);
    void set_y(double new_y);

    Point flip_x(void);
    Point flip_y(void);

    Point shift_x(double move_by);
    Point shift_y(double move_by);

 
    friend std::ostream& operator<<(std::ostream& dout, const Point&);

    friend std::istream& operator>>(std::istream& din, Point&);

    double operator-(const Point& p) const; // operator-()
    Point operator/(const Point& p) const; // operator*()
    bool operator!=(const Point& p) const; // operator!=()
    bool operator==(const Point& p) const; // operator==()

};

#endif