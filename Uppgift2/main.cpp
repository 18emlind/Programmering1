#include <iostream>

using namespace std;
int main() {


float tal1, tal2, tal3, summa, summa2, summa3;

cout << "Nuvarande m�tarst�llning: ";
cin >> tal1;

cout << "Antal liter bensin: " ;
cin >> tal3; 


summa = tal1;
summa2 = tal3 / tal1;

cout << "F�rbrukning per mil i genomsnitt: " << summa2;
	return 0;
}
