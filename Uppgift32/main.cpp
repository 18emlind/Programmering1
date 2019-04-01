#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	
string sentence;

getline (cin,sentence);

/* Den här for loopen kollar om någon boksav i meningen är stor, och förvandlar den sedan till små */
for(int i = 0; i < sentence.length(); i++) {
if ('A'<=sentence[i] and sentence[i]<='Z'){
    sentence[i] = sentence[i] +32;
}
}

/* if loopen checkar om den hittar ett m, a och ett t i meningen */
if (sentence.find("m") != string::npos and sentence.find("a") != string::npos and sentence.find("t") != string::npos ){
cout <<"MAT!"; 
}

	return 0;
}
