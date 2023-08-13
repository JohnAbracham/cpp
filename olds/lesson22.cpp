/*
Мой проект с генератором случайных чисел
*/

#include <iostream>
#define DEBUG


using namespace std;

int main(int argc, char* argv[]){

	int c3, c2, c1, val;
	int mxVal;

	srand(time(0));//Позволяет постоянно генерировать новые числа

	cout << "mxVal: " << endl;
	cin >> mxVal;

	for(int i = 0; i < mxVal; i++){
		
		val = 1 + rand() % 3;		
		
		if(val == 3){
			c3 += 1;
		} else if(val == 2){
			c2 += 1;
		} else {
			c1 += 1;
		}
	}

	cout << "c1: "<< c1 << "; c2: "<< c2 << "; c3: " << c3 << endl;
	cout << "c1(%): " << c1/mxVal << "; c2(%): " << c2/mxVal << "; c3(%): " << c3/mxVal << ";" << endl;

}
