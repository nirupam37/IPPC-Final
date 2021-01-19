#include <iostream>
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
  boost;
  //io;
  mycode();
  return 0;
}
void mycode(){
  int t;
  cin>>t;
  for(int i=1;i<=t;i++){
    int a,b,c,d;
    ll int e,f,g,h;
    char x;
    cin>>a>>x>>b>>x>>c>>x>>d;
    cin>>e>>x>>f>>x>>g>>x>>h;
    int num;
    bool flag=1;

    num=0;
    for(int j=0;j<8;j++){
      num+=((e&1)<<j);
      e/=10;
    }
    if(num!=a)flag=0;

    num=0;
    for(int j=0;j<8;j++){
      num+=((f&1)<<j);
      f/=10;
    }
    if(num!=b)flag=0;


    num=0;
    for(int j=0;j<8;j++){
      num+=((g&1)<<j);
      g/=10;
    }
    if(num!=c)flag=0;

    num=0;
    for(int j=0;j<8;j++){
      num+=((h&1)<<j);
      h/=10;
    }
    if(num!=d)flag=0;
    if(flag)cout<<"Case "<<i<<": Yes\n";
    else cout<<"Case "<<i<<": No\n";
  }
}
//Avishek Golder
//Khulna Polytechnic Institute
//Good Bye
