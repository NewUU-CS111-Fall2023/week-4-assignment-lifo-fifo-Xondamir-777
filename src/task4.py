N = int(input())
con = list()
for i in range(0, N):
    ki=int(input())
    con.append(list())
    for n in range(0, ki):
        c = int(input())
        con[i].append(c)

ii = 0
b=0
while True:
    is_not_right = False
    for c in range(0, len(con)):
        #print(con[c])
        for i in con[c]:
             if c+1 != i:
                is_not_right = True
                break
        if is_not_right:
            break
    if  is_not_right == False:
        break
    if con[ii] != []:
        l= len(con[ii])-1
        comp = con[ii][l]-1

    for c in range(0, len(con)):
        #rev = con[comp][::-1]
        rev = len(con[comp])-1
        if c == ii:
            continue
        elif (con[comp]== []  or (con[comp] != [] and con[comp][rev] == comp+1)) and con[ii] != [] and ii != comp:
            print(ii+1, " ", comp +1)
            con[comp].append(con[ii].pop())
            break
    else:
        b+=1
    #print(con)
    if ii == len(con)-1:
        ii=0
        if b == len(con):
            con = 0
            print(0)

            break
        b=0
    else:
        ii +=1
#print(con)

'''
3
4
1
2
3
2
0
0

3
4
1
2
3
2
2
2
3
1
3

3
4
1
2
3
2
2
2
3
1
2
'''