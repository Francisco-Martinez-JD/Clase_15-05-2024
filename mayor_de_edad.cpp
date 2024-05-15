#include <iostream>
using namespace std;
int main (){
int edad=0;
cout << "Programa para identificar si es mayor de edad \n";
cout << "Ingrese su edad: \n";
cin >> edad;
if (edad<18 && 0<=edad){
    cout<< "Usted es menor de edad.\n";} 
    else  if (edad >= 18)
    {   cout << "Usted es mayor de edad. \n";}
    else { cout << "Ingrese una edad valida. \n";

}
    return 0;
}