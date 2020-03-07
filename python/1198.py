try:
    while True:
        a, b = list(map(int, input().split()))
        print(abs(a-b))
except EOFError:
    pass
