print('hello')

n1=255
print(hex(n1))

def my_abs(x):
    if not isinstance(x, (int, float)):
        raise TypeError('bad operand type')
    if x >= 0:
        return x
    else:
        return -x

print(my_abs(-5416))

import math

def move(x, y, step, angle=0):
    nx = x + step * math.cos(angle)
    ny = y - step * math.sin(angle)
    return nx, ny

x, y = move(100, 100, 60, math.pi / 6)
print(x,y)

# list是一种有序的集合，可以随时添加和删除其中的元素。

# 另一种有序列表叫元组：tuple。tuple和list非常类似，但是tuple一旦初始化就不能修改

sum = 0
for x in [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]:
    sum = sum + x
print(sum)

print(list(range(5)))

d = {'Michael': 95, 'Bob': 75, 'Tracy': 85}
print(d['Michael'])
