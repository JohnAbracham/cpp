/******************************************************************************
Задача из chatGTP
Создайте класс BankAccount, который представляет банковский счет с функциональностью по управлению счетом. Класс должен иметь следующие свойства и методы:

Свойства:

    accountNumber (тип std::string): хранит номер счета.
    accountHolderName (тип std::string): хранит имя владельца счета.
    balance (тип double): хранит текущий баланс счета.

Методы:

    Конструктор: создает объект с заданным номером счета и именем владельца, начальным балансом 0.
    getAccountNumber(): возвращает номер счета.
    getAccountHolderName(): возвращает имя владельца счета.
    getBalance(): возвращает текущий баланс счета.
    deposit(double amount): позволяет внести деньги на счет (увеличивает баланс на указанную сумму).
    withdraw(double amount): позволяет снять деньги со счета (уменьшает баланс на указанную сумму).
    displayAccountDetails(): выводит информацию о счете, включая номер счета, имя владельца и текущий баланс.
    
    
 + я реализую это через интерфейс
*******************************************************************************/

#include <iostream>
#include <string>
#include <clocale>

using namespace std;

class iBankAccount{
    public:
        virtual string getAccountNumber() const = 0; // возвращает номер счета.
        virtual string getAccountHolderName() const = 0; // возвращает имя владельца счета.
        virtual double getBalance() const = 0; // возвращает текущий баланс счета.
        virtual void deposit(double amount) const = 0; // позволяет внести деньги на счет (увеличивает баланс на указанную сумму).
        virtual void withdraw(double amount) const = 0; // позволяет снять деньги со счета (уменьшает баланс на указанную сумму).
        virtual void displayAccountDetails() const = 0; // выводит информацию о счете, включая номер счета, имя владельца и текущий баланс.
};

class BankAccount : public iBankAccount{
    private:
    
    string accountNumber; // хранит номер счета.
    string accountHolderName; // хранит имя владельца счета.
    mutable double balance; // хранит текущий баланс счета.
    static int numb;
    
    public:
        // Конструктор записывает основные данные
        BankAccount(string name, string account, double bal) : accountHolderName(name), accountNumber(account), balance(bal){
            numb++;
            cout << "[+] Создан счет на имя " << accountHolderName << ", со счетом " << accountNumber << " и балансом " << balance << endl;
            cout << "Номер в списке аккаунтов: " << numb << endl;
            
        }
        
        // возвращает номер счета.
        string getAccountNumber() const override {
            return accountNumber;    
        }
        
        // возвращает имя владельца счета.
        string getAccountHolderName() const override {
            return accountHolderName;
        }
        
        // возвращает текущий баланс счета.
        double getBalance() const override {
            return balance;
        }
        
        // позволяет внести деньги на счет (увеличивает баланс на указанную сумму).
        void deposit(double amount) const override {
            balance += amount;
            cout << "Ваш баланс теперь составляет " << balance << "(+" << amount << ")" << endl;
        }
        
        // позволяет снять деньги со счета (уменьшает баланс на указанную сумму).
        void withdraw(double amount) const override {
            
            if(balance >= amount) {
                balance -= amount;
                cout << "С вашего аккаунта было снято " << amount << "! " << endl;
                cout << "Ваш остаток составил : " << balance << endl;
            } else {
                cout << "На Вашем аккаунте недостаточно средств! Пожалуйста пополните баланс!\n";
            }
            
        }
        
        // выводит информацию о счете, включая номер счета, имя владельца и текущий баланс. 
        void displayAccountDetails() const override {
            cout << "Аккаунт на имя " << accountHolderName << ", со счетом " << accountNumber << " и балансом " << balance << endl;
        }      
    
    ~BankAccount(){
        cout << "[-] Удален счет на имя " << accountHolderName << ", со счетом " << accountNumber << ", балансом " << balance << " и номером " << numb-- << endl;
    }
    
};


int BankAccount::numb = 0;


int main()
{
    BankAccount client1("Petr", "895642516", 0);
    
    cout << "Имя пользователя данного счета: " << client1.getAccountHolderName() <<  endl;
    cout << "Номер счета данного пользователя: " << client1.getAccountNumber() << endl;
    cout << "Баланс пользователя составляет: " << client1.getBalance() << endl;
    
    client1.deposit(1000);

    cout << "Имя пользователя данного счета: " << client1.getAccountHolderName() <<  endl;
    cout << "Номер счета данного пользователя: " << client1.getAccountNumber() << endl;
    cout << "Баланс пользователя составляет: " << client1.getBalance() << endl;
    
    client1.withdraw(100);
    
    cout << "Имя пользователя данного счета: " << client1.getAccountHolderName() <<  endl;
    cout << "Номер счета данного пользователя: " << client1.getAccountNumber() << endl;
    cout << "Баланс пользователя составляет: " << client1.getBalance() << endl;
    
    BankAccount client2("John","84645216", 10);
    BankAccount client3("Sam","84615368", 99);

    return 0;
}
