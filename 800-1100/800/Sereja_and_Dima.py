from collections import deque
length = int(input())
lst = list(map(int, input().split()))
serja , dima , turn = 0 , 0 , 1
dq = deque(lst)
while dq:
    if turn:
        if dq[0] > dq[-1]:
            serja += dq.popleft()
        else:
            serja += dq.pop()
    else:
        if dq[0] > dq[-1]:
            dima += dq.popleft()
        else:
            dima += dq.pop()
    turn = not turn 
print(serja , dima)


# flipping the turn
'''
    turn = 1 - turn
    turn = not turn
    turn = turn ^ 1
    turn = 0 if turn else 0
'''            