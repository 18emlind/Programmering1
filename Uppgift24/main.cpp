#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
int x[10], y, z;

cout << "Enter 10 numbers:" <<endl;

for(y = 0; y < 10; y++) {
cin >> x[y];
}
cout << "------------------" <<endl;
for(z = 9; z > 0; z--) {
cout << x[z] <<endl;
}


	return 0;
}

