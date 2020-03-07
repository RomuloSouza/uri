a = int(input())

y = []
list(map(lambda x: y.append(int(x)), input().split()))

print(y.count(a))
