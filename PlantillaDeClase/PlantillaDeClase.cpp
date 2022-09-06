#include<iostream>
#include<string>
using namespace std;

//Pasando una clase para enteros a una Plantilla de Clase para 
//cualquier tipo de dato...

template<class T>
class Pareja {
private: 
	T primero;
	T segundo;
public:
	//Pareja();
	Pareja(T, T);
	virtual ~Pareja();
	T obtenerMayor();
	void fijarElemento(T ele, int lug);
	void imprimePareja();

};

//Definicion de metodos

template<class T>
Pareja<T>::Pareja(T pri, T seg) { 
	primero = pri;
	segundo = seg;
}

template<class T>
Pareja<T>::~Pareja() {
}

template<class T>
T Pareja<T>::obtenerMayor() {
	if (primero > segundo)
		return primero;
	else
		return segundo;
}

template<class T>
void Pareja<T>::fijarElemento(T ele, int lug) { // lug =  1 o 2
	if (lug == 1)
		primero = ele;
	else
		segundo = ele;

}

template<class T>
void Pareja<T>::imprimePareja() {
	cout << "El primero es :  " << primero << endl;
	cout << "El segundo es :  " << segundo << endl;

}

int main() {
	cout << " ------Trabajar con pareja de enteros-------" << endl;
	cout << "---------------------------------------------" << endl;
	Pareja<int> p1(0,0); // Es un contenedor de dos numeros enteros
	cout << "-------Fijando elementos en el objeto--------" << endl;
	p1.fijarElemento(34, 1); //El 34 seria el primer elemento
	p1.fijarElemento(76, 2); //El 76 seria el segundo elemento
	cout << endl;
	cout << "-------Obtener el mayor elemento del contenedor-------" << endl;
	cout << "El mayor elemento del contenedor es : " << p1.obtenerMayor() << endl;
	cout << endl;
	cout << "-----Imprimiendo el objeto Pareja--------" << endl;
	p1.imprimePareja();
	cout << endl << endl;

	//---------------------------OtroTipoDeDato-----------------------------------

	cout << " ------Trabajar con pareja de char-------" << endl;
	cout << "---------------------------------------------" << endl;
	Pareja<char> p2('a','b'); // Los dos elementos del contenedor son char
	cout << "-------Fijando elementos en el objeto--------" << endl;
	p2.fijarElemento('x', 1); //El x seria el primer elemento
	p2.fijarElemento('y', 2); //El y seria el segundo elemento
	cout << endl;
	cout << "-------Obtener el mayor elemento del contenedor-------" << endl;
	cout << "El mayor elemento del contenedor es : " << p2.obtenerMayor() << endl;
	cout << endl;
	cout << "-----Imprimiendo el objeto Pareja--------" << endl;
	p2.imprimePareja();
	cout << endl << endl;

	//---------------------------OtroTipoDeDato-----------------------------------

	cout << " ------Trabajar con pareja de string-------" << endl;
	cout << "---------------------------------------------" << endl;
	Pareja<string> p3("",""); // Es un contenedor de dos elementos tipo string
	cout << "-------Fijando elementos en el objeto--------" << endl;
	p3.fijarElemento("Carlos", 1); //Carlos seria el primer elemento
	p3.fijarElemento("Ana", 2); //Ana seria el segundo elemento
	cout << endl;
	cout << "-------Obtener el mayor elemento del contenedor-------" << endl;
	cout << "El mayor elemento del contenedor es : " << p3.obtenerMayor() << endl;
	cout << endl;
	cout << "-----Imprimiendo el objeto Pareja--------" << endl;
	p3.imprimePareja();
	cout << endl << endl;

	system("pause");
	return 0;
}