#include <iostream>

using namespace std;

int sum[500010],n,tam,x,mini,R;

int main()
{
    cin>>n>>tam;
    for(int i=0;i<n;i++){
        cin>>x;
        if (i%2==0) sum[0]++,sum[x+1]--;
        else sum[tam-x+1]++;
    }
    mini=n;
    for (int i=1;i<=tam;i++){
        sum[i]+=sum[i-1];
        if(sum[i]<mini) mini=sum[i], R=0;
        if(sum[i]==mini) R++;
    }
    cout<<mini<<" "<<R<<endl;
}
