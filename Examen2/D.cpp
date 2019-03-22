#include <stack>
#include <stdio.h>
#include <iostream>

using namespace std;

bool caso=false;
long long n,voy,a[1000010];
stack<long long> st;

int main()
{
    while (cin>>n && n){
        while (cin>>a[1] && a[1]){
            while (!st.empty()) st.pop();
            for (int i=2;i<=n;i++) cin>>a[i];
            voy=1;
            for (int i=1;i<=n;i++){
                st.push(i);
                while (!st.empty() && st.top()==a[voy]){
                    voy++;
                    st.pop();
                }
            }
            if (st.empty()) cout<<"Yes\n";
            else cout<<"No\n";
        }
        cout<<"\n";
    }
}
