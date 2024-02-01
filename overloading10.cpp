//class member access operator that is arrow operator ->
//considered as unary operator
#include<iostream>
using namespace std;
class mark{
private: int m;
public: mark(int mar){
    m=mar;
    cout<<"cons called"<<endl;
}
void display()
{
    cout<<"marks are="<< m<<endl;

}
mark *operator->(){
return this;  //address of current object
}

};



int main()
{
mark m1(20);
m1.display();
m1->display();   //using arrow operator

    return 0;
}