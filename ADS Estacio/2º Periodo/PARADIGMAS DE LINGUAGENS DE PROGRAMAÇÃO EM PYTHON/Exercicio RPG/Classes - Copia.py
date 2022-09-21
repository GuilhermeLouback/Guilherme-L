


class Raca:
  def __init__(self, forca, destreza, constituicao, sabedoria, inteligencia, carisma):
    self.forca = forca
    self.destreza = destreza
    self.constituicao = constituicao
    self.sabedoria = sabedoria
    self.inteligencia = inteligencia
    self.carisma = carisma


class Anao(Raca):
  def __init__(self, forca, destreza, constituicao, sabedoria, inteligencia, carisma):
    super().__init__(forca, destreza, constituicao + 2, sabedoria, inteligencia, carisma)

class AnaoColina(Anao):
  def __init__(self, forca, destreza, constituicao, sabedoria, inteligencia, carisma):
    super().__init__(forca, destreza, constituicao, sabedoria + 1, inteligencia, carisma)

class AnaoDaMontanha(Anao):
    def __init__(self, forca, destreza, constituicao, sabedoria, inteligencia, carisma):
        super().__init__(forca + 2, destreza, constituicao, sabedoria, inteligencia, carisma)

class Elfo(Raca):
    def __init__(self, forca, destreza, constituicao, sabedoria, inteligencia, carisma):
        super().__init__(forca , destreza + 2, constituicao, sabedoria, inteligencia, carisma)

class AltoElfo(Elfo):
    def __init__(self, forca, destreza, constituicao, sabedoria, inteligencia, carisma):
        super().__init__(forca , destreza, constituicao, sabedoria, inteligencia + 1, carisma)

class ElfoDaFloresta(Elfo):
    def __init__(self, forca, destreza, constituicao, sabedoria, inteligencia, carisma):
        super().__init__(forca , destreza, constituicao, sabedoria + 1, inteligencia, carisma)


class ElfoNegro(Elfo):
    def __init__(self, forca, destreza, constituicao, sabedoria, inteligencia, carisma):
        super().__init__(forca , destreza, constituicao, sabedoria, inteligencia, carisma + 1)

class Barbaro(Raca):
    def __init__(self, forca, destreza, constituicao, sabedoria, inteligencia, carisma):
        super().__init__(forca , destreza + 2, constituicao, sabedoria, inteligencia, carisma)

class PesLeves(Barbaro):
    def __init__(self, forca, destreza, constituicao, sabedoria, inteligencia, carisma):
        super().__init__(forca , destreza, constituicao, sabedoria, inteligencia, carisma + 1)

class Robusto(Barbaro):
    def __init__(self, forca, destreza, constituicao, sabedoria, inteligencia, carisma):
        super().__init__(forca , destreza, constituicao + 1, sabedoria, inteligencia, carisma)

class Humano(Raca):
    def __init__(self, forca, destreza, constituicao, sabedoria, inteligencia, carisma):
        super().__init__(forca + 1, destreza + 1, constituicao + 1, sabedoria + 1, inteligencia + 1, carisma + 1)

class Draconato(Raca):
    def __init__(self, forca, destreza, constituicao, sabedoria, inteligencia, carisma):
        super().__init__(forca + 2 , destreza, constituicao, sabedoria, inteligencia, carisma + 1)

class Gnomo(Raca):
    def __init__(self, forca, destreza, constituicao, sabedoria, inteligencia, carisma):
        super().__init__(forca , destreza, constituicao, sabedoria, inteligencia + 2, carisma )

class GnomoDaFloresta(Gnomo):
    def __init__(self, forca, destreza, constituicao, sabedoria, inteligencia, carisma):
        super().__init__(forca , destreza + 1, constituicao, sabedoria, inteligencia, carisma )

class GnomoDaPedra(Gnomo):
    def __init__(self, forca, destreza, constituicao, sabedoria, inteligencia, carisma):
        super().__init__(forca , destreza, constituicao + 1, sabedoria, inteligencia, carisma)

class Ladrao(Raca):
    def __init__(self, forca, destreza, constituicao, sabedoria, inteligencia, carisma):
        super().__init__(forca, destreza, constituicao, sabedoria,inteligencia + 1, carisma + 1)



usuario1 = Ladrao(10,10,10,10,10,10)
print(usuario1.inteligencia, usuario1.carisma)
print(usuario1.constituicao)



