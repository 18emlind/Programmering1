#include <iostream>

using namespace std;


float calculator(float celsius) {

float fahren = celsius * 1.8 + 32;
return fahren;

}

float temp() {
float cels, fahren;
cout << "Enter a temperature (Celsius): " <<endl;
cin >> cels;
fahren = calculator(cels);

cout << fahren <<" Fahrenheit";

}

int main(int argc, char** argv) {
	
temp();

	return 0;
}
