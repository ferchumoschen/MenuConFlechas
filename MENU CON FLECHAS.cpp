#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <windows.h>
#include <conio.h>

#define MenuInicio 1     // Establecer el primer numero del menu
#define MenuFin 5	 // Establecer último numero del menu
#define LineaDeInicio 2  // Establecer la linea donde empieza el menu

// ir a una línea determinada
void goy(int y);
void viral();
void gotoxy(int x, int y) {

COORD coord;
coord.X = x;
coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void menu();
void bebidas();
using namespace std;
int main() {
    system("Color F1");
    int Menu;
	viral();
	printf("\n\t");
	printf("\n");
    goy(LineaDeInicio);
	printf("\t1. Ver las bebidas\n");
	printf("\t2. Ver articulos de Crossfit\n");
	printf("\t3. Ver clases de crossfit \n");
	printf("\t4. Nuestro preparador de clases\n");
	printf("\t5. Cerrar programa\n");
	Menu = 1;
	goy(LineaDeInicio);
	printf("--->");

	while(true) {
		Sleep(100);
		if (GetAsyncKeyState(VK_UP)) {
			Menu = Menu == MenuInicio ? MenuFin: --Menu;
			printf("\r     ");
			goy(LineaDeInicio + Menu-1);
			printf("---->");
		} else if (GetAsyncKeyState(VK_DOWN)) {
			Menu = Menu == MenuFin ? MenuInicio: ++Menu;
			printf("\r     ");
			goy(LineaDeInicio + Menu-1);
			printf("---->");
		} else if (GetAsyncKeyState(VK_RETURN)) {
			break;
		}
	}
	goy(10);
	system("pause");
}


void goy(int y) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = 0;
	pos.Y = y;
	SetConsoleCursorPosition(hConsole, pos);
}
void viral(){
  system("Color 0f");
  int x=0,n;
  for(x=1;x<=40;x++)
  {
    gotoxy(x,1);printf(".");
    gotoxy(4,3);printf("            TIENDA AR1     ");
    gotoxy(x,4);printf(".");
    if(x<=4)
    {
      gotoxy(1,x);printf(".");
      gotoxy(40,x);printf(".");
    }
  }
  getch();
  system("CLS");
}
void menu(){
system("Color F1");
int Menu;
goy(LineaDeInicio);
	printf("\t1. Ver las bebidas\n");
	printf("\t2. Ver articulos de Crossfit\n");
	printf("\t3. Ver clases de crossfit \n");
	printf("\t4. Nuestro preparador de clases\n");
	printf("\t5. Cerrar programa\n");
	Menu = 1;
	goy(LineaDeInicio);
	printf("--->");

	while(true) {
		Sleep(100);
		if (GetAsyncKeyState(VK_UP)) {
			Menu = Menu == MenuInicio ? MenuFin: --Menu;
			printf("\r     ");
			goy(LineaDeInicio + Menu-1);
			printf("---->");
		} else if (GetAsyncKeyState(VK_DOWN)) {
			Menu = Menu == MenuFin ? MenuInicio: ++Menu;
			printf("\r     ");
			goy(LineaDeInicio + Menu-1);
			printf("---->");
		} else if (GetAsyncKeyState(VK_RETURN)) {
			break;
		}
	}
	goy(10);
	system("pause");
}
void bebidas(){
    system("COLOR F2");
    int b,c;
    cout << "BEBIDA \t\t\t\tPRECIO \t\t\t\tCODIGO" << endl;
    cout << "\n";
    cout << "Powerade(G) \t\t\t$80 \t\t\t\t1 " << endl;
    cout << "\n";
    cout << "Powerade(C) \t\t\t$50 \t\t\t\t2 " << endl;
    cout << "\n";
    cout << "Agua(C) \t\t\t$40 \t\t\t\t3 " << endl;
    cout << "\n";
    cout << "Agua(G) \t\t\t$60 \t\t\t\t4 " << endl;
    cout << "\n";
    cout << "Energizante \t\t\t$70 \t\t\t\t5  " << endl;
    cout << "\n\n";
    cout << "INGRESE EL CODIGO DE LA BEBIDA QUE DESEA COMPRAR: ";
    cin >> b;
    cout << "INGRESE LA CANTIDAD: ";
    cin >> c;
    if(b==1){
        cout << "\n";
        cout << "Usted compro una Powerade Grande" << endl;
        cout << "El precio es de: $" << 80*c << endl;
        cout << "\n\n";
        cout << "Gracias por su compra " << endl;
    }
    if(b==2){
        cout << "\n";
        cout << "Usted compro una Powerade Chica" << endl;
        cout << "El precio es de: $" << 50*c << endl;
        cout << "\n\n";
        cout << "Gracias por su compra " << endl;
    }
    if(b==3){
        cout << "\n";
        cout << "Usted compro un Agua Chica" << endl;
        cout << "El precio es de: $" << 40*c << endl;
        cout << "\n\n";
        cout << "Gracias por su compra " << endl;
    }
    if(b==4){
        cout << "\n";
        cout << "Usted compro un Agua Grande" << endl;
        cout << "El precio es de: $" << 60*c << endl;
        cout << "\n\n";
        cout << "Gracias por su compra " << endl;
            }
    if(b==5){
        cout << "\n";
        cout << "Usted compro un Energizante" << endl;
        cout << "El precio es de: $" << 70*c << endl;
        cout << "\n\n";
        cout << "Gracias por su compra " << endl;
    }
    }

