#include<bits/stdc++.h>
using namespace std;

class C1{
public:
	void f1(){

		cout<<"This is My C1 class"<<endl;
	}
};

class C2{
public:
	void f2(){
		cout<<"This is My C2 class "<<endl;
	}
};

class C3: public C1,public C2{
public:
	void f3(){
		cout<<"This is My C3 class"<<endl;
	}
};
int main(){

	C3 obj1;
	obj1.f1();
	obj1.f2();
	obj1.f3();


}