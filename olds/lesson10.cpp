/*
Условие задачи:
Составить алгоритм находящий значение y, если у=х, 
при х<0; у=0, при 0<=х<30; у=х2, при х>=30;
*/

#include <iostream>

using namespace std;

int main(int argc, char* argv[]){

	int x,y;
	cout << "Vvedite x: ";
	cin >> x;
	if(x < 0) {
		y=x;	
	} else {
		if ( (x>=0) && (x<30)) {
			y=0;
		} else {
			if(x>=30){
				y=x*x;
			}
		}
	}
	cout << "y=" << y << endl;
	system("pause");
	return 0;
}
