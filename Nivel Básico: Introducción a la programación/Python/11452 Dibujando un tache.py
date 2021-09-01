#!/usr/bin/python3
def _main() -> None:
  n = int(input())
  r = n
  for i in range(n):
    if i < (n//2):
      print(' '*i+'@'+' '*(r-2)+'@')
      r -= 2
    elif i == (n//2):
      print(' '*i+'@')
    else:
      r+=2
      print(' '*(n-(i+1))+'@'+' '*(r-2)+'@')
  pass

if __name__ == '__main__':
  _main()
