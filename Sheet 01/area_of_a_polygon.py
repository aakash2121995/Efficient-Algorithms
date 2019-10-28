import sys
# from math import abs
# read first line: length of vector
first_line = sys.stdin.readline()
n = int(first_line)


if n==1:
	line = sys.stdin.readline()
	print('0')
elif n==2:
	line = sys.stdin.readline()
	line = sys.stdin.readline()

	print('0')

else:
	line = sys.stdin.readline()
	x1,y1  = line.split()
	x1 = int(x1)
	y1 = int(y1)
	x1_,y1_ = x1,y1
# read numbers
	sum_=0

	for i in range(n-1):
		line = sys.stdin.readline()
		x2,y2  = line.split()
		x2 = int(x2)
		y2  = int(y2)
		sum_+= x1*y2 - y1*x2
		x1=x2
		y1=y2
		
	sum_+= x1*y1_ - y1*x1_
	print(abs(sum_)/2.0)