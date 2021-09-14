#include<bits/stdc++.h>
using namespace std;
int n;
int goal0,goal1=0;
string str,team[2];
int main(){
    scanf("%d",&n);
    cin>>str;
    team[0]=str;
    goal0++;
    for(int i=1;i<=n-1;i++) {
       cin>>str;
       if(team[0]!=str)
       {
           team[1]=str;
           goal1++;
       }
       else
        goal0++;
    }

if(goal0>goal1)
    cout<<team[0];
else
    cout<<team[1];
}
