#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
int x[7], y, z, p = 0;

for(y = 0; y < 7; y++) {
cin >> x[y];
p = p + x[y];
}

if(p > 50) {
cout <<"Your answer IS bigger than 50";
}

else {
cout <<"Your answer is NOT bigger than 50";
}

return 0;
}
