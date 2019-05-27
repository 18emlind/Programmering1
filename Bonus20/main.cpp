#include <iostream>
#include <stdlib.h>   
#include <time.h> 
#include <sstream>
#include <stdio.h>

using namespace std;

int main(int argc, char** argv) {
	
int randoms[5];
int tiden = time(0);
srand(tiden);
string reroll;
string which;
int saver[10];

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
cout << "Which one do you want to reroll? (type numbers on same row): " <<endl;
cin >> which;

cout << "----------------------" <<endl;

for (int x = 0; which[x] != '\0' ; x++) {
saver [x] = which[x] - '0';
}
for (int y = 0; y < 5; y++) {
	
for (int x = 0; x < 6; x++) {
if (x == 0) {
x++;
}
if (saver[y] == x) {
randoms[x - 1] = rand()%6 + 1;
}
}
}
for (int z = 0; z < 5; z++) {
cout << randoms[z] <<endl;
}
}
if (reroll == "no") {
return 0;
}

	return 0;
}
