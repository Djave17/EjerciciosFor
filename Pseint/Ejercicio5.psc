Proceso Ejercicio5
	Definir nota, suma, promedio, aprobados, reprobados, i Como Entero;
	suma <- 0;
	aprobados <- 0;
	reprobados <- 0;
	Para i <- 1 Hasta 10 Con Paso 1 Hacer
		Escribir "Ingrese la nota del estudiante ", i, ": ";
		Leer nota;
		suma <- suma + nota;
		Si nota < 70 Entonces
			reprobados <- reprobados + 1;
		Sino
			aprobados <- aprobados + 1;
		FinSi		
	FinPara
	promedio <- suma / 10;
	Escribir "El promedio de la seccion es: ", promedio;
	Escribir "Cantidad de alumnos aprobados: ", aprobados;
	Escribir "Cantidada de alumnos reprobados : ", reprobados;
	
FinProceso
