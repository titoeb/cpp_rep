#include "helpers.h"
#include "sort.h"

// SET-UP:
const int N_TIMES = 1000;
const int LENGTH  = 1000;


int main(){
    double time;

    // Benchmark bubblesort:
    cout <<"Results Bubble sort: " << endl;
    time = benchmark_sorting(N_TIMES, LENGTH, &bubblesort<double>);
    cout << "Sorting a vector of size 1000 takes on averge " << time << " milliseconds when sorting with bubblesort" << endl << endl;

      // Benchmark  selectionsort:
    time = benchmark_sorting(N_TIMES, LENGTH, &selectionsort<double>);
    cout << "This gives an average of  " << time << " milliseconds when sorting with selection sort." << endl << endl;

    // Benchmark insertionsort:
    cout <<"Results Insertion sort: " << endl;
    time = benchmark_sorting(N_TIMES, LENGTH, &insertionsort<double>);
    cout << "Sorting a vector of size 1000 takes on averge " << time << " milliseconds when sorting with insertionsort" << endl << endl;

    // Benchmark quicksort:
    cout <<"Results Quick Sort: " << endl;
    time = benchmark_sorting(N_TIMES, LENGTH, &quicksort<double>);
    cout << "This gives an average of  " << time << " milliseconds when sorting with quicksort." << endl << endl;

    // Benchmark the standard library:
    cout <<"Results Standard library: " << endl;
    time = benchmark_sorting(N_TIMES, LENGTH, &quicksort_standard_library<double>);
    cout << "This gives an average of  " << time << " milliseconds when sorting with the std library." << endl << endl;
   
    // Benchmark mergesort:
    cout <<"Results Merge sort: " << endl;
    time = benchmark_sorting(N_TIMES, LENGTH, &mergesort<double>);
    cout << "Sorting a vector of size 1000 takes on averge " << time << " milliseconds when sorting with mergesort" << endl << endl;

     // Benchmark heapsort:
     cout <<"Results Heap sort: " << endl;
    time = benchmark_sorting(N_TIMES, LENGTH, &heapsort<double>);
    cout << "Sorting a vector of size 1000 takes on averge " << time << " milliseconds when sorting with heapsort" << endl << endl;
