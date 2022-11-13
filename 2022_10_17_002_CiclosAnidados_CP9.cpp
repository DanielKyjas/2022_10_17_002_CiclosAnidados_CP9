
// 2022_10_17_001_CiclosAnidados_CP9.cpp 
// Daniel Callejas Rayón
// Hacer un programa para anidar instrucciones

#include <iostream>
#include <Windows.h>

int main()
{
	int arreglo[3] = { 1,2,3 };
	//Ciclo para monstrar el arreglo simple
	for (int i = 0; i < 3; i++)
	{
		std::cout << "La posicion " << i << " tiene al valor: " << arreglo[i] << std::endl;
		Sleep(1000);
	}
	//Ciclo para mostrar la matriz
	for (int j = 0; j < 11; j++)
	{
		//std::cout << "Indice J: " << j << std::endl;
		for (int k = 0; k < 11; k++)
		{
			//std::cout << "Indice K: " << k << std::endl; 
			std::cout << "La posicion [" << j << "," << k << "]" << std::endl;
			Sleep(777);
		}
	}
}

