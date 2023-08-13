#include <iostream>
#include <windows.h>

using namespace std;

void PostrTreug(char cr, int width, int height){
	int pos;
	for (int i = 1; i <=height;i++){
		for (int j = 1; j <=width;j++){
			if(j==(width/2+1+pos)||j==(width/2+1-pos)){
				cout<<cr;
			}else {
				cout<<" ";
			}
		}
		cout<<endl;
		if(i<height/2+1)pos++;
		else pos--;
	}
}

int main(){
	SetConsoleOutputCP(1251);
	char a0,a1,a2,got; 
	a0 = '*';
	a1 = '+';
	a2 = '#';
	int t,wi,he;
	k:cout << "Введи число от 1 до 3\n";
	cin >> t;
	if(t < 0 || t > 3){
		cout << "Ты что себе позволяешь, черть?!\n";
		goto k;
	}
	
	switch(t){
		case 1:{
			got = a0;
			break;
		}
		case 2:{
			got = a1;
			break;
		}
		case 3:{
			got = a2;
			break;
		}
	}
	
	h:cout << "Введи нечетное число, но не большое(высота)\n";
	cin >> wi;
	if(wi < 0 || wi > 99){
		cout << "Ты что себе позволяешь, черть?!\n";
		goto h;
	}
	w:cout << "Введи нечетное число, но не большое(ширина)\n";
	cin >> he;
	if(he < 0 || he > 99){
		cout << "Ты что себе позволяешь, черть?!\n";
		goto w;
	}
	PostrTreug(got,wi,he);
	system("pause");
	return 0;
}
