

// Det här är egentligen uppgift 43, skrev fel, //#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {

string restart;

while (restart != "no") {

int tiden = time(0);
int input, ans;

srand(tiden);

ans = rand()%100 + 1;
cout << "Guess what the number is ( 1 - 100): " <<endl;

for (int x = 0; x < 4; x++) {
	
cin >> input;

if (input < ans) {
cout << "the number is bigger, Guess again:  " <<endl;
}
if (input > ans) {
cout << "the number is smaller, Guess again:  " <<endl;
}

if (input == ans) {
cout << "Congratulations! The number was " << ans;
return 0;
}
}
cin >> input;

if (input == ans) {
cout << "Congratulations! The number was " << ans;
return 0;
}

cout << "GAME OVER" << ", The number was " << ans << endl;

cout << "Try again? (yes/no): ";
cin >> restart;
}
}
