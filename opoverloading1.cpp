//overloading + operator


#include<iostream>
using namespace std;
class mark{
private:
int internal;
int external;

public:
mark(){
    internal=0;
    external=0;
}

mark(int in,int ex){
internal=in;
external=ex;
}

void display(){
    cout<<external<<endl<<internal<<endl;
}

mark operator+(mark m)    //return type i mark type
{
    mark temp;
    temp.internal=internal+ m.internal;
    temp.external= external+ m.external;
    return temp;
}


};


int main(){
mark m1(10,20),m2(20,20);
mark m3;
m3=m1+m2;
m3.display();
    return 0;
}