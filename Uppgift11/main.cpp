#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	
int x;

cout << "Skriv in ett heltal: ";

cin >> x;

while (x > 0) {

x = x - 1;

cout << x <<endl;
}

	return 0;
}
