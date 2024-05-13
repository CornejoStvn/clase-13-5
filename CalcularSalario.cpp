#include <iostream>
using namespace std;

int main (){
int h=0, he=0, phe=0;
float neto=0, imp=0, final=0;
string nombre; 

cout<<"Ingrese nombre del trabajador: ";
cin>>nombre; 
cout<<"Ingrese horas trabajadas: " ; 
cin>>h; 

if (h<=160){
neto=h*10;
}
else if(h>161){
    he=h=160;
    phe=he*15;
    neto=(160*10)+phe;
    cout<<" El salario neto de"<< nombre<< " es: "<< neto <<"\n"; 
}
if (neto <=2000){
    cout<<" El salario de "<< nombre << "esta libre de impuestos. ";
}
else if (neto>2000 && neto<=2200){
    final=neto -(neto* 0.20);
    cout<<" El salario de "<<nombre<< "despues de impuestos es: "<<final;
}
else if (neto<=2201){
    final=neto -(neto* 0.30);
    cout<<" El salario de "<<nombre<< "despues de impuestos es: "<<final;
}
return 0; 
}