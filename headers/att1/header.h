#pragma once

class Player{
  
  public:
  
    void PrintText(std::string text){
        std::cout << text << std::endl;
    }
  
    int GetValue(){
        return this->val;
    }
    
    void SetValue(int val){
        this->val = val;
    }
  
  private:
  
    int val = 0;
  
  protected:
  
  
  
};