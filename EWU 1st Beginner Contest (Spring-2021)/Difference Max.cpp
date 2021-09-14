#include<bits/stdc++.h>
using namespace std;
int main(){
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int n = max({a - c, a - d, b - c, b - d});
  cout << n << endl;
  return 0;
}


