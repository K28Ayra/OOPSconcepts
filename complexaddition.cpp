//overloading + operator


#include<iostream>
using namespace std;
class complex{
private:
int r,i;

public:
void getdata(){
    cin>>r>>i;
}
void putdata(){
    cout<<"real="<<r<<"imaginary="<<i<<endl;
}


complex operator+(complex bb)    //return type i mark type
{
    complex cc;
cc.r=r+bb.r;    ///since it wl=ill be called by aa so  need not to write aa.r or aa.i;
cc.i= i+ bb.i;
    return cc;
}


};


int main(){
complex aa,bb,cc;
    aa.getdata();
    bb.getdata();

    cc = aa + bb; // Using the overloaded + operator

    cout << "Values of aa:" << endl;
    aa.putdata();

    cout << "\nValues of bb:" << endl;
    bb.putdata();

    cout << "\nValues of cc after addition:" << endl;
    cc.putdata();

    return 0;
}

