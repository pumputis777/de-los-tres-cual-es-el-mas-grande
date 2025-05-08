/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    float A; // defino la primera variable de tipo float
    float B; // defino la segunda variable de tipo float
    float C; // defino la tercera variable de tipo float
    
    cout << "este programa ve cual es el mayor y cual el menor de 3 numeros" <<endl; // le indica lo que hace el programa al usuario
    cout << "ingrese el primer numero :"; // le pide al usuario que ingrese un numero
    cin >> A; // guarda el valor dado por el usuario en la variable A
    cout << "ingrese el segundo numero :"; // le pide al usuario que ingrese el segundo numero
    cin >> B; // guarda el valor dado por el usuario en la variable B
    cout << "ingrese el tercer numero :"; // le pide al usuario que ingrese el tercer numero
    cin >> C; // guarda el valor dado por el usuario en la variable C
    if (A==B and B==C) // pone una condicion que si se cumple se ejecuta lo de dentro de las llaves
    {
        cout << "los tres numeros son iguales ingrese otros"; // si se ejecuta le va a pedir que ingrese otros numeros
        return 0;
    }
    if (A>B and A>C and B>C)  // pone una condicion que si se cumple le dice al usuario que numero es mas grande y cual mas chico
    {
      cout << "el numero mas grande es: " << A << " y el menor es: " << C;
    }
    else if (B>A and B>C and C>A) // pone una condicion que si se cumple le dice al usuario que numero es mas grande y cual mas chico
    {
      cout << "el mayor numero es: " << B << " y el menor es: " << A;     
    }
    else if (C>A and C>B and A>B) // pone una condicion que si se cumple le dice al usuario que numero es mas grande y cual mas chico
    {
      cout << "el mayor es: " << C << " y el menor es: " << B;    
    }
     else if (B>A and B>C and A>C) // pone una condicion que si se cumple le dice al usuario que numero es mas grande y cual mas chico
    {
      cout << "el mayor es: " << B << " y el numero mas chico es: " << C;    
    }
     else if (A>C and A>B and C>B) // pone una condicion que si se cumple le dice al usuario que numero es mas grande y cual mas chico
    {
      cout << "el mas grande es: " << A << " y el mas chico es: " << B;    
    }
     else if (C>A and C>B and B>A) // pone una condicion que si se cumple le dice al usuario que numero es mas grande y cual mas chico
    {
      cout << "el mayor es: " << C << " y el mas chico es: " << A;    
    }
    return 0;
}
