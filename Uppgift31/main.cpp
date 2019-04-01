#include <iostream>

using namespace std;

int main(int argc, char** argv) {
int i = 0;
string word;

cin >> word;


while (word[i] != '\0'){
i++;
}

for (int x = 0; x < i; x++) {

if (word[x] == 'Z') {
word[x] = 'a';
}
}

cout << word;

	return 0;
}
