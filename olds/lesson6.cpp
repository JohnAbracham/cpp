/*
Операции присваивания
*/
#include <iostream>

int main(int argc,char* argv[]){

	int value = 256;
	std::cout << "value = " << value << std::endl;
	value += 256;
	std::cout << "value += 256 --> " << value << std::endl;
	value -= 256;
	std::cout << "value -= 256 --> " << value << std::endl;
	value *= 2;
	std::cout << "value *= 2 --> " << value << std::endl;
	value /= 8;
	std::cout << "value /= 8 -->" << value << std::endl;
	system("pause");
	return 0;
}
