#include <bits/stdc++.h>
using namespace std;

int main(){

    double y, z, x, rez;
    cin>>x>>y>>z;
    rez=(pow(2*y+z,2.8)-z)/(x+y-(x/z));
    cout<<rez<<endl;
    return 0;
};
