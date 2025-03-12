#include <iostream>

using namespace std;

const int TAM = 6 ;
int pilha[TAM];

int topo= -1;





void push(int valor){
    if(topo == TAM-1){
        cout<< "pilha cheia"<< endl;
        return;
    }
    topo= topo+1;
    pilha[topo]= valor;
    cout<< "valor inserido com sucesso"<< endl;
}

int main(){
    int v1;
        cout<<"digite um valor para inserir na pilha"<< endl;

        cin>> v1;

    push(v1);
    cout<<pilha[topo]<< endl;
}
