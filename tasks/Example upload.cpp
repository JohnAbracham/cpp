#include <iostream>

using namespace std;

class First{
    public:
        
        void SetValue(int a){
            this->a = a;
        }
        
        int GetValue(){
            return this->a;
        }
        
    private:
        int a = 0;
};

int main()
{
    First fst;
    fst.SetValue(56);
    
    cout << "Hello World" << endl;
    cout << "Your get value is " << fst.GetValue() << endl;

    return 0;
}
