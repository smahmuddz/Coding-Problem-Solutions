#include<bits/stdc++.h>
using namespace std;

int main() {
	int y;
	cin>>y;
	if (y <= 100)
        cout <<1;

    else if (y % 100 == 0)
        cout <<y/ 100;
    else
        cout <<y/100+1;
    return 0;
}


