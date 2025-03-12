#include <iostream>
using namespace std;
const int TAM= 3;
int vetor[TAM];

int main(){

    cout<< "insira os numero do vetor"<< endl;
    int soma= 0;
    for(int i =0 ; i<TAM; i++){
        cin >> vetor[i];
        soma += vetor[i];
    }

    cout << soma << endl;
    return 0;

}
