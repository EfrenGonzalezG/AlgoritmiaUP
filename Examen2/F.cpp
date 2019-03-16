#include <map>
#include <queue>
#include <iostream>

using namespace std;

string s;
long long n,x,val,id;
priority_queue<long long> pq;
map<long long,long long> aum;

int main()
{
    while (cin>>s && s[0]=='R'){
        cin>>id>>val;
        aum[id]=val;
        pq.push(-(val*10000+id));
    }
    cin>>n;
    while (n--){
        x=-pq.top();
        val=x/10000;
        id=x%10000;
        pq.pop();
        pq.push(-((val+aum[id])*10000+id));
        cout<<id<<endl;
    }
}
