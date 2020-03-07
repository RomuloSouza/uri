n = int(input())

for _ in range(n):
    s = input()
    d = int(input())
    for c in s:
        x = ord(c) - d
        if x < 65:
            x += 26
        print(chr(x), end='')
    print()
