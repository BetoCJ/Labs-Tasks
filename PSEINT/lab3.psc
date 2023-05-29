Proceso lab3
	definir x Como Real
	definir anio como entero
	definir letra como caracter
	
	//Desarrolle un algoritmo que solicite un número del 1 al 7 y muestre por pantalla el día de la semana al cual corresponde.

	mostrar "Ingrese un numero del 1 al 7 para saber que dia de la semana es"
	leer x
	si x = 1 Entonces
		Mostrar "Es el dia Lunes"
    SiNo
	si x = 2 Entonces
		Mostrar "Es el dia Martes"
	SiNo
		si x = 3 Entonces
			Mostrar "Es el dia Miercoles"
		Sino
		    Si x = 4 Entonces
				Mostrar "Es el dia Jueves"
			Sino
				Si x = 5 entonces 
					Mostrar "Es el dia Viernes"
				SiNo
					Si x = 6 Entonces
						Mostrar "Es el dia Sabado"
					SiNo
						si x = 7 Entonces
							Mostrar "Es el dia Domingo"
						SiNo
							Si x <> 1 y x <> 2 y x <> 3 y x <> 4 y x <> 5 y x <> 6 y x <> 7 Entonces
								Mostrar "El numero no es un dia de la semana"
							FinSi
						FinSi
					FinSi
				FinSi
			FinSi
		FinSi
FinSi
finsi
Mostrar "Desea limpiar la pantalla? Si (1) o no (2)"
leer x
Si x = 1 Entonces
Mostrar "Limpiando Pantalla...."
FinSi
esperar 2 segundos	
Limpiar Pantalla

//Desarrolle un algoritmo que solicite al usuario una letra y muestre por pantalla si la letra ingresada es una vocal o una consonante.

Mostrar "Ingrese una letra para saber si es vocal o consonante"
leer letra
Si letra = "a" o letra = "A" o letra = "e" o letra = "E" o letra = "i" o letra = "I" o letra = "o" o letra = "O" o letra = "u" o letra = "U" Entonces
	Mostrar "Es vocal"
SiNo
	Mostrar "Es consonante"
finsi

Mostrar "Desea limpiar la pantalla? Si (1) o no (2)"
leer x
Si x = 1 Entonces
	Mostrar "Limpiando Pantalla...."
FinSi
esperar 2 segundos	
Limpiar Pantalla


//6

Mostrar "Ingrese el año para saber si es bisiesto" 
leer anio
Si anio mod 4 = 0 y ( (anio mod 100 <> 0) o ( anio mod 400 = 0) ) entonces
	Mostrar "El año es bisiesto"
Sino 
	Mostrar "El año no es bisiesto"
FinSi

//7

Mostrar "Elija 4 ingredientes para su pizza"
Mostrar "Los ingredientes son los siguientes y tienen el siguiente precio"
Mostrar " Extra queso: 300 Aceitunas: 250 Choclo: 220 Tomate: 210 Pollo: 350 Carne: 390 Tocino: 320 Anchoas: 310"


FinProceso
