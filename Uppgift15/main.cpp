#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	
int x, y;

cout << "Enter a figure: ";

cin >> x;

cout << "Now enter a figure you want to countdown to: ";

cin >> y;

for(; x >= y; x--)

cout << x <<endl;

	return 0;
}
