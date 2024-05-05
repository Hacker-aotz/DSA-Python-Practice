# Input a Python list of student heights
student_heights = input().split()
for n in range(0, len(student_heights)):
    student_heights[n] = int(student_heights[n])
# 🚨 Don't change the code above 👆

# Write your code below this row 👇
totalHeight = 0
for height in student_heights:
    totalHeight += height
print(f"total height = {totalHeight} ")

numberOfStudents = 0
for student in student_heights:
    numberOfStudents += 1
print(f"number of students = {numberOfStudents} ")

averageHeight = round(totalHeight / numberOfStudents)
print(f"average height = {averageHeight} ")
