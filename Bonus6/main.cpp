#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {

int x, y, z = 1;

cout << "Where do you want your _ to start? :";
cin >> x;

while(z <= 6) {

y = 1;

while(y < x ) {
cout << "*";
y++;
}

while (y == x) {
cout << "_";
y++;
}

while(y <=10) {

cout <<"*";
y++;
}

if(y = 10) {
x++;
cout <<endl;
}

if(x > 10) {

x = 1;
}

z++;
}

	return 0;
}
