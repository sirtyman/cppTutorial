#include <iostream>


using namespace std;

void print_all(const int* begin, const int* end)
{
    while (begin != end)
    {
        cout << *begin << endl;
        begin++;
    }
}


int main()
{
    int container[] = {1, 2, 3, 4, 5};
    int* pContainer = container;

    print_all(pContainer, pContainer + 5);

    // const int* pConstContainer = container;
    // *pConstContainer = 10; // error

    return 0;
}
