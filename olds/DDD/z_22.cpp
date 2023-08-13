#include <iostream>
using namespace std;

// (а + b Ч f / а) + f * a * a Ч (a + b)

int main(){
	setlocale(LC_ALL, "RUS");
	int a,b,f;
	cout << "¬веди сначала переменные a,b и f\n";
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "f = ";
	cin >> f;
	cout << "»сход€ из формулы (а + b Ч f / а) + f * a * a Ч (a + b)\n";
	cout << "«начение равно: "<< ((a+b-f/a)+f*a*a-(a+b)) << endl;
	return 0;
}
