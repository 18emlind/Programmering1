#include <iostream>

using namespace std;


float FahrenFunktion(float cels) {
float ans = cels * 1.8 + 32;
return ans;
}

float CelsiusFunktion(float fahren) {
float ans = (fahren - 32) / 1.8;
return ans;
}


float FormelVal(char val, float temp) {
if (val == 'F') {
float ans = FahrenFunktion(temp);
return ans;
}
else if (val == 'C') {
float ans = CelsiusFunktion(temp);
return ans;
}

}


int main(int argc, char** argv) {
char format;
float degrees;

cout << "Which format do you want to convert to: (F or C)? : " <<endl;
cin >> format;
cout << "Now enter degrees: " ;
cin >> degrees;

float ans = FormelVal(format, degrees);

cout << ans;

	return 0;
}
