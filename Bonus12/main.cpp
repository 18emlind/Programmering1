#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
int numbers[7], ny, position, y, z, e;

cout << "Enter 7 numbers: " <<endl;
for(int x = 0; x < 7; x++){
cin >> numbers[x];
}

cout <<" Now enter a random number:" <<endl;
cin >> ny;

cout <<"Now enter a position from 0 - 6" <<endl;
cin >> position;

while (position < 0 or position > 7 ) {
cout <<"Enter a position from 0 - 6" <<endl;
cin >> position;
}

 e = 7 - position;
cout <<"--------------------" <<endl;
for(y = 0; y < 7; y++ ) {
if (y == position) {
cout << ny <<endl;
}
if (y == 6) {
return 0;
}
cout << numbers[y] <<endl;
}

	return 0;
}
