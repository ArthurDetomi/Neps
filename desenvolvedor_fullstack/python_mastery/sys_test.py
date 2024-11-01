import sys 

if len(sys.argv) != 2:
    print("O programa deve ser executado como: python nome_arquivo argumento")
else:
    print(sys.argv[1])