def main():
    lista_de_inteiros = map(int, input().split())

    resultado = [num * 2 if num % 2 == 0 else num * 3 for num in lista_de_inteiros]

    print(resultado)

    

if __name__ == "__main__":
    main()
