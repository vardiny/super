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
