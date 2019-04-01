#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char** argv) {
int tiden = time(0);
int x1, x2;

srand(tiden);

x1 = rand()%10 +1;
x2 = rand()%10 +1;

if (x2 < x1) {
cout << x2 <<endl;
cout << x1;
return 0;
}
cout << x1 <<endl;
cout <<x2;


	return 0;
}
