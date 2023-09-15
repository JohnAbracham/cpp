/******************************************************************************
deque stl - двухсторонняя очередь(похож на вектор+двухсвязный список)
динамически выделяемая память(vector) + ссылки на прошлый и будущий элементы(list)
+push_back
+push_front
+at
+[n]
+динамически выделяемая память
*******************************************************************************/

#include <iostream>
#include <clocale>
#include <deque>

using namespace std;

void f1(deque<int>& deq){
    for(int i = 0; i < deq.size(); i++){
        cout << "[" << i << "]: " << deq.at(i) << endl;
    }
}

void f2(deque<int>& deq){
    int i = 0;
    for(auto it : deq){
        cout << "[" << i << "]: " << deq.at(i) << endl;
        i++;
    }
}

void f3(deque<int>& deq){
    int i = 0;
    for(const deque<int>::const_iterator it = deq.cbegin(); it < deq.cend();++i){
        if(i == deq.size()){
            break;
        } else {
        cout << "[" << i << "]: " << *it << endl;
        i++;
        }
    }
}

int main()
{
    
    setlocale(LC_ALL,"ru");
    
    //cout << "Привет мир!";
    
    deque<int> dq = {1,2,3};
    
    //Занести значение вконец
    dq.push_back(25);
    dq.push_back(36);
    dq.push_back(14);
    dq.push_back(58);
    dq.push_back(69);
    dq.push_back(47);
    
    //Занести значение вначало
    dq.push_front(96);
    dq.push_front(85);
    dq.push_front(74);
    dq.push_front(52);
    dq.push_front(63);
    dq.push_front(41);
    
    //Высети n-ный элемент
    cout << dq[4] << endl;
    cout << dq.at(5) << endl;
    
    //Вывести список всех элементов
    cout << "Просто for" << endl;
    
    f1(dq);
    
    cout << "Другой for(более простой)" << endl;
    
    f2(dq);
    
    cout << "Используя итератор" << endl;
    
    //Почему-то выводит бесконечный цикл
    //f3(dq);

    return 0;
}
