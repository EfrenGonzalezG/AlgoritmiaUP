#include <iostream>

using namespace std;

int n,R,oldTime,newTime,vel;

int main()
{
    while(cin>>n && n!=-1){
        R = oldTime = 0;
        for (int i=0;i<n;i++){
            cin>>vel>>newTime;
            R+=vel*(newTime-oldTime);
            oldTime=newTime;
        }
        cout<<R<<" miles"<<endl;
    }
}
