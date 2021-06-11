# Merge sort implementation

Merge sort uses divide-conquer and recursion to divide the problem down to do work on each subset and then combining the solutions. Big O complexity is O(n log n) which improves the complexity from O(n²) of Bubble, insertion and selection sorts. Space complexity for merge sort is O(n). (https://www.bigocheatsheet.com/)

Merge sort is stable (https://stackoverflow.com/questions/1517793/what-is-stability-in-sorting-algorithms-and-why-is-it-important)

## Testing of imlementation

To test the implementation on a real world problem the the algorithm was used to sort a machine learning dataset from (https://www.kaggle.com/c/house-prices-advanced-regression-techniques/data)

The first column id was provided as key to the algorithm sort the numpy array without using sort of the libraries.

# Results

Sorting took a Wall time: 409 ms

Validation was done by plotting the column before and after sorting.

![](sort1.png)