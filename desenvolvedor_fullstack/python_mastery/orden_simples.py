def main():
    N = int(input())
    nums = list(map(int, input().split()))
    nums.sort()
    
    for i in range(len(nums)):
        print(nums[i], end="")
        if i != len(nums) - 1:
            print(" ", end="")
    print()

if __name__ == "__main__":
    main()
