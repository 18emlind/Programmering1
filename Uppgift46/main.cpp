#include <iostream>

using namespace std;

int y = 0;

int rekursiv(int x) {
int sum;

if (x == 1) {
sum = 1;
}

else {
sum = x + rekursiv(x - 1);
}

return sum;
}


int main(int argc, char** argv) {
	
int talet;

cout << "enter an integer: ";
cin >> talet;

cout << rekursiv(talet);
	return 0;
}
