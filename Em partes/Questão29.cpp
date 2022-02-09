#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include <stdlib.h>

// Estudar para caramba em cima desse codigo, para se consegue. E aprender o máximo de coisas!
//colocar o a multiplicação no final da conta !!!!
using namespace std;
void part1();
void part2();
void part3();
void part4();
int x;
int z = 2, y, g; // y & o = total
int l = 3, o; // g = total do 3° if
int j = 5, K, k;
int L = 7, s, S;
int v;



int main()
{

  cout << "Digite 1 numero \n para ser mostrado no m.d.c:  ";
  cin >> x; // x é -> 9 | 3 <- y que vai chegar até chegar 1 e depois multiplicar a lista do lado direito

  for (int u = x; u > 0; u--)
  {

    if (x % l == 0){
       part1();
    }
  
    else if (x % z == 0)
        {
           part2();

         }
        
        
    else if(x % j == 0)
        {
          part3();

         }
    
    else if(x % s == 0){
      part4();
    }

    /*else if(x == x){
      cout << x << "|" << l << "\n";
      v = x / x;
      cout << v;
      exit(0);


    }*/
          //COLOCAR OUTRO IF PARA NUMERO PARA NUMERO PRIMO
        }
  }


  void part1()
  { // função

    cout << x << "|" << l << "\n";

      y = x / l;

      x = y;

        if(x % l == 1)
        {
        cout<<"1"<<endl;
        exit(0);
        }
        
        /*if (y % l == 0)
          {

          cout << y << "|" << l << "\n";
          g = y / l;
            if (g % l == 1){
            cout << "1";
            exit(0);
            }
          }*/
}


void part2()
{
  cout << x << "|" << z << "\n";

          o = x / z;

          x = o;

            if(x % z == 1)
            {
              cout<<"1"<<endl;
            }
}


  void part3()
  {

  cout<< x <<"|"<< j<<"\n" ;

    k = x / j ;

    x = k;

    if(x % j == 1){
      cout<<"1"<<endl;
      exit(0);
    }
    
    
  }


  void part4(){
    cout<< x <<"|"<< s<<"\n";

      S = x / s;

       x = S;

       if(x % j == 1){
      cout<<"1"<<endl;
      exit(0);
    }

  }


/*int main()
{

  cout << "Digite 1 numero \n para ser mostrado no m.d.c";
  cin >> x; // x é -> 9 | 3 <- y que vai chegar até chegar 1 e depois multiplicar a lista do lado direito

  for (int u = x; u > 0; u--)
  {

    if (x % l == 0){
      part1();
    }
  
        else if (x % z == 0)
        {
        cout << x << "|" << z << "\n";

          o = x / z;

          x = o;

            if(x % z == 1){
              cout<<"1"<<endl;

            }
        
        }
          else if(x % j == 0){

            void partif3();

          }
          
          //COLOCAR OUTRO IF PARA NUMERO PARA NUMERO PRIMO
        }
  }


  void part1()
  { // função

    cout << x << "|" << l << "\n";

      y = x / l;

        if (y % l == 0)
          {

          cout << y << "|" << l << "\n";
          g = y / l;
            if (g % l == 1){
            cout << "1";
            exit(0);
            }
  }
    void partif3(){


    }





  } */