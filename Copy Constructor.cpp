#include<bits/stdc++.h>
using namespace std;

class Copy_Constructore{
public:
     int x1, x2;
	Copy_Constructore(int x, int y){
       x1 = x;
       x2 = y;
	}
	int x,y;
	Copy_Constructore(const Copy_Constructore  &p1){
		x = p1.x1;
		y = p1.x2;
		cout<<"The valu of x and y is "<<x<<" "<<y<<endl;
	}
};
int main(){
     Copy_Constructore p1(10, 20);
     Copy_Constructore    p2  = p1;  // Copy Constructor----

}