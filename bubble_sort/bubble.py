# the random sequence of numbers from random.org
sequence = [78, 64, 26, 25, 91, 35, 12, 46, 14, 98, 49, 89]

# information variables used for analysis post-sorting
length = len(sequence)
n_swaps = 0


def swap(a, b, numbers):
    """Swap indicies A and B from a given list of numbers."""
    # temporarily hold the value of index A
    tmp = numbers[a]

    # overwrite index A's value with value at index B
    numbers[a] = numbers[b]

    # replace index B's value with the tmp saver
    numbers[b] = tmp


def bubble_sort(numbers):
    """Sort a given list of numbers by continually swapping pairs."""
    global n_swaps

    # we have to prepare for the offchance that the list is sorted in reverse
    # order, meaning we have to repeat the algorithm the same amount of times
    # as elements in the list
    for _ in range(len(numbers)):
        # only go to length-1 since we have to check the next number
        for index in range(len(numbers)-1):
            # current and following hold the actual number in the sequence
            current, following = sequence[index], sequence[index+1]

            # only swap if the second number is smaller than the first
            if following < current:
                swap(index, index+1, numbers)
                n_swaps += 1


def main():
    print("=== BUBBLE SORT: Python Edition ===")

    # print the sequence before sorting
    print(f"\tBefore bubble sort: { sequence }")

    # sort the sequence
    bubble_sort(sequence)

    # display the results and data
    print(f"\tAfter bubble sort: { sequence }")
    print(f"\t\tThere are { length } numbers in the sequence")
    print(f"\t\tLooped through the sequence { length } times")
    print(f"\t\tThere were { n_swaps} swaps")


if __name__ == "__main__":
    main()
