#include <iostream>
#include <string>
using namespace std;

void print(string text)
{
    cout << text << endl;
}

int main()
{
    string a;
    cout << "введите текст" << endl;
    cin >> a;
    print(a);
    return 0;
}