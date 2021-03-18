#include<bits/stdc++.h>
using namespace std;
/*
 Friend Function :   When we need to access the  Private Data of the class Diractly 
                     Without Making the object of that class then we will use the 
                     Friend Function

*/

class Frnd{

	int marks;
	string str;
   
    public:
          Frnd(string name, int marks){
          	marks = marks;
          	str = name;
          }
    friend void show_private_data(Frnd&);

};

void show_private_data(Frnd& d1){

	cout<<"The Name is  = "<<d1.str<<endl<<"The Marks is  = "<<d1.marks<<endl;
}

int main(){
      Frnd obj1("shashi ", 90);
      show_private_data(obj1);
}