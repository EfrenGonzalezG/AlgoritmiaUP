#include <iostream>

using namespace std;

int n,x,k;

int main()
{
    cin>>n;
    while(n--){
        cin>>k>>x;
        cout<<k<<" ";
        cout<<x*(x+1)/2<<" ";
        cout<<x*x<<" ";
        cout<<x*x+x<<endl;
    }
}
