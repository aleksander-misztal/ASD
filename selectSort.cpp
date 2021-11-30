// C++ program for implementation of selection sort
#include <bits/stdc++.h>
// C++ program for implementation of Heap Sort
#include <iostream>
#include <time.h>
#include <iomanip>
#include <bits/stdc++.h>
#include <chrono>
using namespace std;




void heapify(int arr[], int n, int i)
{
    int largest = i; // Initialize largest as root
    int l = 2 * i + 1; // left = 2*i + 1
    int r = 2 * i + 2; // right = 2*i + 2

    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;

    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

// main function to do heap sort
void heapSort(int arr[], int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // One by one extract an element from heap
    for (int i = n - 1; i >= 0; i--) {
        // Move current root to end
        swap(arr[0], arr[i]);

        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}







void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        swap(&arr[min_idx], &arr[i]);
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout << arr[i] << " "<<endl;
    cout << endl;
}

int main()
{
    srand(time(NULL));

    cout<<"Losowe"<<endl;
	//Odwrotna
	for(int asd = 0;asd<10;asd++){
		 int arr[sizeOfArray];
        int n = sizeOfArray;

        //Losowa
        for (int i = 0 ; i< sizeOfArray ; i++){
            arr[i]=rand()%10000+1;
        }
      

		 auto start = std::chrono::high_resolution_clock::now();
        selectionSort(arr,n);
        auto finish = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed = finish - start;
        cout<<asd<<" TimeTaken : "<<elapsed.count()<<setprecision(8)<<endl;
	}

    // cout<<"Posortowane"<<endl;
	// //Odwrotna
	// for(int asd = 0;asd<10;asd++){
	// 	 int arr[sizeOfArray];
    //     int n = sizeOfArray;

    //     //Losowa
    //     for (int i = 0 ; i< sizeOfArray ; i++){
    //         arr[i]=rand()%10000+1;
    //     }
        
    //     selectionSort(arr,n);
       
	// 	 auto start = std::chrono::high_resolution_clock::now();
    //     selectionSort(arr,n);
    //     auto finish = std::chrono::high_resolution_clock::now();
    //     std::chrono::duration<double> elapsed = finish - start;
    //     cout<<asd<<" TimeTaken : "<<elapsed.count()<<setprecision(8)<<endl;
	// }

    // cout<<"Odwrotne"<<endl;
	// //Odwrotna
	// for(int asd = 0;asd<10;asd++){
	// 	 int arr[sizeOfArray];
    //     int n = sizeOfArray;

    //     //Losowa
    //     for (int i = 0 ; i< sizeOfArray ; i++){
    //         arr[i]=rand()%10000+1;
    //     }
        
    //     selectionSort(arr,n);
    //    //Odwrotna
    //     int low=0,high;
    //     for (high = n - 1; low < high; low++, high--) {
    //         swap(arr[low], arr[high]);
    //     }

	// 	 auto start = std::chrono::high_resolution_clock::now();
    //     selectionSort(arr,n);
    //     auto finish = std::chrono::high_resolution_clock::now();
    //     std::chrono::duration<double> elapsed = finish - start;
    //     cout<<asd<<" TimeTaken : "<<elapsed.count()<<setprecision(8)<<endl;
	// }


    return 0;
}

// This is code is contributed by rathbhupendra
