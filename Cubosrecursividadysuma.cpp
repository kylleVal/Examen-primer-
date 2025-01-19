/*Mediante funciones recursivas, realizar un programa para desplegar la suma de los
primeros N términos naturales al cubo. Desplegar por pantalla el siguiente resultado, por
ejemplo, si el usuario ingresó el valor de 5 se debe desplegar:
1 -> 1 = 1
2 -> 8 = 9
3 -> 27 = 36
4 -> 64 = 100
5 -> 125 = 225*/
#include <iostream>
#include <math.h>
using namespace std;
int cubo(int n) {
	return pow(n,3);
}
int suma(int n){
	if(n==1){
		return cubo (1);}
	return 	cubo(n)+ suma(n-1);	 	
} 
void imprimir(int n){
	if(n==0){
		return;
	}
	imprimir (n-1);
		int sumadecubo= suma (n);
		int cubos= cubo(n);
		cout<<n<<"-->"<<cubos<<"="<<sumadecubo<<endl;
	
		}
int main(){
	int n;
	cout << "Ingrese el valor de N: ";
    cin >> n;
    if (n <= 0) {
        cout << "Por favor, ingrese un valor positivo." << endl;
        return 1;
    }
    imprimir(n);

    return 0;
	
	
}
