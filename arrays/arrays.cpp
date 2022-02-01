#include <iostream>

using namespace std;


void declareArray()
{
    int arr[10];
    const int sizeArrBytes = sizeof arr / sizeof (int);

    cout << "This array is declared but not initialized:" << endl;
    for(int i=0; i < sizeArrBytes; i++)
    {
        cout << arr[i] << "; ";
    }
    cout << endl;
}

void declareInitializeArr()
{
    float arr[] = { 1.1f, 1.2f, 1.3f };  //array declaration with initialization
    for (int i = 0; i < sizeof arr / sizeof(float); i++)
    {
        cout << arr[i] << "; ";
    }
    cout << endl;

    for(float i: arr)
    {
        cout << i << "; ";
    }
    cout << endl;
}

void declareInitFirstElement()
{
    short arr[10] = { 1 };  // initialize 1st element with 1, the rest is equal to 0
    for (int i = 0; i < sizeof arr / sizeof (short); i++)
    {
        cout << arr[i] << "; ";
    }
    cout << endl;
}

void declareInitCharArr()
{
    char name[] = "Marcin";
    cout << "Name is: " << name << "; Sizeof bytes: " << sizeof name << endl;
    cout << "... and this is the new line" << endl;
}

int main()
{
    declareArray();
    declareInitializeArr();
    declareInitFirstElement();
    declareInitCharArr();

    cout << "Press a key..." << endl;
    cin.get();
}