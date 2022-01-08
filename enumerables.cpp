#include <iostream>

enum colors_t {
    red,
    green,
    white
};  // C style enums


enum class colors2_t : char {
    red2,
    green2,
    white2
};  // C++ style enums


int main()
{
    using namespace std;

    colors_t c;
    c = red;
    cout << c << endl;

    colors2_t c2;
    c2 = colors2_t::red2;
    cout << (int) c2 << endl;

    return 0;
}
