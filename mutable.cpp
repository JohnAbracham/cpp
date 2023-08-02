/******************************************************************************
Пробная программа с параметром mutable
*******************************************************************************/

#include <iostream>

using namespace std;

class iFoo{
    // const позволяет только считывать данные
    virtual int getV() const = 0;
    virtual void setV(int ) const = 0;
};

class Foo: public iFoo{
    
    private:
        // Добавляя mutable позволяет изменять эту переменную в const-тном методе
        mutable int x;
    
    public:
    
        int getV() const override {
            return this->x;
        }
        
        void setV(int a) const override{
            this->x = a;
        }
    
};

int main()
{
    
    setlocale(LC_ALL,"ru_RU.UTF-8");
    
    cout << "\n";
    
    int a = 10;
    
    Foo f;
    cout << "Get value -> " << f.getV() << endl;
    cout << "Set value x = 10 " << endl;
    f.setV(a);
    cout << "Get value -> " << f.getV() << endl;

    return 0;
}
