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
void operator()(int mk){
m=mk;
cout<<"op function called"<<endl;
}

};



int main()
{
mark m1(20);
m1.display();

m1(12);//using calling function operator
m1.display(); 

    return 0;
}