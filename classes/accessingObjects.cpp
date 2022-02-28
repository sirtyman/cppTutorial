#include <iostream>
#include <string>


class Dog
{
    public:
    std::string name {"Uninitialized"};
    int age {0};
};


Dog test_dog() 
{
    Dog spot;
    spot.name = "Spot";
    spot.age = 5;

    return spot;
}


int main()
{
    Dog spot;
    std::cout << "Dog name: " << spot.name << "\nAge: " << spot.age << std::endl;
    
    spot = test_dog();

    std::cout << "Dog name: " << spot.name << "\nAge: " << spot.age << std::endl;

    return EXIT_SUCCESS;
}