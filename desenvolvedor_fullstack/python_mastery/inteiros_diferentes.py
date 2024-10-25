def main():
    N = int(input())

    data = set()
    for i in range(N):
        data.add(int(input()))

    print(len(data))

if __name__ == "__main__":
    main()