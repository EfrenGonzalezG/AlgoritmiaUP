#include <queue>
#include <iostream>

using namespace std;

long long n,x,a,b,R;
priority_queue<long long> pq;

int main()
{
    while (cin>>n && n){
        R=0;
        while(n--){
            cin>>x;
            pq.push(-x);
        }
        while(pq.size()>1){
            a=pq.top(),pq.pop();
            b=pq.top(),pq.pop();
            R+=a+b;
            pq.push(a+b);
        }
        pq.pop();
        cout<<-R<<endl;
    }
}
