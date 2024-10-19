A, B = map(float, input().split())

mean_test = (A + B) / 2.0

if mean_test >= 7:
    print("Aprovado")
elif mean_test >= 4:
    print("Recuperacao")
else: 
    print("Reprovado")