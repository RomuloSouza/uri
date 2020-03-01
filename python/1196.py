kb = r"`1234567890-=QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./"

try:
    while True:
        s = input()
        for c in s:
            if c != ' ':
                print(kb[kb.find(c)-1], end='')
            else:
                print(' ', end='')
        print()
except EOFError:
    pass
