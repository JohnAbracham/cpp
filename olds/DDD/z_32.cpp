#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
	setlocale(LC_ALL,"RUS");
	string fName,lName,llName,Group;
	cout << "������� ��� ��������: ";
	cin >> fName;
	cout << "������� ������� ��������: ";
	cin >> lName;
	cout << "������� �������� ��������: ";
	cin >> llName;
	cout << "������� ����� ������ ��������: ";
	cin >> Group;
	
	cout << "\t\t***********************\n";
	cout << "\t\t* ������������������ �1\t" << "*\n";
	cout << "\t\t* ��������(�): ��. ��. " << Group << " *\n";
	cout << "\t\t* " << fName << " " << lName << " " << llName << "\t\n";
	cout << "\t\t***********************\n";
	return 0;
}
