/******************************************************************************
Адаптеры контейнеров - queue, priority_queue(очередь(list, deque), очередь с приоритетами(vector, deque))
*******************************************************************************/

#include <iostream>
#include <clocale>
#include <list>
#include <deque>

#include <queue>

using namespace std;

void f1(){
    queue<int, list<int>> qq;
    
    //auto a = qq._Get_container();
}

void f2(){
    priority_queue<int, vector<int>> pq; // Позволяет упорядочить данные
    
    pq.emplace(11);
    pq.emplace(43);
    pq.emplace(25);
    pq.emplace(678);
    pq.emplace(17);
    pq.emplace(92);
    pq.push(44);
    
    while(!pq.empty()){
        cout << pq.top() << endl;
        pq.pop();
    }
    
}

int main()
{
    
    setlocale(LC_ALL,"ru");
    
    //cout << "Привет мир!";
    
    queue<int> q;
    
    /*
    q.back();
    q.front();
    q.emplace(55);
    q.push(65);
    q.empty();
    q.pop();
    q.size();
    //Обмен содержимого контейнеров
    //q.swap();
    //Получить тип контейнер
    //q._Get_container();
    */
    
    q.emplace(11);
    q.emplace(43);
    q.emplace(25);
    q.emplace(678);
    q.emplace(17);
    q.emplace(92);
    q.push(44);
    
    //cout << q.front() << endl << q.back() << endl;
    
    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }
    
    cout << endl;
    
    f2();

    return 0;
}
