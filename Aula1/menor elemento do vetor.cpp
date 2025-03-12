#include <iostream>

using namespace std;

const int TAM = 4;

int vetor[TAM];


int main(){
    cout << "insira para ver o maior"<< endl;

    for(int i=0 ; i<TAM; i++){

        cin>> vetor[i];

    }
    int maior= vetor[0];
    for(int i =0; i<TAM; i++){
        if(maior >vetor[i]){
            maior = vetor[i];
        }
    }

    cout << maior << endl;

}
