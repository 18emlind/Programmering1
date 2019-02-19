#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	
float input, tal1, tal2;	

cout << "Choose your arithmetic: " <<endl;
cout << "1 = +" <<endl;;
cout << "2 = -" <<endl;;
cout << "3 = *" <<endl;;
cout << "4 = /" <<endl;;


cin >> input;

cout << "Enter a number: ";
cin >> tal1;

cout << "Enter another number: ";
cin >> tal2;


if(input==1) {

cout << "The answer is = " << tal1 + tal2;

}

if(input==2) {

cout << "The answer is = " << tal1 - tal2;

}

if(input==3) {

cout << "The answer is = " << tal1 * tal2;

}

if(input==4) {

cout << "The answer is = " << tal1 / tal2;

}

	return 0;
}












