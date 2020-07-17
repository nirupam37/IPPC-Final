#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll int a;
	cin>>a;
	ll int sum=0;
	if(a<=1){
		for(int i=a;i<=1;i++)sum+=i;
	}
	else{
		for(int i=a;i>=1;i--)sum+=i;
	}
	cout<<sum<<endl;
}
//Avishek Golder
//Khulna Polytechnic Institute
//Good Bye


