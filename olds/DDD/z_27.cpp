#include <iostream>
using namespace std;

void Final(int value){
	switch(value){
		case 0:{
			cout << "You are loser!";
			break;
		}
		case 1:{
			cout << "Ты шутишь что ли?";
			break;
		}
		case 2:{
			cout << "Ну давай, хвастайся!";
			break;
		}
		case 3:{
			cout << "Жму вам руку, господин!";
			break;
		}
	}
}

int main(){
	setlocale(LC_ALL,"RUS");
	int count, answer;
	h:cout << "Солько я ждал?\n";
	cout << "answer\n";
	cout << "\t1 - 1\n \t2 - 5\n \t3 - 3\n \t4 - 7\n";
	cin >> answer;
	if (answer > 4 || answer < 0 ){
		cout << "Ты что себе позволяешь, скотина?! Повторяй!\n";
		goto h;
	} else if (answer == 3){
		count += 1;
	}
	m:cout << "Сколько у кошек жизней?\n";
	cout << "answer\n";
	cout << "\t1 - 5\n \t2 - 7\n \t3 - 8\n \t4 - 9\n";
	cin >> answer;
	if (answer > 4 || answer < 0 ){
		cout << "Ты что себе позволяешь, скотина?! Повторяй!\n";
		goto m;
	} else if (answer == 4){
		count += 1;
	}
	k:cout << "Гоолубь - птица?\n";
	cout << "answer\n";
	cout << "\t1 - Да\n \t2 - Нет\n \t3 - Не знаю я!\n";
	cin >> answer;
	if (answer > 3 || answer < 0 ){
		cout << "Ты что себе позволяешь, скотина?! Повторяй!\n";
		goto k;
	} else if (answer == 1){
		count += 1;
	}
	Final(count);
	return 0;
}
