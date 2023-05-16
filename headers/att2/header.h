#pragma once

//Конструктор класса

template<typename T>
class Player{
    
    public:
    
    Player(T val);
    T GetValue();
    void PrintText();
    
    private:
    
    T m_value;
    
};

// Его реализация

template<typename T>
Player<T>::Player(T val) : m_value(val) {
    // Конструктор класса    
}

template<typename T>
T Player<T>::GetValue(){
    return this->m_value;
}

template<typename T>
void Player<T>::PrintText(){
    std::cout << "Just print text! It's simply!" << std::endl;
}

