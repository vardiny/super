##include <iostream>
#include <string.h>
#include <cstdlib> // для system

using namespace std;
void Funct(string b, int &a, int &e, int &o, int &u, int &i, int &y)
{
    for (int z = 0; z < b.length(); z++)
    {
        if (b[z] == 'a')
        {
            a = a + 1;
        }
        if (b[z] == 'e')
        {
            e = e + 1;
        }
        if (b[z] == 'i')
        {
            i = i + 1;
        }
        if (b[z] == 'o')
        {
            o = o + 1;
        }
        if (b[z] == 'u')
        {
            u = u + 1;
        }
        if (b[z] == 'y')
        {
            y = y + 1;
        }
    }
}

int main()
{
    //    char s[6] = {'a','e','o','u','i'};
    int a = 0, e = 0, o = 0, u = 0, i = 0, y = 0;
    string b;
    getline(cin, b);
    Funct(b, a, e, o, u, i, y);

    cout << "a = " << a << endl;
    cout << "e = " << e << endl;
    cout << "o = " << o << endl;
    cout << "u = " << u << endl;
    cout << "i = " << i << endl;
    cout << "y = " << y << endl;

    return 0;
}