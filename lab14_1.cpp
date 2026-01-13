#include <iostream>
using namespace std;

template <typename C>
void show(C a[],int N,int j){
	cout <<"Pass "<<j<<":";
	for(int i=0;i<N;i++){
		cout << a[i] <<" ";
	}
	cout << "\n" ;
}

template <typename C>
void insertionSort(C a[], int N){
	for(int i=1;i<N;i++){
		C x = a[i]; 
        int b = i-1;
        while (b>=0 && a[b] < x) {
            a[b+1] = a[b];
            b--;
        }
        a[b+1] = x; 
        show(a,N,i);
    }
}