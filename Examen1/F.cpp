#include <iostream>

using namespace std;

int n,y[110],x1[110],x2[110],h1,h2,R;

int main()
{
    cin>>n;
    for (int i=0;i<n;i++) cin>>y[i]>>x1[i]>>x2[i];
    for (int i=0;i<n;i++){
        h1=h2=y[i];
        for(int j=0;j<n;j++){
            if (i!=j){
                if (x1[j]<=x1[i] && x1[i]<x2[j] && y[i]>y[j]) h1=min(h1,y[i]-y[j]);
                if (x1[j]<x2[i] && x2[i]<=x2[j] && y[i]>y[j]) h2=min(h2,y[i]-y[j]);
            }
        }
        R+=h1+h2;
    }
    cout<<R<<endl;
}
