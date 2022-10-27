#include<bits/stdc++.h>
using namespace std; 

class Rectangle{
    public:
    //Non parameteried constructer
    Rectangle(){
        length=0;
        breadth=0;
    }
    // parametetised constructor
     Rectangle(int l=0,int b=0){ // here are Recatngle(10,5) //Rectangle()  // all are valid call
        setLength(l);
        setBreadth(b);
     }
    int length;
    int breadth;
    //copy constructer
    Rectangle(Rectangle  &rec)
    {
        length=rec.length;
        breadth=rec.breadth;

    }
    int area(){
      return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
    void setLength(int l){
        if(l>=0){
            length=l;
        }else{
            length=0;
        }
       
    }
    void setBreadth(int b){
        if(b>=0){
            breadth=b;
        }else{
            b=0;
        }
        // breadth=b;
    }
    int gettingLength(){
        return length;
    }
    int gettingBreadth(){
        return breadth;
    }

};

// int main(){
//     Rectangle r1;
//     r1.breadth=5;
//     r1.length=10;
//     cout<<"Area is"<<r1.area()<<endl;
//     cout<<"Perimeter is"<<r1.perimeter()<<endl;
// }

//using pointer
// int main(){
//     Rectangle r;
//     Rectangle *p;
//     p=&r;
//     r.length=10;
//     p->length=10;
//     p->breadth=5;
//     cout<<p->area();
//     cout<<endl;
//     cout<<p->perimeter();

// }

///create object in heap

// int main(){
//     Rectangle *p;   
//     Rectangle r;// object is created in stack
//     p=new Rectangle;// object is create in 
//     Rectangle *q=new Rectangle(); // object is created in heap
//     p->length=15;
//     p->breadth=10;
//     cout<<p->area();
//     cout<<endl;
//     cout<<p->perimeter();
//     return 0;
//     // in java object is always created in heap  using new keyword only
//     // data member should be kept private 
//     // by default every thing should be private
//     // function should be kept public

// }
// // data hiding 

// using getter setter 
// int main(){
//     Rectangle r;
//     r.setLength(10);
//     r.setBreadth(-5);
//     cout<<r.area();
//     cout<<"length is "<<r.gettingBreadth()<<endl; 
//     cout<<"breadth is "<<r.gettingLength();
// }

// property function
// Accessor -> getxxx // read only
//Mutator   ->setxxx // write
//<--------////////////////////////////////////////////////---->
// 1.default constructer ->buildin constructer
// 2.Non parameterised constructer
// 3.Parameterised constructer
// 4.constructer

void main(){
    
   // Rectangle r; // this call default constructer if non  constructer is present else it call non parameterised constructer
    //Rectangle r();//this class non parameterised constructer
    Rectangle r(10,5); // parameterised constructer
    Rectangle r2(r);
    
    // r.setLength(10);
    // r.setBreadth(5);
}