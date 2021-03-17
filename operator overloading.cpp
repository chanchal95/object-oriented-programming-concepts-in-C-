#include<bits/stdc++.h>
using namespace std;
class complex1{

public:
	int real, imag;
	complex1(){
		real = 0;
		imag =0;
	}
	complex1(int i, int j){
		real = i;
		imag = j;
	}
     void print(){
     	cout<<real <<"+"<<imag<<"i"<<endl;
     }
	complex1 operator *(complex1 c){

		complex1 temp ;
		temp.real = real * c.real;
		temp.imag = imag * c.imag;
		return temp;
	}


};

// function overrinding --------------

/*class overriding{

public:
	void f1(){
		cout<<"hello i am overrinding function"<<endl;
	}
};

class over : public overriding{
public: 
	/* void f1(){
	 	cout<<"hello i am over function that is called overrinding"<<endl;
	 }
};*/

// Function overloading ----------------------------
/*class overloading {
public:
	void f1(){
		cout<<"I am the function without paramiter"<<endl;
	}
	void f1(int a, int b){
		cout<<" i am the function with two paramiter and my addition is = "<<a+b
<<endl;	}
};*/
// inheritance in c++ -----------------
/*
1 single inheritance 
2 multiple inheritance 
3 multilable inheritance 
5 hierarchical inheritance
5 hybrid inheritance

*/

class h1 {
  public:
  	int a,b,x;
  	h1(){
  		a = 0;
  		b = 0;
  	}
  	void set_Value(int num1, int num2){
  		a = num1;
  		b = num2;
  		x = a+b;

  	}


};

class h2:public h1{
public: 
	void print_value(){
		cout<<a<<" "<<b<<" "<<"addition = "<<x;
	}
};
class h22 {
public: 
	int height ;
	int width;
	int res ;
	 void area(int height, int width){
	 	height = height;
	 	width = width;
      res = height*width;
	 }
};
class h3: public h1, public h22{

public: 
	void print_addition(){
           cout<<"Addition of Two Number is == " << x<<endl;
	}
	void print_area(){
		cout<<"The area of two Number is == "<<res<<endl;
	}

};
// Friend class  ---------------------------
class friend1{
	friend class friend2;
	int x;
public:
	void f1(int num){
		x = num;
	}

};
class friend2{
public:
	void f2(friend1 obj1){
		cout<<"The private member data value is == "<<obj1.x<<endl;
	}
};
class frnd{
private:
	int x;
public:
	frnd(){
		x = 0;
	}
	void print_value(){
		cout<<"The value of x is = "<<x<<endl;
	}
	friend void add_value(frnd &d);
};

void add_value(frnd &d){
	d.x = d.x+5;
}

// call by value and call by reference 
// call by address

// call by address---------------
void swap(int &a, int &b){
	int temp ;
	temp = a;
	a = b;
	b = temp;
	return;

}
// call by reference --------------------
void swap_reference(int *a, int *b){
	int temp = *a;
	*a= *b;
	*b = temp;
}

// virtual function -----------------------
class base{
public:
	 virtual void eat(){
		cout<<" In base class -I like genric food"<<endl;
	}
	virtual void show(){
		cout<<"I am in base class show function "<<endl;
	}

};

class derived : public base{
 public: 
 	void eat(){
 		cout<<"I am in derived calss and i like genric food"<<endl;
 	}
 	void show(){
 		cout<<"I am in derived class show function"<<endl;
 	}
};

inline int add(int a, int b){
	return (a+b);

}
int main(){

/* complex1 c1(5,6);
 complex1 c2(10,14);
 complex1 c4(2, 7);
 complex1 c3 = c1*c2*c4;
 c3.print();*/
	//over obj;
	//obj.f1();
	//overloading obj;
	//obj.f1();
	//obj.f1(12, 15);
 h2 obj1;
  obj1.set_Value(10, 15);
obj1.print_value();
 h2 obj2;
 obj2.print_value();
 //obj1.print_value();

	/*h3 obj1;
	obj1.set_Value(20, 30);
	obj1.area(20, 30);
	obj1.print_area();
	obj1.print_addition();*/
 /* friend1 obj1;
   obj1.f1(10);
  friend2 obj2;
  obj2.f2(obj1);*/
/*frnd obj;
obj.print_value();
add_value(obj);
obj.print_value();*/
//int a = 10;
//int b = 20;
 // swap(a, b);
/*swap_reference(&a, &b);
cout<<a<<" "<<b<<endl;*/
	/*base * bptr;
	derived d;
  bptr = &d;
  bptr->eat();
  bptr->show();*/

	//cout<<"Hello the additon of two number is "<<add(10, 30)<<endl;
	//cout<<"Hello how are you"<<endl;


}