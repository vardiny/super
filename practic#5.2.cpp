#include <iostream>
#include <string>
#include <cstdlib> // для system
using namespace std;
void kolgl(string bus, int &a, int &e, int &o, int &u, int &i, int &y)
{
  for (int z = 0; z < bus.length(); z++) {
		if (bus[z] == 'a') {		a = a + 1;		}	
    	if (bus[z] == 'e') {		e = e + 1;		}	
    	if (bus[z] == 'i') {	 	i = i + 1;	  	}	
    	if (bus[z] == 'o') {		o = o + 1;		}	
    	if (bus[z] == 'u') {		u = u + 1;		}	
    	if (bus[z] == 'y') {		y = y + 1;		}
	} 

} 
int main(){ 
	int a = 0, e = 0, o = 0, u = 0, i = 0, y = 0;
	string bus; 
	bus = "Hello world";
	kolgl(bus,a,e,o,u,i,y);
	if ((a==0)&&(e==1)&&(o==2)&&(u==0)&&(i==0)&&(y==0)){cout<<"Right"<<endl;}
	else {cout<<"Wrong"<<endl;};

	bus = "123456 Polly function";
	a = 0, e = 0, o = 0, u = 0, i = 0, y = 0;
	kolgl(bus,a,e,o,u,i,y);
	if ((a==0)&&(e==0)&&(o==2)&&(u==1)&&(i==1)&&(y==1)){cout<<"Right"<<endl;}
	else {cout<<"Wrong"<<endl;};
	
	bus = "";
	a = 0, e = 0, o = 0, u = 0, i = 0, y = 0;
	kolgl(bus,a,e,o,u,i,y);
	if ((a==0)&&(e==0)&&(o==0)&&(u==0)&&(i==0)&&(y==0)){cout<<"Right"<<endl;}
	else {cout<<"Wrong"<<endl;};

 	// system("pause"); // Только для тех, у кого MS Visual Studio
 	//cout << "a = " << a << endl; cout << "e = " << e << endl; cout << "o = " << o << endl; cout << "u = " << u << endl; cout << "i = " << i << endl; cout << "y = " << y << endl;
 	return 0;
}