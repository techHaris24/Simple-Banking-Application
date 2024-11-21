#include<iostream>
using namespace std;
int main()
{
	float s=1000,d,w;
	cout<<"Your initial saving balance is "<<s<<"$"<<endl;
	cout<<"How much you want to deposit in your account?"<<endl;
	cin>>d;
	s+=d;
	cout<<"How much you want to withdraw from your account?"<<endl;
	cin>>w;
	s+=0.05*s;
	cout<<"Your current balance is "<<s<<"$";
	return 0;
}
