/******************************************************************************
STL - равно equal+predicate
*******************************************************************************/

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <string>

using namespace std;

class Point{
    public:
        
        int x,y;
        
        Point(int _x, int _y) : x(_x), y(_y){}
        
        
};

//equal+predicate
void f1(){
    
    vector<Point> p1 = {
        Point(1,2),
        Point(3,4),
        Point(5,6)
    };
    
    vector<Point> p2 = {
        Point(1,2),
        Point(3,4),
        Point(5,6)
    };    
    
    bool res = equal(begin(p1),end(p1),begin(p2),[](const Point &pt1, const Point &pt2){
        return pt1.x == pt2.x && pt2.y == pt2.y;
    });
    
    cout << res << endl;
    
}

int main()
{
    
    setlocale(LC_ALL,"ru");
    
    //cout << "Привет мир!";

    f1();
    
    vector<Point> v = {
        Point(1,2),
        Point(3,4),
        Point(5,6)
    };
    
    cout << v[0].y << endl;

    return 0;
}
