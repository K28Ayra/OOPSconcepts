//<<and<< stream extraction and insertion
//overloaded using friend function
#include<iostream>
using namespace std;
 
class io{
private: int age;
string name;

public:
io(){
    age=0;
    name="noname";
}

//frind function syntax..friend(kyword) return type operator(keyword) what operator()    passing values by assignment
friend ostream &operator<<(ostream &output, io &p) ; //since << is from otream and >>is from istream
friend istream &operator >>(istream &input, io &p);

};

ostream &operator<<(ostream &output, io &p) 
{
    output<<"My name is "<<p.name<<"age is "<<p.age
<<endl;
return output;}

istream &operator >>(istream &input, io &p)
{
input>>p.name>>p.age;
    return input;
}


 int main(){
io  obj;
//cout<<"enter data="<<endl;
cin>>obj;
cout<<obj;

    return 0;
 }