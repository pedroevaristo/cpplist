#include <iostream>
#include <math.h>
using namespace std;

int main()
{
int a, x = 1, y = 0; // x & y são auxiliares
int vet[5];

  cout << "Digite 5 numeros \n";

  cin >> vet[0];
  cin >> vet[1];
  cin >> vet[2];
  cin >> vet[3];
  cin >> vet[4];
    do
    {

        if (vet[y] >= x)//sistema de comparação entre os numeros
        {
        x = vet[y];//x e responsavel pela armazenagem dos valores
        //
        }
    y++;//vai passando para o proximo numero digitado
    }
   while (y < 5);
   cout <<"resultado: \n"<< x <<endl;
return 0;
}
