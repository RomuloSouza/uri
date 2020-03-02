try:
    while True:
        a = input()
        upper = True
        for c in a:
            if upper:
                print(c.upper(), end='')
            else:
                print(c.lower(), end='')

            if c != ' ':
                upper = not upper
        print()

except EOFError:
    pass
