#include <iostream>
#include <string>

class Person {
    private:
    std::string name;
    int age;

    public:
    Person() : Person("None", 0) 
    {
        std::cout << "Default constr params" << std::endl;
    }

    Person(std::string name_val, int age_val) : name {name_val}, age {age_val}
    {
        std::cout << "Constructor 2 params" << std::endl;
    }

    std::string get_name()
    {
        return name;
    }

    int get_age()
    {
        return age;
    }
};

int main()
{
    using namespace std;
    Person person;
    cout << "Name: " << person.get_name() << ", Age: " << person.get_age() << endl;
    Person hero("Captain Bomba", 100);
    cout << "Name: " << hero.get_name() << ", Age: " << hero.get_age() << endl;
}