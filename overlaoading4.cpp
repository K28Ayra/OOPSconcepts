//-=

#include<iostream>>
using namespace  std;


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
 void operator-=(int bonus){
m=m-bonus;

 }


};


int main(){
mark m1(100);
m1.display();
m1-=10000;
m1.display();

    return 0;
}