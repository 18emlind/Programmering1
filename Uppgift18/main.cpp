#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {

int x;

cout <<"How many rows do you want there to be: ";
cin >> x;

while(x > 15){
cout <<"How many rows do you want there to be: ";
cin >> x;
}
for(int i = 1; i <= x; i++) {

for(int j = 1; j <=i; j++) {

cout << "Baa ";

}

cout <<endl;
}
}
