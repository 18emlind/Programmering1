#include <iostream>

using namespace std;

int Calculator(string calc) {
	
int x, y;

x = calc[0] - '0';

y = calc[2] - '0';

if(calc[1] == '+') {
cout << x << "+" << y << "=" << x+y;
}

else if(calc[1] == '-') {
cout << x << "-" << y << "=" << x-y;
}

else if(calc[1] == '*') {
cout << x << "*" << y << "=" << x*y;
}
else if(calc[1] == '/') {
cout << x << "/" << y << "=" << x/y;
}
	
}	

int main(int argc, char** argv) {


string method;

cin >> method;

Calculator(method);


	return 0;
}
