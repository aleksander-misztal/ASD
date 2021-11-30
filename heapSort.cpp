// C++ program for implementation of Heap Sort
#include <iostream>
#include <time.h>
#include <iomanip>
#include <bits/stdc++.h>
#include <chrono>
using namespace std;
  

void heapify(int arr[], int n, int i)
{
    int largest = i; 
    int l = 2 * i + 1;
    int r = 2 * i + 2; 
  
    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;
  
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}
  

void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
  
    for (int i = n - 1; i >= 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}
  

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " "<<endl;
    cout << "\n";
}
  
int main()
{
    srand(time(NULL));
   	int sizeOfArray = 500000;
	
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
        heapSort(arr, n);
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
        
    //     heapSort(arr,n);
       
    

	// 	 auto start = std::chrono::high_resolution_clock::now();
    //     heapSort(arr, n);
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
        
    //     heapSort(arr,n);
    //    //Odwrotna
    //     int low=0,high;
    //     for (high = n - 1; low < high; low++, high--) {
    //         swap(arr[low], arr[high]);
    //     }

	// 	 auto start = std::chrono::high_resolution_clock::now();
    //     heapSort(arr, n);
    //     auto finish = std::chrono::high_resolution_clock::now();
    //     std::chrono::duration<double> elapsed = finish - start;
    //     cout<<asd<<" TimeTaken : "<<elapsed.count()<<setprecision(8)<<endl;
	// }
}