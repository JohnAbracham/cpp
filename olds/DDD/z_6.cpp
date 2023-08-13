#include <iostream>
#include <math.h> 
using namespace std;
const float pi = 3.1415926;
// (1-tg x)^(ctg x)+ cos(x-y).
int main(){
	double x,y;
	cin >> x;
	cin >> y;
	double z = 1-tan(x*pi/180);
	double m = 1/tan(x*pi/180);
	double k = cos(x*pi/180-y*pi/180);
	cout << "z = " << z << "; m = "<< m << "; k = "<< k << endl;
	double l = pow(z,m)+k;
	cout << l << endl;
	system("pause");
	return 0;
}
