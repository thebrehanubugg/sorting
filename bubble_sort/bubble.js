// the random sequence of numbers from random.org
let sequence = [78, 64, 26, 25, 91, 35, 12, 46, 14, 98, 49, 89];

// information variables used for analysis post-sorting
let length = sequence.length;
let n_swaps = 0;


// Swap indicies A and B from a given list of numbers.
const swap = (a, b, numbers) => {
    // temporarily hold the value of index A
    let tmp = numbers[a];

    // overwrite index A's value with value at index B
    numbers[a] = numbers[b];

    // replace index B's value with the tmp saver
    numbers[b] = tmp;
}


// Sort a given list of numbers by continually swapping pairs.
const bubble_sort = (numbers) => {
    // we have to prepare for the offchance that the list is sorted in reverse
    // order, meaning we have to repeat the algorithm the same amount of times
    // as elements in the list
    for(let iter = 0; iter < numbers.length; iter++) {
        //only go to length-1 since we have to check the next number
        for(let index = 0; index < numbers.length-1; index++) {
            // current and following hold the actual number in the sequence
            let current = sequence[index];
            let following = sequence[index+1];

            // only swap if the second number is smaller than the first
            if(following < current) {
                swap(index, index+1, numbers);
                n_swaps += 1;
            }
        }
    }
}


const main = () => {
    console.log("=== BUBBLE SORT: JavaScript Edition ===");

    // print the sequence before sorting
    console.log(`\tBefore bubble sort: ${ sequence }`);

    // sort the sequence
    bubble_sort(sequence);

    // display the results and data
    console.log(`\tAfter bubble sort: ${ sequence }`);
    console.log(`\t\tThere are ${ length } numbers in the sequence`);
    console.log(`\t\tLooped through the sequence ${ length } times`);
    console.log(`\t\tThere were ${ n_swaps} swaps`);
}


main()
