#include <iostream>
#include <string>

using namespace std;

int main()
{   
    int age = 10;
    int *pAge = &age;

    cout << pAge << endl;
    cout << *pAge << endl;

    unsigned char charByte = 'a';
    unsigned char *pCharByte = &charByte;
    int count = 1;
    while (count < 100)
    {
        cout << *(pCharByte+count) << endl;
        count++;
    }

    char name[] = "Name";
    char *pName = name;
    while(*pName != NULL)
    {
        cout << *pName << endl; 
        pName++;
    }

    return 0;
}