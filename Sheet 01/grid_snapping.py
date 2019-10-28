import sys
import math

first_line = sys.stdin.readline()
n = int(first_line)

grid_l,grid_r = sys.stdin.readline().split('.')
grid_size = 100*int(grid_l)+int(grid_r)

# print("grid size ",grid_size)

for i in range(n):
	line = sys.stdin.readline()
	x,y  = line.split()

	x_l,x_r = x.split('.')
	y_l,y_r = y.split('.')

	if '-' in x_l:
		x = 100*int(x_l) - int(x_r)
	else:
		x = 100*int(x_l) + int(x_r)

	if '-' in y_l:
		y = 100*int(y_l) - int(y_r)
	else:
		y = 100*int(y_l) + int(y_r)

	# print("x ",x," y ", y)

	if (x % grid_size == 0 or x >= 0):
		x_coord = int(x / grid_size)
	else:
		x_coord = int(x / grid_size) - 1;

	if (y % grid_size == 0 or y >= 0):
		y_coord = int(y / grid_size);
	else:
		y_coord = int(y / grid_size) - 1;

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