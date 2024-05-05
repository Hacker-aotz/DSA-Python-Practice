target = int(input())  # Enter a number between 0 and 1000
# 🚨 Do not change the code above ☝️

# Write your code here 👇
totalValue = 0
for value in range(2, target + 1, 2):
    totalValue += value
    print(totalValue)
print(f"Sum of even numbers = {totalValue} ")

alternative_sum = 0
for number in range(1, target + 1):
    if number % 2 == 0:
        alternative_sum += number
print(alternative_sum)
