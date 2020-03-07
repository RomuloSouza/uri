d = dict()


def fac(n):
    if n <= 1:
        return 1
    elif str(n) in d:
        return d[str(n)]
    else:
        r_fac = n * fac(n-1)
        d[str(n)] = r_fac

    return r_fac


try:
    while True:
        a, b = list(map(int, input().split()))
        print(fac(a) + fac(b))

except EOFError:
    pass
