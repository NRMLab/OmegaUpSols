#!/usr/bin/python3

def _main() -> None:
  n = int(input())
  a = input().split(' ') 
  b = input().split(' ') 
  r = 0
  for i in range(n):
    r += int(a[i])*int(b[i])

  print(r)
  pass

if __name__ == '__main__':
  _main()
