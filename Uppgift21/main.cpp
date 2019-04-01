#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
bool increase = true;
int x = 0;

while (increase == true) {
cout << x << " ";
x++;

if(x == 7) {
cout << x << " ";
increase = false;
}
}

while(increase == false) {
x--;
cout << x << " ";

if( x == 0) {
return 0;
}
}
}
