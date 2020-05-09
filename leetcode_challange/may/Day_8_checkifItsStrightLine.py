class Solution:
    def checkStraightLine(self, coordinates: List[List[int]]) -> bool:
        dx=coordinates[0][0]-coordinates[1][0]
        dy=coordinates[0][1]-coordinates[1][1]
        
        
        for i in range(2,len(coordinates)):
            xd=coordinates[i-1][0]-coordinates[i][0]
            yd=coordinates[i-1][1]-coordinates[i][1]
            
            if xd*dy!=dx*yd:
                return False
        return True
        