def binary_search(arr, l, r, value):

    if r >= l:
        mid = (r + l) // 2
        arr_mid = arr[mid]
        if arr_mid == value:
            while mid >= 1 and arr[mid-1] == arr_mid:
                mid -= 1
            return mid

        elif value > arr_mid:
            return binary_search(arr, mid+1, r, value)

        elif value < arr_mid:
            return binary_search(arr, l, mid-1, value)

    else:
        return -1


n, q = list(map(int, input().split()))

case = 0
while n + q != 0:
    case += 1
    marbles = []
    print('CASE#', str(case) + ':')

    for i in range(n):
        a = int(input())
        marbles.append(a)
    marbles.sort()
    for i in range(q):
        b = int(input())
        found = -1
        found = binary_search(marbles, 0, len(marbles)-1, b)
        if found >= 0:
            print(b, 'found at', found + 1)
        else:
            print(b, 'not found')

    n, q = list(map(int, input().split()))
