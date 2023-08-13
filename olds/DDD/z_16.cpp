#include <iostream>
#include <math.h>
using namespace std;

const double g = 9.8;
const double pi = 3.1415926;
//a = arcsin(gT/2V)
int main(){
	double V,T,m;
	cout << "V = ";
	cin >> V;
	cout << "T = ";
	cin >> T;
	if(1 < fabs(g*T/(2*V))){
		cout << "Incorrect";
	} else {
		m = asin(g*T/(2*V));
	}
	cout << "Eto: " << m*180/pi;
	return 0;
}
