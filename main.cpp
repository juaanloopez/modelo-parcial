#include <iostream>

using namespace std;

#include "modeloparcial.h"

class ComprasEsteAnio{
private:
    int numeroCompra, numeroProveedor;
    float importe;
public:
    void setNumeroCompra(int numCom);
    void setNumeroProveedor(int numPro);
    void setImporte(float im);
    int getNumeroCompra();
    int getNumeroProveedor();
    float getImporte();
};

/*
class ArchivoComprasEsteAnio{
    private:
        char nombre[30];
    public:
        ArchivoComprasEsteAnio(const char *n){
            strcpy(nombre, n);
        }
        ArchivoCompras leerRegistro(int pos){
            ArchivoCompras reg;
            FILE *p=fopen(nombre,"rb");
            if(p==NULL){
                return reg;
            }
            fseek(p, pos * sizeof reg, 0);
            fread(&reg, sizeof reg, 1, p);
            fclose(p);
            return reg;
        }
        int contarRegistros(){
            FILE *p=fopen(nombre,"rb");
            if(p==NULL){
                return -1;
            }
            fseek(p, 0, 2);
            int cant=ftell(p)/sizeof(Compra);
            fclose(p);
            return cant;
        }
        bool grabarRegistro(Compra reg){
            FILE *p;
            p=fopen(nombre, "ab");
            if(p==NULL) return false;
            int escribio=fwrite(&reg, sizeof reg,1, p);
            fclose(p);
            return escribio;
        }
};
*/

void ComprasEsteAnio::setNumeroCompra(int numCom){
    numeroCompra = numCom;
}

void ComprasEsteAnio::setNumeroProveedor(int numPro){
    numeroProveedor = numPro;
}

void ComprasEsteAnio::setImporte(float im){
    importe = im;
}

int ComprasEsteAnio::getNumeroCompra(){
    return numeroCompra;
}

int ComprasEsteAnio::getNumeroProveedor(){
    return numeroProveedor;
}

float ComprasEsteAnio::getImporte(){
    return importe;
}

int main()
{
    Compra com;
    ArchivoCompras archiCom("compras.dat");

    int opc, cant, i;
    bool escribio;

    while(true){
        system("cls");
        cout<<"MENU PRINCIPAL"<<endl;
        cout<<"==============================="<<endl;
        cout<<"1 - CARGAR OBRAS"<<endl;
        cout<<"2 - CARGAR MATERIALES"<<endl;
        cout<<"3 - CARGAR COMPRAS"<<endl;
        cout<<"4 - CARGAR PROVEEDORES"<<endl;
        cout<<"5 - CARGAR LAS COMPRAS REALIZADAS ESTE ANIO"<<endl;
        cout<<"0 - SALIR"<<endl;
        cout<<"==============================="<<endl;
        cout<<"INGRESE UNA OPCION: ";
        cin>>opc;
        system("cls");
        switch(opc){
            case 1:
                break;
            case 2:
                break;
            case 3:
                /*
                com.Cargar();

                escribio = archiCom.grabarRegistro(com);

                if(escribio){
                    cout << "SU REGISTRO DE COMPRA SE GUARDO CORRECTAMENTE" << endl;
                }
                else{
                    cout << "SU REGISTRO DE COMPRA NO SE GUARDO CORRECTAMENTE" << endl;
                }
                */

                cant = archiCom.contarRegistros();

                for(i = 0; i < cant; i++){
                    com = archiCom.leerRegistro(i);
                    //com.Mostrar();
                    if(Compra.getFechaCompra().getAnio()== 2024){

                    }
                }
                break;
            case 4:
                break;
            case 5:
                break;
            case 0:
                return 0;
                break;
            default:
                cout<<"LA OPCION INGRESADA NO ES CORRECTA"<<endl;
                break;
        }
        system("pause");
    }
    return 0;
}
