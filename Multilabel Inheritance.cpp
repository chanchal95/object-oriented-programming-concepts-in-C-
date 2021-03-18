#include<bits/stdc++.h>
using namespace std;

class C1{
public:

void f1(){

	cout<<"I Am Inside The C1 class"<<endl;
}

};


class C2 : public C1{
public:
	void f2(){
       
       cout<<"I am Inside The C2 class"<<endl;
	}
};

class C3: public C2{
public:
          void f3(){
          	cout<<"I am Inside The C3 claa"<<endl;
          }
};
int main(){

	C3 obj1;
	obj1.f1();
	obj1.f2();
	obj1.f3();

}