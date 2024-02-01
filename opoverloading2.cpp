//overloading - sign outside the class using scope resolution method

#include<iostream>
using namespace std;

class mark{
private: int internal;
int external;

public:
mark(){
    internal=0;
    external=0;

}

mark(int i,int x)
{
    internal=i;
    external=x;

}
void display(){
cout<<internal<<endl<<external<<endl;
}
//+ operator

mark operator+(mark m){
mark temp;
temp.internal= internal+ m.internal;
temp.external= external+m.external;
return temp;
}

mark operator-(mark m);


};
//return type   class name  :: method name
mark mark :: operator-(mark m){
mark temp;
temp.internal=internal-m.internal;
temp.external= external-m.external;
return temp;
}

  int main(){
mark m1(10,10),m2(20,30);
mark m3;
mark m4;
m3= m1+m2;
m4= m1-m2;
m3.display();
m4.display();
    return 0;
  }