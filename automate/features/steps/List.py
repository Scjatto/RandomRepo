class List:
    def __init__(self):
        self.money = {
            10:"choclate",
            50:"Biscuits",
            100:"Canned Food"
            }

    def cost(self,val):
        return self.money[val]

            