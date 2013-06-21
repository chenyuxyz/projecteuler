n = 1;
num = 1;
pw = [];
while prod(pw+1) < 500
    n ++;
    num += n;
    [_ pw] = factor(num);
end
num
prod(pw+1)
