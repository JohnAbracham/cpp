/******************************************************************************
Свой умный указатель?
*******************************************************************************/

#include <iostream>
#include <clocale>

using namespace std;

template<typename T>
class MyPtr{
  
  private:
    
    //Создать ссылку 
    T *ptr;
  
  public:
  
  
  //Конструктор
  MyPtr(T *ptr){
      this->ptr = ptr;
      cout << "[+] Constructor\n"; 
  }
  
  T& operator * (){
      return *ptr;
  }
  
  //Деструктор
  ~MyPtr(){
      delete ptr;
      cout << "[-] Destructor(memory free)\n";
  }
    
};


int main()
{
    
    setlocale(LC_ALL,"ru-RU.UTF-8");
    
    
    
    MyPtr<int> a = new int(10);
    
    *a = 5684;
    
    cout << "Value a is " << *a << endl;
    
    //cout<<"Привет мир!";
    
    //cin.get();

    return 0;
}
