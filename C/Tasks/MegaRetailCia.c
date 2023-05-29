#include <stdio.h>
#include <stdlib.h>

// Definicion de Variables
// Menu principal
int p1;
// Parte 1 menu principal
int c1;
int z1, z2, z3, z4, z5;
int A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25; // existencias (stock)

// Valores matematicos
float iva = 0.19;

// Valores y existencias en Zapatos y Zapatillas
int valorzapatoA = 25000, valorzapatoB = 60000, valorzapatillaA = 33000, valorzapatillaB = 72000;
int existenciaszapatoA = 6, existenciaszapatoB = 2, existenciaszapatillaA = 4, existenciaszapatillaB = 2;

// Valores y existencias en Moda mujer
int valorpantalonA_m = 12000, valorpantalonB_m = 15000, valorpoleraA_m = 7000, valorpoleraB_m = 12000, valorpoleronA_m = 20000, valorpoleronB_m = 21000;
int existenciaspantalonA_m = 10, existenciaspantalonB_m = 10, existenciaspoleraA_m = 8, existenciaspoleraB_m = 10, existenciaspoleronA_m = 5, existenciaspoleronB_m = 6;

// Valores y existencias en Moda hombre
int valorpantalonA_h = 15000, valorpantalonB_h = 20000, valorpoleraA_h = 10000, valorpoleraB_h = 12000, valorpoleronA_h = 18000, valorpoleronB_h = 20000;
int existenciaspantalonA_h = 5, existenciaspantalonB_h = 5, existenciaspoleraA_h = 10, existenciaspoleraB_h = 10, existenciaspoleronA_h = 6, existenciaspoleronB_h = 6;

// Valores y existencias Linea blanca y electronica
int valoraspiradora = 50000, valormicroondas = 55000, valorcocina = 200000, valorlavadora = 350000, valorrefrigerador = 250000;
int existenciasaspiradora = 2, existenciasmicroondas = 3, existenciascocina = 1, existenciaslavadora = 1, existenciasrefrigerador = 1;

// Valores y existencias computacion
int valorpcescritorio = 500000, valorpcgamer = 800000, valornotebook = 220000, valornotebookgamer = 999990;
int existenciaspcescritorio = 1, existenciaspcgamer = 2, existenciasnotebook = 1, existenciasnotebookgamer = 2;

int c2; // Parte 2 menu principal mostrar existencias
int e, e1, e2, e3, e4;

int c3; // Parte 3 menu principal mostrar ventas

