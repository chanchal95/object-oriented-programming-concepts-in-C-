#include<bits/stdc++.h>
using namespace std;

/*
Virtual Function:   Virtual Function is member which is decleared in base class and
                    Redefined in derived class . when we refer the derived class object 
                    using pointer or a  refrence to the base class , you can call virtual
                    function for that object and execute the derived class version of the function . 
                    It can not be static.
                    I am using Virtual function for late binding

*/

class Base{

public:
	virtual void f1(){

         cout<<"Hello I am inside The Base class"<<endl;

	 }
};

class Derived : public Base{

public:
	  void f1(){

	  	cout<<"Hello i am inside The Derived class"<<endl;
	  }
};

int main(){
    
    Base* obj1;
	Derived obj2;
    obj1 = &obj2;
    obj1->f1();
}