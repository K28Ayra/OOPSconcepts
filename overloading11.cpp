#include<iostream>
using namespace std;
class test{
private:int a;
public:
void getdata(){
    cout<<"enterdata="<<endl;
    cin>>a;
}
void putdata(){
    cout<<"your data is="<<a<<endl;
}
void operator=(test bb){
a= bb.a;

}

};
int main(){
test aa,bb; 
bb.getdata();   //means were putting value for bb
aa=bb ;    //put value of bb to aa also
aa.putdata();   //it shud output same value as bb.
bb.putdata();
    return 0;
}