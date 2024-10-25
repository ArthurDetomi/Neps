def main():
    N = int(input())
    list_tuples = []

    for i in range(N):
        value1, value2 = map(str, input().split())
        list_tuples.append((value1, value2))

    print(list_tuples)

if __name__ == "__main__":
    main()
