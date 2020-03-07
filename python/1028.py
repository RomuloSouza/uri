def euclidean(a, b):
    remainder = a % b

    while remainder:
        a, b = b, remainder

        remainder = a % b

    return b

n = int(input())
for _ in range(n):
    a, b = list(map(int, input().split()))

    if a > b:
        print(euclidean(a, b))
    else:
        print(euclidean(b, a))
