/*
Массивы
*/

#include <iostream>

using namespace std;

int main(){
	
	int a[10], b[10];
	int c[10] = {5,8,33,66,83,69,14,99,31,23};
	int d[] = {1,2,3,4,5,6,7,8,9,10};

	for(int i = 0; i < 10; i++){
		cout << "a[" << i << "] = " << a[i] << endl;
		cout << "c[" << i << "] = " << c[i] << endl;
		cout << "d[" << i << "] = " << c[i] << endl;
	}
	return 0;
}
