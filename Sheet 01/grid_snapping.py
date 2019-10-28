import sys
import math

first_line = sys.stdin.readline()
n = int(first_line)

grid_size = sys.stdin.readline()
grid_size = int(grid_size.replace('.',''))

for i in range(n):
	line = sys.stdin.readline()
	x,y  = line.split()
	x = int(x.replace('.',''))
	y = int(y.replace('.',''))


	x_coord = int(x / grid_size)
	if x < 0:
		x_coord -= 1

	y_coord = int(y / grid_size);
	if y < 0:
		y_coord -= 1

	x_normal =abs(int(grid_size*x_coord/100));
	x_frac =abs(grid_size*x_coord )%100;

	y_normal =abs(int(grid_size*y_coord/100))
	y_frac =abs(grid_size*y_coord)%100

	zero_y = ""

	if(y_frac <10):
		zero_y = "0";


	zero_x = "";
	if(x_frac <10):
		zero_x = "0";
	

	if(x_coord < 0):
		print('-', end="")
	
	print(str(x_normal)+'.'+zero_x+str(x_frac)+' ',end="")

	if(y_coord < 0):
		print("-",end="");
	
	print(str(y_normal)+'.'+zero_y+str(y_frac))

	# print("%.f %.f" % (x_coord*grid_size/100.0, y_coord*grid_size/100.0))