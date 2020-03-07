n = int(input())

v = {
    '1001': 1.5,
    '1002': 2.5,
    '1003': 3.5,
    '1004': 4.5,
    '1005': 5.5
}

total = 0
for _ in range(n):
    a, b = list(map(int, input().split()))

    total += v[str(a)] * b

total = '%.2f' % total
print(total)
