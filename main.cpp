#include <iostream>

using namespace std;

struct Cliente {
    string nom;
    int saldo;
};

typedef struct Cliente Cliente;

void menu() {
    cout << "MENU MI BANCO" << endl;
    cout << "1. Agregar cliente" << endl;
    cout << "2. Listar clientes" << endl;
    cout << "3. Consignar" << endl;
    cout << "4. Retirar" << endl;
    cout << "0. Salir" << endl;
    return;
}

int main() {
    int opc, n = 0;
    Cliente banco[ 100 ];
    do {
        string nom;
        int monto;
        menu();
        cout << "opcion: "; cin >> opc;
        switch( opc ) {
        case 1:
            cout << "Nombre= ";
            cin >> banco[ n ].nom;
            banco[ n++ ].saldo = 0;
            break;
        case 2:
            for ( int i = 0; i < n; i++ ) {
                cout << banco[ i ].nom << " " << banco[ i ].saldo << endl;
            }
            break;
        case 3:
            cout << "Nombre= "; cin >> nom;
            for ( int i = 0; i < n; i++ ) {
                if ( banco[i ].nom == nom ) {
                    cout << "Monto a consignar="; cin >> monto;
                    banco[ i ].saldo += monto;
                }
            }
            break;
        case 4:
            cout << "Nombre= "; cin >> nom;
            for ( int i = 0; i < n; i++ ) {
                if ( banco[i ].nom == nom ) {
                    cout << "Monto a retirar="; cin >> monto;
                    banco[ i ].saldo -= monto;
                }
            }
            break;
        }
    } while ( opc != 0 );

    return 0;
}