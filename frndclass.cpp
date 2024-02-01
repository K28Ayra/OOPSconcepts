
#include<iostream>
using namespace std;

class a{
private: int a=10;int b=10;
public: 
void show(){
    int c=a+b;
    cout<<"sum="<<c<<endl;
    }
    friend class b;   //syntax  and this frnd class is defines outside the class  
};
class b{
    public:    //dont frget to make them public
    void disp(a ref)  { //we have to give rference of class a 
    cout<<ref.a<<" "<<ref.b<<endl;
}
};

int main(){
a ob1;
b ob2;
ob1.show();
ob2.disp(ob1);    //since ref of a is passed in its parameter




    return 0;
}