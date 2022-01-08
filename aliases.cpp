#include <iostream>


typedef char C;
typedef char field_t [50];
using my_uint32_t = unsigned int;

using namespace std;

int main()
{
    field_t field;
    my_uint32_t myInt = 0;
    cout << sizeof(field) << endl;
    return 0;
}
