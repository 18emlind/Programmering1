#include <iostream>
#include <string>
using namespace std;

struct boll {
int radius;
string color;
int weight;
};

boll stor (boll big) {
big.weight = big.weight * 8;
big.color = "Green";
big.radius = big.radius * 2;

return big;
}

int main(int argc, char** argv) {
	
int vikt;
string farg;
int radie;

cout << "Enter the weight, color and radius of the ball: " <<endl;
cin >> vikt >> farg >> radie;

boll ball = {vikt, farg, radie};

ball = stor(ball);

cout << "----------------" <<endl;
cout << vikt <<endl;
cout << farg <<endl;
cout << radie <<endl;

cout << "----------------" <<endl;

cout << ball.weight <<endl;
cout << ball.color <<endl;
cout << ball.radius <<endl;



	return 0;
}
