from math import sqrt

def main():
    N = int(input())
    
    nums = list(map(float, input().split()))
    
    for num in  nums:
        print(f"{sqrt(num):.4f}")
    
    

if __name__ == "__main__":
    main()
