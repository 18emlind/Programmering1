#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	
int x, y, z;

cout << "Enter a number between 10-20: " << endl;

cin >> x;

while (x < 10 or x > 20) {
cout << "are you dumb? i told you to enter a number between 10-20: " << endl;
cin >> x;
}

cout << "Now enter another number which the first number will count down to: ";

cin >> y;

cout << "Now enter the amount of steps between the numbers: ";

cin >> z;


while( x > y) {
	
cout << x <<endl;

x = x - z;

}

	return 0;
}
