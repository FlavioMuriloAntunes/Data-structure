#include <iostream>

using namespace std;
const int TAM= 5;
int pilha[TAM];
int topo= -1;

void push(int valor){
    if(topo >= TAM-1){
        cout<<"pilha est� cheia "<< endl;
        return;

    }
    topo ++; // avan�a para a posi��o 0 que corresponde a primeira posi��o

   pilha[topo]= valor;
   cout<< "valor: "<< valor << " inserido na posicao: "<< topo<<endl;

}

void pop(){
    pilha.pop();






}

int main(){

    int valor;
    int op = 0;
    do{
    cout<< "digite a opera��o "<< endl;
    cout<<" 1- inserir"<< endl;


    cin>> op ;
       switch(op){
        case 1:
            cout<< "digite o valor"<<endl;
            cin>> valor;
            push(valor);
            break;
        case 2:
            pop();
            break;

        case 0:
            cout<<"fim do programa"<<endl;
            break;


       }


    }while(op != 0);


}
