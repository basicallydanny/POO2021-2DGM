#include <iostream>
#include "View.h"

View::View(){
    this->cantidadRec = 0;
    this->cantidadTri = 0;
    this->cantidadCir = 0;
};

void View::agregarRectangulos(){
    float ancho; float largo; int opc;

    cout << "Ingrese el ancho del rectangulo: ";
    cin >> ancho;
    cout << "Ingrese el largo del rectangulo: ";
    cin >> largo;

    // Crear el objeto
    Rectangulo rectanguloPlus(ancho, largo);
    rectanguloPlus.calcularPerimetro();
    rectanguloPlus.calcularArea();
    cout << "\n ";
    rectanguloPlus.mostrarFigura();

    cout << "\n Desea guardar la figura? \n 1. Si \n 2. No \n OPC: ";
    cin >> opc;
    if ( opc == 1 && cantidadRec + 1 > CAP ){
        cout << "\n El espacio esta lleno.";
        return;
    } else if ( opc == 1 && cantidadRec <= CAP ){
        arrRectangulos[cantidadRec] = rectanguloPlus; 
        cantidadRec++;
        cout << "\n El rectangulo fue guardado.";
    }
}

void View::agregarTriangulos(){
    float ladoUno, ladoDos, ladoTres; int opc;

    cout << "Ingrese el primer lado del triangulo: ";
    cin >> ladoUno; cout << "\n ";
    cout << "Ingrese el segundo lado del triangulo:  ";
    cin >> ladoDos; cout << "\n ";
    cout << "Ingrese el tercer lado del triangulo:  ";
    cin >> ladoTres; cout << "\n ";

    // Crear el objeto
    Triangulo trianguloPlus(ladoUno, ladoDos, ladoTres);
    trianguloPlus.calcularPerimetro();
    trianguloPlus.calcularArea();
    cout << "\n ";
    trianguloPlus.mostrarFigura();

    cout << "\n Desea guardar la figura? \n 1. Si \n 2. No \n OPC: ";
    cin >> opc;
    if ( opc == 1 && cantidadTri + 1 > CAP ){
        cout << "\n El espacio esta lleno.";
        return;
    } else if ( opc == 1 && cantidadTri <= CAP ){
        arrTriangulos[cantidadTri] = trianguloPlus; 
        cantidadTri++;
        cout << "\n El triangulo fue guardado.";
    }
}

void View::agregarCirculos(){
    float radio; int opc;
    cout << "Ingrese el radio del circulo: ";
    cin >> radio;

    // Crear el objeto
    Circulo circuloPlus(radio);
    circuloPlus.calcularPerimetro();
    circuloPlus.calcularArea();
    circuloPlus.mostrarFigura();
    cout << "\n ";

    cout << "\n Desea guardar la figura? \n 1. Si \n 2. No \n OPC: ";
    cin >> opc;
    if ( opc == 1 && cantidadCir + 1 > CAP ){
        cout << "\n El espacio esta lleno.";
        return;
    } else if ( opc == 1 && cantidadCir <= CAP ){
        arrCirculos[cantidadCir] = circuloPlus; 
        cantidadCir++;
        cout << "\n El circulo fue guardado.";
    }
}

void View::mostrarRectangulos(){
    if ( cantidadRec == 0 )
        cout << "\n No hay rectangulos guardados.\n";
    for (int cont = 0; cont < cantidadRec; cont++){
        cout << "\n RECTANGULO #" << cont + 1 << "\n";
        arrRectangulos[cont].mostrarFigura(); cout << "\n ";
    };
}

void View::mostrarTriangulos(){
    if ( cantidadTri == 0 )
        cout << "\n No hay triangulos guardados.\n";
    for (int cont = 0; cont < cantidadTri; cont++){
        cout << "\n TRIANGULO #" << cont + 1 << "\n";
        arrTriangulos[cont].mostrarFigura(); cout << "\n ";
    };
}

void View::mostrarCirculos(){
    if ( cantidadCir == 0 )
        cout << "\n No hay circulos guardados.\n";
    for (int cont = 0; cont < cantidadCir; cont++){
        cout << "\n CIRCULO #" << cont + 1 << "\n";
        arrCirculos[cont].mostrarFigura(); cout << "\n ";
    };
}

void View::mostrarMenu(){
     int choice;
     do{
         cout << "\n\n   MENU FIGURAS \n"
         << "1. Agregar Rectangulo\n"
         << "2. Agregar Triangulo\n"
         << "3. Agregar Circulo\n"
         << "4. Mostrar Rectangulos\n"
         << "5. Mostrar Triangulos\n"
         << "6. Mostrar Circulos\n"
         << "o. EXIT\n"
         << "OPC:";
         cin >> choice; cout << "\n ";
         switch(choice){
              case 1:
               agregarRectangulos(); break;
              case 2:
               agregarTriangulos(); break;
              case 3:
               agregarCirculos(); break;
              case 4:
               mostrarRectangulos(); break;
              case 5:
               mostrarTriangulos(); break;
              case 6:
               mostrarCirculos(); break;
              case 0: 
               break;
         }
     } while (choice != 0);
     return;
}


