#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "RUS");
	int a;
	cout << "����� ����� ����������� ����� �����: ";
	cin >> a;
	if(a/10>a%10){
		cout << "������� ����� " << a/10 << "\n";
		cout << "������� ����� " << a%10 << "\n";
	} else if(a/10 < a%10) {
		cout << "������� ����� " << a%10 << "\n";
		cout << "������� ����� " << a/10 << "\n";
	} else {
		cout << "����� �����!";
	}
	return 0;
}

