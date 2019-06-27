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
	getline(cin,bus);
	kolgl(bus,a,e,o,u,i,y);
 	// system("pause"); // Только для тех, у кого MS Visual Studio
 	cout << "a = " << a << endl; cout << "e = " << e << endl; cout << "o = " << o << endl; cout << "u = " << u << endl; cout << "i = " << i << endl;
 	return 0;
}