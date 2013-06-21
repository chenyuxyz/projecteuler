def p13():
    ans = 0
    with open('p13.in', 'r') as fin:
        for n in fin:
            ans += int(n)
    print str(ans)[:10]

if __name__ == '__main__':
    p13()
