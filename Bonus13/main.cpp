#include <iostream>

using namespace std;

int main() {
int x[10], user, up, greater_than = 0, less_than = 0, same = 0, greater, less, equal;
	
for(int i = 0; i < 10; i++)
{
cout << "enter a number: ";
cin >> user;
x[i] = user;
}
	
	for(int n = 0; n < 10; n++)
	{
	up = n + 1;
		
	if(x[up] > x[n])
	{
		greater_than = true;
	} else if(x[up] < x[n]) {
		less_than = true;
		} else {
			same = true;
		}
		
		if(greater_than == true)
		{
			greater++;
		} else if(less_than == true) {
			less++;
		} else {
			equal++;
		}
		
		greater_than = false;
		less_than = false;
		same = false;
	}
	
	if(greater > 0)
	{
		greater_than = true;
	}
	if(less > 0)
	{
		less_than = true;
	}
	if(equal > 0)
	{
		same = true;
	}
	
	
	if(greater_than == true and less_than == true)
	{
		cout << "Both increasing and decreasing";
	} else if(greater_than == true and less_than == false) {
		cout << "Only increasing numbers";
	} else if(greater_than == false and less_than == true) {
		cout << "Only decreasing values";
	} else {
		cout << "No change";
	}
	return 0;
}
