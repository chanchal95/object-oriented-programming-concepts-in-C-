#include<bits/stdc++.h>
using namespace std;
/*
Inheritance is Five Type ----
1. Single Inheritace 
2. Multilable  Inheritace 
3. Multiple Inheritace 
4. Hybrid Inheritance 
5. Hirachical Inheritance
*/
class single{
public:
	int x, y;
	void f1(int num1, int num2){
		x = num1;
		y = num2;
		cout<<"The addition of Two number is "<<x+y<<endl;
	}
};
class child: public single{
public:
	int x,y;
	void f2(int num1, int num2){
         x = num1;
         y = num2;
		cout<<"The addition of Two number is in child class " << x+y<<endl;
	}
};


int main(){

	child obj1;

	obj1.f1(10, 30); // I Have Inherited The value of single class into child class
	obj1.f2(30, 40);

	return 0;

}