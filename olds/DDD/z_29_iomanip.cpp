#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	setlocale(LC_ALL,"RUS");
	cout.unsetf(ios::dec);//����� ������������
	cout.setf(ios::hex);// ���������� ��������������
	int a;
	cin >> a;
	cout << a << endl;
	return 0;
}
