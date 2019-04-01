#include <iostream>

using namespace std;


int main(int argc, char** argv) {
	

string method;
float x, y;

cin >> method;

x = method[0] - '0';

y = method [2] - '0';

if(method[1] == '+') {
cout << x << "+" << y << "=" << x+y;
}

else if(method[1] == '-') {
cout << x << "-" << y << "=" << x-y;
}

else if(method[1] == '*') {
cout << x << "*" << y << "=" << x*y;
}
else if(method[1] == '/') {
cout << x << "/" << y << "=" << x/y;
}




	return 0;
}
