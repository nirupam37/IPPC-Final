#include <iostream>
#include <algorithm>
#define endl '\n'
#define pi acos(-1)
#define pii pair<int,int>
#define pb push_back
#define all(a) a.begin(),a.end()
#define ll long long
#define ull unsigned long long
#define io freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void mycode();
//__int128
int main(){
  //boost;
  //io;
  mycode();
  return 0;
}
void mycode(){
  int n;
  cin>>n;
  int arr[n+10];
  for(int i=0;i<n;i++)cin>>arr[i];
  sort(arr,arr+n);
  if(n&1)cout<<arr[n/2]<<endl;
  else cout<<(arr[n/2]+arr[n/2+1])/2<<endl;
}
//Avishek Golder
//Khulna Polytechnic Institute
//Good Bye
