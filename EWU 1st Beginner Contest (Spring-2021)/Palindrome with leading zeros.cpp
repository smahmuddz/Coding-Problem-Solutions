#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin >> n;

while(n% 10 == 0 && n)
{
    n/= 10;
}
 int a = n, b = 0;

 while(n)
{
b = b * 10 + n % 10; n /= 10;
}
if(a == b)
{
cout << "Yes";
}
else
{
cout<< "No";
}
return 0;
 }
