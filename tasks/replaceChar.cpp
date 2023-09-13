/******************************************************************************
Замена символов в строке(решение задач)

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

void f1(){
    string s = "fg fdhgf   dfhd    dfofdkpofkdop ijo IOUIO io       idjoigf";
    
    string s1;
    
    for(auto it : s){
    
    if(it == ' '){
      s1 += "";
    } else {
      s1 += it;
    }
  }
  
  cout << s1;
  
}


int main()
{
    //cout<<"Hello World";

    f1();

    return 0;
}
