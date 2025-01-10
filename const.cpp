#include<iostream>

int main(){
    const double PI = 3.14159;
    const int LIGHT_SPEED = 12345678987654;
    const int WIDTH = 123;
    double radius = 4.2;

    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm";

    return 0;
}