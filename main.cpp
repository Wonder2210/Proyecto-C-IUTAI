#include <iostream>
#include<string>

using namespace std;
int main(int argc, char const *argv[]) {
  int i=0,j=0;
  cout<<"       BIenvenido al programa de registro control y venta       "<<endl;
  cout<<"        Para empezar registre el inventario        "<<endl;
  
  cout<<"---------------------"<<endl;
  cout<<"|   Inventario      |"<<endl;
  cout<<"|                   |"<<endl;
  cout<<"---------------------"<<endl;
  cout<<"Introduzca El numero de productos "<<endl<<"que vende la pasteleria"<<endl;
  int a;
  cin>>a;
  string nombre_art[a],st="mkdck";
  float precio[a][2],pr=0.0;
  int inventario[a],in=0;


  for(i=0;i<a;i++){
      nombre_art[i]="  ";
      precio[i][0]=0.0;
      precio[i][1]=0.0;
      inventario[i]=0;
      cout<<"Digite El nombre del articulo";
      cin>>nombre_art[i];
      cout<<"Digite El precio al detal del articulo";
      cin>>precio[i][0];
      cout<<"Digite El precio al mayor del articulo";
      cin>>precio[i][1];
      cout<<"Digite La cantidad en existencia del articulo";
      cin>>inventario[i];
  }
    cout<<" Nombre  Precio al Mayor   Precio al detal  Existencias  "<<endl;
     cout<<"──────  ───────────────   ───────────────  ───────────"<<endl;
  for(i =0;i<a;i++){
      cout<<nombre_art[i]<<""<<precio[i][0]<<"  "<<precio[i][1]<<""<<inventario[i]<<endl;

  }

  while (a==0){
    cout<<"---------------------"<<endl;
    cout<<"|   Inventario      |"<<endl;
    cout<<"|                   |"<<endl;
    cout<<"---------------------"<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<"    Presione:        "<<endl;
    

    

  }
  while(a==1){
    cout<<"---------------------"<<endl;
    cout<<"|      Tienda       |"<<endl;
    cout<<"|                   |"<<endl;
    cout<<"---------------------"<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
  }
  return 0;
}

