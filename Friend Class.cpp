#include<bits/stdc++.h>
using namespace std;
/*
Friend Class : Friend class is use to access the Private member and 
               Procted member of class in which it is defiend as a friend
*/
class Frnd{
	
	int marks = 90;
	string name = "shashi";
	
   public:


	
	friend class derivedFriend;
};
class derivedFriend{

public:
	void show(Frnd x){
	cout<<"My name is = "<<x.name<<endl<<"I Got marks = "<<x.marks<<endl;
}

};
int main(){
	derivedFriend obj2;
	Frnd obj1;
	
	obj2.show(obj1);



}