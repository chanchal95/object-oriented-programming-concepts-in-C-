#include<bits/stdc++.h>
using namespace std;

class Function_overloading{
public:

	 void f1(){

	 	cout<<"I am Inside The without parameter function"<<endl;

	 }


	 int f1(int a, int b){

	 	cout<<"I am Inside The Two Int Patemetr add me  ";
	 	return a+b;
	 }


	 void f1(string name, int marks){
	 	cout<<"My name is = "<<name<<" "<<"My marks is = " <<marks<<endl;
	 }

};
int main(){

	Function_overloading obj1;
	obj1.f1();
	cout<<obj1.f1(10, 20)<<endl;
	obj1.f1("shashi", 90);

}