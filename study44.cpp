/******************************************************************************
sstream - istringstream
*******************************************************************************/

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string str = "Hello world my friend";
    string word;
    istringstream inp(str);
    
    while(inp){
        inp >> word;
        cout << word << endl;
    }

    return 0;
}
