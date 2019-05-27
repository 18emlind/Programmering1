#include <iostream>
#include <stdlib.h>   
#include <time.h> 
using namespace std;

int main(int argc, char** argv) {

string restart;

int mini = 1;
int maxi = 100;
int tiden = time(0);
int input, ans, ai;

srand(tiden);

ans = rand()%100 + 1;
cout << "Guess what the number is ( 1 - 100): " <<endl;

	
for (int x = 0; x < x + 1; x++) {

cin >> input;

if (input < ans) {
cout << "the number is bigger, Ai:s turn.  " <<endl;
mini = input;
}
if (input > ans) {
cout << "the number is smaller, Ai:s turn.  " <<endl;
maxi = input;
}

if (input == ans) {
cout << "YOU WIN! The number was " << ans <<endl;
return 0;
}

ai = rand()%  100 + 1;

while (ai >= maxi or ai <= mini) {
ai = rand()%  100 + 1;
}

cout << "Ai guessed the number " << ai;
if (ai < ans) {
cout <<", the number is bigger than that." <<endl;
}

else if (ai > ans) {
cout <<", the number is smaller than that." <<endl;
}

else if (ai == ans) {
cout << endl;
cout << "YOU LOST! Ai has guessed the correct number, " << ans <<endl;
return 0;

}

}
}
