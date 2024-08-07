#include <iostream>
using namespace std;
inline float triangleArea(float base, float height) 
{
    return 0.5 * base * height;
}

int main() 
{
    float base, height;
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;
    float area = triangleArea(base, height);
    cout << "The area of the triangle is: " << area << std::endl;
    return 0;
}