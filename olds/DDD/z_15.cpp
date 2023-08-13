#include <iostream>
using namespace std;

int  main(){
	char arr[20];
	int a;
	cout << "Vvedi posledovatelno cifri:\n";
	cin >> arr;
	cout << "Vvedi poradkivii nomer cifri:\n";
	cin >> a;
	cout << "You chislo eto:" << arr[a-1] << endl;;
	return 0;
}
