def p4():
    ans = 0
    for i in range(100, 1000):
        for j in range(100, i + 1):
            k = i * j
            if k == int(str(k)[::-1]) and k > ans:
                ans = k
    print ans

if __name__ == '__main__':
    p4()
