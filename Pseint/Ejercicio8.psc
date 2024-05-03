Proceso producto_punto
    Definir fila, columna, i, j, suma Como Entero;
    Definir matriz1, matriz2, resultado Como Real;
	
    Escribir "Ingrese el número de filas de las matrices: ";
    Leer fila;
	
    Escribir "Ingrese el número de columnas de las matrices: ";
    Leer columna;
	
    Dimensionar matriz1[fila, columna];
    Dimensionar matriz2[fila, columna];
	
    Escribir "Ingrese los elementos de la primera matriz: ";
    Para i Desde 1 Hasta fila Con Paso 1 Hacer
        Para j Desde 1 Hasta columna Con Paso 1 Hacer
            Leer matriz1[i, j];
        FinPara;
    FinPara;
	
    Escribir "Ingrese los elementos de la segunda matriz: ";
    Para i Desde 1 Hasta fila Con Paso 1 Hacer
        Para j Desde 1 Hasta columna Con Paso 1 Hacer
            Leer matriz2[i, j];
        FinPara;
    FinPara;
	
    suma := 0;
    Para i Desde 1 Hasta fila Con Paso 1 Hacer
        Para j Desde 1 Hasta columna Con Paso 1 Hacer
            suma := suma + matriz1[i, j] * matriz2[i, j];
        FinPara;
    FinPara;
	
    resultado := suma;
    Escribir "El producto punto de las matrices es: ", resultado;
FinProceso.