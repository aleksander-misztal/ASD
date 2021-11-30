/* C implementation QuickSort */
#include<stdio.h>
#include <iostream>
#include <time.h>
#include <iomanip>
#include <bits/stdc++.h>
#include <chrono>
using namespace std;

void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

int partition (int arr[], int low, int high)
{
	int pivot = arr[high];
	int i = (low - 1);

	for (int j = low; j <= high- 1; j++)
	{
		if (arr[j] <= pivot)
		{
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		int pi = partition(arr, low, high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}


void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}


int main()
{


	int sizeOfArray = 500000;
	//Losowa
	cout<<"Losowe"<<endl;
	for(int asd = 0;asd<10;asd++){
		 int arr[sizeOfArray];
        int n = sizeOfArray;

        //Losowa
        for (int i = 0 ; i< sizeOfArray ; i++){
            arr[i]=rand()%10000+1;
        }

        auto start = std::chrono::high_resolution_clock::now();
        quickSort(arr, 0, n-1);
        auto finish = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed = finish - start;
        cout<<asd<<" TimeTaken : "<<elapsed.count()<<setprecision(8)<<endl;
	}

// 	cout<<"Posortowane"<<endl;
// 	for(int asd = 0;asd<10;asd++){
// 		 int arr[sizeOfArray];
//         int n = sizeOfArray;

//         //Losowa
//         for (int i = 0 ; i< sizeOfArray ; i++){
//             arr[i]=rand()%10000+1;
//         }
      
//        heapSort(arr,sizeOfArray);


// 		 auto start = std::chrono::high_resolution_clock::now();
//         quickSort(arr, 0, n-1);;
//         auto finish = std::chrono::high_resolution_clock::now();
//         std::chrono::duration<double> elapsed = finish - start;
//         cout<<asd<<" TimeTaken : "<<elapsed.count()<<setprecision(8)<<endl;
        
// 	}
// cout<<"Odwrotne"<<endl;
// 	//Odwrotna
// 	for(int asd = 0;asd<10;asd++){
// 		 int arr[sizeOfArray];
//         int n = sizeOfArray;

//         //Losowa
//         for (int i = 0 ; i< sizeOfArray ; i++){
//             arr[i]=rand()%10000+1;
//         }
        
//         heapSort(arr, n);
       
//         int low=0,high;
//         for (high = n - 1; low < high; low++, high--) {
//             swap(arr[low], arr[high]);
//         }

// 		 auto start = std::chrono::high_resolution_clock::now();
//         quickSort(arr, 0, n-1);
//         auto finish = std::chrono::high_resolution_clock::now();
//         std::chrono::duration<double> elapsed = finish - start;
//         cout<<asd<<" TimeTaken : "<<elapsed.count()<<setprecision(8)<<endl;
// 	}


	return 0;
}
