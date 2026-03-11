#include<iostream>
using namespace std;
int main(){
	
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	int total;
	
	
	cout<<"How many tickets of class A are sold:";
	cin>>a;
	cout<<"seats A tickets sold ="<<a<<endl;
	d=a*15;
	

	cout<<"How many tickets of class B are sold:";
	cin>>b;
	cout<<"seats B tickets sold ="<<b<<endl;
	e=b*12;
	
	cout<<"How many tickets of class C are sold:";
	cin>>c;
	cout<<"seats C tickets sold ="<<c<<endl;
	f=c*9;	
	
	
	total=d+e+f;
	cout<<"total ticket sold price is:"<<total;
}
