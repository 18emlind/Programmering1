#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {

int x, y, z, r, s = 1;

cout << "Where do you want your _ to start? :";
cin >> x;

cout << "How many rows do you want there to be: ";
cin >> r;

cout << "How many stars do you want there to be in one row";
cin >> s;

while(z <= r) {

y = 1;

while(y < x ) {
cout << "*";
y++;
}

while (y == x) {
cout << "_";
y++;
}

while(y <=s) {

cout <<"*";
y++;
}

if(y = s) {
x++;
cout <<endl;
}

if(x > s) {

x = 1;
}

z++;
}

	return 0;
}
