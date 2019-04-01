#include <iostream>

using namespace std;

int AddFunktion(int tal1, int tal2) {

int ans = tal1 + tal2;

}

int main(int argc, char** argv) {

int x1, x2, ans;
	
cout << "Enter an integer: " <<endl;
cin >> x1;
cout << "Enter another integer: " <<endl;
cin >> x2;

ans = AddFunktion(x1, x2);

cout <<endl << ans;

	return 0;
}
