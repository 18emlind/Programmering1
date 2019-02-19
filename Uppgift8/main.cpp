#include <iostream>
using namespace std; 

int main() {
	
int x, y, answer;

cout << "This program will help you choose the right car insurance" << endl;

cout << "Enter the current year: ";
cin >> x;

cout << "Now enter the year your car was made: ";
cin >> y;

answer = x - y;

if(answer < 5) {
cout <<"We recommend a full insurance on your car!";
}

if ( 5 < answer and answer < 25  ) {
cout <<"We recommend a half insurance on your car!";
}

if ( answer > 25 ) {
cout <<"We recommend our veteran car insurance!";
}
	return 0;
}
