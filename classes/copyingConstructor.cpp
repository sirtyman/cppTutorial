#include <cstdlib>
#include <iostream>


using namespace std;

class Rectangle
{    
    public:
        int* side_a;
        int* side_b;

        Rectangle();
        Rectangle(int a, int b);
        Rectangle(const Rectangle& rhs);  // w/o copying constructor pointers are not initialized - ToDo
        ~Rectangle();
};


Rectangle::Rectangle() 
{
    side_a = new int;
    side_b = new int;
    
    *side_a = 0;
    *side_b = 0;
};

Rectangle::Rectangle(int a, int b) 
{
    side_a = new int;
    side_b = new int;

    *side_a = a;
    *side_b = b;
};


// Rectangle::Rectangle(const Rectangle& rhs) 
// {
//     side_a = new int;
//     side_b = new int;

//     *side_a = *(rhs.side_a);
//     *side_b = *(rhs.side_b);
// };

// Copy constructor with delegation
Rectangle::Rectangle(const Rectangle& rhs) : Rectangle {*rhs.side_a, *rhs.side_b} 
{

}

Rectangle::~Rectangle() 
{
    delete side_a;
    delete side_b;
};


int main()
{
    Rectangle rec2(4, 4);
    // if there is no copying constructor pointers will point to the same memory scope. Program will no crash.
    // However, destructor will try to free the same memory range twice et the end (for rec1, rec2 objects)
    Rectangle rec1 = rec2;  

    cout << "Address of a value(rec1): " << rec1.side_a << " ; address a value(rec2): " << rec2.side_a << endl;
    cout << "Address of b value(rec1): " << rec1.side_b << " ; address b value(rec2): " << rec2.side_b << endl;


    return EXIT_SUCCESS;
}