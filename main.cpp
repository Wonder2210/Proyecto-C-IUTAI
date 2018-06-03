#include <iostream>

using namespace std;
int main(int argc, char const *argv[]) {
  cout<<"       BIenvenido al programa        "<<endl;
  cout<<"       Presione [0] para registro y control        "<<endl;
  cout<<"       Presione [1] para vender         "<<endl;
  int a;
  cin>>a;
  while (a==0){
    cout<<"---------------------"<<endl;
    cout<<"|  Registro         |"<<endl;
    cout<<"|     y control     |"<<endl;
    cout<<"---------------------"<<endl;
    cout<<""<<endl;
    cout<<""<<endl;

  }
  while(a==1){
    cout<<"---------------------"<<endl;
    cout<<"|      Ventas       |"<<endl;
    cout<<"|                   |"<<endl;
    cout<<"---------------------"<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
  }
  return 0;
}
