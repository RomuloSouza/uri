try:
    while True:
        n, l, c = list(map(int, input().split()))
        words = input().split()

        total_lines = 1
        line = 0
        line += len(words[0])
        for w in words[1:]:
            w_len = len(w)
            if line + w_len + 1 > c:
                line = w_len
                total_lines += 1
            else:
                line += w_len + 1

        pages = total_lines // l
        if total_lines % l > 0:
            print(pages + 1)
        else:
            print(pages)

except EOFError:
    pass
