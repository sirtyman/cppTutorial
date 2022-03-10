#include <iostream>
#include <string>

using namespace std;

class Dog {
    private:
        string name;
        int age;
    public:
        Dog(string name, int age) : name{name}, age{age} { }
        //Dog(const Dog &source) : name{source.name}, age{source.age}
        Dog(const Dog &source) : Dog {source.name, source.age}
        {
            cout << "Copy Constructor" << endl;
        }
        string get_name() { return name; }
        void set_name(string n) { name = n; }
        int get_age() { return age; }
        void set_age(int a) { age = a;}
        int get_dog_years() { return age * 7; }
        string speak() { return "Woof";}
};


int main()
{
    Dog dog1 {"Gucio", 2};
    Dog dog2 {dog1};
    
    return EXIT_SUCCESS;
}