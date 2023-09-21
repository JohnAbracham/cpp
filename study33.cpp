/******************************************************************************
Адаптеры контейнеров, stack
Стек - первый вошел, последний вышел... Так же она не самостоятельная и используется совместно с
другими STL шаблонами
*******************************************************************************/

#include <iostream>
#include <clocale>
#include <string>
#include <vector>
#include <list>
#include <deque>
#include <stack>

using namespace std;

//Создать стек с контейнером определенного типа
void f1(){
    stack<int,list<int>> ss;
    
    //Не работает в онлайн компиляторе(должна возвращать какой контейнер 
    //используется и к нему можно обращаться соответствующе)
    //auto aa = st._Get_container();
    
}

int main()
{
    
    setlocale(LC_ALL,"");
    
    //cout << "Привет мир!";
    
    stack<int> st;
    
    //st.size();
    //st.empty();
    
    //Добавить элементы в стек
    st.push(25);
    st.push(415);
    st.push(89);
    st.push(69);
    st.push(85);
    
    st.emplace(88);
    st.emplace(56);
    st.emplace(64);
    
    //Извлечение элементов из стека
    st.pop();
    int a = st.top();
    
    cout << a << endl;
    
    cout << endl;
    
    //Посмотреть какие элементы в стеке
    stack<int> st1 = st;
    
    while(!st1.empty()){
        cout << st1.top() << endl;
        st1.pop();
    }
    
    //Не работает в онлайн компиляторе(должна возвращать какой контейнер 
    //используется и к нему можно обращаться соответствующе)
    //auto aa = st._Get_container();
    
    f1();

    return 0;
}
