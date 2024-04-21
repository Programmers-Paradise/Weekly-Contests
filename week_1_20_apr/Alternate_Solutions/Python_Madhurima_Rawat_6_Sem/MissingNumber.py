# Taking n as input
n = int(input())

# Storing numbers as list
list1 = list(map(int, input().split()))

# Finding Sum of list(numbers)
sum_list1 = sum(list1)

# Finding sum of n natural numbers
sum_natural_numbers = (n * (n + 1)) // 2

# Subtracting sum of natural numbers from sum of numbers will give the missing numbers
missing = sum_natural_numbers - sum_list1

# Printing missing number
print(missing)