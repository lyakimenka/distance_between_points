#include <iostream>
#include <cmath>
#include "Point.h"
using namespace std;

Point::Point(void)
{
    this->x = 0;
    this->y = 0;
}
Point::Point(double new_x, double new_y)
{
    this->x = new_x;
    this->y = new_y;
}
void Point::Output(void)
{
    cout << "(" << x << "," << y << ")" << endl;
}
void Point::Input(void)
{
    cout << "Enter the Point (seperated by space):";
    cin >> x >> y;
}
double Point::distance(Point other)
{
    return sqrt(pow((other.x - x), 2) + pow((other.y - y), 2));
}
void Point::set_x(double new_x)
{
    this->x = new_x;
}
void Point::set_y(double new_y)
{
    this->y = new_y;
}
Point Point::flip_x(void)
{
    Point p(-(x), y);
    return p;
}
Point Point::flip_y(void)
{
    Point p(x, -(y));
    return p;
}

Point Point::shift_x(double move_by)
{
    Point p(x + move_by, y);
    return p;
}
Point Point::shift_y(double move_by)
{
    Point p(x, y + move_by);
    return p;
}

std::ostream& operator<<(std::ostream& dout, const Point& p)
{
    dout << "(" << p.x << "," << p.y << ")" << endl;
    return dout;
}

std::istream& operator>>(std::istream& din, Point& p)
{
    cout << "Enter the Point (seperated by space):";
    din >> p.x >> p.y;
    return din;
}

double Point::operator-(const Point& p) const // operator-()
{
    return sqrt(pow((p.x - x), 2) + pow((p.y - y), 2));
}
Point Point::operator/(const Point& p) const // operator/()
{
    double x1 = (x + p.x) / 2;
    double y1 = (y + p.y) / 2;
    Point mp(x1, y1);
    return mp;
}
bool Point::operator!=(const Point& p) const // operator!=()
{
    if (x == p.x && y == p.y)
        return false;
    else
        return true;
}
bool Point::operator==(const Point& p) const // operator==()
{
    if (x == p.x && y == p.y)
        return true;
    else
        return false;
}