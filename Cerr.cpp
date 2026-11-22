#include <iostream>
#include <string>

using namespace std;

void divide(float a, float b)
{
    if (b == 0)
        throw 1;
    else
        cout << (a / b);
}

int main()
{
    try
    {
        divide(5.2f, 0.0f);
    }
    catch (int err)
    {
        if (err == 1)
            cout << "Error 1" << endl;
    }

    return 0;
}