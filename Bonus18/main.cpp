#include <iostream>
#include <stdlib.h>   
#include <time.h> 

using namespace std;

int main(int argc, char** argv) {

string restart;

while (restart != "no") {

int tiden = time(0);
int input, ans, ai;

srand(tiden);

ans = rand()%100 + 1;
cout << "Guess what the number is ( 1 - 100): " <<endl;

for (int x = 0; x < x + 1; x++) {

cin >> input;

if (input < ans) {
cout << "the number is bigger, Ai:s turn.  " <<endl;
}
if (input > ans) {
cout << "the number is smaller, Ai:s turn.  " <<endl;
}

if (input == ans) {
cout << "YOU WIN! The number was " << ans <<endl;
cout << "Try again? (yes/no): ";
cin >> restart;
}

// det här är gissar Ai //

ai = rand()% 100 + 1;

if (ai < ans) {
cout << "Ai guessed the number " << ai << ", the number is bigger than that." <<endl;
}
if (ai > ans) {
cout << "Ai guessed the number " << ai << ", the number is smaller than that." <<endl;
}

if (ai == ans) {
cout << "YOU LOST! Ai has guessed the correct number, " << ans <<endl;
cout << "Try again? (yes/no): ";
cin >> restart;
}

}
}
}

