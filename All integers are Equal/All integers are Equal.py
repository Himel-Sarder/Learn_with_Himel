"""
Problem 
--------
Input #1
3
6 6 6
Output
Yes

Input #2
5
2 3 4 2 6
Output
No
"""

N = int(input())
A = list(map(int, input().split()))

all_equal = all(x == A[0] for x in A)

if all_equal:
    print("Yes")
else:
    print("No")
