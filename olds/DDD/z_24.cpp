#include <iostream>
using namespace std;

void WriteNumber(int a){
	switch(a){
		case 1:{
			cout << "�����������";
			break;
		}
		case 2:{
			cout << "�������";
			break;
		}
		case 3:{
			cout << "�����";
			break;
		}
		case 4:{
			cout << "�������";
			break;
		}
		case 5:{
			cout << "�������";
			break;
		}
		case 6:{
			cout << "�������";
			break;
		}
		case 7:{
			cout << "�����������";
			break;
		}
		default: {
			cout << "��, ������� ��� ��������, ��� ����� ���� ����������?! ��� ��������� ����� ����������������?!";
			break;
		}
	}
}

int main(){
	setlocale(LC_ALL,"RUS");
	int i;
	cout << "1 - �����������\n";
	cout << "2 - �������\n";
	cout << "3 - �����\n";
	cout << "4 - �������\n";
	cout << "5 - �������\n";
	cout << "6 - �������\n";
	cout << "7 - �����������\n";
	cout << "������� �����: ";
	cin >> i;
	WriteNumber(i);
	return 0;
}
