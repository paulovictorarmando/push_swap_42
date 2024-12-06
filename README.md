# push_swap_42
Push Swap is a project that involves sorting a stack of integers using a limited set of operations. The goal is to sort a given list of integers into ascending order, but you can only use a specific set of operations to achieve this. The challenge is to find the most efficient algorithm to sort the stack using the minimum number of operations.

### Operations Available:
The following operations can be used to manipulate the stack:
```
sa: Swap the first two elements of stack A.
sb: Swap the first two elements of stack B.
ss: Perform sa and sb at the same time.
pa: Push the top element of stack B to stack A.
pb: Push the top element of stack A to stack B.
ra: Rotate stack A (move the first element to the last position).
rb: Rotate stack B (move the first element to the last position).
rr: Perform ra and rb at the same time.
rra: Reverse rotate stack A (move the last element to the first position).
rrb: Reverse rotate stack B (move the last element to the first position).
rrr: Perform rra and rrb at the same time.
```
The goal is to sort the numbers in stack A using the least number of operations, and by pushing elements to stack B when necessary to aid in the sorting process.

## 🚀 Use
### 1. Clone the Repository
```
git clone https://github.com/paulovictorarmando/push_swap_42.git
cd push_swap_42
```
### 2.Build
Use the Makefile to compile the source files:
```
make all
```
### 3. Clean Up
To remove object files and the compiled library, run:
```
make clean
make fclean
```
### 4. Using:
```
./push_swap [numbers]
```
#### Example:
```
./push_swap 3 1 2 0 4

```
###
