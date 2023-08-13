#include <iostream>
#include <math.h>
using namespace std;
 
int main(int argc, char* argv[])
{
	cout << sizeof(bool) << endl;
	cout << sizeof(char)<< endl;
	cout << sizeof(short int)<< endl;
	cout << sizeof(int)<< endl;
	cout << sizeof(long int)<< endl;
	cout << sizeof(float)<< endl;
	cout << sizeof(double)<< endl;
	cout << endl;
	cout << pow(2,sizeof(bool)*8) << endl;
	cout << pow(2,sizeof(char)*8)<< endl;
	cout << pow(2,sizeof(short int)*8)<< endl;
	cout << pow(2,sizeof(int)*8)<< endl;
	cout << pow(2,sizeof(long int)*8)<< endl;
	cout << pow(2,sizeof(float)*8)<< endl;
	cout << pow(2,sizeof(double)*8)<< endl;
    system("pause");
    return 0;
}
