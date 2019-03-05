#include <iostream>

using namespace std;

int tree[200010],pos[100010],ind,n,q,t,x,MaxVal;

int query(int idx){
    int sum = 0;
    while (idx > 0){
        sum += tree[idx];
        idx -= (idx & -idx);
    }
    return sum;
}

void update(int idx ,int val){
    while (idx <= MaxVal){
        tree[idx] += val;
        idx += (idx & -idx);
    }
}

int main()
{
    cin>>t;
    while(t--){
        cin>>n>>q;
        MaxVal=ind=n+q;
        for (int i=0;i<=n+q;i++) tree[i]=0;
        for (int i=n;i>=1;i--) pos[i]=ind, update(ind--,1);
        while(q--){
            cin>>x;
            cout<<query(pos[x]-1)<<" ";
            update(pos[x],-1);
            update(ind,1);
            pos[x]=ind--;
        }
        cout<<endl;
    }
}
