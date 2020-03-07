n = int(input())

for _ in range(n):
    s = input()
    new_s = ''

    len_s = len(s)
    s_mid = (len_s+1) // 2
    new_s1, new_s2 = '', ''

    for i in range(s_mid):
        value = ord(s[i])
        if 65 <= value <= 90 or 97 <= value <= 122:
            new_s1 += chr(value+2)
        else:
            new_s1 += chr(value-1)

    for i in range(s_mid, len_s):
        c = s[i]
        value = ord(c)
        if 65 <= value <= 90 or 97 <= value <= 122:
            new_s2 += chr(value+3)
        else:
            new_s2 += c

    print(new_s2[::-1] + new_s1[::-1])
