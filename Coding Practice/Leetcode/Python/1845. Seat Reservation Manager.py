import bisect
class SeatManager:

    def __init__(self, n: int):
        self.n=n
        self.empty=[i for i in range(1,n+1)]
        self.count = 0
        
    def reserve(self) -> int:
        val = self.empty[0]
        del self.empty[0]
        return val


    def unreserve(self, seatNumber: int) -> None:
        bisect.insort(self.empty,seatNumber) 



# Your SeatManager object will be instantiated and called as such:
# obj = SeatManager(n)
# param_1 = obj.reserve()
# obj.unreserve(seatNumber)