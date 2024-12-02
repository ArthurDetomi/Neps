# TODO: Complete a classe Retangulo
class Retangulo:
    def __init__(self):
        self.__x1: int
        self.__y1: int
        self.__x2: int
        self.__y2: int
        
    def area(self):
        return (self.__y1 - self.__y2) * (self.__x2 - self.__x1)
    @property
    def x1(self):
        return self.__x1
    
    @property
    def x2(self):
        return self.__x2

    @property
    def y1(self):
        return self.__y1

    @property
    def y2(self):
        return self.__y2
    
    @x1.setter
    def x1(self, x1):
        self.__x1 = x1
    
    @x2.setter
    def x2(self, x2):
        self.__x2 = x2
    
    @y1.setter
    def y1(self, y1):
        self.__y1 = y1
    
    @y2.setter
    def y2(self, y2):
        self.__y2 = y2


if __name__ == "__main__":

    retangulo = Retangulo()

    n = int(input())

    for i in range(n):
        linha = input().split()

        if linha[0] == "R":
            x1, y1, x2, y2 = map(int, linha[1:])
            retangulo.x1 = x1
            retangulo.y1 = y1
            retangulo.x2 = x2
            retangulo.y2 = y2
        else:
            print(retangulo.area())
