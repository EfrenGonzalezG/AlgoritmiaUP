#include <iostream>

using namespace std;

int n;
long long x[5],y[5],a;

int main()
{
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>a;
        x[i%3]+=a;
    }
    for (int i=0;i<n;i++){
        cin>>a;
        y[i%3]+=a;
    }
    cout<<x[0]*y[1]+x[1]*y[0]+x[2]*y[2]<<" ";
    cout<<x[0]*y[2]+x[1]*y[1]+x[2]*y[0]<<" ";
    cout<<x[0]*y[0]+x[1]*y[2]+x[2]*y[1]<<endl;
}
