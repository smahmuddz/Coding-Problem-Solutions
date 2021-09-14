#include<bits/stdc++.h>
using namespace std;
int minimum(int a, int b, int c)
{
    if(a<b&&a<c)
    {
        return a;
    }
    else if(b<a&&b<c)
    {
        return b;
    }
    else
        return c;
}
int main()
{
    int n, k, l, c, d, p, nl, np,drink,lime,salt,ans;
    cin >> n>>k>>l>>c>>d>>p>>nl>>np;
    drink= (k*l)/nl;
    lime= c*d;
    salt=p/np;
    ans=minimum(drink,lime,salt)/n;
    cout<<ans;

    return 0;
}
