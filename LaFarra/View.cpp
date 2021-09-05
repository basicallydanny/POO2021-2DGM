#include "View.h"

View::View()
{
}

void View::mostrarMenuReportes()
{
    int opcion = -1;
    int cantidadProducto = 0;
    do
    {

        cout << "Reportes\n"
             << endl;
        cout << "1. Cantidad en Inventario\n";
        cout << "2. Cantidad por Tipo de Producto\n";
        cout << "3. Ganancias Obtenidas\n";
        cout << "4. Mostrar todos los Productos\n";
        cout << "5. Valor a Pagar a la DIAN\n";
        cout << "0. Volver \n";
        std::cout << "Digita el numero: ";
        std::cin >> opcion;

        // TODO completar
        switch (opcion)
        {
            case 1: 
            cout << "Ingrese la cantidad minima que debe tener el producto:";
            std::cin >> cantidadProducto;            
            laFarra.cantInventario(cantidadProducto); break;
            
            case 2:
            laFarra.cantTipoProducto(); break;

            case 3:
            laFarra.gananciasObtenidas(); break;

            case 4:
            laFarra.dian(); break;   
        }
    } while (opcion != 0);
}

void View::mostrarMenu()
{
    int opcion = -1;
    do
    {

        cout << "Menu Tienda\n";
        cout << "1. Agregar Productos \n";
        cout << "2. Mostrar Productos \n";
        cout << "3. Vender \n";
        cout << "4. Mostrar Ventas \n";
        cout << "5. Reportes \n";
        cout << "0. Salir \n";
        std::cout << "Digita el numero: ";
        std::cin >> opcion;

        switch (opcion)
        {

        case 1:
            laFarra.agregarProducto();
            break;
        case 2:
            laFarra.mostrarProductos();
            break;

        case 3:
            laFarra.vender();
            break;

        case 4:
            laFarra.mostrarFacturas();
            break;

        case 5:
            mostrarMenuReportes();
            break;
        }

    } while (opcion != 0);
}