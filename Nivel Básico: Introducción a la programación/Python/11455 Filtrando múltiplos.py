def _main() -> None:
  # TODO: fixme.
  n = int(input())
  sec = input().split(' ') 
  k = int(input())
  for i in range(n):
    if int(sec[i]) % k != 0:
      sec[i] = 'X'
  print(" ".join(sec))
  pass

if __name__ == '__main__':
  _main()
