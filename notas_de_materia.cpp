#include <iostream>
using namespace std;
int main(){
float corto1, corto2, parcial1, parcial2, laboratorio, proyecto, notafinal;
cout<<"Programa de sistema de notas. \n";
do {cout<<"Ingrese la nota del corto 1: \n";
cin >> corto1;
if (corto1<0)
{
    cout << "Ingrese una nota valida\n";
}} while (corto1<0);
do {cout<<"Ingrese la nota del corto 2: \n";
cin >> corto2;
if (corto2<0)
{
    cout << "Ingrese una nota valida\n";
}} while (corto2<0);
do {cout<<"Ingrese la nota del parcial 1: \n";
cin >> parcial1;
if (parcial1<0)
{
    cout << "Ingrese una nota valida\n";
}} while (parcial1<0);
do {cout<<"Ingrese la nota del parcial2: \n";
cin >> parcial2;
if (parcial2<0)
{
    cout << "Ingrese una nota valida\n";
}} while (parcial2<0);

do {cout<<"Ingrese la nota del laboratorio: \n";
cin >> laboratorio;
if (laboratorio<0)
{
    cout << "Ingrese una nota valida\n";
}} while (laboratorio<0);
do {cout<<"Ingrese la nota del proyecto: \n";
cin >> proyecto;
if (proyecto<0)
{
    cout << "Ingrese una nota valida\n";
}} while (proyecto<0);
notafinal=corto1*0.1+corto2*0.1+parcial1*0.15+parcial2*0.2+laboratorio*0.2+proyecto*0.25;

if (notafinal>=6)
{
    cout<< "Usted aprobo la materia con:"<<notafinal<<"\n";
} else{
    cout<<"Usted reprobo la materia"<<notafinal<<"\n";
}


    return 0;
}