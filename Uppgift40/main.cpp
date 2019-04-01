#include <iostream>
#include <stdlib.h>   
#include <time.h> 

using namespace std;

int main(int argc, char** argv) {
int tid = time(0);
int start, end;
srand(tid);

cout << "Enter what number you want the randomizer to start at:" <<endl;
cin >> start;
cout << "Now enter where you want the randomizer to end at: " <<endl;
cin >> end;
end = end - start;
int random = rand()% end + start;

cout << random;
	return 0;
}
