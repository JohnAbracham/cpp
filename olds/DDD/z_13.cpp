#include <iostream>
#include <math.h>
using namespace std;

//y = ax2 + bx + c and y = dx + k

void Uravnen(int a, int b, int c, int d, int k){
	float x1,x2,y1,y2,D;
	D=pow(b,2) - 4*a*c;
	if(D < 0){
		cout << "Wwedi zanowo\n";
	} else if(D == 0){
		x1 = -b/(2*a);
	} else if (D > 0) {
		x1 = (-b+sqrt(D))/(2*a);
		x2 = (-b-sqrt(D))/(2*a);
	}
	y1 = d*x1 + k;
	y2 = d*x2 + k;
	cout << "First pos [" << x1 << ", " << y1 << "];\n";
	cout << "Second pos [" << x2 << ", " << y2 << "];\n";  
	}

int main(){
	float a1,b1,c1,d1,k1;
	cout << "y = ax2 + bx + c and y = dx + k\n";
	cout << "Write a:\n";
	cin >> a1;
	cout << "Write b:\n";
	cin >> b1;
	cout << "Write c:\n";
	cin >> c1;
	cout << "Write d:\n";
	cin >> d1;
	cout << "Write k:\n";
	cin >> k1;
	Uravnen(a1,b1,c1,d1,k1);
	return 0;
}
