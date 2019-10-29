#include "stdsort.h"

void selectionSort(int arr[], int n) { 
	int i, j, aux, min;
	for (i = 0; i < (n-1); i++) {
		min = i;
		
    	for (j = (i+1); j < n; j++)
    		if(arr[j] < arr[min]) 
        		min = j;
        		
     	if (arr[i] != arr[min]) {
       		aux = arr[i];
       		arr[i] = arr[min];
       		arr[min] = aux;
     	}
  	}
}

void insertionSort(int arr[], int n) { 
	int i, j, aux; 
	for (i = 1; i < n; i++) { 
    	aux = arr[i]; 
    	j = i - 1; 
    	while (j >= 0 && arr[j] > aux) { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = aux; 
    } 
} 

void bubbleSort(int arr[], int n) {
	int i, aux;
	
	if (n < 1) return;
	
	n -= 1; 
 
    for (i = 0; i < n; i++) if (arr[i] > arr[i+1]) {
		aux = arr[i];
		arr[i] = arr[i + 1];
		arr[i + 1] = aux;
	}
	
    bubbleSort(arr, n); 
}

void quickSort(int arr[], int began, int end) {
	int i, j, aux, pivo;
	
	i = began;
	j = end-1;
	pivo = arr[(began + end) / 2];
	
	while(i <= j) {
		while(arr[i] < pivo && i++ < end);
		
		while(arr[j] > pivo && j-- > began);
		
		if(i <= j) {
			aux = arr[i];
			arr[i++] = arr[j];
			arr[j--] = aux;
		}
	}
	
	if(j > began) quickSort(arr, began, j+1);
		
	if(i < end) quickSort(arr, i, end);
}

void heapSort(int arr[], int n) {
	int i = n / 2, j, d, s;
   	while(1) {
		if (i > 0) j = arr[--i];
      	else {
          	if (--n <= 0) return;
          	j = arr[n];
          	arr[n] = arr[0];
      	}
      	d = i;
      	s = i * 2 + 1;
      	while (s < n) {
        	if ((s + 1 < n) && (arr[s + 1] > arr[s])) s++;
          	if (arr[s] > j) {
            	arr[d] = arr[s];
             	d = s;
             	s = d * 2 + 1;
          	} 
			else break;
      }
      arr[d] = j;
   }
}
