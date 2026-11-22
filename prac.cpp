#include <iostream>
#include <string>

using namespace std;

struct point
{
    int x, y;
};

struct Tree
{
    string name;
    int age;
    bool is_alive;
    float height;
    point place;
    void get_info()
    {
        cout << "Name: " << name << " Age: " << age << endl;
    }
};
int main()
{
    Tree dub;
    dub.age = 10;
    dub.name = "Dub";
    dub.get_info();
    dub.place.x = 10;
    dub.place.y = 20;
    Tree ELka;
    ELka.name = "Elka";
    ELka.age = 22;

    cout << dub.name << " and " << ELka.age << endl;

    return 0;
}