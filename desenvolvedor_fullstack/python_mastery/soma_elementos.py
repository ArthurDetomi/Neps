def main():
    N = int(input())
    nums = input().split()
    
    sum = 0
    
    for num in nums:
        sum += int(num)
    
    print(sum)

if __name__ == "__main__":
    main()