#include <iostream>

using namespace std;

int sumaPointer(int* arr, int tam)
{
    int suma = 0;
    for(int i = 0; i < tam; i++, arr++)
    {
        suma += *arr;
    }
    return suma;
}


int suma(int arr[], int tam)
{
    int suma = 0;
    for (int i = 0; i < tam; i++)
    {
        suma += arr[i];
    }
    return suma;
}

int sumaRecur(int arr[], int tam)
{
    if (tam == 1)
    {
        return arr[0];
    }
    else
    {
        return arr[tam-1] + sumaRecur(arr, tam-1);
    }

}

int sumaRecurPointer(int* arr, int tam)
{
    if (tam == 1)
    {
        return *arr;
    }
    else {
        return *arr + sumaRecurPointer(arr+1, tam-1);
    }
}

int main()
{
    int arreglo[] = { 12,4,6 };
    int* ptr = arreglo;
 
    int tam = sizeof(arreglo) / sizeof(arreglo[0]);

    cout << suma(arreglo, tam)<< endl;
    cout << sumaPointer(ptr, tam)<< endl;
    cout << sumaRecur(arreglo, tam)<< endl;
    cout << sumaRecurPointer(ptr, tam)<< endl;

}
