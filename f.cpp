#include <iostream>
#include <math.h>
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
  double a;
  while(cin>>a){
    printf("%.10lf\n",a*sin(108*pi/180.0)/sin(63*pi/180.0));
  }
}
//Avishek Golder
//Khulna Polytechnic Institute
//Good Bye
