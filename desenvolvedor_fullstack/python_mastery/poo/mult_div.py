class Fracao:
    def __init__(self, numerador, denominador):
        self.numerador = numerador
        self.denominador = denominador

    # TODO: Implemente o operador de multiplicação.
    def __mul__(self, fracao):
        n = self.numerador * fracao.numerador
        d = self.denominador * fracao.denominador
        return Fracao(n, d)

    # TODO: Implemente o operador de divisão.
    def __truediv__(self, fracao):
        n = self.numerador * fracao.denominador
        d = self.denominador * fracao.numerador
        return Fracao(n, d)


if __name__ == "__main__":

    a_numerador, a_denominador = map(int, input().split())
    b_numerador, b_denominador = map(int, input().split())
    op = input()

    a = Fracao(a_numerador, a_denominador)
    b = Fracao(b_numerador, b_denominador)

    if op == "M":
        c = a * b
    else:
        c = a / b

    print(c.numerador, c.denominador)
