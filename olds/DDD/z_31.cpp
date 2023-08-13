#include <iostream>
#include <locale>
using namespace std;

int main(){
	char chLetter('a');
	setlocale(LC_ALL,"RUS");
	cin >> chLetter;
	cout << char(chLetter - 32);
	return 0;
}
