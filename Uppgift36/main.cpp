#include <iostream>

using namespace std;

string AbbaFunktion(string word1, string word2) {

string ans;

ans = word1 + word2 + word2 + word1;

return ans;
}

int main() {

string x1, x2, ans;

cout << "Enter a word: " <<endl;
cin >> x1;
cout << "Now enter another word: " <<endl;
cin >> x2;

ans = AbbaFunktion(x1, x2);

cout <<ans;

	
	return 0;
}
