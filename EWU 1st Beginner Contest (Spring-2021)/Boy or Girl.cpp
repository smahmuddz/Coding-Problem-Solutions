#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[105];
    cin>>str;
    int num[30]={0};
    for(int i=0;i<strlen(str);i++){
        num[str[i]-97]++;
    }
    int count=0;
    for(int i=0;i<30;i++)
    {
        num[i]==0?count=count:count++;
    }
    count%2==0?printf("CHAT WITH HER!\n"):printf("IGNORE HIM!\n");
}
