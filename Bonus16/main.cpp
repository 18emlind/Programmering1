#include <iostream>

using namespace std;


int whilemax (int tal) {
int input;
cout << "Enter a integer: " <<endl;
cin >> input;
while (input >= tal) {
cout << "Enter a integer: " <<endl;
cin >> input;
}
}

int main(int argc, char** argv) {

int x = 33;
whilemax(x);

	return 0;
}
