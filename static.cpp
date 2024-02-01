#include<iostream>
using namespace std;

class A{
private : int a;
static int b;
public:
A(int x, int y){
a=x;
b=y;
}
 public: 
void show()
{
    cout<<a<<" "<<b;
}
static void dis(){
    //can only ACCESS static data member that is b and not a;
    cout<<b<<endl;

}
};

//static member function and initialising value of b outside the classs usinf scope resolution
//class name returntype(of data membber):: data_member= value;
int A::b=0;

int main()
{ A obj(1,44);
 obj.show();cout<<endl;
  //obj1.show(); cout<<endl;
  A::dis();cout<<endl;
  obj.show();

    return 0;
}