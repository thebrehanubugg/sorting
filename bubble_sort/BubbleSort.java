package bubble_sort;
import java.util.Arrays;


public class BubbleSort {
    /** 
     * Swap indicies A and B from a given list of numbers. */
    public static void swap(int a, int b, float[] numbers) {
        // temporarily hold the value of index A
        float tmp = numbers[a];

        // overwrite index A's value with value at index B
        numbers[a] = numbers[b];

        // replace index B's value with the tmp saver
        numbers[b] = tmp;
    }

    /** 
     * Sort a given list of numbers by continually swapping pairs. */
    public static int bubble_sort(float[] numbers) {
        // number of times the algorithm had to swap two numbers
        int n_swaps = 0;
        
        /**
         * we have to prepare for the offchance that the list is sorted in reverse
         * order, meaning we have to repeat the algorithm the same amount of times
         * as elements in the list
         */
        for(int iter = 0; iter < numbers.length; iter++) {
            // only go to length-1 since we have to check the next number
            for(int index = 0; index < numbers.length-1; index++) {
                // current and following hold the actual number in the sequence
                float current = numbers[index];
                float following = numbers[index+1];

                // only swap if the second number is smaller than the first
                if(following < current) {
                    swap(index, index+1, numbers);
                    n_swaps += 1;
                }
            }
        }

        return n_swaps;
    }

    public static void main(String[] args) {
        // the random sequence of numbers from random.org
        float[] sequence = {78, 64, 26, 25, 91, 35, 12, 46, 14, 98, 49, 89};

        // pre-sorting analysis
        System.out.println("=== BUBBLE SORT: Java Edition ===");
        System.out.println("\tBefore bubble sort: " + Arrays.toString(sequence));

        // information variables used for analysis post-sorting
        int length = sequence.length;
        int n_swaps = bubble_sort(sequence);

        // post-sorting analysis
        System.out.println("\tAfter bubble sort: " + Arrays.toString(sequence));
        System.out.printf("\t\tThere were %d numbers in the sequence\n", length);
        System.out.printf("\t\tLooped through the sequence %d times\n", length);
        System.out.printf("\t\tThere were %d swaps\n", n_swaps);
    }
}