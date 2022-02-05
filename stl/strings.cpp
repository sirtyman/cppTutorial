#include <string>
#include <iostream>


int main()
{
    using namespace std;

    string s1;
    string s2 {"Frank"};
    string s3 {s2};
    string s4 {s2, 3};
    string s5 {s3, 3, 5};
    string s6 (3, 'X');

    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;
    cout << s6 << endl;

    string name {"Frank"};
    cout << name << endl;
    cout << name.substr(2, 3) << endl;
    cout << name.find("ank") << endl;

    if(name.find("XXX") == string::npos)
    {
        cout << "String was not found!" << endl;
    }

    // erase
    // clear

    cout << "Please provide your full name: " << endl;
    string full_name;
    getline(cin, full_name);
    cout << "Hello " << full_name << endl;


    return EXIT_SUCCESS;
}
