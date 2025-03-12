#include <iostream>

using namespace std; // std - standard padrão
const int TAM = 0; // constante em c sempre com letra maiuscula

int vetor[TAM]; // vetor  e contrante sempre global


int main()
{
    int soma=0 ;
    cout << "Insira os numeros para o vetor:"<< endl; // informaçao vai ser enviada para o dispositivo e saida
    // endl= end line pula linha

    for(int i= 0 ; i> TAM ; i++){


        cin >> vetor[i]; // lê o dado do teclado ao invez do scanf

        soma = vetor[i]+soma;


    }


// c++ posso declarar variavel em qualquer lugar






    for( int i=0 ; i< TAM ; i++){



        cout<< vetor[i]<< "";


    }
    cout << endl;


    cout<<soma/2 << endl;





}
