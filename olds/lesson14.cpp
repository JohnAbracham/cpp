//Условная операция - тернарной операцией

/*
Составить алгоритм находящий значение y, если у=х, при х<0; у=0, 
при 0<=х<30; у=х2, при х>=30; 
Ниже показан код программы решающий данную задачу 
с использованием тернарной операции «? :«.
*/

#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
	int x;
	cout << "Enter x: ";
	cin >> x;
	cout << "y = " << ( (x<0)?x:((x>=0)&&(x<30)?0:x*x)) << endl;
	system("pause");
	return 0;
}
