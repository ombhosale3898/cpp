#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int principal,rate,time,ans;
	
	cout<<"\nEnter the value: ";
	
    cin>>principal>>rate>>time;
    
    ans=principal * ((pow((1 + rate / 100), time)));
    
    cout<<"\nR:"<<rate<<"\nTime: "<<time<<"\nprincipal: "<<principal<<"\nAns: "<<ans;
};
