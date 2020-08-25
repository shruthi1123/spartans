//  finds msb of the number 
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    n|=n>>1;
    n|=n>>2;
    n|=n>>4;
    n|=n>>8;
    n|=n>>16;
    n=n+1;
    n=n>>1;
    cout<<n;

    return 0;
} 
