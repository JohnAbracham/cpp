/*
Как найти время работы программы (1)
*/

#include <iostream>
#include <ctime>

using namespace std;

int main(){

	unsigned int s_time = clock();

	int a;

	for(int i = 0; i < 10000; i++){
		a += (1+rand()%100) + i; 
	}

	unsigned int e_time = clock();
	unsigned int se_time = e_time - s_time;

	cout <<"time busy is: " << se_time << endl;
}
