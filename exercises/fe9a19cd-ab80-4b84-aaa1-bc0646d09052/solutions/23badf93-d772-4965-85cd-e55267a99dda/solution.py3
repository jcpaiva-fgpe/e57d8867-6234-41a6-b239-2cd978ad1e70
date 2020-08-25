def is_repdigit(num):
    if num == 0 :
        return "true"
    n = str(num)
    for i in n:
        if n.count(i) == len(n):
            return "true"
        else:
            return "false"
