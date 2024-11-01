try:
    num = int(input())
    print(num)
except ValueError:
    print("Valor atribuido deve ser um número!")
except:
    print("Uma excessão diferente de Value Error foi gerada!")



try:
    int(input())
except Exception as error:
    print(error)
    print(type(error))

try:
    num = int(input())
except ValueError:
    print("Valor atribuido deve ser um número!")
else:
    print(f"Resp: {num}")
finally:
    print("Sempre será executado!")

while True:
    try:
        num = int(input())
        break
    except ValueError:
        pass

print("Gerando um excessãoo!")
num = int(input())

if num <= 0:
    raise ValueError('Number must be greater than 0')

