#include <iostream>
#include <stdlib.h>   
#include <time.h> 

using namespace std;

int main(int argc, char** argv) {
	
int randoms[5];
int tiden = time(0);
srand(tiden);

for (int x = 0; x < 5; x++) {
randoms[x] = rand()%6 + 1;
cout << randoms[x] <<endl;
}

	return 0;
}
