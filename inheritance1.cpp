#include<iostream>
using namespace std;


class base{
protected: string surname= "khan";
public: void dis(){
    cout<<"base class"<<endl;
}

};

class derived: public base{
  string name="ayra";
  public:
  void show(){
    cout<<"My name is "<<name<<" "<<surname;
  }
};

int main()
{

derived d;
d.show();
d.dis();
    return 0;
}