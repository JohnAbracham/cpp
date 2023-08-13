#include <iostream>
#include <math.h> 
using namespace std;

// 10819 
int main(){
	int a,b,f;
	cout << "a:" << endl;
	cin >> a;
	cout << "b:" << endl;
	cin >> b;
	cout << "f:" << endl;
	cin >> f;
	int fun = (a+b-f/a)+f*a*a-(a+b);
	cout << "x = " << fun << endl;		
	system("pause");
	return 0;
}
