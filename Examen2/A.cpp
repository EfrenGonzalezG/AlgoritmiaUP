#include <queue>
#include <stdio.h>
#include <iostream>

using namespace std;

int t,n;
priority_queue<int> PQ,pq;

int main()
{
    scanf("%d",&t);
    while (t--){
        while (!PQ.empty()) PQ.pop();
        while (!pq.empty()) pq.pop();
        while (scanf("%d",&n) && n){
            if (n==-1){
                if ((PQ.size()+pq.size())%2==0){
                    printf("%d\n",PQ.top());
                    PQ.pop(), PQ.push(-pq.top()), pq.pop();
                }
                else{
                    printf("%d\n",PQ.top());
                    PQ.pop();
                }
            }
            else{
                if ((PQ.size()+pq.size())%2==0){
                    if (PQ.empty() || PQ.top()>n) PQ.push(n);
                    else{
                        pq.push(-n);
                        PQ.push(-pq.top()),pq.pop();
                    }
                }
                else{
                    if (PQ.top()>n){
                        PQ.push(n);
                        pq.push(-PQ.top()),PQ.pop();
                    }
                    else pq.push(-n);
                }
            }
        }
    }
}
