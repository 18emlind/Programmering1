#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
int main() {
	
int x, y, z, tusen, femhundra, tvahundra, hundra, femtio, tjugo, tio, fem, eni;

tusen = 0;
femhundra = 0;
tvahundra = 0;
hundra = 0;
femtio = 0;
tjugo = 0;
tio = 0;
fem = 0;
eni = 0;
cout << "How much did the customer buy for?: " <<endl;

cin >> x;


cout << "How much did the customer give in cash?: " <<endl;

cin >> y;

z = y - x;

while (z > 1000) {

z = z - 1000;

tusen = tusen + 1;

}

if (z < 1000 and tusen > 0) {

cout << tusen << "st 1000-kronorssedel" <<endl;
}

while (z > 1000 or z >= 500 ) {
z = z - 500;
femhundra = femhundra + 1;
}

if (z < 500 and femhundra > 0) {
cout << femhundra << "st 500-kronorssedel" <<endl;
}

while (z > 500 or z >= 200) {
z = z - 200;
tvahundra = tvahundra + 1;
}

if (z < 200 and tvahundra > 0) {
cout << tvahundra << "st 200-kronorssedel" <<endl;
}

while (z > 200 or z >= 100) {
z = z - 100 ;
hundra = hundra + 1;
}

if (z < 100 and hundra > 0) {
cout << hundra << "st 100-kronorssedel" <<endl;
}

while (z > 100 or z >= 50) {
z = z - 50;
femtio = femtio + 1;
}

if (z < 50 and femtio > 0) {
cout << femtio << "st 50-kronorssedel" <<endl;
}

while (z > 50 or z >= 20) {
z = z - 20;
tjugo = tjugo + 1;
}

if (z < 20 and tjugo > 0) {
cout << tjugo << "st 20-kronorssedel" <<endl;
}

while (z > 20 or z >= 10) {
z = z - 10;
tio = tio + 1;
}

if (z < 10 and tio > 0)  {
cout << tio << "st tiokrona" <<endl;
}

while (z > 10 or z >= 5) {
z = z -5;
fem = fem + 1;
}

if (z < 5 and fem > 0) {
cout << fem << "st femkrona" <<endl;
}

while (z < 5 and z > 0) {
z = z -1;
eni = eni + 1;
}

if (z > -1 and eni > 0 ) {
cout << eni << "st enkrona" <<endl;
}
	return 0;
}
