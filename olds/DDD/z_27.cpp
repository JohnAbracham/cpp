#include <iostream>
using namespace std;

void Final(int value){
	switch(value){
		case 0:{
			cout << "You are loser!";
			break;
		}
		case 1:{
			cout << "�� ������ ��� ��?";
			break;
		}
		case 2:{
			cout << "�� �����, ���������!";
			break;
		}
		case 3:{
			cout << "��� ��� ����, ��������!";
			break;
		}
	}
}

int main(){
	setlocale(LC_ALL,"RUS");
	int count, answer;
	h:cout << "������ � ����?\n";
	cout << "answer\n";
	cout << "\t1 - 1\n \t2 - 5\n \t3 - 3\n \t4 - 7\n";
	cin >> answer;
	if (answer > 4 || answer < 0 ){
		cout << "�� ��� ���� ����������, �������?! ��������!\n";
		goto h;
	} else if (answer == 3){
		count += 1;
	}
	m:cout << "������� � ����� ������?\n";
	cout << "answer\n";
	cout << "\t1 - 5\n \t2 - 7\n \t3 - 8\n \t4 - 9\n";
	cin >> answer;
	if (answer > 4 || answer < 0 ){
		cout << "�� ��� ���� ����������, �������?! ��������!\n";
		goto m;
	} else if (answer == 4){
		count += 1;
	}
	k:cout << "������� - �����?\n";
	cout << "answer\n";
	cout << "\t1 - ��\n \t2 - ���\n \t3 - �� ���� �!\n";
	cin >> answer;
	if (answer > 3 || answer < 0 ){
		cout << "�� ��� ���� ����������, �������?! ��������!\n";
		goto k;
	} else if (answer == 1){
		count += 1;
	}
	Final(count);
	return 0;
}
