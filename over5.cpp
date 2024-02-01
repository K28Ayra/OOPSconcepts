//prefix -- and ++

#include<iostream>
using namespace std;

class mark{
    private: int m;

    public: mark(){
         m=0;
    }
mark(int mar){
    m=mar;
}
void display(){

    cout<<"your marks="<<m<<endl;
}
 void operator++(){
m+=1;
 }
 
void operator--(){
m-=1;
 }

}; 



int main(){
mark m1(10);
m1.display();
++m1;
m1.display();
--m1;
m1.display();
    return 0;
}