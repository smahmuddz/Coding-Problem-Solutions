#include<iostream>
using namespace std;

int main()
{
    int N, X;
    cin>>N;
    X = (1.08*N);

    if(X<206)
        cout<<"Yay!\n";
    else if(X>206)
        cout<<":(";
    else
       cout<<"so-so\n";
    return 0;
}
