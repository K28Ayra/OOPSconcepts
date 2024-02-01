//special operators []array subscripting,()function calling operator,-> arrow operator..they cant be friend function overloaded
//[]

#include<iostream>
using namespace std;
class mark{
private:
int sub[3];

public:
mark(int sub1, int sub2, int sub3){
    sub[0]=sub1;
    sub[1]=sub2;
    sub[2]=sub3;
}
int operator[](int pos){
return sub[pos];
}


};

int main(){
mark m1(22,55,11);
cout<<m1[0]<<endl;
cout<<m1[1]<<endl;
cout<<m1[2]<<endl;
    return 0;
}