def main():
    vowels_set = {"a", "e", "i", "o", "u"}
    
    laughter = input()
    
    vowels_in_order = ""
    for letter in laughter:
        if letter in vowels_set:
            vowels_in_order += letter
    
    vowels_in_reverse_order = ""
    for i in range(len(laughter) - 1, -1, -1):
        if laughter[i] in vowels_set:
            vowels_in_reverse_order += laughter[i]
            
    if vowels_in_reverse_order != "" and vowels_in_order == vowels_in_reverse_order:
        print('S')
    else:
        print('N')
    
    

if __name__ == "__main__":
    main()
