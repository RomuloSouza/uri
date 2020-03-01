h1, m1, h2, m2 = list(map(int, input().split()))

while h1 + m1 + h2 + m2 > 0:
    total1 = h1 * 60 + m1
    total2 = h2 * 60 + m2

    res = total2 - total1
    if res < 0:
        res += 24 * 60

    print(res)

    h1, m1, h2, m2 = list(map(int, input().split()))
