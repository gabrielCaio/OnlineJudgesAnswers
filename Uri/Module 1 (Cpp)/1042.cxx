#include <iostream>

void insertionSort(int *arr, int n)  
{  
    int i, key, j;  
    for (i = 1; i < n; i++) 
    {  
        key = arr[i];  
        j = i - 1;  
        while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = key;  
    }  
}  
 

int main(int argc, char **argv)
{
	int a[3], b[3];
	for(int i=0; i<3;i++){
		std::cin >> a[i];
		b[i] = a[i];
	}
	insertionSort(a, 3);
	for(int i=0; i<3;i++) printf("%d\n", a[i]);
	printf("\n");
	for(int i=0; i<3;i++) printf("%d\n", b[i]);
	return 0;
}

