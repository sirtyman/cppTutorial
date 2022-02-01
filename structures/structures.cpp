#include <iostream>
#include <string>

using namespace std;

struct person_t {
    string name;
    unsigned short age;
} persons[3];  // structures can be nested too!


int main()
{
    for(int i=0; i<3; i++)
    {
        cout << "Provide a name of person " << i << endl;
        cin >> persons[i].name;

        cout << "Provide the age of person " << i << endl;
        cin >> persons[i].age;

        cout << persons[i].name << " " << persons[i].age << endl;
    }

    person_t impostor;
    person_t *pImpostor;
    pImpostor = &impostor;

    pImpostor->name = "Marcin";
    pImpostor->age = 41;

    cout << pImpostor->name << endl;
    cout << (*pImpostor).name << endl;

    return 0;
}