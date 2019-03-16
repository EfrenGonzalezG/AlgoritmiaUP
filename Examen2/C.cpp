#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long A[110],B[110],C[110],D[110],t,n,m,k,a,x,i,Rec,Cor;

int Revisar(int o)
{
    Rec=0;
    for (i=0;i<n;i++)
        if (A[i]<=o) Rec+=1+((o-A[i])/B[i]);
    Cor=0;
    o=t-o;
    for (i=0;i<m;i++)
        if (C[i]<=o) Cor+=1+((o-C[i])/D[i]);
    if (Rec==Cor) return 0;
    else if (Rec<Cor) return 1;
    return 2;
}

int main()
{
    cin>>t;
    cin>>n;
    for (i=0;i<n;i++) cin>>A[i]>>B[i];
    cin>>m;
    for (i=0;i<m;i++) cin>>C[i]>>D[i];
    k=1;
    a=t/2;
    while (1)
    {
        x=Revisar(k);
        if (x==0 || a==0) cout<<k<<endl;
        else if (x==1) k+=a;
        else
        {
            k-=a;
            a/=2;
        }
    }
}
