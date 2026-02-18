*This project has been created as part of the 42 curriculum by asauvage.*

## Description
Push_swap is an algorithmic project that requires sorting data on a stack, with a limited set of instructions, using the lowest possible number of actions. The project involves two stacks, named A and B. At the beginning, stack A contains a random uncoordinated set of negative and/or positive numbers, and stack B is empty. The goal is to sort the numbers in stack A in ascending order.

This specific implementation utilizes a dynamically sized **Chunk Sort** (or Sliding Window) algorithm. Instead of sorting raw values, the dataset is first normalized by mapping each value to its sorted index. The algorithm then pushes elements from stack A to stack B in chunks defined by a dynamic delta (`n / 20 + 7`). During this transfer, elements are loosely pre-sorted in B by pushing smaller elements to the bottom using `rb`. Finally, elements are pushed back to stack A in strictly descending order, using a pathfinding calculation to determine the shortest rotation direction.

## Instructions

### Compilation
The project includes a `Makefile` with standard rules.

- To compile the mandatory executable:
```bash
  make
```

- To compile the bonus executable:
```bash
  make bonus
```

- To remove object files:
```bash
  make clean
```

- To remove object files and compiled binaries:
```bash
  make fclean
```

-To remake all:
```bash
  make re
```

### Execution

Run the program with a list of integers formatted as separate arguments or as a single string.

```bash
./push_swap 4 67 3 87 23
```

or

```bash
./push_swap "4 67 3 87 23"
```

To verify the output using the bonus checker:

```bash
ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker $ARG
```

## Resources

### Documentation & References:
- https://medium.com/@brakebein42/k-distribution-sort-applied-to-the-push-swap-problem-ae2d96d68376

- https://github.com/o-reo/push_swap_visualizer

- https://github.com/SimonCROS/push_swap_tester

### AI Usage:

* **README HELP :** AI was used in particular to improve this readme.
* **ALGO HELP :** To help me find the best sorting algorithm, comparing radix base 2/4, chunk sort, and Turkish.