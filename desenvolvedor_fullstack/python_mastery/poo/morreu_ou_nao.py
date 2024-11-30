class Personagem:
    def __init__(self, nome: str, ataque: int, defesa: int, vida: int):
        self.nome = nome
        self.ataque = ataque
        self.defesa = defesa
        self.vida = vida
        
    def sobreviveu(self, dano: int):
        return self.vida - (dano - self.defesa) > 0
        

    # Crie um método que determina se o personagem morreu ou não após receber o golpe.


if __name__ == "__main__":
    nome = input()
    ataque = int(input())
    defesa = int(input())
    vida = int(input())

    personagem = Personagem(nome, ataque, defesa, vida)

    dano = int(input())

    if personagem.sobreviveu(dano):
        print(f"{personagem.nome} sobreviveu!!!")
    else:
        print(f"{personagem.nome} morreu :(")
