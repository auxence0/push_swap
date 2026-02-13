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

- To remove object files:
```bash
  make clean
```

- To remove obkect files and compiled binaries:
```bash
  make fclean
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

# Documentation & References:
- https://medium.com/@brakebein42/k-distribution-sort-applied-to-the-push-swap-problem-ae2d96d68376

- https://github.com/o-reo/push_swap_visualizer

# AI Usage:

- Large Language Models were utilized during the development of this project for technical documentation generation (writing this README), clarifying the structural breakdown of the dynamic sliding window chunk-sort mechanism, and refactoring minor utility functions in the standard C library implementation.