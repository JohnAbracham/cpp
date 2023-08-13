#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
	setlocale(LC_ALL,"RUS");
	string fName,lName,llName,Group;
	cout << "¬ведите им€ стедента: ";
	cin >> fName;
	cout << "¬ведите фамили€ студента: ";
	cin >> lName;
	cout << "¬ведите отчество студента: ";
	cin >> llName;
	cout << "¬ведите номер группы студента: ";
	cin >> Group;
	
	cout << "\t\t***********************\n";
	cout << "\t\t* Ћабораторна€работа є1\t" << "*\n";
	cout << "\t\t* ¬ыполнил(а): ст. гр. " << Group << " *\n";
	cout << "\t\t* " << fName << " " << lName << " " << llName << "\t\n";
	cout << "\t\t***********************\n";
	return 0;
}
