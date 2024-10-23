def main():
    N = int(input())
    
    test_answer = input()
    
    options_marked = input()
    
    hits = 0
    for i in range(N):
        if test_answer[i] == options_marked[i]:
            hits += 1
    
    print(hits)
        

if __name__ == "__main__":
    main()
