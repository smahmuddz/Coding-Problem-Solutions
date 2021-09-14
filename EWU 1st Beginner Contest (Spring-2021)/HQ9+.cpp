#include<bits/stdc++.h>
using namespace std;
int main()
{
    char program[9999];
    scanf("%s", program);

    for(int i = 0; program[i] != '\0'; i++)
    {
        if(program[i] == 'H' || program[i] == 'Q' || program[i] == '9')
        {
           cout<<"YES";
           return 0;
        }
    }

    cout<<"NO";
    return 0;
}
