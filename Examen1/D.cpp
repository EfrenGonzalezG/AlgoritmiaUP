#include <iostream>

using namespace std;

int n,q,m;
bool bard;
long long x[110],y[110],aux,_or;

int main()
{
    cin>>n;
    cin>>q;
    aux=1;
    while(q--){
        cin>>m;
        bard=false;
        for (int i=0;i<m;i++){
            cin>>y[i];
            if(y[i]==1) bard=true;
        }
        if (bard){
            aux<<=1ll;
            for(int i=0;i<m;i++) x[y[i]]|=aux;
        }
        else{
            _or=0;
            for(int i=0;i<m;i++) _or|=x[y[i]];
            for(int i=0;i<m;i++) x[y[i]]=_or;
        }
    }
    for(int i=1;i<=n;i++) if(x[i]==x[1]) cout<<i<<endl;
}
