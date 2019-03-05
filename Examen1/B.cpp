#include <iostream>

using namespace std;

int n,j,k,caso;
string s[30],r[30];

int main()
{
    while (cin>>n && n){
        j = 0;
        k = n;
        for (int i=0;i<n;i++) cin>>s[i];
        for (int i=0;i<n;i++)
            if (i%2==0) r[j++]=s[i];
            else r[--k]=s[i];
        cout<<"SET "<<++caso<<endl;
        for (int i=0;i<n;i++) cout<<r[i]<<endl;
    }
}
