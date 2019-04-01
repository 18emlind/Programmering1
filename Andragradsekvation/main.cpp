#include <iostream>
#include <math.h>
#include <complex>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {

float a, b, c, p, q, x1, x2, check, symetri, extrem, komplex;

cout << "ax^2 + bx + c = 0" <<endl;
cout <<"Enter the variable a: ";
cin >> a;

while (a == 0) {
cout <<"variable a cant be 0: ";
cin >> a;
}


cout <<"Now enter the variable b: ";
cin >> b;

cout <<"Now enter the variable c: ";
cin >> c;

p = b/a;
q = c/a;
komplex = sqrt( ((p/2) * (p/2)) - q );

x1 = -(p/2) + komplex ;
x2= -(p/2) - komplex ;

check = ( (p/2) * (p/2) ) - q;

if (check > 0) {
cout << a << "x^2 + " <<b <<"x + "<< c <<" = 0 " <<"has 2 real numbers, "<< "x1 = "<< x1 << " and " << "x2 = "<< x2;
}

else if (check == 0) {
cout << a << "x^2 + " <<b <<"x + "<< c <<" = 0 " <<"has 1 real number, "<< "x = "<< x1;
}

else if (check < 0) {
cout << a << "x^2 + " <<b <<"x + "<< c <<" = 0 " <<"has no real numbers in this solution";
cout << ", It only has the komplex roots " << -(p/2) <<" +- " <<  sqrt(-(((p/2) * (p/2)) - q)) <<"i" ;

}

cout <<endl;
cout <<endl;

symetri = -(p/2);

cout << "symmetry line is " << symetri <<endl;

extrem = a * symetri * symetri +  b * symetri + c;

cout <<"extreme point is " << symetri << ","<< extrem <<endl;

if (a > 0) {
cout << "The ekvation has a minimum point";
}
else {
cout <<"The ekvation has a maximum point";
}


cout <<endl;
cout <<endl;





	return 0;
}
