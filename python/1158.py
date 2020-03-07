n = int(input())

for _ in range(n):
    a, b = input().split()
    a = int(a)
    b = int(b)
    if a % 2:
        print(sum([a + i*2 for i in range(b)]))
    else:
        print(sum([a + 1 + i*2 for i in range(b)]))