int main()
{
//Variables para mostrar existencias y ventas.
int noventaszapa = (valorzapatillaA * existenciaszapatillaA) + (valorzapatillaB * existenciaszapatillaB) + (valorzapatoA * existenciaszapatoA) + (valorzapatoB * existenciaszapatoB);
int ventaszapa = 546000 - noventaszapa;
int noventasmujer = (valorpantalonA_m * existenciaspantalonA_m) + (valorpantalonB_m * existenciaspantalonB_m) + (valorpoleraA_m * existenciaspoleraA_m) + (valorpoleraB_m * existenciaspoleraB_m) + (valorpoleronA_m * existenciaspoleronA_m) + (valorpoleronB_m * existenciaspoleronB_m);
int ventasmujer = 672000 - noventasmujer;
int noventashombre = (valorpantalonA_h * existenciaspantalonA_h) + (valorpantalonB_h * existenciaspantalonB_h) + (valorpoleraA_h * existenciaspoleraA_h) + (valorpoleraB_h * existenciaspoleraB_h) + (valorpoleronA_h * existenciaspoleronA_h) + (valorpoleronB_h * existenciaspoleronB_h);
int ventashombre = 623000 - noventashombre;
int noventaslinea = (valoraspiradora * existenciasaspiradora) + (valormicroondas * existenciasmicroondas) + (valorcocina * existenciascocina) + (valorlavadora * existenciaslavadora) + (valorrefrigerador * existenciasrefrigerador);
int ventaslinea = 1065000 - noventaslinea;
int noventascompu = (valorpcescritorio * existenciaspcescritorio) + (valorpcgamer * existenciaspcgamer) + (valornotebook * existenciasnotebook) + (valornotebookgamer * existenciasnotebookgamer);
int ventascompu = 4319980 - noventascompu;
int ventastotales = (ventaszapa + ventasmujer + ventashombre + ventaslinea + ventascompu);
    //Menu Principal
    printf("    Menu | Megaretail y Cia S.A. |\n\n");
    printf("    Que desea hacer?\n\n");
    printf("    1. Procesar una venta\n");
    printf("    2. Mostrar la cantidad de existencias de los productos\n");
    printf("    3. Mostrar el monto total de ventas\n");
    printf("    4. Salir del programa\n\n");
    printf("    Developers: Alberto Carrasco y Gabriel Ascencio\n\n");
    //Repite hasta que se ingrese el valor deseado
    do
    {
        printf("    Escriba la categoria a la que desea entrar: ");
        scanf("%d", &p1);
    } while (p1 < 1 || p1 > 4);

    switch (p1)
    {
    case 1:
        //Menu para procesar una venta
        system("cls");
        printf("   | Entraste a procesar una venta |\n\n");
        printf("    Nuestros productos por categoria\n\n");
        printf("    1. Zapatos y zapatillas\n");
        printf("    2. Moda Mujer\n");
        printf("    3. Moda Hombre\n");
        printf("    4. Linea blanca y electronica\n");
        printf("    5. Computacion\n\n");
        printf("    6. Volver atras\n\n");
        printf("    A cual categoria desea entrar?\n");
        printf("    Ingrese la categoria (ej: 1): ");
        scanf("%d", &c1);
        switch (c1)
        {
        case 1:
            //Procesar venta de la categoria de zapatos y zapatillas
            system("cls");
            printf("        | Zapatos y zapatillas |\n\n");
            printf("   1. Zapato A: Valor $25.000, %d existencias.\n", existenciaszapatoA);
            printf("   2. Zapato B: Valor $60.000, %d existencias.\n", existenciaszapatoB);
            printf("   3. Zapatilla A: Valor $33.000, %d existencias.\n", existenciaszapatillaA);
            printf("   4. Zapatilla B: Valor $72.000, %d existencias.\n\n", existenciaszapatillaB);
            printf("   5. Volver atras\n\n");
            //Repite hasta que se ingrese el valor deseado
            do
            {
                printf("   Cual desea seleccionar? (ej: 1): ");
                scanf("%d", &z1);
            } while (z1 < 1 || z1 > 5);
            switch (z1)
            {
            case 1:
                //P
                    //Pide las existencias a agregaride las existencias a agregar
                printf("\n");
                printf("   Cuantas existencia desea agregar?: ");
                scanf("%d", &A1);
                if (A1 > 0 && A1 <= existenciaszapatoA)
                {
                    existenciaszapatoA = existenciaszapatoA - A1;
                    float ivatotal = iva * (valorzapatoA*A1);
                    int subtotal = valorzapatoA*A1-ivatotal;
                    float TOTAL = valorzapatoA*A1;
                    //Boleta
                    system("cls");
                    printf("\n");
                    printf("\n");
                    printf("---------Megaretail y Cia S.A.---------");
                    printf("\n 	      99.999.999-9                    ");
                    printf("\n");
                    printf("\n");
                    printf("\nGiro: Grandes tiendas");
                    printf("\nDireccion: Avenida Fake 1202, concepcion");
                    printf("\nTelefono: 41 222 3333\nEmail: contacto@megaretailycia.c");
                    printf("\n\n---------------------------------------");
                    printf("\n");
                    printf("\n");
                    printf("\nProductos: Zapato A | Zapatos y zapatillas");
                    printf("\nExistencia restantes: %d", existenciaszapatoA);
                    printf("\nSubtotal de la compra: $%d", subtotal);
                    printf("\nIVA total: $%.0f", ivatotal);
                    printf("\nTotal de la compra: $%.0f\n", TOTAL);
                }
                else
                {
                    
                    //Cuando se ingresa una existencia invalida//Cuando se ingresa una existencia invalida
                    printf("Error, ha ingresado un valor invalido intentelo de nuevo\n");
                    system("pause");
                    system("cls");
                    return main();
                }
                break;
            case 2:
                //Pide las existencias a agregar
                printf("\n");
                printf("   Cuantas existencia desea agregar?: ");
                scanf("%d", &A2);
                if (A2 > 0 && A2 <= existenciaszapatoB)
                {
                    existenciaszapatoB = existenciaszapatoB - A2;
                    float ivatotal = iva * (valorzapatoB*A2);
                    int subtotal = valorzapatoB*A2-ivatotal;
                    float TOTAL = valorzapatoB*A2;
                    //Boleta
                    system("cls");
                    printf("\n");
                    printf("\n");
                    printf("---------Megaretail y Cia S.A.---------");
                    printf("\n 	      99.999.999-9                    ");
                    printf("\n");
                    printf("\n");
                    printf("\nGiro: Grandes tiendas");
                    printf("\nDireccion: Avenida Fake 1202, concepcion");
                    printf("\nTelefono: 41 222 3333\nEmail: contacto@megaretailycia.c");
                    printf("\n\n---------------------------------------");
                    printf("\n");
                    printf("\n");
                    printf("\nProductos: Zapato B | Zapatos y zapatillas");
                    printf("\nExistencia restantes: %d", existenciaszapatoB);
                    printf("\nSubtotal de la compra: $%d", subtotal);
                    printf("\nIVA total: $%.0f", ivatotal);
                    printf("\nTotal de la compra: $%.0f\n", TOTAL);
                }
                else
                {
                    //Cuando se ingresa una existencia invalida
                    printf("Error, ha ingresado un valor invalido intentelo de nuevo\n");
                    system("pause");
                    system("cls");
                    return main();
                }
                break;
            case 3:
                //Pide las existencias a agregar
                printf("\n");
                printf("   Cuantas existencia desea agregar?: ");
                scanf("%d", &A3);
                if (A3 > 0 && A3 <= existenciaszapatillaA)
                {
                    existenciaszapatillaA = existenciaszapatillaA - A3;
                    float ivatotal = iva* (valorzapatillaA*A3);
                    int subtotal = valorzapatillaA*A3-ivatotal;
                    float TOTAL = valorzapatillaA*A3;
                    //Boleta
                    system("cls");
                    printf("\n");
                    printf("\n");
                    printf("---------Megaretail y Cia S.A.---------");
                    printf("\n 	      99.999.999-9                    ");
                    printf("\n");
                    printf("\n");
                    printf("\nGiro: Grandes tiendas");
                    printf("\nDireccion: Avenida Fake 1202, concepcion");
                    printf("\nTelefono: 41 222 3333\nEmail: contacto@megaretailycia.c");
                    printf("\n\n---------------------------------------");
                    printf("\n");
                    printf("\n");
                    printf("\nProductos: Zapatilla A | Zapatos y zapatillas");
                    printf("\nExistencia restantes: %d", existenciaszapatillaA);
                    printf("\nSubtotal de la compra: $%d", subtotal);
                    printf("\nIVA total: $%.0f", ivatotal);
                    printf("\nTotal de la compra: $%.0f\n", TOTAL);
                }
                else
                {
                    //Cuando se ingresa una existencia invalida
                    printf("Error, ha ingresado un valor invalido intentelo de nuevo\n");
                    system("pause");
                    system("cls");
                    return main();
                }
                break;
            case 4:
                //Pide las existencias a agregar
                printf("\n");
                printf("   Cuantas existencia desea agregar?: ");
                scanf("%d", &A4);
                if (A4 > 0 && A4 <= existenciaszapatillaB)
                {
                    existenciaszapatillaB = existenciaszapatillaB - A4;
                    float ivatotal = iva* (valorzapatillaB*A4);
                    int subtotal = valorzapatillaB*A4-ivatotal;
                    float TOTAL = valorzapatillaB*A4;
                    //Boleta
                    system("cls");
                    printf("\n");
                    printf("\n");
                    printf("---------Megaretail y Cia S.A.---------");
                    printf("\n 	      99.999.999-9                    ");
                    printf("\n");
                    printf("\n");
                    printf("\nGiro: Grandes tiendas");
                    printf("\nDireccion: Avenida Fake 1202, concepcion");
                    printf("\nTelefono: 41 222 3333\nEmail: contacto@megaretailycia.c");
                    printf("\n\n---------------------------------------");
                    printf("\n");
                    printf("\n");
                    printf("\nProductos: Zapatilla B | Zapatos y zapatillas");
                    printf("\nExistencia restantes: %d", existenciaszapatillaB);
                    printf("\nSubtotal de la compra: $%d", subtotal);
                    printf("\nIVA total: $%.0f", ivatotal);
                    printf("\nTotal de la compra: $%.0f\n", TOTAL);
                }
                else
                {
                    //Cuando se ingresa una existencia invalida
                    printf("Error, ha ingresado un valor invalido intentelo de nuevo\n");
                    system("pause");
                    system("cls");
                    return main();
                }
                break;
            case 5:
                system("cls");
                return main();
            }
            system("pause");
            break;
        case 2:
            //Procesar venta de la categoria de Moda mujer
            system("cls");
            printf("        | Moda Mujer |\n\n");
            printf("    1. Pantalon A: Valor $12.000, %d existencias.\n", existenciaspantalonA_m);
            printf("    2. Pantalon B: Valor $15.000, %d existencias.\n", existenciaspantalonB_m);
            printf("    3. Polera A: Valor $7.000, %d existencias.\n", existenciaspoleraA_m);
            printf("    4. Polera B: Valor $12.000, %d existencias.\n", existenciaspoleraB_m);
            printf("    5. Poleron A: Valor $20.000, %d existencias.\n", existenciaspoleronA_m);
            printf("    6. Poleron B: Valor $21.000, %d existencias.\n\n", existenciaspoleronB_m);
            printf("    7. Volver atras\n\n");
            do
            {
                printf("    Cual desea seleccionar? (ej: 1): ");
                scanf("%d", &z2);
            } while (z2 < 1 || z2 > 7);
            switch (z2)
            {
            case 1:
                //Pide las existencias a agregar
                printf("\n");
                printf("   Cuantas existencia desea agregar?: ");
                scanf("%d", &A5);
                if (A5 > 0 && A5 <= existenciaspantalonA_m)
                {
                    existenciaspantalonA_m = existenciaspantalonA_m - A5;
                    float ivatotal = iva* (valorpantalonA_m*A5);
                    int subtotal = valorpantalonA_m*A5-ivatotal;
                    float TOTAL = valorpantalonA_m*A5;
                    //Boleta
                    system("cls");
                    printf("\n");
                    printf("\n");
                    printf("---------Megaretail y Cia S.A.---------");
                    printf("\n 	      99.999.999-9                    ");
                    printf("\n");
                    printf("\n");
                    printf("\nGiro: Grandes tiendas");
                    printf("\nDireccion: Avenida Fake 1202, concepcion");
                    printf("\nTelefono: 41 222 3333\nEmail: contacto@megaretailycia.c");
                    printf("\n\n---------------------------------------");
                    printf("\n");
                    printf("\n");
                    printf("\nProductos: Pantalon A | Moda mujer");
                    printf("\nExistencia restantes: %d", existenciaspantalonA_m);
                    printf("\nSubtotal de la compra: $%d", subtotal);
                    printf("\nIVA total: $%.0f", ivatotal);
                    printf("\nTotal de la compra: $%.0f\n", TOTAL);
                }
                else
                {
                    //Cuando se ingresa una existencia invalida
                    printf("Error, ha ingresado un valor invalido intentelo de nuevo\n");
                    system("pause");
                    system("cls");
                    return main();
                }
                break;
            case 2:
                //Pide las existencias a agregar
                printf("\n");
                printf("   Cuantas existencia desea agregar?: ");
                scanf("%d", &A6);
                if (A6 > 0 && A6 <= existenciaspantalonB_m)
                {
                    existenciaspantalonB_m = existenciaspantalonB_m - A6;
                    float ivatotal = iva* (valorpantalonB_m*A6);
                    int subtotal = valorpantalonB_m*A6-ivatotal;
                    float TOTAL = valorpantalonB_m*A6;
                    //Boleta
                    system("cls");
                    printf("\n");
                    printf("\n");
                    printf("---------Megaretail y Cia S.A.---------");
                    printf("\n 	      99.999.999-9                    ");
                    printf("\n");
                    printf("\n");
                    printf("\nGiro: Grandes tiendas");
                    printf("\nDireccion: Avenida Fake 1202, concepcion");
                    printf("\nTelefono: 41 222 3333\nEmail: contacto@megaretailycia.c");
                    printf("\n\n---------------------------------------");
                    printf("\n");
                    printf("\n");
                    printf("\nProductos: Pantalon B | Moda mujer");
                    printf("\nExistencia restantes: %d", existenciaspantalonB_m);
                    printf("\nSubtotal de la compra: $%d", subtotal);
                    printf("\nIVA total: $%.0f", ivatotal);
                    printf("\nTotal de la compra: $%.0f\n", TOTAL);
                }
                else
                {
                    //Cuando se ingresa una existencia invalida
                    printf("Error, ha ingresado un valor invalido intentelo de nuevo\n");
                    system("pause");
                    system("cls");
                    return main();
                }
                break;
            case 3:
                //Pide las existencias a agregar
                printf("\n");
                printf("   Cuantas existencia desea agregar?: ");
                scanf("%d", &A7);
                if (A7 > 0 && A7 <= existenciaspoleraA_m)
                {
                    existenciaspoleraA_m = existenciaspoleraA_m - A7;
                    float ivatotal = iva* (valorpoleraA_m *A7);
                    int subtotal = valorpoleraA_m*A7-ivatotal;
                    float TOTAL = valorpoleraA_m *A7;
                    //Boleta
                    system("cls");
                    printf("\n");
                    printf("\n");
                    printf("---------Megaretail y Cia S.A.---------");
                    printf("\n 	      99.999.999-9                    ");
                    printf("\n");
                    printf("\n");
                    printf("\nGiro: Grandes tiendas");
                    printf("\nDireccion: Avenida Fake 1202, concepcion");
                    printf("\nTelefono: 41 222 3333\nEmail: contacto@megaretailycia.c");
                    printf("\n\n---------------------------------------");
                    printf("\n");
                    printf("\n");
                    printf("\nProductos: Polera A | Moda mujer");
                    printf("\nExistencia restantes: %d", existenciaspoleraA_m);
                    printf("\nSubtotal de la compra: $%d", subtotal);
                    printf("\nIVA total: $%.0f", ivatotal);
                    printf("\nTotal de la compra: $%.0f\n", TOTAL);
                }
                else
                {
                    //Cuando se ingresa una existencia invalida
                    printf("Error, ha ingresado un valor invalido intentelo de nuevo\n");
                    system("pause");
                    system("cls");
                    return main();
                }
                break;
            case 4:
                //Pide las existencias a agregar
                printf("\n");
                printf("   Cuantas existencia desea agregar?: ");
                scanf("%d", &A8);
                if (A8 > 0 && A8 <= existenciaspoleraB_m)
                {
                    existenciaspoleraB_m = existenciaspoleraB_m - A8;
                    float ivatotal = iva* (valorpoleraB_m*A8);
                    int subtotal = valorpoleraB_m*A8-ivatotal;
                    float TOTAL = valorpoleraB_m*A8;
                    //Boleta
                    system("cls");
                    printf("\n");
                    printf("\n");
                    printf("---------Megaretail y Cia S.A.---------");
                    printf("\n 	      99.999.999-9                    ");
                    printf("\n");
                    printf("\n");
                    printf("\nGiro: Grandes tiendas");
                    printf("\nDireccion: Avenida Fake 1202, concepcion");
                    printf("\nTelefono: 41 222 3333\nEmail: contacto@megaretailycia.c");
                    printf("\n\n---------------------------------------");
                    printf("\n");
                    printf("\n");
                    printf("\nProductos: Polera B | Moda mujer");
                    printf("\nExistencia restantes: %d", existenciaspoleraB_m);
                    printf("\nSubtotal de la compra: $%d", subtotal);
                    printf("\nIVA total: $%.0f", ivatotal);
                    printf("\nTotal de la compra: $%.0f\n", TOTAL);
                }
                else
                {
                    //Cuando se ingresa una existencia invalida
                    printf("Error, ha ingresado un valor invalido intentelo de nuevo\n");
                    system("pause");
                    system("cls");
                    return main();
                }
                break;
            case 5:
                //Pide las existencias a agregar
                printf("\n");
                printf("   Cuantas existencia desea agregar?: ");
                scanf("%d", &A9);
                if (A9 > 0 && A9 <= existenciaspoleronA_m)
                {
                    existenciaspoleronA_m = existenciaspoleronA_m - A9;
                   float ivatotal = iva* (valorpoleronA_m*A9);
                    int subtotal = valorpoleronA_m*A9-ivatotal;
                    float TOTAL = valorpoleronA_m*A9;
                    //Boleta
                    system("cls");
                    printf("\n");
                    printf("\n");
                    printf("---------Megaretail y Cia S.A.---------");
                    printf("\n 	      99.999.999-9                    ");
                    printf("\n");
                    printf("\n");
                    printf("\nGiro: Grandes tiendas");
                    printf("\nDireccion: Avenida Fake 1202, concepcion");
                    printf("\nTelefono: 41 222 3333\nEmail: contacto@megaretailycia.c");
                    printf("\n\n---------------------------------------");
                    printf("\n");
                    printf("\n");
                    printf("\nProductos: Poleron A | Moda mujer");
                    printf("\nExistencia restantes: %d", existenciaspoleronA_m);
                    printf("\nSubtotal de la compra: $%d", subtotal);
                    printf("\nIVA total: $%.0f", ivatotal);
                    printf("\nTotal de la compra: $%.0f\n", TOTAL);
                }
                else
                {
                    //Cuando se ingresa una existencia invalida
                    printf("Error, ha ingresado un valor invalido intentelo de nuevo\n");
                    system("pause");
                    system("cls");
                    return main();
                }
                break;
            case 6:
                //Pide las existencias a agregar
                printf("\n");
                printf("   Cuantas existencia desea agregar?: ");
                scanf("%d", &A10);
                if (A10 > 0 && A10 <= existenciaspoleronB_m)
                {
                    existenciaspoleronB_m = existenciaspoleronB_m - A10;
                    float ivatotal = iva* (valorpoleronB_m*A10);
                    int subtotal = valorpoleronB_m*A10-ivatotal;
                    float TOTAL = valorpoleronB_m*A10;
                    //Boleta
                    system("cls");
                    printf("\n");
                    printf("\n");
                    printf("---------Megaretail y Cia S.A.---------");
                    printf("\n 	      99.999.999-9                    ");
                    printf("\n");
                    printf("\n");
                    printf("\nGiro: Grandes tiendas");
                    printf("\nDireccion: Avenida Fake 1202, concepcion");
                    printf("\nTelefono: 41 222 3333\nEmail: contacto@megaretailycia.c");
                    printf("\n\n---------------------------------------");
                    printf("\n");
                    printf("\n");
                    printf("\nProductos: Poleron B | Moda mujer");
                    printf("\nExistencia restantes: %d", existenciaspoleronB_m);
                    printf("\nSubtotal de la compra: $%d", subtotal);
                    printf("\nIVA total: $%.0f", ivatotal);
                    printf("\nTotal de la compra: $%.0f\n", TOTAL);
                }
                else
                {
                    //Cuando se ingresa una existencia invalida
                    printf("Error, ha ingresado un valor invalido intentelo de nuevo\n");
                    system("pause");
                    system("cls");
                    return main();
                }
                break;
            case 7:
                system("cls");
                return main();
            }
            system("pause");
            break;
        case 3:
            //Procesar venta de la categoria de Moda hombre
            system("cls");
            printf("        | Moda Hombre |\n\n");
            printf("    1. Pantalon A: Valor $15.000, %d existencias.\n", existenciaspantalonA_h);
            printf("    2. Pantalon B: Valor $20.000, %d existencias.\n", existenciaspantalonB_h);
            printf("    3. Polera A: Valor $10.000, %d existencias.\n", existenciaspoleraA_h);
            printf("    4. Polera B: Valor $12.000, %d existencias.\n", existenciaspoleraB_h);
            printf("    5. Poleron A: Valor $18.000, %d existencias.\n", existenciaspoleronA_h);
            printf("    6. Poleron B: Valor $20.000, %d existencias.\n\n", existenciaspoleronB_h);
            printf("    7. Volver atras\n\n");
            //Repite hasta que se ingrese el valor deseado
            do
            {
                printf("    Cual desea seleccionar? (ej: 1): ");
                scanf("%d", &z3);
            } while (z3 < 1 || z3 > 7);
            switch (z3)
            {
            case 1:
                //Pide las existencias a agregar
                printf("\n");
                printf("   Cuantas existencia desea agregar?: ");
                scanf("%d", &A11);
                if (A11 > 0 && A11 <= existenciaspantalonA_h)
                {
                    existenciaspantalonA_h = existenciaspantalonA_h - A11;
                    float ivatotal = iva* (valorpantalonA_h*A11);
                    int subtotal = valorpantalonA_h*A11-ivatotal;
                    float TOTAL = valorpantalonA_h*A11;
                    //Boleta
                    system("cls");
                    printf("\n");
                    printf("\n");
                    printf("---------Megaretail y Cia S.A.---------");
                    printf("\n 	      99.999.999-9                    ");
                    printf("\n");
                    printf("\n");
                    printf("\nGiro: Grandes tiendas");
                    printf("\nDireccion: Avenida Fake 1202, concepcion");
                    printf("\nTelefono: 41 222 3333\nEmail: contacto@megaretailycia.c");
                    printf("\n\n---------------------------------------");
                    printf("\n");
                    printf("\n");
                    printf("\nProductos: Pantalon A | Moda Hombre");
                    printf("\nExistencia restantes: %d", existenciaspantalonA_h);
                    printf("\nSubtotal de la compra: $%d", subtotal);
                    printf("\nIVA total: $%.0f", ivatotal);
                    printf("\nTotal de la compra: $%.0f\n", TOTAL);
                }
                else
                {
                    //Cuando se ingresa una existencia invalida
                    printf("Error, ha ingresado un valor invalido intentelo de nuevo\n");
                    system("pause");
                    system("cls");
                    return main();
                }
                break;
            case 2:
                //Pide las existencias a agregar
                printf("\n");
                printf("   Cuantas existencia desea agregar?: ");
                scanf("%d", &A12);
                if (A12 > 0 && A12 <= existenciaspantalonB_h)
                {
                    existenciaspantalonB_h = existenciaspantalonB_h - A12;
                    float ivatotal = iva* (valorpantalonB_h*A12);
                    int subtotal = valorpantalonB_h*A12-ivatotal;
                    float TOTAL = valorpantalonB_h*A12;
                    //Boleta
                    system("cls");
                    printf("\n");
                    printf("\n");
                    printf("---------Megaretail y Cia S.A.---------");
                    printf("\n 	      99.999.999-9                    ");
                    printf("\n");
                    printf("\n");
                    printf("\nGiro: Grandes tiendas");
                    printf("\nDireccion: Avenida Fake 1202, concepcion");
                    printf("\nTelefono: 41 222 3333\nEmail: contacto@megaretailycia.c");
                    printf("\n\n---------------------------------------");
                    printf("\n");
                    printf("\n");
                    printf("\nProductos: Pantalon B | Moda Hombre");
                    printf("\nExistencia restantes: %d", existenciaspantalonB_h);
                    printf("\nSubtotal de la compra: $%d", subtotal);
                    printf("\nIVA total: $%.0f", ivatotal);
                    printf("\nTotal de la compra: $%.0f\n", TOTAL);
                }
                else
                {
                    //Cuando se ingresa una existencia invalida
                    printf("Error, ha ingresado un valor invalido intentelo de nuevo\n");
                    system("pause");
                    system("cls");
                    return main();
                }
                break;
            case 3:
                //Pide las existencias a agregar
                printf("\n");
                printf("   Cuantas existencia desea agregar?: ");
                scanf("%d", &A13);
                if (A13 > 0 && A13 <= existenciaspoleraA_h)
                {
                    existenciaspoleraA_h = existenciaspoleraA_h - A13;
                    float ivatotal = iva* (valorpoleraA_h*A13);
                    int subtotal = valorpoleraA_h*A13-ivatotal;
                    float TOTAL = valorpoleraA_h*A13;
                    //Boleta
                    system("cls");
                    printf("\n");
                    printf("\n");
                    printf("---------Megaretail y Cia S.A.---------");
                    printf("\n 	      99.999.999-9                    ");
                    printf("\n");
                    printf("\n");
                    printf("\nGiro: Grandes tiendas");
                    printf("\nDireccion: Avenida Fake 1202, concepcion");
                    printf("\nTelefono: 41 222 3333\nEmail: contacto@megaretailycia.c");
                    printf("\n\n---------------------------------------");
                    printf("\n");
                    printf("\n");
                    printf("\nProductos: Polera A | Moda Hombre");
                    printf("\nExistencia restantes: %d", existenciaspoleraA_h);
                    printf("\nSubtotal de la compra: $%d", subtotal);
                    printf("\nIVA total: $%.0f", ivatotal);
                    printf("\nTotal de la compra: $%.0f\n", TOTAL);
                }
                else
                {
                    //Cuando se ingresa una existencia invalida
                    printf("Error, ha ingresado un valor invalido intentelo de nuevo\n");
                    system("pause");
                    system("cls");
                    return main();
                }
                break;
            case 4:
                //Pide las existencias a agregar
                printf("\n");
                printf("   Cuantas existencia desea agregar?: ");
                scanf("%d", &A14);
                if (A14 > 0 && A14 <= existenciaspoleraB_m)
                {
                    existenciaspoleraB_h = existenciaspoleraB_h - A14;
                    float ivatotal = iva* (valorpoleraB_h*A14);
                    int subtotal = valorpoleraB_h*A14-ivatotal;
                    float TOTAL = valorpoleraB_h*A14;
                    //Boleta
                    system("cls");
                    printf("\n");
                    printf("\n");
                    printf("---------Megaretail y Cia S.A.---------");
                    printf("\n 	      99.999.999-9                    ");
                    printf("\n");
                    printf("\n");
                    printf("\nGiro: Grandes tiendas");
                    printf("\nDireccion: Avenida Fake 1202, concepcion");
                    printf("\nTelefono: 41 222 3333\nEmail: contacto@megaretailycia.c");
                    printf("\n\n---------------------------------------");
                    printf("\n");
                    printf("\n");
                    printf("\nProductos: Polera B | Moda Hombre");
                    printf("\nExistencia restantes: %d", existenciaspoleraB_h);
                    printf("\nSubtotal de la compra: $%d", subtotal);
                    printf("\nIVA total: $%.0f", ivatotal);
                    printf("\nTotal de la compra: $%.0f\n", TOTAL);
                }
                else
                {
                    //Cuando se ingresa una existencia invalida
                    printf("Error, ha ingresado un valor invalido intentelo de nuevo\n");
                    system("pause");
                    system("cls");
                    return main();
                }
                break;
            case 5:
                //Pide las existencias a agregar
                printf("\n");
                printf("   Cuantas existencia desea agregar?: ");
                scanf("%d", &A15);
                if (A15 > 0 && A15 <= existenciaspoleronA_h)
                {
                    existenciaspoleronA_h = existenciaspoleronA_h - A15;
                    float ivatotal = iva* (valorpoleronA_h*A15);
                    int subtotal = valorpoleronA_h*A15-ivatotal;
                    float TOTAL = valorpoleronA_h*A15;
                    printf("\n");
                    printf("\n");
                    printf("---------Megaretail y Cia S.A.---------");
                    printf("\n 	      99.999.999-9                    ");
                    printf("\n");
                    printf("\n");
                    printf("\nGiro: Grandes tiendas");
                    printf("\nDireccion: Avenida Fake 1202, concepcion");
                    printf("\nTelefono: 41 222 3333\nEmail: contacto@megaretailycia.c");
                    printf("\n\n---------------------------------------");
                    printf("\n");
                    printf("\n");
                    printf("\nProductos: Poleron A | Moda Hombre");
                    printf("\nExistencia restantes: %d", existenciaspoleronA_h);
                    printf("\nSubtotal de la compra: $%d", subtotal);
                    printf("\nIVA total: $%.0f", ivatotal);
                    printf("\nTotal de la compra: $%.0f\n", TOTAL);
                }
                else
                {
                    //Cuando se ingresa una existencia invalida
                    printf("Error, ha ingresado un valor invalido intentelo de nuevo\n");
                    system("pause");
                    system("cls");
                    return main();
                }
                break;
            case 6:
                //Pide las existencias a agregar
                printf("\n");
                printf("   Cuantas existencia desea agregar?: ");
                scanf("%d", &A16);
                if (A16 > 0 && A16 <= existenciaspoleronB_h)
                {
                    existenciaspoleronB_h = existenciaspoleronB_h - A16;
                    float ivatotal = iva* (valorpoleronB_h *A16);
                    int subtotal = valorpoleronB_h*A16-ivatotal;
                    float TOTAL = valorpoleronB_h *A16;
                    //Boleta
                    system("cls");
                    printf("\n");
                    printf("\n");
                    printf("---------Megaretail y Cia S.A.---------");
                    printf("\n 	      99.999.999-9                    ");
                    printf("\n");
                    printf("\n");
                    printf("\nGiro: Grandes tiendas");
                    printf("\nDireccion: Avenida Fake 1202, concepcion");
                    printf("\nTelefono: 41 222 3333\nEmail: contacto@megaretailycia.c");
                    printf("\n\n---------------------------------------");
                    printf("\n");
                    printf("\n");
                    printf("\nProductos: Poleron B | Moda Hombre");
                    printf("\nExistencia restantes: %d", existenciaspoleronB_h);
                    printf("\nSubtotal de la compra: $%d", subtotal);
                    printf("\nIVA total: $%.0f", ivatotal);
                    printf("\nTotal de la compra: $%.0f\n", TOTAL);
                }
                else
                {
                    //Cuando se ingresa una existencia invalida
                    printf("Error, ha ingresado un valor invalido intentelo de nuevo\n");
                    system("pause");
                    system("cls");
                    return main();
                }
                break;
            case 7:
                system("cls");
                return main();
            }
            system("pause");
            break;
        case 4:
            //Procesar venta de la categoria de Linea Blanca y electronica
            system("cls");
            printf("        | Linea blanca y electronica |\n\n");
            printf("    1. Aspiradora: Valor $50.000, %d existencias.\n", existenciasaspiradora);
            printf("    2. Microondas: Valor $55.000, %d existencias.\n", existenciasmicroondas);
            printf("    3. Cocina: Valor $200.000, %d existencia.\n", existenciascocina);
            printf("    4. Lavadora: Valor $350.000, %d existencia.\n", existenciaslavadora);
            printf("    5. Refrigerador: Valor $250.000, %d existencia.\n\n", existenciasrefrigerador);
            printf("    6. Volver atras\n\n");
            //Repite hasta que se ingrese el valor deseado        
            do
            {
                printf("    Cual desea seleccionar? (ej: 1): ");
                scanf("%d", &z4);
            } while (z4 < 1 || z4 > 7);
            switch (z4)
            {
            case 1:
                //Pide las existencias a agregar
                printf("\n");
                printf("   Cuantas existencia desea agregar?: ");
                scanf("%d", &A17);
                if (A17 > 0 && A17 <= existenciasaspiradora)
                {
                    existenciasaspiradora = existenciasaspiradora - A17;
                    float ivatotal = iva* (valoraspiradora*A17);
                    int subtotal = valoraspiradora*A17-ivatotal;
                    float TOTAL = valoraspiradora*A17;
                    //Boleta
                    system("cls");
                    printf("\n");
                    printf("\n");
                    printf("---------Megaretail y Cia S.A.---------");
                    printf("\n 	      99.999.999-9                    ");
                    printf("\n");
                    printf("\n");
                    printf("\nGiro: Grandes tiendas");
                    printf("\nDireccion: Avenida Fake 1202, concepcion");
                    printf("\nTelefono: 41 222 3333\nEmail: contacto@megaretailycia.c");
                    printf("\n\n---------------------------------------");
                    printf("\n");
                    printf("\n");
                    printf("\nProductos: Aspiradora | Linea blanca y electronica");
                    printf("\nExistencia restantes: %d", existenciasaspiradora);
                    printf("\nSubtotal de la compra: $%d", subtotal);
                    printf("\nIVA total: $%.0f", ivatotal);
                    printf("\nTotal de la compra: $%.0f\n", TOTAL);
                }
                else
                {
                    //Cuando se ingresa una existencia invalida
                    printf("Error, ha ingresado un valor invalido intentelo de nuevo\n");
                    system("pause");
                    system("cls");
                    return main();
                }
                break;
            case 2:
                //Pide las existencias a agregar
                printf("\n");
                printf("   Cuantas existencia desea agregar?: ");
                scanf("%d", &A18);
                if (A18 > 0 && A18 <= existenciasmicroondas)
                {
                    existenciasmicroondas = existenciasmicroondas - A18;
                    float ivatotal = iva* (valormicroondas*A18);
                    int subtotal = valormicroondas*A18-ivatotal;
                    float TOTAL = valormicroondas*A18;
                    //Boleta
                    system("cls");
                    printf("\n");
                    printf("\n");
                    printf("---------Megaretail y Cia S.A.---------");
                    printf("\n 	      99.999.999-9                    ");
                    printf("\n");
                    printf("\n");
                    printf("\nGiro: Grandes tiendas");
                    printf("\nDireccion: Avenida Fake 1202, concepcion");
                    printf("\nTelefono: 41 222 3333\nEmail: contacto@megaretailycia.c");
                    printf("\n\n---------------------------------------");
                    printf("\n");
                    printf("\n");
                    printf("\nProductos: Aspiradora | Linea blanca y electronica");
                    printf("\nExistencia restantes: %d", existenciasmicroondas);
                    printf("\nSubtotal de la compra: $%d", subtotal);
                    printf("\nIVA total: $%.0f", ivatotal);
                    printf("\nTotal de la compra: $%.0f\n", TOTAL);
                }
                else
                {
                    //Cuando se ingresa una existencia invalida
                    printf("Error, ha ingresado un valor invalido intentelo de nuevo\n");
                    system("pause");
                    system("cls");
                    return main();
                }
                break;
            case 3:
                //Pide las existencias a agregar
                printf("\n");
                printf("   Cuantas existencia desea agregar?: ");
                scanf("%d", &A19);
                if (A19 > 0 && A19 <= existenciascocina)
                {
                    existenciascocina = existenciascocina - A19;
                    float ivatotal = iva* (valorcocina*A19);
                    int subtotal = valorcocina*A19-ivatotal;
                    float TOTAL = valorcocina*A19;
                    //Boleta
                    system("cls");
                    printf("\n");
                    printf("\n");
                    printf("---------Megaretail y Cia S.A.---------");
                    printf("\n 	      99.999.999-9                    ");
                    printf("\n");
                    printf("\n");
                    printf("\nGiro: Grandes tiendas");
                    printf("\nDireccion: Avenida Fake 1202, concepcion");
                    printf("\nTelefono: 41 222 3333\nEmail: contacto@megaretailycia.c");
                    printf("\n\n---------------------------------------");
                    printf("\n");
                    printf("\n");
                    printf("\nProductos: Cocina | Linea blanca y electronica");
                    printf("\nExistencia restantes: %d", existenciascocina);
                    printf("\nSubtotal de la compra: $%d", subtotal);
                    printf("\nIVA total: $%.0f", ivatotal);
                    printf("\nTotal de la compra: $%.0f\n", TOTAL);
                }
                else
                {
                    //Cuando se ingresa una existencia invalida
                    printf("Error, ha ingresado un valor invalido intentelo de nuevo\n");
                    system("pause");
                    system("cls");
                    return main();
                }
                break;
            case 4:
                //Pide las existencias a agregar
                printf("\n");
                printf("   Cuantas existencia desea agregar?: ");
                scanf("%d", &A20);
                if (A20 > 0 && A20 <= existenciaslavadora)
                {
                    existenciaslavadora = existenciaslavadora - A20;
                    float ivatotal = iva* (valorlavadora*A20);
                    int subtotal = valorlavadora*A20-ivatotal;
                    float TOTAL = valorlavadora*A20;
                    //Boleta
                    system("cls");
                    printf("\n");
                    printf("\n");
                    printf("---------Megaretail y Cia S.A.---------");
                    printf("\n 	      99.999.999-9                    ");
                    printf("\n");
                    printf("\n");
                    printf("\nGiro: Grandes tiendas");
                    printf("\nDireccion: Avenida Fake 1202, concepcion");
                    printf("\nTelefono: 41 222 3333\nEmail: contacto@megaretailycia.c");
                    printf("\n\n---------------------------------------");
                    printf("\n");
                    printf("\n");
                    printf("\nProductos: Lavadora | Linea blanca y electronica");
                    printf("\nExistencia restantes: %d", existenciaslavadora);
                    printf("\nSubtotal de la compra: $%d", subtotal);
                    printf("\nIVA total: $%.0f", ivatotal);
                    printf("\nTotal de la compra: $%.0f\n", TOTAL);
                }
                else
                {
                    //Cuando se ingresa una existencia invalida
                    printf("Error, ha ingresado un valor invalido intentelo de nuevo\n");
                    system("pause");
                    system("cls");
                    return main();
                }
                break;
            case 5:
                //Pide las existencias a agregar
                printf("\n");
                printf("   Cuantas existencia desea agregar?: ");
                scanf("%d", &A21);
                if (A21 > 0 && A21 <= existenciasrefrigerador)
                {
                    existenciasrefrigerador = existenciasrefrigerador - A21;
                    float ivatotal = iva* (valorrefrigerador*A21);
                    int subtotal = valorrefrigerador*A21-ivatotal;
                    float TOTAL = valorrefrigerador*A21;
                    //Boleta
                    system("cls");
                    printf("\n");
                    printf("\n");
                    printf("---------Megaretail y Cia S.A.---------");
                    printf("\n 	      99.999.999-9                    ");
                    printf("\n");
                    printf("\n");
                    printf("\nGiro: Grandes tiendas");
                    printf("\nDireccion: Avenida Fake 1202, concepcion");
                    printf("\nTelefono: 41 222 3333\nEmail: contacto@megaretailycia.c");
                    printf("\n\n---------------------------------------");
                    printf("\n");
                    printf("\n");
                    printf("\nProductos: Refrigerador | Linea blanca y electronica");
                    printf("\nExistencia restantes: %d", existenciasrefrigerador);
                    printf("\nSubtotal de la compra: $%d", subtotal);
                    printf("\nIVA total: $%.0f", ivatotal);
                    printf("\nTotal de la compra: $%.0f\n", TOTAL);
                }
                else
                {
                    //Cuando se ingresa una existencia invalida
                    printf("Error, ha ingresado un valor invalido intentelo de nuevo\n");
                    system("pause");
                    system("cls");
                    return main();
                }
                break;
            case 6:
                system("cls");
                return main();
            }
            system("pause");
            break;
        case 5:
            //Procesar venta de la categoria de Computacion
            system("cls");
            printf("        | Computacion |\n\n");
            printf("    1. PC de escritorio: Valor $500.000, %d existencia.\n", existenciaspcescritorio);
            printf("    2. PC gamer: Valor $800.000, %d existencias.\n", existenciaspcgamer);
            printf("    3. Notebook: Valor $220.000, %d existencia.\n", existenciasnotebook);
            printf("    4. Notebook gamer: Valor $999.990, %d existencias.\n\n", existenciasnotebookgamer);
            printf("    5. Volver atras\n\n");
            //Repite hasta que se ingrese el valor deseado            
            do
            {
                printf("    Cual desea seleccionar? (ej: 1): ");
                scanf("%d", &z5);
            } while (z5 < 1 || z5 > 5);
            switch (z5)
            {
            case 1:
                //Pide las existencias a agregar
                printf("\n");
                printf("   Cuantas existencia desea agregar?: ");
                scanf("%d", &A22);
                if (A22 > 0 && A22 <= existenciaspcescritorio)
                {
                    existenciaspcescritorio = existenciaspcescritorio - A22;
                    float ivatotal = iva* (valorpcescritorio*A22);
                    int subtotal = valorpcescritorio*A22-ivatotal;
                    float TOTAL = valorpcescritorio*A22;
                    //Boleta
                    system("cls");
                    printf("\n");
                    printf("\n");
                    printf("---------Megaretail y Cia S.A.---------");
                    printf("\n 	      99.999.999-9                    ");
                    printf("\n");
                    printf("\n");
                    printf("\nGiro: Grandes tiendas");
                    printf("\nDireccion: Avenida Fake 1202, concepcion");
                    printf("\nTelefono: 41 222 3333\nEmail: contacto@megaretailycia.c");
                    printf("\n\n---------------------------------------");
                    printf("\n");
                    printf("\n");
                    printf("\nProductos: Pc escritorio | Computacion");
                    printf("\nExistencia restantes: %d", existenciaspcescritorio);
                    printf("\nSubtotal de la compra: $%d", subtotal);
                    printf("\nIVA total: $%.0f", ivatotal);
                    printf("\nTotal de la compra: $%.0f\n", TOTAL);
                }
                else
                {
                    //Cuando se ingresa una existencia invalida
                    printf("Error, ha ingresado un valor invalido intentelo de nuevo\n");
                    system("pause");
                    system("cls");
                    return main();
                }
                break;
            case 2:
                //Pide las existencias a agregar
                printf("\n");
                printf("   Cuantas existencia desea agregar?: ");
                scanf("%d", &A23);
                if (A23 > 0 && A23 <= existenciaspcgamer)
                {
                    existenciaspcgamer = existenciaspcgamer - A23;
                    float ivatotal = iva* (valorpcgamer*A23);
                    int subtotal = valorpcgamer*A23-ivatotal;
                    float TOTAL = valorpcgamer*A23;
                    //Boleta
                    system("cls");
                    printf("\n");
                    printf("\n");
                    printf("---------Megaretail y Cia S.A.---------");
                    printf("\n 	      99.999.999-9                    ");
                    printf("\n");
                    printf("\n");
                    printf("\nGiro: Grandes tiendas");
                    printf("\nDireccion: Avenida Fake 1202, concepcion");
                    printf("\nTelefono: 41 222 3333\nEmail: contacto@megaretailycia.c");
                    printf("\n\n---------------------------------------");
                    printf("\n");
                    printf("\n");
                    printf("\nProductos: Pc gamer | Computacion");
                    printf("\nExistencia restantes: %d", existenciaspcgamer);
                    printf("\nSubtotal de la compra: $%d", subtotal);
                    printf("\nIVA total: $%.0f", ivatotal);
                    printf("\nTotal de la compra: $%.0f\n", TOTAL);
                }
                else
                {
                    //Cuando se ingresa una existencia invalida
                    printf("Error, ha ingresado un valor invalido intentelo de nuevo\n");
                    system("pause");
                    system("cls");
                    return main();
                }
                break;
            case 3:
                //Pide las existencias a agregar
                printf("\n");
                printf("   Cuantas existencia desea agregar?: ");
                scanf("%d", &A24);
                if (A24 > 0 && A24 <= existenciasnotebook)
                {
                    existenciasnotebook = existenciasnotebook - A24;
                    float ivatotal = iva* (valornotebook*A24);
                    int subtotal = valornotebook*A24-ivatotal;
                    float TOTAL = valornotebook*A24;
                    //Boleta
                    system("cls");
                    printf("\n");
                    printf("\n");
                    printf("---------Megaretail y Cia S.A.---------");
                    printf("\n 	      99.999.999-9                    ");
                    printf("\n");
                    printf("\n");
                    printf("\nGiro: Grandes tiendas");
                    printf("\nDireccion: Avenida Fake 1202, concepcion");
                    printf("\nTelefono: 41 222 3333\nEmail: contacto@megaretailycia.c");
                    printf("\n\n---------------------------------------");
                    printf("\n");
                    printf("\n");
                    printf("\nProductos: Notebook | Computacion");
                    printf("\nExistencia restantes: %d", existenciasnotebook);
                    printf("\nSubtotal de la compra: $%d", subtotal);
                    printf("\nIVA total: $%.0f", ivatotal);
                    printf("\nTotal de la compra: $%.0f\n", TOTAL);
                }
                else
                {
                    //Cuando se ingresa una existencia invalida
                    printf("Error, ha ingresado un valor invalido intentelo de nuevo\n");
                    system("pause");
                    system("cls");
                    return main();
                }
                break;
            case 4:
                //Pide las existencias a agregar
                printf("\n");
                printf("   Cuantas existencia desea agregar?: ");
                scanf("%d", &A25);
                if (A25 > 0 && A25 <= existenciasnotebookgamer)
                {
                    existenciasnotebookgamer = existenciasnotebookgamer - A25;
                    float ivatotal = iva* (valornotebookgamer*A25);
                    int subtotal = valornotebookgamer*A25-ivatotal;
                    float TOTAL = valornotebookgamer*A25;
                    //Boleta
                    system("cls");
                    printf("\n");
                    printf("\n");
                    printf("---------Megaretail y Cia S.A.---------");
                    printf("\n 	      99.999.999-9                    ");
                    printf("\n");
                    printf("\n");
                    printf("\nGiro: Grandes tiendas");
                    printf("\nDireccion: Avenida Fake 1202, concepcion");
                    printf("\nTelefono: 41 222 3333\nEmail: contacto@megaretailycia.c");
                    printf("\n\n---------------------------------------");
                    printf("\n");
                    printf("\n");
                    printf("\nProductos: Pc gamer | Computacion");
                    printf("\nExistencia restantes: %d", existenciasnotebookgamer);
                    printf("\nSubtotal de la compra: $%d", subtotal);
                    printf("\nIVA total: $%.0f", ivatotal);
                    printf("\nTotal de la compra: $%.0f\n", TOTAL);
                }
                else
                {
                    //Cuando se ingresa una existencia invalida
                    printf("Error, ha ingresado un valor invalido intentelo de nuevo\n");
                    system("pause");
                    system("cls");
                    return main();
                }
                break;
            case 5:
                system("cls");
                return main();
            }
            system("pause");
            break;
        }
        system("cls");
        break;
    case 2:
        //Menu para mostrar la existencia de productos
        system("cls");
        printf("   | Mostrando la existencia de productos |\n\n");
        printf("    Nuestros productos por categoria\n");
        printf("    1. Zapatos y zapatillas\n");
        printf("    2. Moda Mujer\n");
        printf("    3. Moda Hombre\n");
        printf("    4. Linea blanca y electronica\n");
        printf("    5. Computacion\n\n");
        printf("    6. Volver atras\n\n");
        printf("    A cual categoria desea entrar?\n");
        //Repite hasta que se ingrese el valor deseado        
        do
        {
        printf("    Ingrese la categoria (ej: 1): ");
        scanf("%d", &c2);
        }while(c2<1 || c2 >6);
        switch (c2)
        {
        case 1:
            //Muestra las existencias de Zapatos y zapatillas
            system("cls");
            printf("        | Zapatos y zapatillas |\n\n");
            printf("    Zapato A: %d existencias.\n", existenciaszapatoA);
            printf("    Zapato B: %d existencias.\n", existenciaszapatoB);
            printf("    Zapatilla A: %d existencias.\n", existenciaszapatillaA);
            printf("    Zapatilla B: %d existencias.\n\n", existenciaszapatillaB);
            printf("    Volver atras\n");
            system("pause");
            system("cls");
            return main();
            break;
        case 2:
            //Muestra las existencias de Moda mujer
            system("cls");
            printf("        | Moda Mujer |\n\n");
            printf("    Pantalon A: %d existencias.\n", existenciaspantalonA_m);
            printf("    Pantalon B: %d existencias.\n", existenciaspantalonB_m);
            printf("    Polera A: %d existencias.\n", existenciaspoleraA_m);
            printf("    Polera B: %d existencias.\n", existenciaspoleraB_m);
            printf("    Poleron A: %d existencias.\n", existenciaspoleronA_m);
            printf("    Poleron B: %d existencias.\n\n", existenciaspoleronB_m);
            printf("    Volver atras\n ");
            system("pause");
            system("cls");
            return main();
            break;
        case 3:
            //Muestra las existencias de Moda hombre
            system("cls");
            printf("        | Moda Hombre |\n\n");
            printf("    Pantalon A: %d existencias.\n", existenciaspantalonA_h);
            printf("    Pantalon B: %d existencias.\n", existenciaspantalonB_h);
            printf("    Polera A: %d existencias.\n", existenciaspoleraA_h);
            printf("    Polera B: %d existencias.\n", existenciaspoleraB_h);
            printf("    Poleron A: %d existencias.\n", existenciaspoleronA_h);
            printf("    Poleron B: %d existencias.\n\n", existenciaspoleronB_h);
            printf("    Volver atras\n ");
            system("pause");
            system("cls");
            return main();
            break;
        case 4:
            //Muestra las existencias de Linea blanca y electronica
            system("cls");
            printf("        | Linea blanca y electronica |\n\n");
            printf("    Aspiradora: %d existencias.\n", existenciasaspiradora);
            printf("    Microondas: %d existencias.\n", existenciasmicroondas);
            printf("    Cocina: %d existencia.\n", existenciascocina);
            printf("    Lavadora: %d existencia.\n", existenciaslavadora);
            printf("    Refrigerador: %d existencia.\n\n", existenciasrefrigerador);
            printf("    Volver atras\n ");
            system("pause");
            system("cls");
            return main();
            break;
        case 5:
            //Muestra las existencias de Computacion
            system("cls");
            printf("        | Computacion |\n\n");
            printf("    PC de escritorio: %d existencia.\n", existenciaspcescritorio);
            printf("    PC gamer: %d existencias.\n", existenciaspcgamer);
            printf("    Notebook: %d existencia.\n", existenciasnotebook);
            printf("    Notebook gamer: %d existencias.\n\n", existenciasnotebookgamer);
            printf("    Volver atras\n ");
            system("pause");
            system("cls");
            return main();
            break;
        default:
            system("cls");
            return main();
            break;
        }
        system("cls");
        break;
    case 3:
        //Menu para mostrar el monto total de ventas
        system("cls");
        printf("   | Mostrando el monto total de ventas |\n\n");
        printf("    Ver ventas por categoria\n\n");
        printf("    1. Zapatos y zapatillas\n");
        printf("    2. Moda Mujer\n");
        printf("    3. Moda Hombre\n");
        printf("    4. Linea blanca y electronica\n");
        printf("    5. Computacion\n\n");
        printf("    6. Volver atras\n\n");
        printf("    Ventas totales hasta el momento: %d\n\n", ventastotales);
        printf("    A cual categoria desea entrar?\n");
        //Repite hasta que se ingrese el valor deseado        
        do{
        printf("    Ingrese la categoria (ej: 1): ");
        scanf("%d", &c3);
        }while(c3< 1 || c3 > 6);
        switch (c3)
        {
        case 1:
            //Muestra el total de ventas de la categoria zapatos y zapatillas
            system("cls");
            printf("------------------------------------------------------\n");
            printf("    El total de ventas de la categoria\n\n");
            printf("        Zapatos y zapatillas\n\n");
            printf("    Las ventas son: %d\n\n", ventaszapa);
            printf("    Lo que falta por vender es: %d\n", noventaszapa);
            printf("------------------------------------------------------\n\n");
            printf("    Volver atras\n ");
            system("pause");
            system("cls");
            break;
        case 2:
            //Muestra el total de ventas de la categoria Moda mujer
            system("cls");
            printf("------------------------------------------------------\n");
            printf("    El total de ventas de la categoria\n\n");
            printf("        Moda mujer\n\n");
            printf("    Las ventas son: %d\n\n", ventasmujer);
            printf("    Lo que falta por vender es: %d\n\n", noventasmujer);
            printf("------------------------------------------------------\n\n");
            printf("    Volver atras\n ");
            system("pause");
            system("cls");
            break;
        case 3:
            //Muestra el total de ventas de la categoria de Moda hombre
            system("cls");
            printf("------------------------------------------------------\n");
            printf("    El total de ventas de la categoria\n\n");
            printf("        Moda Hombre\n\n");
            printf("    Las ventas son: %d\n\n", ventashombre);
            printf("    Lo que falta por vender es: %d\n", noventashombre);
            printf("------------------------------------------------------\n\n");
            printf("    Volver atras\n ");
            system("pause");
            system("cls");
            break;
        case 4:
            //Muestra el total de ventas de la categoria de Linea blana y electronica
            system("cls");
            printf("------------------------------------------------------\n");
            printf("    El total de ventas de la categoria\n\n");
            printf("        Linea blanca y electronica\n\n");
            printf("    Las ventas son: %d\n\n", ventaslinea);
            printf("    Lo que falta por vender es: %d\n", noventaslinea);
            printf("------------------------------------------------------\n\n");
            printf("    Volver atras\n ");
            system("pause");
            system("cls");
            break;
        case 5:
            //Muestra el total de ventas de la categoria de Computacion
            system("cls");
            printf("------------------------------------------------------\n");
            printf("    El total de ventas de la categoria\n\n");
            printf("        Computacion\n\n");
            printf("    Las ventas son: %d\n\n", ventascompu);
            printf("    Lo que falta por vender es: %d\n", noventascompu);
            printf("------------------------------------------------------\n\n");
            printf("    Volver atras\n ");
            system("pause");
            system("cls");
            break;
        }
        system("cls");
        break;
    case 4:
        return 0;
    }
    return main();
}

// Comentarios
/* Profesor, en este codigo hemos utilizado el switch un metodo que no se habia enseñado pero decidimos
explorar por nuestra propia cuenta ya que poseemos conocimiento previo de las bases de PSEINT, esto nos
facilita el desarrollo de nuestro codigo, tambien investigamos como hacer que no crashee el programa
cuando se ingresa una letra con el scanf y se puede hacer limpiando el bufer de entrada pero es algo 
bastante avanzado que aun no sabemos como se utiliza al 100%, además hemos utilizado el return main
para que el programa se mantenga en un bucle. Además de declarar variables globalmente para mantenerlas
en el transcurso del programa.*/

//Desarrolladores: Alberto Carrasco y Gabriel Ascencio 
