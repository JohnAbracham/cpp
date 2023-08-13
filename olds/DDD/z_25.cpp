#include <iostream>
using namespace std;

void IntoBrickWald(int a, int b,int c, int d, int l){
	switch(b <= l){
		case false:{
			cout << "Ne podchodit po shirine";
			break;
		}
		default:{
			cout << "Podchodit po shirine";
			break;
		}
	}
	switch(c <= d){
		case false:{
			cout << "Ne podchodit po visote";
			break;
		}
		default:{
			cout << "Podchodit po visote";
			break;
		}
	}
}

int main(){
	int a1,b1,c1,d1,l1;
	cout <<"Shirina a = ";
	cin >> a1;
	cout <<"Dlina b = ";
	cin >> b1;
	cout <<"Visota c = ";
	cin >> c1;
	cout <<" Visota otverstiya d = ";
	cin >> d1;
	cout <<"Dlina otverstiya l = ";
	cin >> l1;
	IntoBrickWald(a1,b1,c1,d1,l1);
	return 0;
}
