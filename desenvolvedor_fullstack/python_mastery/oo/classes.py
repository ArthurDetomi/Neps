class MinhaClasse:
    A = 10

objeto1 = MinhaClasse()
objeto1.atributo = "atributo do objeto 1"


objeto2 = MinhaClasse()
objeto2.atributo = "atributo do objeto 2"

print(objeto1.atributo)
print(objeto2.atributo)

MinhaClasse.A = 92

print("Objeto estatico " + str(objeto1.A))
print("Objeto estatico " + str(objeto2.A))
