// C++ program for implementation of Bubble sort
#include<stdio.h>
#include <iostream>
#include <time.h>
#include <iomanip>
#include <bits/stdc++.h>
#include <chrono>
using namespace std;



void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n-1; i++)
    {
        swapped = false;
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }

        if (swapped == false)
            break;
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{

    int sizeOfArray = 100000;
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
        bubbleSort(arr, n);
        auto finish = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed = finish - start;
        cout<<asd<<" TimeTaken : "<<elapsed.count()<<setprecision(8)<<endl;
    }

    // cout<<"Posortowane"<<endl;
    // for(int asd = 0;asd<10;asd++){
    //     int arr[sizeOfArray];
    //     int n = sizeOfArray;

    //     //Losowa
    //     for (int i = 0 ; i< sizeOfArray ; i++){
    //         arr[i]=rand()%10000+1;
    //     }

    //     bubbleSort(arr, n);


    //     auto start = std::chrono::high_resolution_clock::now();
    //     bubbleSort(arr, n);
    //     auto finish = std::chrono::high_resolution_clock::now();
    //     std::chrono::duration<double> elapsed = finish - start;
    //     cout<<asd<<" TimeTaken : "<<elapsed.count()<<setprecision(8)<<endl;

    // }
    // cout<<"Odwrotne"<<endl;
    // //Odwrotna
    // for(int asd = 0;asd<10;asd++){
    //     int arr[sizeOfArray];
    //     int n = sizeOfArray;

    //     //Losowa
    //     for (int i = 0 ; i< sizeOfArray ; i++){
    //         arr[i]=rand()%10000+1;
    //     }

    //     bubbleSort(arr, n);

    //     int low=0,high;
    //     for (high = n - 1; low < high; low++, high--) {
    //         swap(arr[low], arr[high]);
    //     }

    //     auto start = std::chrono::high_resolution_clock::now();
    //     bubbleSort(arr, n);
    //     auto finish = std::chrono::high_resolution_clock::now();
    //     std::chrono::duration<double> elapsed = finish - start;
    //     cout<<asd<<" TimeTaken : "<<elapsed.count()<<setprecision(8)<<endl;
    // }

    return 0;
}

// This code is contributed by rathbhupendra
