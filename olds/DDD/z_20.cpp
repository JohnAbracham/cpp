#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"RUS");
	int a,b;
	cout << "����� ����� 1 - ";
	cin >> a;
	cout << "����� ����� 2 - ";
	cin >> b;
	if(a > b){
		cout << "����� 1 ������ ����� 2";
	} else if (b > a){
		cout << "����� 2 ������ ����� 1";
	} else {
		cout << "����� ���������";
	}
	return 0;
}
