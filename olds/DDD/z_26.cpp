#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"RUS");
	int a,b;
	cin >> a;
	cin >> b;
	int c = (a&&b);
	cout << c;
	return 0;
}
