def print_first_one_or_zero(A, B, C, value):
    if A == value:
        print("A")
    elif B == value:
        print("B")
    elif C == value:
        print("C")

A, B, C = map(int, input().split())

sum_nums = A + B + C

if sum_nums == 0 or sum_nums == 3:
    print("*")
else:
    if sum_nums == 1:
        print_first_one_or_zero(A, B, C, 1)
    else:
        print_first_one_or_zero(A, B, C, 0)