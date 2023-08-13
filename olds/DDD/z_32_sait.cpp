#include <iostream>
#include <windows.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"RUS");
	char Name[20] = "\0";
	char lName[30] = "\0";
	char llName[30] = "\0";
	char Group[10] = "\0";
	int l = 31;
	int l_1 = 20 + strlen(Group);
	int l_2 = 6 + strlen(Name) + strlen(lName) + strlen(llName);
	
	cin >> Name;
	cin >> lName;
	cin >> llName;
	cin >> Group;
	
	if (l_1 >= l_2 && l_1 > 31){
		l = l_1;
	} else if (l_2 > 31){
		l = l_2;
	}
	cout << "\n\t\t\t";
	for(int a = 0; a < l; a++){
		cout << "*";
	}
	cout << "\n\t\t\t* Лабораторная работа №1";
	for(int a = 0; a < l - 25; a++){
		cout << " ";
	} 
	cout << "*\n\t\t\t* Выполнил(а): ст. гр. " << Group;
	for(int a = 0; a <= (l-l_1);a++) {
		cout << " ";
	}
	cout << "*\n\t\t\t*" << Name << " " << lName << " " << llName;
	for(int a = 0; a <= (l-l_2);a++){
		cout << " ";
	}
	cout << "*";
	cout << "\n\t\t\t";
	for(int a = 0; a < l; a++){
		cout << "*";
	}
	cout << endl;
	return 0;
}
