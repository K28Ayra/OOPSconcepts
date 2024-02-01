//shorthand overloading -=,+=

#include<iostream>
using namespace std;

class mark{
private:
 int m;


public:
mark(){
    m=0;
}

mark(int x){
    m=x;
}

void display(){
    cout<<" your marks="<<m <<endl;
}

void operator+=(int bonus){
    m=m+bonus;
}


};
int main(){
mark m1(20);
m1.display();
m1+= 100;  //20+100=120
m1.display();
    return 0;
}