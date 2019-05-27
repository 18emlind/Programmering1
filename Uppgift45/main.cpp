#include <iostream>
#include <stdlib.h>   
#include <time.h> 

using namespace std;

int main(int argc, char** argv) {
	
int randoms[5];
int tiden = time(0);
srand(tiden);
string reroll;
int which;

for (int x = 0; x < 5; x++) {
randoms[x] = rand()%6 + 1;
cout << randoms[x] <<endl;
}

cout << "Do you want to reroll one of the dices? (yes/no):  " <<endl;
cin >> reroll;

while (reroll != "yes" and reroll != "no") {
cout << "Type (yes/no): " <<endl;
cin >> reroll;
}

if (reroll == "yes"){
cout << "Which one do you want to reroll? (1-5): " <<endl;
cin >> which;
which = which - 1;
randoms[which] = rand()%6 + 1;
cout << "----------------------" <<endl;

for (int x = 0; x < 5; x++) {
cout << randoms[x] <<endl;
}
}

if (reroll == "no") {
return 0;
}

	return 0;
}
