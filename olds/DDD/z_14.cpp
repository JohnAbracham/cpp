#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	cin>>a;
	cin>>b;
	cin>>c;
	if(a!=b && a!=c && b!=c){
		cout << "Netu ravnich\n";
	} else {
		a+=5;
		b+=5;
		c+=5;
	}
	cout << a << ", " << b << ", " << c << endl;
	return 0;
}
