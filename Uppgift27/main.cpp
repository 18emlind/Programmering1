#include <iostream>


using namespace std;

int main(int argc, char** argv) {
	
string input, restart = "Yes";
int x, y;

while (restart == "Yes") {

cout << "Choose between Addition /Subtraktion / Multiplikation / Division: " <<endl;
cin >> input;

cout << "Enter a number: " <<endl;
cin >> x;

cout << "Now enter another number: " <<endl;
cin >> y;
if (input == "Addition") {
cout << x << "+" <<y << "=" << x+y <<endl;
}

if(input == "Subtraktion") {
cout << x << "-" <<y << "=" << x-y <<endl;
}

if(input == "Multiplikation") {
cout << x << "*" <<y << "=" << x*y <<endl;
}

if(input == "Division") {
cout << x << "/" <<y << "=" << x/y <<endl;
}

cout << "Do you want to run again?" << " Yes/No"<<endl;
cin >> restart;

}

cout << "Goodbye!";
	return 0;
}
