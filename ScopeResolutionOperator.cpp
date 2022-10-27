#include<bits/stdc++.h>
using namespace std;
class Rectangle
{
private:
   int length;
   int breadth;
public:
    Rectangle(int l,int b){
        length=l;
        breadth=b;
    }
    int area(){ //here area is a inline function replace at main
        return length*breadth;

    }
    int perimeter(); 
    ~Rectangle();
};

int Rectangle::perimeter(){ // for this function machine code will be separatly generated so one should write code separately to have good practice
    return 2*(length* breadth);
}
void main(){
    Rectangle r(10,5);
    cout<<r.area();
    cout<<r.perimeter();
}