class ParkingSystem:

    def __init__(self, big: int, medium: int, small: int):
        self.ping = [0,big,medium,small]
        

    def addCar(self, carType: int) -> bool:
        if(self.ping[carType]>0):
            self.ping[carType]-=1
            return True
        return False
        
