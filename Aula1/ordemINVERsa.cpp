#include <iostream>

using namespace std;

const int TAM = 4;

int vetor[TAM];


int main(){
    cout << "insira os dados para inverter"<< endl;

    for(int i=0 ; i<TAM; i++){

        cin>> vetor[i];

    }

    for(int i= TAM-1; i>=0; i--){
        cout<< vetor[i]<< endl;

    }

}
