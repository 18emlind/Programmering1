#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
int x, y;

cout << "Dagens mätarställning: ";
cin >> x;

cout << "Mätarställning för ett år sen: ";
cin >> y;

cout << "Du har kört " << x - y << " mil";
	return 0;
}
