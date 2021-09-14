#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        long long sum = 0;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        sort(a,a+n);
        sum -= a[n-1];
        float avg = sum / (float)(n-1);
        float f = avg + a[n-1];
        printf("%.9f\n",f);
    }
    return 0;
}
