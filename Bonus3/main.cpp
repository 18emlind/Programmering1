#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	
int tim1, min1, sec1, tim2, min2, sec2, timres, minres, secres, result;



cout <<" Enter the amount of hours, minutes and seconds of your first lap: " <<endl;

cin >> tim1 >> min1 >> sec1;

cout <<" Enter the amount of hours, minutes and seconds of your second lap: " <<endl;

cin >> tim2 >> min2 >> sec2;





timres = tim1 + tim2;
minres = min1 + min2;
secres = sec1 + sec2;


if (minres > 60 ) {
minres = minres - 60; 
timres = timres + 1;
}

if (secres > 60) {
secres = secres - 60;
minres = minres + 1;
}

cout << timres << " " <<minres << " "<< secres;

	return 0;
}
