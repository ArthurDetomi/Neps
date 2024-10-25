DICT = {}

def main():
    N = int(input())
    for i in range(N):
        key, value = map(str,input().split())
        DICT[key] = value
    frase = input().split()
    for i in range(len(frase)):
        print(DICT[frase[i]], end="")
        if i != len(frase) - 1:
            print(" ", end="")
    print()

if __name__ == "__main__":
    main()
