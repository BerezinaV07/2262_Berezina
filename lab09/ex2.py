def sublist(num, *i):
    if not i:
        return []
    res=[num[x] for x in i]
    return res

lst = [ 'Anna', 'Barbara', 'Clara', 'Diana', 'Eva', 'Flora']
print ('Test 1', sublist(lst, 0, 2, 5))
print ('Test 2', sublist(lst))
print ('Test 3', sublist(lst,  0, 1, 2, 3, 4, 5))
