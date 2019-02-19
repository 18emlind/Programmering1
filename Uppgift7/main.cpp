#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	
int x, y, answer;

cout << "This program will help you choose the right car insurance" <<endl;

cout << "Enter the current year: ";
cin >> x;

cout << "Now enter the year your car was made: ";
cin >> y;

answer = x - y;

if(answer < 5) {
cout <<"We recommend a full insurance on your car!";
}

if (answer > 5) {
cout <<"We recommend a half insurance on your car!";
}

	return 0;
}
