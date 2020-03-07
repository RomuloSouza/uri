a, b = list(map(str, input().split()))

while a != '0' or b != '0':
    len_a = len(a)
    len_b = len(b)
    a = (9 - len_a) * '0' + a
    b = (9 - len_b) * '0' + b

    total_carry = 0
    carry = 0
    for i in range(8, -1, -1):
        if int(a[i]) + int(b[i]) + carry >= 10:
            carry = 1
            total_carry += 1
        else:
            carry = 0

    if total_carry == 1:
        print(total_carry, 'carry operation.')
    elif total_carry > 1:
        print(total_carry, 'carry operations.')
    else:
        print('No carry operation.')

    a, b = list(map(str, input().split()))
