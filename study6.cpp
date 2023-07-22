/******************************************************************************
Массивы + vector
*******************************************************************************/

#include <iostream>
#include <clocale>
#include <vector> // Вектор
#include <array> // Безопасный массив
#include <deque> // Двусторонняя очередь
#include <list> //Список
#include <set> //Упорядоченное множество
#include <unordered_set> // Неупорядоченное множество
#include <map> // Упорядоченный ассоциативный массив
#include <unordered_map> // Неупорядоченный ассоциативный массив
#include <stack> //Стек
#include <queue> //Очередь
#include <bitset> // Битовое множество

using namespace std;

// Двусторонняя очередб
void dequeMSG();
//Список
void listMSG();
//Множества
void setMSG();
//Ассоциативный массив
void mapMSG();
//Стек
void stackMSG();
//Очередь
void queueMSG();
//Битовое множество
void bitsetMSG();

int main()
{
    setlocale(LC_ALL,"ru_RU.UTF-8");
    
    // Простое объявление массива
    int arr1[5];
    arr1[0] = 1;
    arr1[1] = 2;
    arr1[2] = 3;
    arr1[3] = 4;
    arr1[4] = 5;
    
    //Объяявление массива и его инициализация
    float arr2[5] = {1,2.4,3.7,8.9,11.3};
    
    //Получение элемента массива
    arr1[2] = int(arr2[3]);
    
    //Доступ к элементу массива через указатель(в указателе сохраняется ссылка на начало массива)
    int arr3[5] = {10,20,30,40,50};
    int *ptr = arr3;
    
    //Создание массива через вектор
    vector<float> arr4 = {44,25.6,12.6,13.7,89.5};
    
    //Создание массива через std::array
    array<int , 5> arr5 = {1,2,3,4,5};
    
    // Вывод элементов массива 1
    cout << "Вывод массива 1\n";
    for(int a = 0; a < 5; a++){
        cout << "arr[" << a << "] = " << arr1[a] << endl;
    }
    
    cout << endl;
    
    // Вывод элементов массива 2
    cout << "Вывод массива 2\n";
    for(int a = 0; a < 5; a++){
        cout << "arr2[" << a << "] = " << arr2[a] << endl;
    }
    
    cout << endl;
    
    // Вывод элементов массива 3 (ссылка)
    cout << "Вывод массива 3 (ссылка)\n";
    for(int a = 0; a < 5; a++){
        cout << "arr3[" << a << "] = " << *(ptr + a) << endl;
    }
    
    cout << endl;
    
    // Вывод элементов массива 4 (вектор)
    cout << "Вывод массива 4 (вектор)\n";
    for(int a = 0; a < arr4.size(); a++){
        cout << "arr4[" << a << "] = " << arr4[a] << endl;
    }
    
    cout << endl;
    
    //Изменяем элемент массива вектора и выводим
    arr4.insert(arr4.begin(), 11.1); // Вставить в начало элемент
    arr4.insert(arr4.begin() + 2, 22.2); // Заменть элемент под индексом 2
    arr4.push_back(77.5); // Вставить в конец элемент
    
    cout << "Вывод массива 4 (вектор) с его изменениями\n";
    for(const auto& i : arr4){
        cout << "arr4 = " << i << ";" << endl;
    }
    
    cout << endl;
    
    //Вывод элементов массива 5
    cout << "Вывод массива 5 (array)\n";
    for(int i = 0; i < arr5.size(); i++){
        cout << "arr5[" << i << "] = " << arr5[i] << endl;
    }
    
    cout << endl;
    
    //Вывод элементов массива 5
    cout << "Вывод массива 5 (array) поэлементно\n";
    for(const auto& i : arr5){
        cout << "arr5 = " << i << ";\n";
    }
    
    cout << endl;
    
    //Чисто попробовать с другими массивами
    cout << "Чисто попробовать вывести поэлементно обычный массив(2)" << endl;
    for(const auto& i : arr2){
        cout << "arr2 = " << i << ";\n";
    }
    
    cout << endl;
    
    //Прочие реализации с массивами
    void dequeMSG();
    
    cout << endl;
    
    void listMSG();
    
    cout << endl;
    
    setMSG();
    
    cout << endl;
    
    mapMSG();
    
    cout << endl;
    
    stackMSG();
    
    cout << endl;
    
    queueMSG();
    
    cout << endl;
    
    bitsetMSG();
    
    cout << endl;

    return 0;
}

