#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"RUS");
	int x;
	cout << "¬веди значение х: ";
	cin >> x;
	cout << "y = " << (x < 0 ? x : (x>=0) && (x < 30) ? 0:x*x) << endl;
	system("pause");
	return 0;
}
