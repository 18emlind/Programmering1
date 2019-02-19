#include <iostream>

using namespace std;
int main() {
float vara1, vara2, pris1, pris2, summa1, summa2;

cout << "How many kilos do you have of product1?: ";
cin >> vara1;

cout <<"How many kilos do you have of product2?: ";
cin >> vara2; 

cout <<"What is the price per kilo on product1?: ";
cin >> pris1;

cout <<"What is the price per kilo on produt2?: ";
cin >> pris2;

summa1 = (vara1 * pris1 + vara2 * pris2) * 1.12;
cout <<"Total price: " <<summa1; 


	return 0;
}
