#include <iostream>


class Vehicle
{
    public:
        float _speed;

        Vehicle(float speed)
        {
            _speed = speed;
        };
};


class SportCar: public Vehicle
{
    public:
        float _gears;

        SportCar(float speed, int gears): Vehicle(speed)
        {
            _gears = gears;
        };
};


int main()
{
    SportCar sportCar(4.0f, 7);
    std::cout << sportCar._speed << std::endl;
    std::cout << sportCar._gears << std::endl;
}