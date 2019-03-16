#include <iostream>
#include <algorithm>

using namespace std;

long long w,n,a,b,R;

int main()
{
    while (cin>>w){
        R=0;
        cin>>n;
        while(n--){
            cin>>a>>b;
            R+=a*b;
        }
        cout<<R/w<<endl;
    }
}
