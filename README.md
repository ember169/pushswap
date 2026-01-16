_This project has been created as part of the 42 curriculum by lgervet_

# Pushswap
_[Subject (pdf)](https://cdn.intra.42.fr/pdf/pdf/192339/en.subject.pdf)_

## Description
Provided two stacks named `stack a` (a random number of unique negative and/or positive integers) and `stack b` (empty): sort data in a stack using a limited set of instructions, aiming to achieve the lowest possible number of actions.

### Rules
The goal is to sort the numbers in `stack a` in ascending order with following operations:
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

### Error
Error handling: the program displays `Error` followed by a `\n` on the standard error if arguments are not integers, exceed integer limits, or contain duplicates.

### Global flowchart
_Building..._

### Sorting strategies
_Building..._

## Instructions

### Compilation
Run `make` in the root directory to generate the `push_swap` binary.

### Execution
`ARG="1 82 42 91 5 63"; ./pushswap $ARG`<br><br>
To count number of operations:<br>
`ARG="1 82 42 91 5 63"; ./pushswap $ARG wc -l`<br><br>
To verify if the stack is correctly sorted using the provided checker:<br>
`ARG="1 82 42 91 5 63"; ./pushswap $ARG | ./checker_OS $ARG` to use the provided checker (outputs `OK` / `KO`).

# Resources

## Documentation
_Building..._

## AI Usage (Gemini 3)
- Markdown structuring