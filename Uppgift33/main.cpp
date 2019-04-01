#include <iostream>

using namespace std;


int IncreaseFunktion(int add) {

add = add + 2;

cout << add;

return add;
}

int main(int argc, char** argv) {

int x;
int add;
cout <<"Enter a integer: ";
cin >> x;

IncreaseFunktion(x);

	return 0;
}
