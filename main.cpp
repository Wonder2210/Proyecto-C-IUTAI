#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
char res;
int Regis=0,IoV,MI,ResI,RegisI;
int i=0,j=0,a=0,b=0;
string nombre_art[b],st="mkdck";
float precio[b][2],pr=0.0;
int inventario[b],in=0;
		 		  

do{   

   cout<<"       Bienvenido al programa de registro de inventario y venta  "<<endl;   
   cout<<"       				 Elija la opción a trabajar    			   "<<endl;
   cout<<"				Inventario [1]                 Venta[2]		       "<<endl;
   cin>>IoV;
   cout<<""<<endl;
   
   if(IoV==1){
   		Regis=1;
   }
   
   if(Regis<1){
	   	cout<<""<<endl;
	   	cout<<"No puede acceder a la opción de venta hasta tener un registro de inventario"<<endl;
	   	cout<<"Será llevado al sistema de inventario. . ."<<endl;
	   	cout<<""<<endl;
		IoV=1;
   }
   
	switch(IoV){
		
		case 1:
			
   		cout<<"	---------------------"<<endl;
   		cout<<"	|   Inventario      |"<<endl;
   		cout<<"	---------------------"<<endl;
		cout<<""<<endl;
		
		cout<<"¿Qué operación desea realizar?"<<endl;
		cout<<"Registro de Inventario[1]  Revisión de Inventario[2]"<<endl;
		cin>>MI;
		
		if(MI==1){
			RegisI=1;
		}
		if(RegisI<1){
			cout<<""<<endl;
	   		cout<<"No puede acceder a la opción revisión ya que no ha ingresado nada"<<endl;
	   		cout<<"Será llevado al sistema de registro. . ."<<endl;
	   		cout<<""<<endl;
			MI=1;
		}
		
		if(a==0){		
			cout<<"Introduzca El numero de productos que vende la pasteleria"<<endl;
			cin>>b;  //Linea de código donde salta el error
			
			for(i=0;i<b;i++){
				nombre_art[i]="  ";
				precio[i][0]=0.0;
				precio[i][1]=0.0;
				inventario[i]=0;
			}
		}
			switch(MI){
			
				case 1:
					
		   				for(i=0;i<b;i++){
		       	
						   	nombre_art[i]="  ";
		       				precio[i][0]=0.0;
		       				precio[i][1]=0.0;
		       				inventario[i]=0;
		      				cout<<"Digite El nombre del articulo";
			 	    		cout<<"Digite El nombre del articulo"<<endl;
			       			cin>>nombre_art[i];
					   		cout<<"Digite El precio al detal del articulo";
					     	cout<<"Digite El precio al detal del articulo"<<endl;
				     	  	cin>>precio[i][0];
						 	cout<<"Digite El precio al mayor del articulo";
						    cout<<"Digite El precio al mayor del articulo"<<endl;
				       		cin>>precio[i][1];
						    cout<<"Digite La cantidad en existencia del articulo";
						    cout<<"Digite La cantidad en existencia del articulo"<<endl;
				       		cin>>inventario[i];
			   			}
		   		
		   		cout<<"¿Desea ver el inventario o regresar al meno principal?"<<endl;
		   		cout<<" Inventario [1]                    Menú [2]            "<<endl;
		   		cin>>ResI;
		   		cout<<endl;
		   		
		   		if(ResI==1){
		   			MI=2;
				   }
				else{
					res='s';
				}
		   		
				break;
				
				case 2:   
				
			     	cout<<" Nombre  Precio al Mayor   Precio al detal  Existencias  "<<endl;
			      	cout<<"------  ---------------   ---------------  -----------"<<endl;
			      
			   		for(i =0;i<b;i++){
			      	cout<<nombre_art[i]<<""<<precio[i][0]<<"  "<<precio[i][1]<<""<<inventario[i]<<endl;
			      	cout<<nombre_art[i]<<"        "<<precio[i][0]<<"       "<<precio[i][1]<<"        "<<inventario[i]<<endl;
			    	}
			    	
		    	break;
	    	
			}
 

	 case 2:
 
     cout<<"---------------------"<<endl;
     cout<<"|      Tienda       |"<<endl;
     cout<<"|                   |"<<endl;
     cout<<"---------------------"<<endl;
     cout<<""<<endl;
     cout<<""<<endl;
     
  }
  
  
	
}while(res=='s');
	
 
   return 0;
 }
