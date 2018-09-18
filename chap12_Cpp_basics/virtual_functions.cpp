#include <iostream>

using namespace std;


class Base{
public:
    Base();
    ~Base();
    
    void show();
};

class Derived : public Base{
public:
    Derived();
    ~Derived();
    
    void show();
};

void Base::show(){
    cout << "This is Base class" << endl;
}

void Derived::show(){
    cout << "This is Derived class" << endl;
}


int main(){
    Derived *bp = new Derived();
    bp->show();
    // int i = 0;
    // cout << i << endl;
    return 0;   
}