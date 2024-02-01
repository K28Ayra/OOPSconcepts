//postfix --, ++



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
 void operator++(int){   //since its a postfix op we need to pass an argument which will be passed by compiler itself
m+=1;
 }
 
void operator--(int){
m-=1;
 }

}; 



int main(){
mark m1(10);
m1.display();
m1++;
m1.display();
m1--;
m1.display();
    return 0;
}