def main():
    N = int(input())

    accesses = []
    
    for i in range(N):
        accesses.append(int(input()))
    
    sum_acesses = 0; count = 0
    for i in range(N):
        sum_acesses += accesses[i]
        
        accesses[i] = sum_acesses
        
        if sum_acesses <= 1000000:
            count += 1 
        else:
            if i - 1 < 0 or accesses[i - 1] < 1000000:
                count += 1
        
         
        
        
    print(count)
        
        


if __name__ == "__main__":
    main()

