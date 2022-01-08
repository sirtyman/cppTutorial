#include <iostream>


using namespace std;


void print_data(void* pData, unsigned int size)
{
    switch(size)
    {
        case sizeof(char):
            cout << *((char*) pData) << endl;
            break;
        case sizeof(int):
            cout << *((int*) pData) << endl;
            break;
        default:
            cout << "Not supported data size";
    }
}


int main()
{
    int myVar = 10;
    int* pMyVar = &myVar;
    print_data(pMyVar, sizeof(int));
    return 0;
}
