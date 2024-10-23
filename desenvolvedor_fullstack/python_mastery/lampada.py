def main():
    light_A = False; light_B = False
    
    N = int(input())
    
    sequence = input().split()

    for value in sequence:
        value_to_int = int(value)
        
        if value_to_int == 1:
            light_A = not light_A
        if value_to_int == 2:
            light_A = not light_A
            light_B = not light_B
    
    light_A = 1 if light_A else 0
    light_B = 1 if light_B else 0
    
    print(f'{light_A}\n{light_B}')
    
    
        

if __name__ == "__main__":
    main()
