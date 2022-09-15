#pragma once
#include "Forma.h"
#include <iostream>
using namespace std;
class Cuadrado :public PolvoCosmico {
private:
	int tipo, coorX, coorY, tam;
public:
	void setcoorY(int cY) {
		coorY = cY;
	}
	void setcoorX(int cX) {
		coorX = cX;
	}
	void settam(int tamano) {
		tam = tamano;
	}
	void settipo(int tip) {
		tipo = tip;
	}

	int getcoorX() {
		if (coorX < 0) {
			coorX = 0;
		}
		else if (coorX > 40) {
			coorX = 40;
		}
		return coorX;
	}
	int getcoorY() {
		if (coorY < 0) {
			coorY = 0;
		}
		else if (coorY > 40) {
			coorY = 40;
		}
		return coorY;
	}
	int gettam() {
		if (tam < 4) {
			tam = 4;
		}
		else if (tam > 40) {
			tam = 40;
		}
		return tam;
	}
	int gettipo() {
		if (tipo < 1) {
			tipo = 1;
		}
		else if (tipo > 2) {
			tipo = 2;
		}
		return tipo;
	}
	void setdibujar() {
		char move;
		while ((move = cin.get()) != 'q') {
			system("cls");
			cout << "Coordenadas: X = " << getcoorX() << "| Y = " << getcoorY() << endl;
			if (move == 'w') {
				coorY--;
			}
			else if (move == 's') {
				coorY++;
			}
			else if (move == 'a') {
				coorX--;

			}
			else if (move == 'd') {
				coorX++;
			}
			cout << endl;
			for (int c = 0; c < getcoorY(); c++) {
				cout << endl;
			}
			for (int c = 0; c < gettam(); c++) { //filas
				for (int i = 0; i < getcoorX(); i++) {
					cout << " ";
				}
				for (int i = 0; i < gettam(); i++) { //columnas
					if (gettipo() == 1) {
						cout << "* ";
					}
					else {
						if ((c == 0 || i == 0) || (c == (gettam() - 1)) || (i == (gettam() - 1))) {
							cout << "* ";
						}
						else {
							cout << "  ";
						}
					}
				}
				cout << endl;
			}
		}
	}
};
class Triangulo :public PolvoCosmico {
private:
	int tipo, coorX, coorY, tam;
public:
	void setcoorY(int cY) {
		coorY = cY;
	}
	void setcoorX(int cX) {
		coorX = cX;
	}
	void settam(int tamano) {
		tam = tamano;
	}
	void settipo(int tip) {
		tipo = tip;
	}

	int getcoorX() {
		if (coorX < 0) {
			coorX = 0;
		}
		else if (coorX > 40) {
			coorX = 40;
		}
		return coorX;
	}
	int getcoorY() {
		if (coorY < 0) {
			coorY = 0;
		}
		else if (coorY > 40) {
			coorY = 40;
		}
		return coorY;
	}
	int gettam() {
		if (tam < 4) {
			tam = 4;
		}
		else if (tam > 40) {
			tam = 40;
		}
		return tam;
	}
	int gettipo() {
		if (tipo != 2) {
			tipo = 2;
		}
		return tipo;
	}
	void setdibujar() {
		char move;
		while ((move = cin.get()) != 'q') {
			system("cls");
			cout << "Coordenadas: X = " << getcoorX() << "| Y = " << getcoorY() << endl;
			if (move == 'w') {
				coorY--;
			}
			else if (move == 's') {
				coorY++;
			}
			else if (move == 'a') {
				coorX--;

			}
			else if (move == 'd') {
				coorX++;
			}
			cout << endl;
			for (int c = 0; c < getcoorY(); c++) {
				cout << endl;
			}
			for (int c = 1; c <= gettam(); c++) {
				for (int i = 0; i < getcoorX(); i++) {
					cout << " ";
				}
				for (int i = 0; i < c; i++) {
					if (gettipo() == 2) {
						cout << "* ";
					}
				}
				cout << endl;
			}
		}
	}
};
class Romboide :public PolvoCosmico {
private:
	int tipo, coorX, coorY, tam;
public:
	void setcoorY(int cY) {
		coorY = cY;
	}
	void setcoorX(int cX) {
		coorX = cX;
	}
	void settam(int tamano) {
		tam = tamano;
	}
	void settipo(int tip) {
		tipo = tip;
	}

