#include <iostream>
#include <cstdlib>


using namespace std;


const int cols=5, rows = 5;

void dump_arr1(int *, int size);
void dump_arr2(int arr[], int size);

template<class T, size_t N>
void dump_arr_template(T (&arr)[N], const int size)  // ToDo: why should it be declared as passing by reference???
{
    cout << "Passing array (template)" << endl;
    for(int i=0; i<size; i++)
        cout << arr[i] << ", ";
    cout << endl;    
}

void dump_2d_arrays(int arr[][cols]);
void dump_2d_arr_pointer(int **p_arr);


int main()
{
    int int_arr[] = {1, 2, 3, 4, 5};
    double double_arr[] = {1.0, 2.0, 3.0};
    int static_arr_2d[rows][cols] = {
        {1, 2, 3, 4, 5},
        {10, 20, 30, 40, 50},
        {111, 211, 311, 411, 511},
        {1111, 21111, 31111, 41111, 51111},
        {111111, 211111, 311111, 411111, 511111}
    };

    int **p_arr_2d = new int*[rows];
    for(int i=0; i<rows; i++)
    {
        p_arr_2d[i] = new int[cols] {0, 0, 0, 0, 0};
    }

    auto p_arr_auto_2d = new int[rows][cols] {{1}, {1}, {1}, {1}, {1}};

    dump_arr1(int_arr, rows);
    dump_arr2(int_arr, rows);
    dump_arr_template(int_arr, rows);
    dump_arr_template(double_arr, rows);
    dump_2d_arrays(static_arr_2d);
    dump_2d_arr_pointer(p_arr_2d);
    dump_2d_arr_pointer(p_arr_auto_2d);

    return EXIT_SUCCESS;
}


void dump_arr1(int *p_arr, int size)
{
    cout << "Passing with a pointer" << endl;
    for(int i=0; i<size; i++)
        cout << *(p_arr + i) << ", ";
    cout << endl;
}


void dump_arr2(int arr[], int size)
{
    cout << "Passing array" << endl;
    for(int i=0; i<size; i++)
        cout << arr[i] << ", ";
    cout << endl;
}


void dump_2d_arrays(int p_arr[][cols])
{
    cout << "2D array passed" << endl;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cout << p_arr[i][j] << ", ";
        }
        cout << endl;
    }    
}


void dump_2d_arr_pointer(int **p_arr)
{
    cout << "Dynamic array" << endl;
    for(int i=0; i < rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cout << p_arr[i][j] << ",";
        } 
    }   
    cout << endl;
}