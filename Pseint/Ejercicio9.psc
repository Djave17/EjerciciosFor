Proceso Ejercicio9
    Definir fila1, columna1, fila2, columna2, i, j, k Como Entero;
    Definir matriz1, matriz2, resultado Como Real;
	
    Escribir "Ingrese el número de filas de la primera matriz: ";
    Leer fila1;
	
    Escribir "Ingrese el número de columnas de la primera matriz: ";
    Leer columna1;
	
    Escribir "Ingrese el número de filas de la segunda matriz: ";
    Leer fila2;
	
    Escribir "Ingrese el número de columnas de la segunda matriz: ";
    Leer columna2;
	
    Si columna1 <> fila2 Entonces
        Escribir "Las matrices no son compatibles para la multiplicación.";
FinProceso;
FinSi;

Dimensionar matriz1[fila1, columna1];
Dimensionar matriz2[fila2, columna2];
Dimensionar resultado[fila1, columna2];

Escribir "Ingrese los elementos de la primera matriz: ";
Para i Desde 1 Hasta fila1 Con Paso 1 Hacer
	Para j Desde 1 Hasta columna1 Con Paso 1 Hacer
		Leer matriz1[i, j];
	FinPara;
FinPara;

Escribir "Ingrese los elementos de la segunda matriz: ";
Para i Desde 1 Hasta fila2 Con Paso 1 Hacer
	Para j Desde 1 Hasta columna2 Con Paso 1 Hacer
		Leer matriz2[i, j];
	FinPara;
FinPara;

Para i Desde 1 Hasta fila1 Con Paso 1 Hacer
	Para j Desde 1 Hasta columna2 Con Paso 1 Hacer
		resultado[i, j] := 0;
		Para k Desde 1 Hasta columna1 Con Paso 1 Hacer
			resultado[i, j] := resultado[i, j] + matriz1[i, k] * matriz2[k, j];
		FinPara;
	FinPara;
FinPara;

Escribir "La matriz resultante es: ";
Para i Desde 1 Hasta fila1 Con Paso 1 Hacer
	Para j Desde 1 Hasta columna2 Con Paso 1 Hacer
		Escribir resultado[i, j], " ";
	FinPara;
	Escribir "";
FinPara;
FinProceso.