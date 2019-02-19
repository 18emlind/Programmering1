#include <iostream>

using namespace std;

int main(int argc, char** argv) {

int number;	
bool run = true;

while (run == true) {
cout << "Enter a number, the number 21 will close the program: " <<endl;
cin >> number;
if(number == 21) {
run = false;
}
}



	return 0;
}
