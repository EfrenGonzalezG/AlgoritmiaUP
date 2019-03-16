#include <queue>
#include <iostream>

using namespace std;

int n,k,puntos,R,x,ant;
priority_queue<int> pq;

int main()
{
    while (cin>>n>>k){
        ant=R=puntos=0;
        while (n--){
            cin>>x, R+=x;
            if (puntos && puntos%k==0 && puntos!=ant) pq.push(-x),ant=puntos;
            else{
                puntos++;
                if (!pq.empty())
                    if (x>-pq.top()){
                        pq.pop();
                        pq.push(-x);
                    }
            }
        }
        while (!pq.empty()) R+=pq.top(),pq.pop();
        cout<<R<<endl;
    }
}
