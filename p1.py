def p1():
    s = 0
    N = 1000
    for i in range(N):
        if not i % 3 or not i % 5:
            s += i
    print s

if __name__ == '__main__':
    p1()
