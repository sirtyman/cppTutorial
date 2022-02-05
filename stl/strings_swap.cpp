#include <iostream>
#include <string>
using namespace std;

void cpp_strings() {
    
    string journal_entry_1 {"Isaac Newton"};
    string journal_entry_2 {"Leibniz"};
    string journal_entry;

    journal_entry_1.erase(0, journal_entry_1.find(' ') + 1);
    
    if(journal_entry_1 > journal_entry_2)
    {
        string temp = journal_entry_1;
        journal_entry_1.swap(journal_entry_2);
        journal_entry_2 = temp;
    }
    
    cout << journal_entry_1 << "\n" << journal_entry_2;
}