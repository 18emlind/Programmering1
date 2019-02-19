#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	
int user_input;

cout << "Enter a number: " <<endl;
cin >> user_input;

if(user_input >44 and user_input <64){
cout << "Congratulations!";
} else { 
 cout << "Try Again";
}
	return 0;
}
