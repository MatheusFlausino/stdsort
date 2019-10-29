#define SELECTION_SORT(vec) selectionSort(vec, (sizeof (vec) / sizeof (vec)[0]));
#define INSERTION_SORT(vec) insertionSort(vec, (sizeof (vec) / sizeof (vec)[0]));
#define BUBBLE_SORT(vec) bubbleSort(vec, (sizeof (vec) / sizeof (vec)[0]));
#define QUICK_SORT(vec) quickSort(vec, 0, (sizeof (vec) / sizeof (vec)[0]));
#define HEAP_SORT(vec) heapSort(vec, (sizeof (vec) / sizeof (vec)[0]));

void selectionSort(int arr[], int n);

void insertionSort(int arr[], int n);

void bubbleSort(int arr[], int n);

void quickSort(int arr[], int began, int end);

void heapSort(int arr[], int n);
