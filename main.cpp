#include <iostream>
#include <string>
using namespace std;

int main()
{
	char res;
	int Regis = 0, IoV = 0, MI = 0, ResI = 0, RegisI = 0,cedula=0,telf=0;
	int i = 0, j = 0, a = 0, in = 0,b=0,bb=0,number=0,nm=0;
	string name="gdgd",nombre="    ";
	float total=0.0,total_t=0.0;

	do
	{

		cout << "       Bienvenido al programa de registro de inventario y venta  " << endl;
		cout << "       				 Elija la opción a trabajar    			   " << endl;
		cout << "				Inventario [1]                 Venta[2]		       " << endl;
		cin >> IoV;
		cout << "" << endl;

		if (IoV == 1)
		{
			Regis = 1;
		}

		if (Regis < 1)
		{
			cout << "" << endl;
			cout << "No puede acceder a la opción de venta hasta tener un registro de inventario" << endl;
			cout << "Será llevado al sistema de inventario. . ." << endl;
			cout << "" << endl;
			IoV = 1;
		}



			cout << "	---------------------" << endl;
			cout << "	|   Inventario      |" << endl;
			cout << "	---------------------" << endl;
			cout << "" << endl;

			cout << "¿Qué operación desea realizar?" << endl;
			cout << "Registro de Inventario[1]  Revisión de Inventario[2]" << endl;
			cin >> MI;

			if (MI == 1)
			{
				RegisI = 1;
			}
			if (RegisI < 1)
			{
				cout << "" << endl;
				cout << "No puede acceder a la opción revisión ya que no ha ingresado nada" << endl;
				cout << "Será llevado al sistema de registro. . ." << endl;
				cout << "" << endl;
				MI = 1;
				res='r';
			}


	}while(res=='s');
	res='s';
	if (a == 0)
			{
				cout << "Introduzca El numero de productos que vende la pasteleria" << endl;

				cin >> b; //Linea de código donde salta el error
			}

	bb = b;
	string nombre_art[bb], st = "mkdck";
	float precio[bb][2], pr = 0.0;
	int inventario[bb];
	do{




			for (i = 0; i < b; i++)
			{
				nombre_art[i] = "  ";
				precio[i][0] = 0.0;
				precio[i][1] = 0.0;
				inventario[i] = 0;
			} //aca se inicializa los a

			switch (MI)
			{

			case 1:

				for (i = 0; i < b; i++)
				{

					cout << "Digite El nombre del articulo" << endl;
					cin >> nombre_art[i];

					cout << "Digite El precio al detal del articulo" << endl;
					cin >> precio[i][0];

					cout << "Digite El precio al mayor del articulo" << endl;
					cin >> precio[i][1];

					cout << "Digite La cantidad en existencia del articulo" << endl;
					cin >> inventario[i];
				}

				cout << "¿Desea ver el inventario o regresar al menu principal?" << endl;
				cout << " Inventario [1]                    Menú [2]            " << endl;
				cin >> ResI;
				cout << endl;

				if (ResI == 1)
				{

					cout << " Nombre  Precio al Mayor   Precio al detal  Existencias  " << endl;
				cout << "------  ---------------   ---------------  -----------" << endl;

				for (i = 0; i < bb; i++)
				{
					cout << nombre_art[i] << "      " << precio[i][0] << "         " << precio[i][1] << "        " << inventario[i] << endl;


			     }
				}
				else
				{
					res = 's';
				}

				break;

			case 2:

				cout << " Nombre  Precio al Mayor   Precio al detal  Existencias  " << endl;
				cout << "------  ---------------   ---------------  -----------" << endl;

				for (i = 0; i < b; i++)
				{
					cout << nombre_art[i] << "" << precio[i][0] << "  " << precio[i][1] << "" << inventario[i] << endl;

				break;
			}

			}






	}while (res == 's');



while(j==0){
    cout << "---------------------" << endl;
    cout << "|      Tienda       |" << endl;
    cout << "|                   |" << endl;
    cout << "---------------------" << endl;
    cout << "" << endl;
    cout << "" << endl;

    cout<<"Nombre del cliente"<<endl;
    cin>>nombre;
    cout<<"Cedula del cliente"<<endl;
    cin>>cedula;
    cout<<"Numero de telefono"<<endl;
    cin>>telf;

    cout<<"    Compras "<<endl;
    cout<<"-------------"<<endl;

    cout<<"Ingrese el numero del articulo"<<endl;
    cout<<"_____________________________"<<endl;
    for(i=0;i<(b/2);i++){
        cout<<"|"<<nombre[i]<<" numero"<<i+1<<" :Precio al detal"<<precio[i][0]<<" precio al mayor:"<<precio[i][1]<<"|"<<endl;
    }
    cout<<"_____________________________"<<endl;

    while(j==0){
        cin>>number;
        cout<<"Ingrese el numero de unidades a llevar"<<endl;
        cin>>nm;

       if (nm<inventario[number-1]){
		    if(nm>12){
            total=precio[number-1][1]*nm;
            inventario[number-1]-=nm;
            total_t=total;
        }
        else{
            total=precio[number-1][0]*nm;
            inventario[number-1]-=nm;
            total_t=total;
        }
	   }else{
		   cout<<"Es incorrecta esa cantidad solo se le quedan disponibles "<<inventario[number-1]<<endl;
	   }

        cout<<"Ingrese 0 para llevar otro articulo"<<endl;
        cin>>j;

    }
    cout<<"Total a pagar:"<<total<<endl;
    cout<<"Total a pagar con iva:"<<total*1.12<<endl;

    cout<<"Presione 0 para seguir vendiendo"<<endl;
    cin>>j;
}
return 0;
}
