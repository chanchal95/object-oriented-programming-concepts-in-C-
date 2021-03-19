#include<bits/stdc++.h>
using namespace std;
/*
InLine Function :  Inline Funtion is a Function which is expanded in a line when It is 
                   called . When The inline Funtion called the whole code subtituted at 
                   function calling Point.

Sintex          :  inline return type Function name(Paramiter)  {
	                    
	                    write your code hear
                     }        
*/

inline int Cube(int x){

	return x*x*x;
}



int main(){

	cout<<Cube(10)<<endl;

}