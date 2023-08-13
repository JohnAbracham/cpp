/*
Создание динамических массивов
float *ptrarray = new float [10];
delete [] ptrarray;
*/

#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int main(int argc, char* argv[]){

	srand(time(0));
	float *ptrarray = new float [10];
	for(int count = 0; count < 10; count++)
		ptrarray[count] = (rand()%10+1)/float(rand()%10+1);
	cout << "array = ";
	for(int count = 0; count < 10; count++)
		cout << setprecision(2) << ptrarray[count] << "    ";
	delete [] ptrarray;
	cout << endl;
	return 0;
}

