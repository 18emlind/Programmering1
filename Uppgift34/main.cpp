#include <iostream>

using namespace std;


int IncreaseFunktion(int add) {

add = add + 2;

return add;
}

int main(int argc, char** argv) {

int x;
int add;
cout <<"Enter a integer: ";
cin >> x;

add = IncreaseFunktion(x);

cout << add;
	return 0;
}
