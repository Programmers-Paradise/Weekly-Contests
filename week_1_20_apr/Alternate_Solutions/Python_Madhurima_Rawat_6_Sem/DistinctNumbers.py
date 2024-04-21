# Taking n as input
n = int(input())

# Storing numbers as list
list1 = list(map(int, input().split()))

# Directly converting to set and printing length of set
# Set only contains unique element in python
print(len(set(list1)))