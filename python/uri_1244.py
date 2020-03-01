x = int(input())

s = []
for _ in range(x):
    s.append(input())

for line in s:
    output = []
    aux = line.split(' ')
    while len(aux) > 0:
        maior = aux[0]
        for i in aux:
            if len(i) > len(maior):
                maior = i
        output.append(maior)
        aux.remove(maior)

    first_output = output[0]
    output = output[1:]
    print(first_output + ''.join(' ' + x for x in output))