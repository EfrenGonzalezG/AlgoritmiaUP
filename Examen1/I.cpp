#include <iostream>

using namespace std;

int dif,rita,teo,_rita,_teo,sum,i;

int main()
{
    cin>>dif>>rita>>teo;
    sum=rita+teo;
    while (_rita+_teo<sum){
        i++;
        if (i>=4) _rita+=i;
        if (i-dif>=3) _teo+=i-dif;
    }
    cout<<rita-_rita;
}
