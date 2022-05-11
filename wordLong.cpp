#include <stdio.h>
#include <math.h>
#include <string.h>
#include <iostream>
using namespace std;
int main()
{
    int N;
    scanf("%d",&N);
    while(N>0)
    {
        string str;
        cin>>str;
        int Length=str.size();
        if(Length<=10) cout<<str<<endl;
        else cout<<str[0]<<Length-2<<str[Length-1]<<endl;
        N--;
    }
    return 0;
}
