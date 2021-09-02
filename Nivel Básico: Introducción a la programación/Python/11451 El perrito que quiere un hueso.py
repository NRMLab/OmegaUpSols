def _main() -> None:
  H1 = input().split(' ')
  H2 = input().split(' ')
  L1 = int(H1[0])
  T1 = int(H1[1])
  L2 = int(H2[0])
  T2 = int(H2[1])

  if L1 > L2 and T1 > T2:
    print('Hueso 1')
  elif L1 < L2 and T1 < T2:
    print('Hueso 2')
  else:
    print('Perrito confundido :(')

  pass

if __name__ == '__main__':
  _main()
