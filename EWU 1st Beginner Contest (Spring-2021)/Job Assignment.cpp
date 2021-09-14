#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, minimum = 999999;
    cin >> n;
    int arr1[n], arr2[n];
    for(int i = 0; i < n; i++)
        cin >> arr1[i] >> arr2[i];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j)
                minimum = min(minimum, arr1[i] + arr2[j]);
            else
                minimum = min(minimum, max(arr1[i], arr2[j]));
        }
    }

    cout << minimum;
    return 0;
}