void dequeMSG(){
    cout << "Двусторонняя очередь\n";
    std::deque<int> deque1 = {33,44};
    
    //Добавить вначало и вконец
    deque1.push_front(1);
    deque1.push_back(deque1.size() + 1 );
    
    //Получение элемента с начала и конца
    int bgn = deque1.front();
    int end = deque1.back();
    
    //Перебор по массиву
    for(deque<int>::iterator it = deque1.begin(); it != deque1.end(); ++it) {
        cout << "deque " << *it << "\n";
    }
    
    //Удаление вначале и вконце
    deque1.pop_front();
    deque1.pop_back();
    
    //Проверка наличия элементов
    bool isEmpty = deque1.empty();
}

//Список
void listMSG(){
    cout << "Список\n";
    
    std::list<int> myList;

    // Добавление элементов в список
    myList.push_back(1); // Добавляем элемент в конец списка
    myList.push_back(2);
    myList.push_front(3); // Добавляем элемент в начало списка

    // Получение первого и последнего элементов списка
    int frontElement = myList.front(); // Получаем первый элемент (значение будет 3)
    int backElement = myList.back();   // Получаем последний элемент (значение будет 2)

    // Вставка элемента после определенного элемента
    std::list<int>::iterator it = myList.begin();
    std::advance(it, 1); // Перемещаем итератор на второй элемент (индекс 1)
    myList.insert(it, 4); // Вставляем элемент со значением 4 после второго элемента

    // Удаление элемента из списка
    myList.pop_front(); // Удаляем первый элемент (значение 3)
    myList.erase(myList.begin()); // Удаляем первый элемент (значение 1)
    myList.pop_back(); // Удаляем последний элемент (значение 2)

    // Проверка наличия элементов в списке
    bool isEmpty = myList.empty();
    std::cout << "Is myList empty? " << (isEmpty ? "Yes" : "No") << std::endl; // Вывод: Yes

    // Перебор элементов с помощью итераторов
    for (std::list<int>::iterator it = myList.begin(); it != myList.end(); ++it) {
        std::cout << *it << " ";
    }
    
}

//Множество
void setMSG(){
    cout << "Множество\n";
    
    // Пример работы с std::set (упорядоченное множество)

    std::set<int> mySet;

    // Вставка элементов в множество
    mySet.insert(3);
    mySet.insert(1);
    mySet.insert(2);
    mySet.insert(3); // Дубликаты не будут добавлены, так как set хранит только уникальные значения

    // Перебор элементов множества с помощью итератора
    std::cout << "Elements in std::set: ";
    for (const auto& element : mySet) {
        std::cout << element << " ";
    }
    // Вывод: 1 2 3

    // Проверка наличия элемента в множестве
    int valueToFind = 2;
    bool isPresent = mySet.find(valueToFind) != mySet.end();
    std::cout << "\nIs " << valueToFind << " present in std::set? " << (isPresent ? "Yes" : "No") << std::endl;
    // Вывод: Yes

    // Пример работы с std::unordered_set (неупорядоченное множество)

    std::unordered_set<int> myUnorderedSet;

    // Вставка элементов в неупорядоченное множество
    myUnorderedSet.insert(3);
    myUnorderedSet.insert(1);
    myUnorderedSet.insert(2);
    myUnorderedSet.insert(3); // Дубликаты не будут добавлены, так как unordered_set хранит только уникальные значения

    // Перебор элементов неупорядоченного множества с помощью итератора
    std::cout << "Elements in std::unordered_set: ";
    for (const auto& element : myUnorderedSet) {
        std::cout << element << " ";
    }
    // Вывод: 1 2 3 (порядок может отличаться)

    // Проверка наличия элемента в неупорядоченном множестве
    int valueToFindUnordered = 2;
    bool isPresentUnordered = myUnorderedSet.find(valueToFindUnordered) != myUnorderedSet.end();
    std::cout << "\nIs " << valueToFindUnordered << " present in std::unordered_set? " << (isPresentUnordered ? "Yes" : "No") << std::endl;
    // Вывод: Yes
    
}

