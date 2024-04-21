n = int(input())

factor = 5
ans = 0

# Counting the total numbers of factors of 5
# This factors contribute to trailing zeros at end
while(factor <= n):

    ans += n // factor

    factor *= 5

print(ans)
