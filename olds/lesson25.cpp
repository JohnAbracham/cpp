/*
Цикл while
*/

#include <iostream>

using namespace std;

int main(int argc,char* argv[]){

	srand(time(0));
	int mxVal;
	cout << "Enter max value: " << endl;
	cin >> mxVal;
	int unknw = 1+ rand() % mxVal;
	
	int wrtNmbr;
	cout << "Enter number from 0 to " << mxVal << "; " << endl;
	cin >> wrtNmbr;

	while(wrtNmbr != unknw){
		cout << "Enter unknw number from 0 to " << mxVal << "; " << endl;
		cin >> wrtNmbr;
	}
	
	cout << "You win!!!" << endl;
	system("pause");
	return 0;
	
}
