_This project has been created as part of the 42 curriculum by lgervet_

# Pushswap
_[Subject (pdf)](https://cdn.intra.42.fr/pdf/pdf/192339/en.subject.pdf)_

## Description
Provided two stacks named `stack a` (a random number of unique negative and/or positive integers) and `stack b` (empty): sort data in a stack using a limited set of instructions, aiming to achieve the lowest possible number of actions.

### Sorting strategy
I have chosen Radix Sort for its stability and logic clarity. Since Radix does not efficiently manage negative numbers and wide value gaps, I implemented coordinate compression (uses stack's indexes instead of values) to optimize the number of bitwise passes required.

### Instructions set
| Command | Name | Description |
|:--- |:--- |:--- |
| **sa** | swap a | Swap the first 2 elements at the top of stack a. |
| **sb** | swap b | Swap the first 2 elements at the top of stack b. |
| **ss** | swap both | `sa` and `sb` at the same time. |
| **pa** | push a | Take the first element at the top of b and put it at the top of a. |
| **pb** | push b | Take the first element at the top of a and put it at the top of b. |
| **ra** | rotate a | Shift up all elements of stack a by 1. The first element becomes the last. |
| **rb** | rotate b | Shift up all elements of stack b by 1. The first element becomes the last. |
| **rr** | rotate both | `ra` and `rb` at the same time. |
| **rra** | rev rotate a | Shift down all elements of stack a by 1. The last element becomes the first. |
| **rrb** | rev rotate b | Shift down all elements of stack b by 1. The last element becomes the first. |
| **rrr** | rev rotate both | `rra` and `rrb` at the same time. |

### Error handling
The program displays `Error` followed by a `\n` on the standard error if arguments are not integers, exceed integer limits, or contain duplicates:
```shell
$> ./push_swap 0 one 2 3
Error
$>
```
<br>
If no parameters are specified, the program must not display anything and should return to the prompt.

### Global flowchart
_Building..._

## Instructions

### Compilation
Run `make` in the root directory to generate the `push_swap` binary.

### Execution
`ARG="1 82 42 91 5 63"; ./pushswap $ARG`<br><br>
To count number of operations:<br>
`ARG="1 82 42 91 5 63"; ./pushswap $ARG wc -l`<br><br>
To verify if the stack is correctly sorted using the provided checker (outputs `OK` / `KO`):<br>
`ARG="1 82 42 91 5 63"; ./pushswap $ARG | ./checker_OS $ARG`

# Resources

## Documentation
- [Sorting algorithms, Geeksforgeeks, 2025](https://www.geeksforgeeks.org/dsa/sorting-algorithms/)
- [Analysis of Algorithms, Geeksforgeeks, 2025](https://www.geeksforgeeks.org/dsa/analysis-of-algorithms/)
- [Asymptomatic analysis, Geeksforgeeks, 2025](https://www.geeksforgeeks.org/dsa/analysis-of-algorithms/)
- [Quicksort, Insertion Sort and Radix Sort Comparison, aksakalli.github.io, 2011](https://aksakalli.github.io/2011/11/29/sorting-algorithms.html)
- [Radix algorithm, Wikipedia](https://en.wikipedia.org/wiki/Radix_sort)
- [Radix Sort. Number Magic?, Medium, 2021](https://medium.com/geekculture/radix-sort-number-magic-694c103e11c8)
- [ELI5: How does Radix Sort work, Reddit, 2022](https://www.reddit.com/r/explainlikeimfive/comments/xuzyre/eli5_how_does_radix_sort_work/)
- [Radix Sort: The Most Efficient Number Sorting, Medium, 2024](https://medium.com/@alxkm/radix-sort-the-most-efficient-number-sorting-7ea8ced044c8)

## AI Usage (Gemini 3)

I used AI (Gemini 3) as a technical consultant and debugging partner throughout this project. The collaboration focused on architectural decisions, logic verification, and optimizing the sorting strategy.

### Architectural & Strategy Support
- **Project Structure:** Helped transition from loose variables to a centralized `t_base` structure to manage stacks and metadata (sizes) more robustly.
- **Algorithm Selection:** Provided a comparative analysis of sorting algorithms (Radix vs. Turk vs. Simple Sort), leading to the choice of **Radix Sort** combined with **Coordinate Compression** (indexing).
- **Coordinate Compression Logic:** Helped refine the logic of mapping raw values (including negative integers) to a range [0 to N-1] to optimize the number of bitwise operations.

### Debugging & Memory Safety
- **Memory Management:** Assisted in diagnosing potential memory leaks and verified the cleanliness of the exit paths using `leaks` on macOS.
- **Loop Logic:** Identified critical edge cases in stack rotations and index mapping, specifically regarding infinite loops in nested `while` conditions.
- **Bitwise Implementation:** Clarified the implementation of bit-shifting and masking (`(num >> i) & 1`) for the Radix algorithm to ensure stable sorting between stacks A and B.

### Optimization & Best Practices
- **Performance:** Suggested the "distance to top" logic (`index <= size / 2`) for small stack optimizations (3, 4, and 5 elements) to minimize the number of instructions.
- **Readability:** Encouraged more idiomatic C practices, such as choosing pointer arithmetic where appropriate and simplifying complex nested conditions.
- **Testing:** Helped craft specific shell commands (using `jot`, `sort`, and `ruby`) to stress-test the program with 500+ unique random numbers on macOS.