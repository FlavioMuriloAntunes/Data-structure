#include <iostream>

using namespace std; // std - standard padrão
const int TAM = 5; // constante em c sempre com letra maiuscula

int vetor[TAM]; // vetor  e contrante sempre global


int main()
{
    for(int i=0; i<TAM; i++){
        cin>> vetor[i];

    }

    for(int i=0; i<TAM; i++){

       cout << vetor[i];

    }
    cout<< endl;



    int maior= vetor[0];

    for(int i=0; i<TAM; i++){

        if(vetor[i]> maior){
            maior = vetor[i];
        }


    }


    cout<< "maior numero"<< maior << endl;


}
