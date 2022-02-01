#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;


int main()
{
    vector<int> vec_dst;
    
    const int size_arr = 5;
    int my_arr[size_arr] {1, 2, 3, 4, 5};

    for_each(&my_arr[1], &my_arr[4], [&](int x) {
        cout << x << " ";
        vec_dst.push_back(x);
    });

    for(auto x: vec_dst) cout << x << " ";
    cout << endl;

    vec_dst.clear();



    return EXIT_SUCCESS;
}