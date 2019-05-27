#include <iostream>
#include <string>
#include <stdlib.h> 
using namespace std;

struct boll {
int x;
int y;
};

boll koordinat (boll newcor) {
cout << "Now enter new x and y coordinates for the ball: ";
cin >> newcor.x;
cin >> newcor.y;
system ("CLS");
return newcor;
}

int main(int argc, char** argv) {
int sideways;
int down;
int dow;
int side;
int z = 1;

cout << "Enter the x and y coordinates of the ball: " <<endl;
cin >> sideways >> down;

boll gammal = {sideways, down};

while (z == 1) {

cout << "----------------------------------------------------------" <<endl;

for(dow = 1; dow != gammal.y; dow++) {
cout << endl;
}

for(side = 1; side != gammal.x; side++) {
cout << "   ";
}
if ( side == gammal.x) {
cout << "O" <<endl <<endl <<endl <<endl <<endl <<"----------------------------------------------------------" <<endl;
}

gammal = koordinat(gammal);



} 



	return 0;
}
