/*Desarrollo un programa en c++ que le pida al usuario nueve numeros enteros y
 los almaceneen una matriz 3x3, asi mismo que calcule la suma de los numeros de cada fina 
 y mostrar el numero de fila con mayor suma.*/
 
 //declaramos la libreria
#include <iostream>
using namespace std;

//Incluimos espacio de nombres
int main() {
   int matriz[3][3];
   int sumaFila[3] = {0, 0, 0};  
   // Inicializar el arreglo de sumas en cero
   int maxFila = 0;

   // Solicitar los numeros y almacenarlos en la matriz
   for(int i = 0; i < 3; i++) {
      for(int j = 0; j < 3; j++) {
         cout << "Ingrese el numero para la matriz 3x3 [" << i << "][" << j << "]: ";
         cin >> matriz[i][j];
         sumaFila[i] += matriz[i][j];
      }
      if(sumaFila[i] > sumaFila[maxFila]) {
         maxFila = i;
      }
   }

   // Mostrar la matriz y la suma de cada fila
   cout << "\nLa matriz ingresada es:\n";
   for(int i = 0; i < 3; i++) {
      for(int j = 0; j < 3; j++) {
         cout << matriz[i][j] << " ";
      }
      cout << " = " << sumaFila[i] << endl;
   }

   // Mostrar la fila con la mayor suma
   cout << "\nLa fila con la mayor suma es la fila " << maxFila << endl;

   return 0;
}
