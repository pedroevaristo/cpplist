#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, c = 0, i; // i é auxiliar; n = para ajudar na coleta de informções
    int n = 1, y = 1, x = 0;
    int vet[5];

    cout << "digite 5 numeros e no final o resutaldo mostrarar o numero primo \n";

    for (int z = 0; z < 5; z++)
    {
        cin >> vet[z];
        do
        {
            if (vet[z] > n)
            {
                n = vet[z];
            }
            i++;
        } while (i < 5);
    }
    cout<<"Numeros primos"<<endl;
    for (a = 0; a < 5; a++)
    {
        x = 0;//inicilaizador
        for (int b = 1; b <= vet[a]; b++)/*Aqui ira verificar 
        com a ideia abaixo.*/
        {
            if (vet[a] % b == 0)
            /*Acima é limitado pelo vetor, na quant. de repetições
            então no caso de 3( n° primo), e entende que 1 e 3 serão os 
            únicos divisivéis.*/
            {
                x++;
            }
        }
            if (x == 2)/*Um número primo é aquele que é dividido
             apenas por um e por ele mesmo. Se há dois numeros que são 
             divisiveis ele é mostrado que é o n° primo.*/
            {
                cout << vet[a] << endl;
            }
    }
    cout << "Aqui o maior numero \n"
        
         << n << endl;

    return 0;
}
