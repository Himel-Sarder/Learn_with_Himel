"""
In Pascal's triangle, 
each number is the sum of the two numbers directly above it as shown:

                 1
               1   1
            1    2     1
        1      3    3      1
    1      4      6     4     1

Example 1:

Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]

Example 2:

Input: numRows = 1
Output: [[1]]


"""
def generate_pascals_triangle(numRows):
    triangle = [[1]]
    for i in range(1, numRows):
        row = [1] + [triangle[i-1][j-1] + triangle[i-1][j] for j in range(1, i)] + [1]
        triangle.append(row)
    return triangle

numRows = 5
result = generate_pascals_triangle(numRows)
for row in result:
    print(row)