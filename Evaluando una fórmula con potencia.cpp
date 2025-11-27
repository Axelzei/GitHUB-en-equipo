#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x,y,z,res=0;
    cin>>x>>y>>z;
    res=(7+pow(2*x+y-z,2*x+y-z))/(2*x+y-z);
    cout<<res<<endl;
    return 0;
}