#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"RUS");
	int x,y;
	cout << "\t\t¬ведич число х и у\n";
	cout << "x: ";
	cin >> x;
	cout << "y: ";
	cin >> y;
	if (x != 0 && y != 0){
		if(x>0 && y>0){
			cout << "2";
		} else if (x>0 && y< 0){
			cout << "4";
		} else if (x<0 && y > 0){
			cout << "1";
		} else {
			cout << "3";
		}
	}
	return 0;
}
