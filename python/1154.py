a = int(input())

m = []
while a > 0:
    m.append(a)
    a = int(input())

print('%.2f' % (sum(m) / len(m)))
