#include <iostream>
using namespace std;
void ingresar (int a[], int n);
void imprimir (int a[], int n);
void burbuja (int a[], int n);

int main()
{
    //int arreglo1[]={4,1,2,3,5};
    //int i,j,aux;
    /*
    for (i=0; i<5; i++)
    {
        cout << arreglo1[i];
    }
    cout << endl;

    for (i=0; i<5; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if (arreglo1[j]<arreglo1[i])
            {
                aux=arreglo1[i];
                arreglo1[i]=arreglo1[j];
                arreglo1[j]=aux;
            }
        }
    }
    for (i=0; i<5; i++)
    {
        cout << arreglo1[i];
    }
    */

    int arreglo[100];
    int n;
    cout << "Ingrese el tamaño: ";
    cin >> n;
    ingresar(arreglo, n);
    cout << endl;
    imprimir(arreglo, n);
    cout << endl;
    burbuja (arreglo, n);
    cout << endl;
    imprimir (arreglo,n);
    cout << endl;

    return 0;
}
void ingresar(int a[], int n){
    for (int i=0; i<n; i++)
    {
        cout << "Ingrese el elemento al arreglo: ";
        cin >> a[i];
    }

}
void imprimir (int a[], int n){
    for (int i=0; i<n; i++)
    {
        cout << a[i];
    }
}
void burbuja (int a[], int n)
{
    int i, j, aux;
    for (i=0; i<5; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if (a[j]<a[i])
            {
                aux=a[i];
                a[i]=a[j];
                a[j]=aux;
            }
        }
    }
}
