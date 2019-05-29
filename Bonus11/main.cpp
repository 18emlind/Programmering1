#include <iostream>

using namespace std;

int main() {
int numbers[5], is_same;
	
for(int y = 0; y < 5; y++)
{
cout << "enter a number: ";
cin >> numbers[y];
}
	
for(int i = 0; i < 5; i++)
{
for(int test = 0; test < 5; test++)
{
if(numbers[i] == numbers[test] and i != test)
{
is_same = true;
		
} else {
				
is_same = false;
}
			
if(is_same == true)
{
cout << numbers[i] << " is matching" << endl;
}
}
}
	
	return 0;
}
