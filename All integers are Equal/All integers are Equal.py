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

-------------------------
| Prepared by -         |
| Himel Sarder          |
| Dept. of CSE, BSFMSTU |
-------------------------
"""

N = int(input())    # 5
A = list(map(int, input().split()))     # A = [2, 3, 4, 2, 6]

all_equal = all(x == A[0] for x in A)  #Test Center

if all_equal:
    print("Yes")
else:
    print("No")   #Excecute
