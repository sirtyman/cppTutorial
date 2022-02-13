#include <iostream>
#include <cstdlib> 
#include <ctime>
#include <vector>


using namespace std;


void initiliazeValues(vector<int> &vec, const size_t size);


const size_t VECTOR_SIZE=10;


int main()
{
    vector<int> vec;

    initiliazeValues(vec, VECTOR_SIZE);

    for(size_t i=0; i<VECTOR_SIZE; i++)
    {
        cout << vec.at(i) << endl;
    }

    return EXIT_SUCCESS;
}


void initiliazeValues(vector<int> &vec, const size_t size)
{
    srand(time(nullptr)); // use current time as seed for random generator
    for(size_t i=0; i < size; i++)
    {
        int random_variable = rand();
        vec.push_back(random_variable);
    }
}

