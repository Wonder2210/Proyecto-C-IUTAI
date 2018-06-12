#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){

	int b=20;
	int bb = b;
	string nombre_art[bb], st = "mkdck",diario="   ";
	float precio[bb][2], pr = 0.0;
	int inventario[bb],sw=0;

	int z=1,x;
	string nombre2;
	float pag[z];

	char res;
	int Regis = 0, IoV = 0, MI = 0, ResI = 0, RegisI = 0,cedula=0;
	int i = 0,jr=0, j = 0, a = 0, in = 0,s=0,number=0,nm=0,nmm=0,nms=0;

	string name="gdgd";
	float total=0.0,total_t=0.0,telf=0;

	do{

		cout << "       Bienvenido al programa de registro de inventario y venta   " << endl;
		cout << "       				 Elija la opción a trabajar    			   " << endl;
		cout << "	Inventario [1]                 Venta[2]	 		Salir[3]	   " << endl;
		cin >> IoV;
		cout << "" << endl;

	if(IoV==3){
		Regis=2;
		a=2;
		res='n';
	}
		if(IoV==1){
			Regis = 1;
		}

		if (Regis < 1)
		{
			cout << "" << endl;
			cout << "No puede acceder a la opción de venta hasta tener un registro de inventario" << endl;
			cout << "Será llevado al sistema de inventario. . ." << endl;
			cout << "" << endl;
			Regis = 1;
			IoV=1;
		}

	if (IoV == 1){


			cout << "	---------------------" << endl;
			cout << "	|   Inventario      |" << endl;
			cout << "	---------------------" << endl;
			cout << "" << endl;

			cout << "¿Qué operación desea realizar?" << endl;
			cout << "Registro de Inventario[1]  Revisión de Inventario[2]" << endl;
			cin >> MI;

			if(MI==1){
				RegisI = 1;
			}

			if (RegisI < 1)
			{
				cout << "" << endl;
				cout << "No puede acceder a la opción revisión ya que no ha ingresado nada" << endl;
				cout << "Será llevado al sistema de registro. . ." << endl;
				cout << "" << endl;
				MI = 1;
			}

			if (a == 0){
				cout << "Introduzca El numero de productos que vende la pasteleria" << endl;

				cin >> b; //Linea de código donde salta el error

			bb=b;

			for (i = 0; i < b; i++)
			{
				nombre_art[i] = "  ";
				precio[i][0] = 0.0;
				precio[i][1] = 0.0;
				inventario[i] = 0;
			} //aca se inicializa los a
			a++;
			}

			if(MI==1){

				for (i = 0; i < b; i++)
				{

					cout << "Digite El nombre del articulo" << endl;
					cin >> nombre_art[i];
					cout<<""<<endl;

					cout << "Digite El precio al detal del articulo" << endl;
					cin >> precio[i][0];
					cout<<""<<endl;

					cout << "Digite El precio al mayor del articulo" << endl;
					cin >> precio[i][1];
					cout<<""<<endl;

					cout << "Digite La cantidad en existencia del articulo" << endl;
					cin >> inventario[i];
					cout<<""<<endl;
				}

			cout << "¿Desea ver el inventario o regresar al menu principal?" << endl;
			cout << " Inventario [1]           Menu [2]                   " << endl;
			cin >> ResI;
			if(ResI==2){
				res='s';
			}
			cout << endl;
	}

		if (ResI == 1 || MI==2){
					cout << " Nombre | Precio al Mayor |  Precio al detal | Existencias  " << endl;
					cout << "------  ---------------   ---------------  -----------" << endl;

					for (i = 0; i < bb; i++)
					{
						cout << nombre_art[i] << "   |  " << precio[i][0] << "     |    " << precio[i][1] << "    |    " << inventario[i] << endl;


				     }
				     cout<<endl;
				     cout << "¿Desea ir a la tienda o regresar al menu principal?" << endl;
					 cout << " Tienda [1]                       Menu [2]        " << endl;
					 cin>>ResI;
					 if(ResI==1){
						 IoV=2;
						}
					 if(ResI==2){
						 res='s';
						}
					}
	}

	if(IoV==2){
		x=-1;

		do{
		j=0;
		z++;
		x=x+1;
		cout<<endl;
	    cout << "---------------------" << endl;
	    cout << "|      Tienda       |" << endl;
	    cout << "|                   |" << endl;
	    cout << "---------------------" << endl;
	    cout << "" << endl;
	    cout << "" << endl;


		cout<<endl;
	    cout<<"Nombre del cliente"<<endl;
	    cin>>nombre2;
	    cout<<endl;

	    cout<<"Cedula del cliente"<<endl;
	    cin>>cedula;
	    cout<<endl;

	    cout<<"Numero de telefono"<<endl;
	    cin>>telf;
		cout<<endl;

	    cout<<"    Compras "<<endl;
	    cout<<"-------------"<<endl;

	    cout<<"Ingrese el numero del articulo"<<endl;
	    cout<<"_____________________________"<<endl;
	    for(i=0;i<b;i++){
	        cout<<"|  "<<nombre_art[i]<<" numero "<<i+1<<"  Precio al detal: "<<precio[i][0]<<" precio al mayor:"<<precio[i][1]<<"|"<<endl;
	    }
	    cout<<"_____________________________"<<endl;

	    while(j==0){
	    	cout<<"Ingrese el numero del articulo"<<endl;
	        cin>>number;
	        cout<<"Ingrese el numero de unidades a llevar"<<endl;
	        cin>>nm;

	       if (nm<inventario[number-1]){
			    if(nm>12){
	            total=precio[number-1][1]*nm;
	            inventario[number-1]-=nm;
	            total_t+=total;
	        	}
	        	else{
	            total=precio[number-1][0]*nm;
	            inventario[number-1]-=nm;
		        total_t+=total;
		        }
		   }
		   else{
			   cout<<"Es incorrecta esa cantidad solo se le quedan disponibles "<<inventario[number-1]<<endl;
		   }

	        cout<<"Ingrese 0 para llevar otro articulo 1 para salir"<<endl;
	        cin>>j;

	    }while (j==0);

	    cout<<"Total a pagar:"<<total<<endl;
	    cout<<"Total a pagar con iva:"<<total*1.12<<endl;



	    cout<<"Presione 0 para seguir vendiendo o 1 para salir"<<endl;
	    cin>>j;

	    diario += nombre2 +":"+ static_cast<ostringstream*>(&(ostringstream() << total*1.12))->str() +"\n";

		}while (j==0);



	}

	cout<<"¿Desea seguir en el programa? (s/n)"<<endl;
	cin>>res;

}while(res=='s');

cout<<"Presione 1 para ver el historial de ventas y terminar o 0 para terminar"<<endl;
cin>>sw;

switch(sw){
case 1:
    cout<<diario<<endl;
    cout<<"venta total del dia"<<total_t<<endl;

    cout<<"HASTA LUEGO"<<endl;

    break;
case 0:
    cout<<"HASTA LUEGO"<<endl;
    break;
}

return 0;

}
