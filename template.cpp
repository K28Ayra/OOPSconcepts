#include<iostream>
#include<conio.h>

using namespace std;

template <class t>
void show(t a, t b)
{
    cout<<a<<" "<<b;
}


int main(){
int x=23;
int y=233;
char c='e';
char s= 'y';
show(x,y);
cout<<endl;
show(c,s);

    return 0;
}