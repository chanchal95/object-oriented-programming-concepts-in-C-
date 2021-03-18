#include<bits/stdc++.h>
using namespace std;

class Overriding{
public:
	void f1(){

		cout<<"I am in parent Class"<<endl;
	}
};

class child: public Overriding{
public:
	void f1(){
		cout<<"I am in child class"<<endl;
	}
};
int main(){
 
 child obj1;
  obj1.f1(); // The Function of child class will invoked
  
}