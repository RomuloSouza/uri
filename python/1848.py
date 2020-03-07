a = input().split()

out = 0
n = 3
while n:
    if len(a) == 1:
        a = a[0]
        if a[0] == '*':
            out += 4
        if a[1] == '*':
            out += 2
        if a[2] == '*':
            out += 1
    else:
        print(out)
        n -= 1
        out = 0
    if n:
        a = input().split()
