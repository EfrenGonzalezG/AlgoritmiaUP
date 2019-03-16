#include <queue>
#include <stdio.h>
#include <iostream>

using namespace std;

long long n,x,a,b,R,t;
priority_queue<long long> pq;

int main()
{
    scanf("%lld",&t);
    while (t--){
        R=0;
        scanf("%lld",&n);
        while(n--){
            scanf("%lld",&x);
            pq.push(-x);
        }
        while(pq.size()>1){
            a=pq.top(),pq.pop();
            b=pq.top(),pq.pop();
            R+=a+b;
            pq.push(a+b);
        }
        pq.pop();
        printf("%lld",-R);
    }
}
