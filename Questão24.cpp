#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x, y, t; //auxilaires: t = quociente, x= resto
    int a, b;//dividendo e divisor

    cin >> a;// dividendo
    cin >> b;//divisor

x = a % b;
y = 0;
       while(y < b){/*ajeitar as coisas ainda!!!! 
       Enquanto o y for meno que o divisor, por exemplo de 2 */
           a = a - b;

           y = y + 1;
       }

        cout<<a<<endl;//o queociente
        cout<<y<<endl;//Quantidade de vezes que repetiu
        cout<<x <<endl;//o resto
    return 0;
    /*Vale acrescentar que substituir na parte 
    while(y < b ) para a pois era o maior o*/
}
/* for(x = 0; x < b; x++){
    
        a = a - b;
        
        //cout<<"- \n"<<endl;
        } */