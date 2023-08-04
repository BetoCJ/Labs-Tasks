#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Prototipos de funciones
void mostrar_menu();
void mostrar_productos(char nombres[16][30], int precios[16], int existencias[16], int num_productos);
void procesar_venta(char nombres[16][30], int precios[16], int existencias[16], int ventas[16], int num_productos);
void mostrar_monto_total(char nombres[16][30], int precios[16], int ventas[16], int num_productos, int existencias[16]);

int main() {
    char nombres[16][30] = {
        //Lista de los nombres de productos
        "1. Zapato A",
        "2. Zapato B",
        "3. Zapatilla A",
        "4. Zapatilla B",
        "5. Pantalon femenino A",
        "6. Pantalon femenino B",
        "7. Polera femenina A",
        "8. Polera femenina B",
        "9. Poleron femenino A",
        "10. Poleron femenino B",
        "11. Pantalon masculino A",
        "12. Pantalon masculino B",
        "13. Polera masculina A",
        "14. Polera masculina B",
        "15. Poleron masculino A",
        "16. Poleron masculino B"
    };

    int precios[16] = {
        // Lista de los precios de los productos
        25000, 60000, 33000, 72000, 12000, 15000, 7000, 12000, 20000, 21000, 15000, 20000, 10000, 12000, 18000, 20000
    };

    int existencias[16] = {
        // Lista de las existencias de los productos
        8, 4, 6, 6, 15, 15, 12, 5, 10, 20, 8, 6, 12, 20, 10, 10
    };

    int ventas[16] = {0}; // Vector para almacenar las cantidades vendidas de cada producto
    
    // Numero total de los productos
    int num_productos = 16; 
    int opcion;

    do {
        // Muestra el menu
        mostrar_menu();
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                system("cls");
                procesar_venta(nombres, precios, existencias, ventas, num_productos); // Procesar una venta
                break;
            case 2:
                system("cls");            
                mostrar_productos(nombres, precios, existencias, num_productos); // Mostrar la cantidad de existencias
                system("pause");
                system("cls");
                break;
            case 3:
                system("cls");            
                mostrar_monto_total(nombres, precios, ventas, num_productos, existencias); // Mostrar monto total de ventas
                break;
            case 4:
                system("cls");            
                printf("\nGracias por utilizar el software de Megaretail y Cia S.A.\n");
                printf("Hasta pronto!\n\n");
                printf("Desarrollado por Alberto Carrasco y Gabriel Ascencio\n\n");
                system("pause");
                break;
            default:
                printf("Opcion invalida. Intente nuevamente.\n");
                break;
        }
    } while (opcion != 4); // Repetir el menu hasta que se seleccione la opción 4 (Salir)

    return 0;
}

void mostrar_menu() {
    // Muestra el menu de opciones al usuario
    system("cls");
    printf("\n   | Megaretail y Cia S.A. |    \n\n");
    printf("1. Procesar una venta\n");
    printf("2. Mostrar cantidad de existencias\n");
    printf("3. Mostrar monto total de ventas\n");
    printf("4. Salir\n\n");
    printf("Developers: Alberto Carrasco y Gabriel Ascencio\n\n");    
    printf("Escoja una opcion: ");
}

void procesar_venta(char nombres[16][30], int precios[16], int existencias[16], int ventas[16], int num_productos) {
    // Realizar el proceso de venta
    int total = 0; // Monto total de la venta
    int i, producto, cantidad;

    do {
        mostrar_productos(nombres, precios, existencias, num_productos); // Muestra la lista de productos antes de la venta
        printf("\n17. Para mostrar la boleta (Terminar la venta) \n");
        printf("\n18. Cancelar venta\n");
        printf("\nEscoja el numero de producto a vender: ");
        scanf("%d", &producto);

        if (producto >= 1 && producto <= num_productos) {
            printf("Ingrese la cantidad a vender o cancelar la venta (Stock actual: %d): ", existencias[producto - 1]);
            scanf("%d", &cantidad);

            if (cantidad > 0 && cantidad <= existencias[producto - 1]) {
                ventas[producto - 1] += cantidad; // Agrega la cantidad vendida al vector de ventas
                existencias[producto - 1] -= cantidad; // Actualiza el stock del producto
                total += precios[producto - 1] * cantidad; // Suma al total de la venta
            } else {
                printf("Cantidad invalida o insuficiente en stock. Venta cancelada.\n");
            }
        } else if (producto != 17 && producto != 18) {
            printf("Numero de producto invalido. Intente nuevamente.\n");
        } if (producto == 18){
            system("cls");
            main();
        }
    } while (producto != 17);

    // Mostrar la boleta con los detalles de la venta
    system("cls");
    printf("\n   | Boleta |   \n\n");
    printf("Razon social: Megaretail y Cia S.A.\n");
    printf("RUT: 99.999.999-9\n");
    printf("Giro: Grandes tiendas\n");
    printf("Direccion: Avenida Fake 1202, Concepcion\n");
    printf("Telefono: 41 222 3333\n");
    printf("Email: contacto@megaretailycia.cl\n\n");
    printf("Productos:\n");
    for (i = 0; i < num_productos; i++) {
        if (ventas[i] > 0) {
            printf("- %s: %d unidades a $%d c/u\n", nombres[i], ventas[i], precios[i]); // Muestra el nombre, cantidad y precio de cada producto vendido
        }
    }
    printf("\nPrecio neto: $%d\n", total);
    printf("IVA (19%%): $%.2f\n", total * 0.19);
    printf("Total a pagar: $%.2f\n\n", total * 1.19);
    system("pause");
    system("cls");
}

void mostrar_productos(char nombres[16][30], int precios[16], int existencias[16], int num_productos) {
    // Muestra la lista de productos y sus detalles (precio y stock)
    printf("\n   | Productos en existencia |   \n\n");
    printf("Nombre\t\tPrecio\tStock\n");
    for (int i = 0; i < num_productos; i++) {
        printf("%s\t$%d\t%d\n", nombres[i], precios[i], existencias[i]);
    }
}

void mostrar_monto_total(char nombres[16][30], int precios[16], int ventas[16], int num_productos, int existencias[16]) {
    // Muestra el monto total de las ventas y el monto total en stock de todos los productos
    int total_vendido = 0;
    int total_stock = 0;

    for (int i = 0; i < num_productos; i++) {
        total_vendido = total_vendido + ventas[i] * precios[i]; // Utiliza el arreglo ventas para obtener la cantidad vendida de cada producto
        total_stock = total_stock + existencias[i] * precios[i]; // Utiliza el arreglo existencias para obtener la cantidad en stock de cada producto
    }

    printf("\n   | Monto total de ventas |   \n\n");
    printf("Cantidad total vendida: $%d\n", total_vendido); 
    printf("Monto total en stock: $%d\n", total_stock);
    system("pause");
    system("cls");
}

//Desarrolladores: Alberto Carrasco y Gabriel Ascencio