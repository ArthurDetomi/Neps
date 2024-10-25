MAX = 12

list_fatorial = [1]
def fill_list_fatorial():
    for i in range(1, MAX + 1):
        list_fatorial.append(list_fatorial[i - 1] * i)

def fatorial(N):
    if len(list_fatorial) == 1:
        fill_list_fatorial()
    return list_fatorial[N]        

def main():
    fill_list_fatorial()
    
    N = int(input())
    
    print(fatorial(N))

if __name__ == "__main__":
    main()
