#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	
int x, y, z;

cout << "Enter a figure between 10-20: ";

cin >> x;

for(; x > 20 or x < 10;) {
cout << "Enter a figure between 10-20: ";
cin >> x;
}

cout << "Now enter a figure you want to countdown to: ";

cin >> y;

cout << "Now enter the steps between the two figures: ";

cin >> z;

for(; x >= y; x = x - z) {

cout << x <<endl;
}
	return 0;
} 

