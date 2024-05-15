#include <iostream>
using namespace std;
int main(){
float angulo;
cout <<"Progama para determinar tipo de angulos. \n";
cout <<"Ingrese el angulo a evaluar. \n";
cin >> angulo;
if (angulo==90){
    cout << "El angulo ingresado es recto. \n";
} else if (angulo<=0){
    cout<< "Ingrese un angulo valido.\n";
} else if (angulo<90){
    cout << "El angulo ingresado es agudo.\n";
} else {
    cout << "El angulo es obtuso. \n";
}

    return 0;
}