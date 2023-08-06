/******************************************************************************
Задача сделать чтобы программа выводила нечто подобное:
   *   
  ***
 *****
*******
 *****
  ***
   * 
*******************************************************************************/

#include <iostream>
#include <string>
#include <clocale>

using namespace std;

// Интерфейс класса
class iFoo{
    // Основная функция
    virtual void fill(int , char) = 0;
    // получить значения переменных
    virtual void getVal() = 0;
};

// Основной класс
class Foo : public iFoo{
    
    public:
        // Выбор символа заливки
        char symb;
        // Кол-во пробелов
        int numSpace;
        // Кол-во символов
        int numChar;
        // Общее Кол-во
        int number;
        // Кол-во строк
        int numRow;
        
    
        void fill(int num, char ch) override {
            cout << "[+] DRAW\n";
            // Задачть общее кол-во
            number = num;
            symb = ch;
            // Если число четное
            if(num % 2 == 0){
            
                numRow = num/2;
                
                for(int i = 0; i < numRow; i++){
                    
                    for(int j = 0; j < numRow - i - 1; j++){
                        cout << "+";
                    }
                    
                    for(int j = 0; j < 2 * i + 1; j++){
                        cout << symb;
                    }
                    
                    for(int j = 0; j < numRow - i - 1; j++){
                        cout << "+"; 
                    }
                    
                    cout << endl;                    
                    
                }
                
                for (int i = numRow-1; i > -1; i--){
                    
                    for(int j = 0; j < numRow - i - 1; j++){
                        cout << "+";
                    }
                    
                    for(int j = 0; j < 2 * i + 1; j++){
                        cout << symb;
                    }
                    
                    for(int j = 0; j < numRow - i - 1; j++){
                        cout << "+"; 
                    }
                    
                    cout << endl;
                
                    
                }
            
            // Если число нечетное    
            } else {
                
                numRow = (int)num/2;
                
                for(int i = 0; i < numRow; i++){
                    
                    for(int j = 0; j < numRow - i - 1; j++){
                        cout << "-";
                    }
                    
                    for(int j = 0; j < 2 * i + 1; j++){
                        cout << symb;
                    }
                    
                    for(int j = 0; j < numRow - i - 1; j++){
                        cout << "-"; 
                    }
                    
                    cout << endl;
                }
                
                for (int i = numRow-1; i > -1; i--){
                    
                    for(int j = 0; j < numRow - i - 1; j++){
                        cout << "-";
                    }
                    
                    for(int j = 0; j < 2 * i + 1; j++){
                        cout << symb;
                    }
                    
                    for(int j = 0; j < numRow - i - 1; j++){
                        cout << "-"; 
                    }
                    
                    cout << endl;                    
                        
                }
                
            }
        }
        
        void getVal() override{
            cout << "numSpace = " << numSpace << ", numChar = " << numChar << endl;
        }
        
}; 

int main()
{
    
    setlocale(LC_ALL,"ru_RU.UTF-8");
    
    cout << (int)11/2;
    
    Foo f;
    f.fill(20, 'X');
    f.getVal();

    return 0;
}
