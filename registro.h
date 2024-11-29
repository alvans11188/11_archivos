#include <iostream>
using namespace std;

const int MAX = 10;
struct tRegistro{
	int codigo;
	char item[MAX];
	int valor;
};
int SIZE = sizeof(tRegistro);

void mostrar(tRegistro &reg){
	cout << "Codigo: " << reg.codigo << endl;
	cout << "Item: " << reg.item << endl;
	cout << "Valor: " << reg.valor << endl;
}
