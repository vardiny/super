<<<<<<< HEAD
#include <iostream>
#include <string>
#include <cstdlib>

 using namespace std;
 int main()
 {
     string mas;
     getline(cin,mas);
     for (int i = 0; i < mas.length(); i++)
	{
        if(mas[i]=='A'){mas[i]='a';};
        if(mas[i]=='I'){mas[i]='i';};
        if(mas[i]=='Y'){mas[i]='y';};
        if(mas[i]=='U'){mas[i]='u';};
        if(mas[i]=='O'){mas[i]='o';};
        if(mas[i]=='E'){mas[i]='e';};   
    }
    for (int i = 0; i < mas.length(); i++)
	{
        cout<<mas[i];
    }
    return 0;
 }

=======
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
>>>>>>> e08d31507fb92ae9ad18a720b47b1d7e011a9d1f
