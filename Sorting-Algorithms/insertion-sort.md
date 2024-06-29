# Insertion Sort Algorithms: 
Insertion sort is a simple sorting algorithm that works by iteratively inserting each element of an unsorted list into its correct position in a sorted portion of the list. It is a stable sorting algorithm, meaning that elements with equal values maintain their relative order in the sorted output.

Insertion sort is like sorting playing cards in your hands. You split the cards into two groups: the sorted cards and the unsorted cards. Then, you pick a card from the unsorted group and put it in the right place in the sorted group.


# Algorithm:
# To achieve insertion sort, follow these steps:

==> We have to start with second element of the array as first element in the array is assumed to be sorted.

==> Compare second element with the first element and check if the second element is smaller then swap them.

==> Move to the third element and compare it with the second element, then the first element and swap as necessary to put it in the correct position among the first three elements.

==> Continue this process, comparing each element with the ones before it and swapping as needed to place it in the correct position among the sorted elements.

==> Repeat until the entire array is sorted.

# Example
==> Consider an array having elements: {23, 1, 10, 5, 2}


# First Pass:

Current element is 23
The first element in the array is assumed to be sorted.
The sorted part until 0th index is : [23]

# Second Pass:

Compare 1 with 23 (current element with the sorted part).
Since 1 is smaller, insert 1 before 23.
The sorted part until 1st index is: [1, 23]

# Third Pass:

Compare 10 with 1 and 23 (current element with the sorted part).
Since 10 is greater than 1 and smaller than 23, insert 10 between 1 and 23.
The sorted part until 2nd index is: [1, 10, 23]

# Fourth Pass:

Compare 5 with 1, 10, and 23 (current element with the sorted part).
Since 5 is greater than 1 and smaller than 10, insert 5 between 1 and 10.
The sorted part until 3rd index is: [1, 5, 10, 23]

# Fifth Pass:

Compare 2 with 1, 5, 10, and 23 (current element with the sorted part).
Since 2 is greater than 1 and smaller than 5 insert 2 between 1 and 5.
The sorted part until 4th index is: [1, 2, 5, 10, 23]
Final Array:

# The sorted array is: [1, 2, 5, 10, 23]


# Command = g++ -fdiagnostics-color=always -g insertion-sort.cpp -o insertion-sort