#include <iostream>
#include <vector>


using namespace std;


class Move
{
    private:
        int* data;
    public:
        void set(int d) { *data = d; }
        int get() { return *data; }
        Move(int d);
        Move(const Move &source);
        Move(Move &&source);
        ~Move();
};

Move::Move(int d)
{
    data = new int;
    *data = d;

    cout << "Constructor" << endl;
}

Move::Move(const Move &source) : Move {*source.data}
{
    cout << "Copy constructor" << endl;
}

// Moving constructor
Move::Move(Move &&source) : data {source.data}
{
    source.data = nullptr;
    cout << "Moving constructor" << endl;
}

Move::~Move()
{
    if (data != nullptr) cout << "Deleting: " << *data << endl;
    else cout << "Deleting nullptr" << endl;
    delete data;
}


void display_data(Move source)
{
    cout << "Data value: " << source.get() << endl;
}


int main()
{
    vector<Move> vec;
    vec.push_back(Move{100});  // temporary object (r-value) creates Move instance than calling copy constructor
    vec.push_back(Move{200});
    vec.push_back(Move{300});
    vec.push_back(Move{400});
    vec.push_back(Move{500});
    vec.push_back(Move{600});
    vec.push_back(Move{700});
    vec.push_back(Move{800});
    vec.push_back(Move{900});
    vec.push_back(Move{1000});
    // Note that vector object under the hood extends the size of array in which it holds data so 
    // copying constructor is called more than 10 times (as it would be expected)

    return EXIT_SUCCESS;
}