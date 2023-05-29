Proceso Laboratorio2
	definir resultado, resultado2, resultado3, resultado4, resultado5 Como Real
	definir x, x2, z1, z2, z3, z4 como real
	
//Desarrolle un algoritmo que permita calcular el perímetro y el área de un triángulo equilátero.	
	Mostrar "Ingrese el lado de su triangulo equilatero para saber el perimetro y el area"
	leer x 
	resultado = x*3
	Mostrar "El perimetro es " resultado
	
	resultado2 = (redon(3)*x) /2
	resultado3 = (x*resultado2)/2
	Mostrar "El area es " resultado3
	
//Desarrolle un algoritmo que permita calcular el valor absoluto de número.	
	Mostrar "Ingrese el numero para saber el valor absoluto"
	leer x
	resultado3 = abs(x)
	Mostrar "El valor absoluto es " resultado3
	
//Desarrolle un algoritmo que indique si un número es divisible por 7
	Mostrar "Ingrese su numero para saber si es divisible por 7"
	leer x
	Si x % 7 = 0 Entonces
		Mostrar "Si es divisible por 7"
	SiNo
		Mostrar "No es divisible por 7"
	Fin Si
	
	// Funcion 
	Mostrar "Ingrese el valor de x para su funcion"
	leer x
	
	Si x < -1 Entonces
	    Mostrar "El resultado de la funcion 5x - 3 con x siendo " x " es: " (5 * x) -3
	SiNo
	Si x > -1 y x < 12 entonces
			Mostrar "El resultado de la funcion x^2 + 7 con x siendo " x " es " x^2+7
	siNo
	Si x >= 12 entonces
		Mostrar "El resultado de la funcion 6x^2 + x con x siendo " x " es " 6*x^2+x
	FinSi
	   Finsi
         Fin Si
//Notas alumno
	Mostrar "Ingrese sus 3 notas para saber si aprobo el ramo"
	Leer z1, z2, z3
	Si (z1 + z2 + z3) / 3 >= 4 Entonces
		Mostrar "Aprobaste el ramo :3"
	Sino 
		Mostrar "No aprobaste el ramo :("
	FinSi
//Desarrolar 3 medidas
	Mostrar "Ingrese las 3 medidas para saber si puede ser un triangulo"
	leer z1, z2, z3
	Si (z1 + z2) > z3
	    Mostrar "Si puede ser un triangulo"
	Sino 
		Mostrar "No puede ser un triangulo"
	FinSi

//4 numeros
   Mostrar "Ingrese 4 numeros para saber cual es mayor"
   leer z1, z2, z3, z4
   Si z1>=z2 y z1>=z3 y z1>=z4 Entonces
	   Mostrar "El numero mayor es " z1
   FinSi
   Si z2>=z1 y z2>=z3 y z2>=z4 Entonces
	   Mostrar "El numero mayor es " z2
   FinSi
   Si z3>=z1 y z3>=z2 y z3>=z4 Entonces
	   Mostrar "El numero mayor es " z3
   FinSi
   Si z4>=z1 y z4>=z2 y z4>=z3 Entonces
	   Mostrar "El numero mayor es " z4
   FinSi
   Si z1=z2 y z2=z3 y z3=z4 Entonces
	   Mostrar "No hay numero mayor  porque todos son iguales" 
   FinSi
   
FinProceso
