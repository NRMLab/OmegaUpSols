#!/usr/bin/python3

def _main() -> None:
  # TODO: fixme.
  n = int(input())
  s1 = input()
  s2 = input()
  for i in range(2*n-1):
    if i % 2 == 0:
      if int(s1[i]) <= int(s2[i]):
        return 0
  return 1
  pass

if __name__ == '__main__':
  print(_main())
