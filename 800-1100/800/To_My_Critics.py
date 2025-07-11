# https://codeforces.com/problemset/problem/1850/A

for i in range (int(input())): 
  digits = sorted(list(map(int, input().split()))) 
  print("YES" if digits[0] + digits[1] >= 10 else "YES" if digits[1] + digits[2] >= 10 else "NO")    
