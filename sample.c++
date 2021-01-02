#include <iostream>

using namespace std;

class A
{
    int a, b;
}

class B private A
{
public:
    static char ch[10] = "NAME";

    void getname() { cout << this.a; }
}
