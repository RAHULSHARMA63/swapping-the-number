#include<iostream>
using namespace std;
int main()
{
	int a=236, b=265;
	      
    cout<<"before swap a= "<< a <<" b= "<< b <<"\n";
	     
    a=a+b;     
    b=a-b;     
    a=a-b;
	    
    cout<<"after swap a= "<< a <<" b= "<< b <<"\n";
	 
	return 0;
	
}
