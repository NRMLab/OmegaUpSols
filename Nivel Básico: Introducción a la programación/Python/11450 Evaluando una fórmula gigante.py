def _main() -> None:
  vals = input().split(' ')
  x = float(vals[0])
  y = float(vals[1])
  z = float(vals[2])

  res = ((((2*x+y)/(z))*(y**3-z))/(((x+2*y+3*z)/(z-2*y-3*x))+(x**2)+(z**2)))
  print(res)
  pass

if __name__ == '__main__':
  _main()
