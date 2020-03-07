
try:
    while True:
        a, b = input(), input()
        total_max = 0

        len_a = len(a)
        len_b = len(b)

        if len_a < len_b:
            for i in range(len_a):
                total = 0
                aux = ''
                for j in range(i, len_a):
                    aux += a[j]
                    if aux in b:
                        total += 1
                        total_max = max(total_max, total)
                    else:
                        break

                if total_max >= (len_a - i + 1):
                    break
        else:
            for i in range(len_b):
                total = 0
                aux = ''
                for j in range(i, len_b):
                    aux += b[j]
                    if aux in a:
                        total += 1
                        total_max = max(total_max, total)
                    else:
                        break

                if total_max >= (len_b - i + 1):
                    break
        print(total_max)
except EOFError:
    pass
