#include <iostream>
#include <array>

using namespace std;


// function declaration
int bubble_sort(float numbers[], int size);
void print_array(float numbers[], int size);


// Print an array in a pretty format
void print_array(float numbers[], int size) {
    for(int i = 0; i < size; ++i) {
        cout << numbers[i] << ", ";
    }
}


// Swap indicies A and B from a given list of numbers.
void swap(int a, int b, float numbers[]) {
    // temporarily hold the value of index A
    float tmp = numbers[a];

    // overwrite index A's value with value at index B
    numbers[a] = numbers[b];

    // replace index B's value with the tmp saver
    numbers[b] = tmp;
}


// Sort a given list of numbers by continually swapping pairs.
int bubble_sort(float numbers[], int size) {
    // number of times the algorithm had to swap two numbers
    int n_swaps = 0;

    /* we have to prepare for the offchance that the list is sorted in reverse order, meaning we have to repeat the algorithm the same amount of times as elements in the list */
    for(int iter = 0; iter < size; ++iter) {
        // only go to length-1 since we have to check the next number
        for(int index = 0; index < size-1; ++index) {
            // current and following hold the actual number in the sequence
            float current = numbers[index];
            float following = numbers[index+1];

            if(following < current) {
                swap(index, index+1, numbers);
                n_swaps += 1;
            }
        }
    }

    return n_swaps;
}


int main() {
    // the random sequence of numbers from random.org
    float sequence[12] = {78, 64, 26, 25, 91, 35, 12, 46, 14, 98, 49, 89};

    // pre-sorting analysis
    cout << "=== BUBBLE SORT: C++ Edition ===\n";
    cout << "\tBefore bubble sort: ";
    print_array(sequence, 12);

    // sort the sequence
    int n_swaps = bubble_sort(sequence, 12);

    // post-sorting analysis
    cout << "\n\tAfter bubble sort: ";
    print_array(sequence, 12);

    printf("\n\t\tThere are %d numbers in the sequence", 12);
    printf("\n\t\tLooped through the sequence %d times", 12);
    printf("\n\t\tThere were %d swaps\n", n_swaps);

    return 0;
}