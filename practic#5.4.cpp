//practic#4
#include <iostream>
#include <string>
#include <cstdlib>

 using namespace std;
 string funct(string mas)
 {
     for (int i = 0; i < mas.length(); i++)
	{
        if(mas[i]=='A'){mas[i]='a';};
        if(mas[i]=='I'){mas[i]='i';};
        if(mas[i]=='Y'){mas[i]='y';};
        if(mas[i]=='U'){mas[i]='u';};
        if(mas[i]=='O'){mas[i]='o';};
        if(mas[i]=='E'){mas[i]='e';};   
    }
    
    return mas;
   
 }
 int main()
 {
     string sup = "HELLO WORLD";
     sup=funct(sup);
     cout<<sup<<endl;
     if (sup == "HeLLo WoRLD"){cout<<"Right"<<endl;}
     else {cout<<"Wrong";};
     sup = "";
     sup=funct(sup);
     if (sup == ""){cout<<"Right"<<endl;}
     else {cout<<"Wrong";};
     sup = "1234";
     sup=funct(sup);
     if (sup == "1234"){cout<<"Right"<<endl;}
     else {cout<<"Wrong";};


    return 0;
 }

