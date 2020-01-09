def closest(points,n):
	if n == 2:
		return abs(points[0][0] - points[1][0]) + abs(points[0][1] - points[1][1])

	points.sort(key=sum)

	min_val = 999999999999999999
	for i in range(n-1):
		min_val = min(min_val, abs(points[i][0] - points[i+1][0]) + abs(points[i][1] - points[i+1][1]))
		if min_val == 1:
			break

	return min_val

	# px = copy.deepcopy(points)
	# px.sort(key=itemgetter(0))
	# py = copy.deepcopy(points)
	# py.sort(key=itemgetter(1))


	# return closest_rec(px,py,n)
	# return bruteforce(points,n)

n = int(input())

map_ = {}

for i in range(n):
	s = input().split()
	for j,val in enumerate(s):
		val = int(val)
		if val not in map_:
			map_[val] = []
		map_[val].append((i,j))


# print(map_)
min_val = 999999999999999
for key in map_.keys():
	n = len(map_[key])
	if n == 1:
		continue
	dist = closest(map_[key],n)

	min_val = min(min_val, dist)
	if min_val == 1:
		break

print(min_val)