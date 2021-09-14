#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    if(n1!=n2&&n2!=n3&&n3!=n1)
    cout<<0<<endl;
    else
    cout<<(n1^n2^n3)<<endl; //X or operation To eradicate same digits
}
