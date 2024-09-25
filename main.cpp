//Insertion Sort
//El Insertion Sort es un algoritmo de ordenamiento que recorre un arreglo de izquierda a derecha,
//comparando cada elemento con los que están a su izquierda, de tal forma que va insertando el elemento
//en la posición correcta. Es un algoritmo de ordenamiento estable, es decir, que no cambia el orden de
//los elementos que son iguales. Su complejidad es de O(n^2) en el peor caso y de O(n) en el mejor caso.
//En este caso, se ordena un arreglo de enteros de forma ascendente.
 
#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr){
    int n = arr.size();
    for(int i=1; i<n; i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main(){
/*
    vector<int> arr = {5, 2, 4, 6, 1, 3};

   cout << endl << endl << "Vector desordenado: " << endl;
    for(int num:arr){
        cout << num << ", ";
    }

    insertionSort(arr);

    cout << endl << endl <<"Vector ordenado: " << endl;
    for(int num:arr){
        cout << num << ", ";
    }
*/


    //Ejercicio: Numeros Primos
/*
    vector<int> lista(10);

    for(int i=0; i<10; i++){
        cout << "Ingrese un numero: ";
        cin >> lista[i];
    }
*/
    //Vector de elementos desordenados
    vector<int> lista = {5, 2, 4, 6, 1, 3, 7, 19, 8, 10};
    vector<int> primos;
    
    cout << endl << endl << "Numeros desordenados: " << endl;
    for(int num:lista){
        cout << num << ", ";
    }

    //Discriminacion de numeros primos

    for(int i=0; i<lista.size(); i++){

        int cont = 0;

        for(int j=1; j<=lista[i]; j++){
            if(lista[i]%j == 0){
                cont++;
            }
        }

        if(cont <= 2){
            primos.push_back(lista[i]);
        }
    }


    cout << endl << endl << "Numeros primos: " << endl;
    for(int num:primos){
        cout << num << ", ";
    }

    insertionSort(primos);



    cout << endl << endl << "Numeros primos ordenados: " << endl;
    for(int num:primos){
        cout << num << ", ";
    }

    return 0;
}