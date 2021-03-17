#include<bits/stdc++.h>
using namespace std;

class Operator_overloading{

public:
	int real ;
	int imag;

	Operator_overloading(){
         real = 0;
         imag = 0;
	}

	Operator_overloading(int num1, int num2){
		real = num1;
		imag = num2;
	}


	Operator_overloading operator +(Operator_overloading p){
		Operator_overloading temp;
		temp.real = temp.real + p.real;
		temp.imag = temp.imag + p.imag;
		return temp;
	}

	void print(){

		cout<<"The Complex Number is = "<<real<<"+"<<imag<<"i"<<endl;
	}
};

int main(){
 
         Operator_overloading obj1(10,20);
         Operator_overloading obj2(30,40);
         Operator_overloading obj3 = obj1+obj2;
         obj3.print();
}
