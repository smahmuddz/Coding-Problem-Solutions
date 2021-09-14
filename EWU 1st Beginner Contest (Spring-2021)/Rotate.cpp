#include<bits/stdc++.h>
using namespace std;
int main(){
  string s1,s2;
  cin >> s1;
  s2=s1.substr(1,s1.size()-1)+s1[0];
  cout << s2 << endl;
  return 0;
}
