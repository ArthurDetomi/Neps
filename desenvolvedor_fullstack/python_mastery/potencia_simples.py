from math import pow

def main():
    x, y = map(float, input().split())

    print(f"{pow(x, y):.4f}")
    

if __name__ == "__main__":
    main()
