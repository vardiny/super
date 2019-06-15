#include <string.h>
#include <cstdlib> // для system
using namespace std;

int main()
{
//    char s[6] = {'a','e','o','u','i'};
    int a = 0, e = 0, o = 0, u = 0, i = 0, y = 0;
    string b;
    getline(cin,b);
	for (int z = 0; z < b.length(); z++) {
		if (b[z] =='a') {
			a = a + 1;
		}
		if(b[z] == 'e') {
			e = e + 1;
		}
		if(b[z] == 'i') {
			i = i + 1;
		}
		if (b[z] == 'o') {
			o = o + 1;
		}
		if (b[z] == 'u') {
			u = u + 1;
		}
		if (b [z] == 'y') {
			y = y + 1;
		}
	}
    cout << "a = " << a << endl;
    cout << "e = " << e << endl;
    cout << "o = " << o << endl;
    cout << "u = " << u << endl;
    cout << "i = " << i << endl;
	//0
    // system("pause"); // Только для тех, у кого MS Visual Studio
    return 0;
}
