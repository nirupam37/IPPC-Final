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
  string st;
  while(t--){
    cin>>st;
    ll int leftup=0,rightup=1,midup=1,leftdown=1,rightdown=0,middown=1;
    for(int i=0;i<st.size();i++){
      if(st[i]=='L'){
        rightdown=middown;
        rightup=midup;
        middown=leftdown+middown;
        midup=leftup+midup;
      }
      else{
        leftup=midup;
        leftdown=middown;
        midup=midup+rightup;
        middown=middown+rightdown;
      }
    }
    cout<<midup<<'/'<<middown<<endl;
  }
}
//Avishek Golder
//Khulna Polytechnic Institute
//Good Bye
