#include <iostream>
using namespace std;

// (� + b � f / �) + f * a * a � (a + b)

int main(){
	setlocale(LC_ALL, "RUS");
	int a,b,f;
	cout << "����� ������� ���������� a,b � f\n";
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "f = ";
	cin >> f;
	cout << "������ �� ������� (� + b � f / �) + f * a * a � (a + b)\n";
	cout << "�������� �����: "<< ((a+b-f/a)+f*a*a-(a+b)) << endl;
	return 0;
}
