# Funções de ordem superior
def hello(name):
    return f"Ola {name}"

def print_hello(function, name):
    print(function(name))

print_hello(hello, "Arthur")

# Funções anônimas
anonymous_function = lambda n: n + 5

print(anonymous_function(3))

anonymous_function_2 = lambda a, b: a + b

print(anonymous_function_2(2, 3))

# Função map
nums = [2, 3, 4]

nums_square = list(map(lambda x: x**2, nums))

print(nums_square)

#Função filter
list_nums = [1, 5, 10, 15]

list_nums_filtered = list(filter(lambda x: x >= 10, list_nums))

print(list_nums_filtered)

# Função Reduce
from functools import reduce

list_nums_2 = [2, 4, 6]

result = reduce(lambda x, y: x * y, list_nums_2)

print(result)
