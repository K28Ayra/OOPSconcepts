#include<iostream>
using namespace std;

template <class t>
class test{
private: s;
public: 

test(t a, t b){
    x=a;
    y=b;
}
void dis(){
    cout<<x<<" "<<y;
}

};


int main(){

test <int> ob(10,20);
test <char> ob1('tt','yy');
ob.dis();
cout<<endl;
ob1.dis();
    return 0;
}