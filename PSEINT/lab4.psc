Proceso lab4
	definir x , ram, proce como real
	definir x2, x3, respuesta Como Caracter
	Mostrar "Ingrese el la medida dada en el termometro en grados celcius para saber que derivado de petroleo esta fabricando...."
	leer x
	Si 170 < x y x <= 270 entonces
		Mostrar "Usted esta fabricando Diesel"
	SiNo
		Si 120 < x y x <= 170 Entonces
			Mostrar "Usted esta fabricando Parafina"
		SiNo
			si 70 < x y x <= 120
				Mostrar "Usted esta fabricando Bencina"
			SiNo
				si 20 < x y x <= 70
					mostrar "Usted esta fabricando Nafta"
				SiNo
					si 5 <= x y x <= 20
						Mostrar "Usted esta fabricando Gas licuado" 
					Sino 
						Mostrar "Va a ser almacenado como materia prima y derivado a otra planta..."
					FinSi
				FinSi
			FinSi
		FinSi
	FinSi
	
	Mostrar "Desea limpiar la pantalla? Si o no "
	leer respuesta
	Si respuesta = "Si" Entonces
		Mostrar "Limpiando Pantalla...."
	FinSi
	esperar 2 segundos	
	Limpiar Pantalla
	
	Mostrar "Ingrese los datos del equipo para saber el perfil de arriendo de la empresa"
	esperar 1 Segundos
	Mostrar "Ingrese la ram"
	leer ram
	esperar 1 Segundos
	Mostrar "Ingrese los ghz del procesador"
	leer proce
	Si ram <= 4 y proce <= 2.0  Entonces
		Mostrar "Es del Perfil 1"
	Sino
		si ram <= 4 y proce > 2.0 y proce <= 3.0 Entonces
			Mostrar "Es el Perfil 2"
		Sino 
			si ram > 4 y ram <= 8 y proce >	2.0 y proce <= 3.0 Entonces
				Mostrar "Es el Perfil 3"
			SiNo
				si ram > 8 y proce > 3.0 Entonces
					mostrar "Es el Perfil 4"
				SiNo
					Mostrar "No pertenece a un perfil de la empresa"
				FinSi
			FinSi
		FinSi
	FinSi
	
	Mostrar "Desea limpiar la pantalla? Si (1) o no (2)"
	leer respuesta
	Si respuesta = "Si" Entonces
		Mostrar "Limpiando Pantalla...."
	FinSi
	esperar 2 segundos	
	Limpiar Pantalla
	
	Mostrar "Ingrese la ropa que compró"
	Mostrar "1: ropa deportiva femenina, 2: ropa deportiva masculina, 3: ropa casual femenina" 
	Mostrar "4: ropa casual masculina, 5: zapatillas, 6: zapatos, 7: sombreros, 8: relojes , 9: airphones."
	leer x2 , x

	

	
	
FinProceso
