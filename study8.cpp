/******************************************************************************
ООП - наследование, виртуальные методы
*******************************************************************************/

#include <iostream>
#include <clocale>
#include <string>

using namespace std;

//Создание класса
class Parent{
    protected:
    
        string name;
        
    public:
        
        //Переменная для подсчета объектов
        static int number;
        
        //Конструктор
        Parent(string nm): name(nm){
            number++;
            cout << "[+] Class ADD "<< name <<"!\n";
        }
        
        //Метод для вывода обычного сообщения
        virtual void MSG(){
            cout << "Hello world! I'm original!\n";
        }
        
        //Метод для вывода введеного текста
        virtual void sMSG(string text){
            cout << "This is your text(ORIGINAL): [" << text <<"];" << endl;
        }
        
        //Метод для вывода какого-либо значения
        virtual int iMSG(int a, int b) const{
            return a+b;
        }
        
        ~Parent(){
           cout << "[+] Class DEL " << name <<"!" << " [" << number << "] " << "\n";
           number--;
        }
};

class Child : public Parent{
        
        
    public:
        
        Child(): Parent("CHILD") {}   
        
        //Метод для вывода обычного сообщения
        void MSG() override {
            cout << "Hello world! I'm child! - YES!\n";
        }
        
        void sMSG(string text) override {
            cout << "This is your text( " << name << " ): [" << text <<"];" << endl;
        }
        int iMSG(int a,int b) const override {
            return a*b;
        }         

};


int Parent::number = 0;

int main()
{
    
    setlocale(LC_ALL,"ru_RU.UTF-8");
    
    //Создаем оригинальный класс
    Parent par("ORIGINAL");
    par.MSG();
    par.sMSG("Hello wolrd!");
    cout << "Возвращаемое значение равно: " << par.iMSG(10,20) << endl;
    
    cout << endl;
    
    Child ch;
    ch.MSG();
    ch.sMSG("Just text!");
    cout << "Возвращаемое значение равно: " << ch.iMSG(10,20) << endl;
    
    cout << endl;

    return 0;
}
