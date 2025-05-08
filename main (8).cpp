/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    float A;
    float B;
    float C;
    
    cout << "este programa ve cual es el mayor y cual el menor de 3 numeros" <<endl;
    cout << "ingrese el primer numero :";
    cin >> A;
    cout << "ingrese el segundo numero :";
    cin >> B;
    cout << "ingrese el tercer numero :";
    cin >> C;
    if (A==B and B==C)
    {
        cout << "los tres numeros son iguales ingrese otros";
        return 0;
    }
    if (A>B and A>C and B>C)
    {
      cout << "el numero mas grande es: " << A << " y el menor es: " << C;
    }
    else if (B>A and B>C and C>A)
    {
      cout << "el mayor numero es: " << B << " y el menor es: " << A;     
    }
    else if (C>A and C>B and A>B)
    {
      cout << "el mayor es: " << C << " y el menor es: " << B;    
    }
     else if (B>A and B>C and A>C)
    {
      cout << "el mayor es: " << B << " y el numero mas chico es: " << C;    
    }
     else if (A>C and A>B and C>B)
    {
      cout << "el mas grande es: " << A << " y el mas chico es: " << B;    
    }
     else if (C>A and C>B and B>A)
    {
      cout << "el mayor es: " << C << " y el mas chico es: " << A;    
    }
    return 0;
}