	int getcoorX() {
		if (coorX < 0) {
			coorX = 0;
		}
		else if (coorX > 40) {
			coorX = 40;
		}
		return coorX;
	}
	int getcoorY() {
		if (coorY < 0) {
			coorY = 0;
		}
		else if (coorY > 40) {
			coorY = 40;
		}
		return coorY;
	}
	int gettam() {
		if (tam < 4) {
			tam = 4;
		}
		else if (tam > 40) {
			tam = 40;
		}
		return tam;
	}
	int gettipo() {
		if (tipo < 1) {
			tipo = 1;
		}
		else if (tipo > 2) {
			tipo = 2;
		}
		return tipo;
	}
	void setdibujar() {
		char move;
		while ((move = cin.get()) != 'q') {
			system("cls");
			cout << "Coordenadas: X = " << getcoorX() << "| Y = " << getcoorY() << endl;
			if (move == 'w') {
				coorY--;
			}
			else if (move == 's') {
				coorY++;
			}
			else if (move == 'a') {
				coorX--;

			}
			else if (move == 'd') {
				coorX++;
			}
			cout << endl;
			for (int c = 0; c < getcoorY(); c++) {
				cout << endl;
			}
			int aux = gettam() - 1;
			for (int i = 1; i <= gettam(); i++)
			{
				for (int c = 1; c <= getcoorX(); c++)
				{
					cout << " ";
				}
				for (int c = 1; c <= aux; c++)
				{
					cout << " ";
				}
				aux = aux - 1;
				for (int c = 1; c <= gettam(); c++)
				{
					if (gettipo() == 2)
					{
						cout << "* ";
					}
				}
				cout << endl;
			}
		}
	}
};
class Menu {
private:
	int opc, tam, coorX, coorY;
public:
	Menu() {
		opc = 0;
		tam = 0;
		coorX = 0;
		coorY = 0;
	}
	void run() {
		do {
			cout << "Escoga una figura" << endl;
			cout << "1.Cuadrado\n2.Triangulo\n3.Romboide" << endl;
			cin >> opc;

			cout << "Introduzca la coordenada X" << endl;
			cin >> coorX;
			cout << "Introduzca la coordenada Y" << endl;
			cin >> coorY;

			cout << "Introduzca el tama�o de la figura" << endl;
			cin >> tam;
			system("cls");
			if (opc == 1) {
				cout << "Usted eligio la opcion" << opc << endl;
				cout << "Cuadrado" << endl;
				cout << "Quiere que la figura este:\n1.Rellena\n2.Vacia" << endl;
				cin >> opc;
				Cuadrado cuadrado;
				lienzo(&cuadrado, opc, coorX, coorY, tam);
			}
			else if (opc == 2) {
				cout << "Usted eligio la opcion" << opc << endl;
				cout << "Triangulo" << endl;
				Triangulo triangulo;
				lienzo(&triangulo, coorX, coorY, tam, opc);
			}
			else if (opc == 3) {
				cout << "Usted eligio la opcion" << opc << endl;
				cout << "Romboide" << endl;
				Romboide romboide;
				lienzo(&romboide, coorX, coorY, tam, opc);
			}

			cout << "Quiere otra figura?\n1.Si\n2.Salir" << endl;
			cin >> opc;
		} while (opc != 2);
	}
	void lienzo(PolvoCosmico* forma, int tipo, int coorX, int coorY, int tam) {
		forma->setcoorX(coorX);
		forma->setcoorY(coorY);
		forma->settam(tam);
		forma->settipo(tipo);
		forma->setdibujar();
	}
};
