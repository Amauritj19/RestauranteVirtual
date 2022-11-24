#include<iostream>
#include<conio.h>
using namespace std;

int main(){
int  menu;

 
 cout<<"*********************************************";
cout<<"\nbienvenidos a nuestro restaurante vurtual\n";
cout<<"*************************************************\n" <<endl;

//esta la utilizamos para no mostrar "press any key" en el teclado;

getch();


cout<<"\n1-Platos \n2-Bebidas \n3-Postres\n";
cin>>menu;

cout<<"\n***************************************************\n";

switch (menu){
	
	case 1: cout<<"\n1-Albondigas de res \n2-espaguetis \n3-arroz\nvolver a menu ";break;

	
	
	
	case 2: cout<<"\n1-Refresco Rojo \n2-Coca-Cola\n3-Sprite\n 4-Volver a menu\n";break;
	case 3: cout<<"\n1-Arroz con leche \n2-Flan de Leche\n3-Volver al menu " ;break;
default: cout<<"no esta aqui"; break;	
	
}


return 0;

}


