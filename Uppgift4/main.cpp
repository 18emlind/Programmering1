#include <iostream>

using namespace std;

int main() {

float variabel1, variabel2, variabel3;

cout << "A = ";
cin >> variabel1;

cout << "B = ";
cin >> variabel2;

variabel3 = variabel2;
variabel2 = variabel1;

cout <<"A = " <<variabel3 <<endl; 
cout << "B = " <<variabel2;




	return 0;
}
