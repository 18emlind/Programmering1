#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	
float x, y, z;

cout << "Enter a random number: " <<endl;

cin >> x;

cout << "Now enter another random number: " <<endl;

cin >> y;

z = x - y;

if (x == y) {

cout << "Congratulations!";
}

else 

if(z >= -10 and z <= 10) {

cout << "Close but no cigar!";
} 


else {

cout << "Not even close!"; 
}


	
	
	return 0;
}
