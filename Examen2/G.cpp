#include <map>
#include <iostream>

using namespace std;

int n,x,t,R,ini,arr[1000010],nini;
map<int,int> mapa;

int main()
{
    cin>>t;
    while(t--){
        cin>>n;
        R=0,ini=1;
        mapa.clear();
        for (int i=1;i<=n;i++){
            cin>>arr[i];
            if (mapa[arr[i]]==0) mapa[arr[i]]=i;
            else{
                R=max(R,i-ini);
                nini=mapa[arr[i]]+1;
                for (int j=ini,k=mapa[arr[i]];j<=k;j++) mapa[arr[j]]=0;
                ini=nini;
                mapa[arr[i]]=i;
            }
        }
        R=max(R,n+1-ini);
        cout<<R<<endl;
    }
}
