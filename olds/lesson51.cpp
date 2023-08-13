/*
Стурктуры
*/

#include <iostream>

using namespace std;

struct playerPar{
	char *name;
	char *skill;
	int age;
};

int main(){

	playerPar p1;
	p1.name = "Johh";
	p1.skill = "158Wh";
	p1.age = 52;

	cout << "Name: " << p1.name << "; Skill: " << p1.skill << "; age: " << p1.age << endl;

	return 0;
}
