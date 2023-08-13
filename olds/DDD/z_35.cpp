// Запись данных в файл

#include <iostream>
#include <fstream>

using namespace std;

int main(){
	setlocale(LC_ALL,"rus");
	ofstream file("text.txt");
	file << "Work file";
	file.close();
	return 0;
}
