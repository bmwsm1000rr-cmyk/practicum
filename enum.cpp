#include <iostream>
#include <string>
using namespace std;

enum Options
{
    open = 4,
    close,
    wait,
    del
};

struct File
{
    float weight;
    string name;
    Options options;
};

int main()
{

    File my_file;
    my_file.weight = 1.5f;
    my_file.name = "text.txt";
    my_file.options = Options::open;

    cout << my_file.options << endl;

    if (my_file.options == Options::close)
        cout << "File is closed";
    else
        cout << "File is open";
    return 0;
}