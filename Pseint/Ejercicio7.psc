Algoritmo Ejercicio7
    // Declaración de variables
    Definir n, i, j Como Entero;
    Definir matriz1[n][n], matriz2[n][n], matrizSuma[n][n] Como Real;
	
    // Entrada de datos
    Escribir "Ingrese el tamaño de las matrices: ";
    Leer n;
	
    Para i <- 1 Hasta n Hacer
        Para j <- 1 Hasta n Hacer
            Escribir "Ingrese el valor de la matriz 1 en la posición ", i, ",", j, ": ";
            Leer matriz1[i][j];
        FinPara
    FinPara;
	
    Para i <- 1 Hasta n Hacer
        Para j <- 1 Hasta n Hacer
            Escribir "Ingrese el valor de la matriz 2 en la posición ", i, ",", j, ": ";
            Leer matriz2[i][j];
        FinPara
    FinPara;
	
    // Proceso: Cálculo de la suma de las matrices
    Para i <- 1 Hasta n Hacer
        Para j <- 1 Hasta n Hacer
            matrizSuma[i][j] <- matriz1[i][j] + matriz2[i][j];
        FinPara
    FinPara;
	
    // Salida de resultados
    Escribir "La matriz resultante de la suma es: ";
    Para i <- 1 Hasta n Hacer
        Para j <- 1 Hasta n Hacer
            Escribir matrizSuma[i][j];
        FinPara
    FinPara;
FinAlgoritmo