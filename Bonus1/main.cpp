#include <iostream>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	
float katet1, katet2, hypotenusa;

cout <<"Katet 1 = ";
cin >> katet1;

cout <<"Katet 2 = ";
cin >> katet2;

katet1 = katet1 * katet1;
katet2 = katet2 * katet2;

hypotenusa = sqrt(katet1 + katet2);

cout << "Svar = " << hypotenusa;
	return 0;
}
