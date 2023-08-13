//Квалификатор const
//Ошибка при вполнении - нельзя присовить константе новое значение


#include <iostream>

int main(){
	
	const int a = 10;
	int b = 10;

	if(a=11){
		std::cout << "Err" << std::endl;
	} else {
		std::cout << "Not err" << std::endl;
	}

	if(b=5){
		std::cout << "Err" << std::endl;
	} else {
		std::cout << "Not err" << std::endl;
	}
	return 0;
}
