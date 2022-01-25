#include <iostream>

using namespace std;


void print_2d(int (*p)[3])
{
    for(int i=0; i<2; i++)
    {
        cout << (*p)[i] << endl;
    }
}


int main()
{
    int val1 = 10;
    int *p = &val1;
    cout << "Val1: " << *p << endl;

    int arr[10] = {1};
    int *p_arr = arr;
    for(int i=0; i<10; i++) cout << ", " << *p_arr++;
    cout << endl;

    int arr_2d[2][3] = {{1, 2, 3}, {3, 4, 5}};
    int (*p_arr_2d)[3] = arr_2d;
    print_2d(p_arr_2d);

    auto p_arr_2d1 = arr_2d;
    
    // What is the real difference betweek these two?
    int (*p_arr_2d)[2] = new int[][2];
    int **p_arr_2d2 = new int*[2];

    return 0;
}