#include <iostream>
using namespace std;
inline double triangleArea(double base, double height) 
{
    return 0.5 * base * height;
}

int main() 
{
    double base, height;
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;
    double area = triangleArea(base, height);
    cout << "The area of the triangle is: " << area << std::endl;
    return 0;
}