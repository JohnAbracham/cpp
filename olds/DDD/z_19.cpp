#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"RUS");
	int a,a1;
	cout << "\t\t����� ����� ���������� �����\n";
	cout << "����� - ";
	cin >> a;
	a1=a%100;
	if(a/100 == a1/10 || a/100 == a1%10 || a1/10==a1%10){
		cout << "���� ���������� �����";
	}
	return 0;
}
