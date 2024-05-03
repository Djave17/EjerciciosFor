Proceso Ejercicio2
	Definir suma, impar Como Entero;
	suma <- 0;
	Para impar <- 0 Hasta 100 Con Paso 1 Hacer
		Si impar Mod 2 <> 0 Entonces
			suma <- suma + impar;
		FinSi
	FinPara
	Escribir "La suma total de todos los numeros impares del 1 al 100 es:", suma;
	
FinProceso
