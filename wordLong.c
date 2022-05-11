#include <cstdio>
#include <cmath>
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        string s;
        cin>>s;
        int L=s.size();
        if(L<=10) cout<<s<<endl;
        else cout<<s[0]<<L-2<<s[L-1]<<endl;
    }
    return 0;
}
