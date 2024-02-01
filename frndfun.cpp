#include<iostream>
using namespace std;
class myra;
class ayra{
    private: int money=100;
friend void riya(ayra,myra);
};

class myra{
 private: int money=10;
friend void riya(ayra,myra);

};
void riya(ayra r1,myra r2){
    cout<<"sum="<<r1.money+r2.money<<endl;
}

int main()
{
ayra a; myra b;
riya(a,b);



    return 0;
}