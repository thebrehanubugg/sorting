# Bubble Sort: The Worst of the Worst

Bubble sort is the easiest sorting algorithm to understand and implement, but by no means a good sorting algorithm. If anything it should be avoided. Since you're swapping two elements without the greater context of the entire list, you need to do multiple rounds to make sure the list is truly sorted.

**Worst Case Scenario**

The worst case scenario is that the list is in reverse-sorted order. In order words: greatest to least. This would mean that you would have to re-check the list N times where N is the length of the list. In the example list of only 12 numbers, 31 swaps must occur before it's truly sorted.

**Run Program(s)**

If you want to run every bubble sort implementation, just run the bash script: `chmod +x bubble.sh && ./bubble.sh`. However, if you only want to run a specific language, follow the instructions below. *All of the languages print the same data and use the same list of random numbers from [random.org](https://random.org).*

- Python: `python3 bubble.py`
- JavaScript: `node bubble.py`
- C++: `g++ bubble.cpp && ./a.out`
- Java: `java BubbleSort.java`

| Language | Command |
|----------|---------|
| All at once (Bash only) | `chmod +x bubble.sh && ./bubble.sh` |
| Python | `python3 bubble.py` |
| JavaScript | `node bubble.py` |
| C++ | `g++ bubble.cpp && ./a.out` |
| Java | `java BubbleSort.java` |