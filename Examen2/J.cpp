#include <map>
#include <iostream>

using namespace std;

int n,R;
string s;
map<string,int> mapa;

int main()
{
    while (cin>>n){
        R=0;
        mapa.clear();
        for (int i=0;i<n;i++) cin>>s, mapa[s]++;
        for (int i=0;i<n;i++){
            cin>>s;
            mapa[s]--;
            if (mapa[s]>=0) R++;
        }
        cout<<R<<endl;
    }
}
