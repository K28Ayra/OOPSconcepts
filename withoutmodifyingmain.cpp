#include<iostream>
using namespace std;
int fun(){
    cout<<"hii"<<endl;
    exit(0);
}

class A{
public:
static int  var;
};
int A::var=fun();

int main(){


cout<<"Do not modify main";

    return 0;
}