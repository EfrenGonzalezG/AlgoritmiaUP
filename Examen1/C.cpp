#include <iostream>

using namespace std;

int tam,aux,sobra,x,y,Rx,Ry;

int main()
{
    while (cin>>tam && tam){
        Rx = Ry = aux = 0;
        sobra = tam;
        while(cin>>x>>y && x!=-1){
            if (x<=sobra){
                sobra-=x;
                aux=max(aux,y);
            }
            else{
                Ry+=aux;
                Rx=max(Rx,tam-sobra);
                sobra=tam-x;
                aux=y;
            }
        }
        Ry+=aux;
        Rx=max(Rx,tam-sobra);
        cout<<Rx<<" x "<<Ry<<endl;
    }
}
