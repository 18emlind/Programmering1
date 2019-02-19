#include <iostream>

using namespace std;

int main() {

bool is_ten;
int kontroll;


cout << "Enter a figure: ";
cin >> kontroll;

if(kontroll == 10) {
is_ten = true;
}
else {
is_ten = false;
}

if(is_ten == true) {
cout << "You entered 10";
}

if(is_ten == false) {
cout << "You did not enter 10";
}

	return 0;
}
