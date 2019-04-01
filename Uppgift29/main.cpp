#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
string r1, r2, r3, r4, r5, r6, r7, r8, r9, r10;

cout << "This is an interactive story, i will first ask you for 10 different things, then a story will be written about it: "<<endl;
cout <<"type in a male name " <<endl;
cin >> r1;
cout <<"type in a tool " <<endl;
cin >>r2;
cout <<"type in another male name: "<<endl;
cin >>r3;
cout <<"Type in kill/spare: " <<endl;
cin >> r4;
cout << "Type in a drink (for example coke): " <<endl;
cin >> r5;
cout << "Type in either guard/janitor/prisoner" <<endl;
cin >> r6;
cout << "Type in yelling or screaming" <<endl;
cin >>r7;
cout << "Type in an object" <<endl;
cin >>r8;
cout << "Type in a number: " ;
cin >> r9;
cout << "Type in a job: ";
cin >> r10;


cout << r1 << " is sitting inside his jail cell, he is thinking about how he is going to escape. Then he notices a " <<r2; 
cout <<" under his bed inside the cell. His cellmate called " << r3 << " is sleeping on his own cellbed. " << r1 << " decides to ";
if(r4 == "kill") {
cout << "kill him with the " <<r2 << " because " << r3 << " had stolen his dessert during lunch. ";
}
else {
cout << r1 << " decides to spare " << r3 <<"'s life even though he had stolen " << r1 << "'s dessert during lunch. ";
}

 cout << r1 << " steals two cans of " << r5 << " which are lying under his bed. " << r1 << "starts to carve out a hole in the wall with his " << r2 <<". midways thru the cellwall he can hear someone behind him. It's' a "
  << r6 << ". " << "The " <<r6 <<" starts  " <<r7  << ". "<<r1 << " takes a " << r8 << " and tries to hide behind it. " 
  << " To his surprise the guards dont notice him behind the " << r8 << ". " <<r1 << " keeps on digging and escapes the prison. It has now been " <<r9 
  << " years since he escaped. " << r1 << " now works as a " << r10;
	return 0;
}
