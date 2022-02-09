#include <iostream>

using namespace std;

int main()
{
    int a, x = 0, t = 1;//sempre colocar isso aí !!!

    cin >> a;

    for( ; a >= 1; a--){
        t*= a;
        cout<< a <<"n"<<endl;
    }
    
    
   
    cout<<"Resultado: \n"<< t <<endl;
    
}