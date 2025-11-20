#include <iostream>
using namespace std;
#include <string.h> 
struct producto
{
    char nombre[30];
    char tipo[40];
    char utilidad[40];
    int cantidad;
    float precio;
    int codigo;
    float precioVenta;
    float precioCompra;
};

struct cliente
{
    char CL[30];
    char nombre[30];
    int telefono;
    char correo[40];
};

struct ventas
{
    char id[30];
    char CIcliente[30];
    int totalventas;
    char idproducto[40];
};

struct factura
{
    char NIT[30];
    char nombre[30];
    char nombreproducto[30];
    char preciouni[30];
    float subtotal;
    float total;    
    float impuesto;
    char direccion[30];
    char telefono[30];
};

struct proveedor
{
    char idproveedor[30];
    char nombre[30];
    int totalventas;
    char idproducto[40];
};

producto Agregarproducto()
{
    producto prod;
    cout<<"ingresa el nombre del producto: "<<endl;
    cin.ignore();
    cin.getline(prod.nombre,30);
    cout<<"ingresa el tipo de producto: "<<endl;
    cin.getline(prod.tipo,40);
    cout<<"ingresa la utilidad del producto: "<<endl;
    cin.getline(prod.utilidad,40);
    cout<<"ingresa la cantidad: "<<endl;
    cin>>prod.cantidad;
    cout<<"ingresa el precio: "<<endl;
    cin>>prod.precio;


}

producto Agregarventas()
{

    
}

producto Agregarclientes()
{

    
}

void menu()
{
    int opcion = 0;
    bool bandera = true;
    system("cls");
    while(bandera){
        cout << "MENU PINTURAS MONOPOLY\n";
        cout << "========================\n";        
        cout << "1. Adicionar producto \n";
        cout << "2. Adicionar ventas \n";
        cout << "3. Adicionar clientes \n";
        cout << "4. Salir\n";
        cin >> opcion;
        switch(opcion){
            case 1:
                Agregarproducto();
                break;
            case 2:
                Agregarventas();
                break;
            case 3:
                Agregarclientes();
                break;          
            case 4:
                bandera = false;
                break;
            default:
                cout << "Opcion no valida\n";
                break;
        }
    }
    
}

int main()
{
    menu();
}