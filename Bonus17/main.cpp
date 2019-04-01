#include <iostream>
#include <math.h>
using namespace std;

katetfunktion(int hypo,int katet) {
float ans;
ans = sqrt( (hypo * hypo) - (katet * katet) );
return ans;
}

hypofunktion(int katet1, int katet2) {
float ans;
ans = sqrt( (katet1 * katet1) + (katet2 * katet2) );
return ans;
}

int main(int argc, char** argv) {
string svar;
float ans;
int hypotenusa, katet1, katet2;
cout << "Vad vill du rakna? Hypotenusan/Kateter :" <<endl;
cin >> svar;

if (svar == "Kateter") {
cout << "Skriv nu in hypotenusans langd: " <<endl;
cin >> hypotenusa;
cout << "Skriv nu in katetens langd: " <<endl;
cin >> katet1;
ans = katetfunktion(hypotenusa, katet1);
cout <<"Katetens langd ar: "<<ans;

}

else {
cout << "Skriv nu in katet 1 langd: " <<endl;
cin >> katet1;
cout << "Skriv nu in katet 2 langd: " <<endl;
cin >> katet2;
ans = hypofunktion(katet1, katet2);
cout <<"Hypotenusans langd ar: " << ans;
}


	return 0;
}