//Ассоциативный массив
void mapMSG(){
    cout << "Ассоциативный массив\n";
    
    // Пример работы с std::map (упорядоченный ассоциативный массив)

    std::map<std::string, int> myMap;

    // Вставка элементов в map
    myMap["apple"] = 3;
    myMap["banana"] = 2;
    myMap["orange"] = 5;
    myMap["apple"] = 4; // Перезаписываем значение для ключа "apple"

    // Перебор элементов map с помощью итератора
    std::cout << "Elements in std::map: ";
    for (const auto& pair : myMap) {
        std::cout << pair.first << ":" << pair.second << " ";
    }
    // Вывод: apple:4 banana:2 orange:5

    // Проверка наличия ключа в map
    std::string keyToFind = "banana";
    bool isPresent = myMap.find(keyToFind) != myMap.end();
    std::cout << "\nIs " << keyToFind << " present in std::map? " << (isPresent ? "Yes" : "No") << std::endl;
    // Вывод: Yes

    // Пример работы с std::unordered_map (неупорядоченный ассоциативный массив)

    std::unordered_map<std::string, int> myUnorderedMap;

    // Вставка элементов в неупорядоченный map
    myUnorderedMap["apple"] = 3;
    myUnorderedMap["banana"] = 2;
    myUnorderedMap["orange"] = 5;
    myUnorderedMap["apple"] = 4; // Перезаписываем значение для ключа "apple"

    // Перебор элементов неупорядоченного map с помощью итератора
    std::cout << "Elements in std::unordered_map: ";
    for (const auto& pair : myUnorderedMap) {
        std::cout << pair.first << ":" << pair.second << " ";
    }
    // Вывод: orange:5 apple:4 banana:2 (порядок может отличаться)

    // Проверка наличия ключа в неупорядоченном map
    std::string keyToFindUnordered = "banana";
    bool isPresentUnordered = myUnorderedMap.find(keyToFindUnordered) != myUnorderedMap.end();
    std::cout << "\nIs " << keyToFindUnordered << " present in std::unordered_map? " << (isPresentUnordered ? "Yes" : "No") << std::endl;
    // Вывод: Yes
    
}

//Стек
void stackMSG(){
    cout << "Стек\n";
    
    std::stack<int> myStack;

    // Добавление элементов в стек
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    // Получение верхнего элемента стека (последний добавленный элемент)
    int topElement = myStack.top(); // Получаем значение верхнего элемента (значение будет 3)

    // Размер стека
    std::cout << "Size of myStack: " << myStack.size() << std::endl; // Вывод: 3

    // Удаление верхнего элемента стека
    myStack.pop(); // Удаляем верхний элемент (значение 3)

    // Проверка, пуст ли стек
    bool isEmpty = myStack.empty();
    std::cout << "Is myStack empty? " << (isEmpty ? "Yes" : "No") << std::endl; // Вывод: No

    // Перебор элементов стека
    std::cout << "Elements in myStack: ";
    while (!myStack.empty()) {
        std::cout << myStack.top() << " ";
        myStack.pop();
    }
    // Вывод: 2 1 (обратный порядок, так как стек работает по принципу LIFO)
    
}

//Очередь
void queueMSG(){
    cout << "Очередь\n";
    
     std::queue<int> myQueue;

    // Добавление элементов в очередь
    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);

    // Получение верхнего элемента очереди (первый добавленный элемент)
    int frontElement = myQueue.front(); // Получаем значение верхнего элемента (значение будет 1)

    // Размер очереди
    std::cout << "Size of myQueue: " << myQueue.size() << std::endl; // Вывод: 3

    // Удаление верхнего элемента очереди
    myQueue.pop(); // Удаляем верхний элемент (значение 1)

    // Проверка, пуста ли очередь
    bool isEmpty = myQueue.empty();
    std::cout << "Is myQueue empty? " << (isEmpty ? "Yes" : "No") << std::endl; // Вывод: No

    // Перебор элементов очереди
    std::cout << "Elements in myQueue: ";
    while (!myQueue.empty()) {
        std::cout << myQueue.front() << " ";
        myQueue.pop();
    }
    // Вывод: 2 3 (порядок, так как очередь работает по принципу FIFO)
    
}

//Битовое множество
void bitsetMSG(){
    cout << "Битовое множество\n";
    
    // Создаем объект bitset с 8 битами
    std::bitset<8> myBitset;

    // Установка значений битов
    myBitset.set(0, 1); // Устанавливаем первый бит в 1
    myBitset.set(3);    // Устанавливаем четвертый бит в 1 (по умолчанию значение 1)

    // Получение значения бита
    bool bitValue = myBitset.test(3); // Получаем значение четвертого бита (значение будет true)

    // Вывод битов
    std::cout << "myBitset: " << myBitset << std::endl; // Вывод: 1001

    // Количество установленных битов (значение 1)
    std::cout << "Number of set bits: " << myBitset.count() << std::endl; // Вывод: 2

    // Проверка, пустой ли набор битов
    bool isEmpty = myBitset.none();
    std::cout << "Is myBitset empty? " << (isEmpty ? "Yes" : "No") << std::endl; // Вывод: No

    // Инвертирование всех битов
    myBitset.flip();

    // Вывод битов после инвертирования
    std::cout << "myBitset after flip: " << myBitset << std::endl; // Вывод: 0110

    // Проверка наличия хотя бы одного установленного бита (значение 1)
    bool anySet = myBitset.any();
    std::cout << "Is any bit set? " << (anySet ? "Yes" : "No") << std::endl; // Вывод: Yes

    
}

