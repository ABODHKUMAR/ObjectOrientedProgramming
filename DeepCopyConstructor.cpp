#include<bits/stdc++.h>
using namespace std;
class Test{
    public:
    int a;
    int *p;
    Test(int x){
        a=x;
        p=new int[a];
    }
    // shallow copy constructor
    Test(Test &t){
        a=t.a;
        p=t.p;
    }
    // Deep copy constructor 
    Test(Test &t){
        a=t.a;
        p=new int[a];
    }
};
int main(){
    Test t(5);
    Test t2(t);  

return 0; 
}