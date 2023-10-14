N = int(input())
A = list(map(int, input().split()))

all_equal = all(x == A[0] for x in A)

if all_equal:
    print("Yes")
else:
    print("No")
