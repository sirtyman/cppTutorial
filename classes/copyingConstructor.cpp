#include <cstdlib>
#include <iostream>


using namespace std;

class Rectangle
{    
    public:
        int* __a;
        int* __b;

        Rectangle();
        Rectangle(int a, int b);
        Rectangle(const Rectangle& rhs);  // w/o copying constructor pointers are not initialized - ToDo
        ~Rectangle();
};


Rectangle::Rectangle() 
{
    __a = new int;
    __b = new int;
    
    *__a = 0;
    *__b = 0;
};

Rectangle::Rectangle(int a, int b) 
{
    __a = new int;
    __b = new int;

    *__a = a;
    *__b = b;
};


Rectangle::Rectangle(const Rectangle& rhs) 
{
    __a = new int;
    __b = new int;

    *__a = *(rhs.__a);
    *__b = *(rhs.__b);
};

Rectangle::~Rectangle() 
{
    delete __a;
    delete __b;
};


int main()
{
    Rectangle rec2(4, 4);
    // if there is no copying constructor pointers will point to the same memory scope. Program will no crash.
    // However, destructor will try to free the same memory range twice et the end (for rec1, rec2 objects)
    Rectangle rec1 = rec2;  

    cout << "Address of a value(rec1): " << rec1.__a << " ; address a value(rec2): " << rec2.__a << endl;
    cout << "Address of b value(rec1): " << rec1.__b << " ; address b value(rec2): " << rec2.__b << endl;


    return EXIT_SUCCESS;
}