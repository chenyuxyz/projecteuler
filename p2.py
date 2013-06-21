def p2():
    s = 0
    a1 = 1
    a2 = 2
    while a2 <= 4000000:
        if not a2 % 2:
            s += a2
        a1, a2 = a2, a1+a2
    print s

if __name__ == '__main__':
    p2()
