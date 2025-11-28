#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x,y,z1,z;
    cin>>x>>y;
    z=((x*x*x+x*x)/(y*y-y)-((x/y)+5))/(2*x);
    cout<<z<<endl;
    return 0;
}
