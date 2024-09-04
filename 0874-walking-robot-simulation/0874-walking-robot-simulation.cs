public class Solution {
    public int RobotSim(int[] commands, int[][] obstacles) {
        int x = 0, y = 0, res = 0;
        int dir = 1;
        //1 means North
        //2 means East
        //3 means South
        //4 means West
        HashSet<(int, int)> obstacleSet = new HashSet<(int, int)>();
        foreach (var obstacle in obstacles)
        {
            obstacleSet.Add((obstacle[0], obstacle[1]));
        }
        foreach (int command in commands)
        {
            if (command == -1)
            {
                if (dir == 4)
                    dir = 1;
                else
                    dir++;
            }
            else if (command == -2)
            {
                if (dir == 1)
                    dir = 4;
                else
                    dir--;
            }
            else
            {
                int n = command;
                if (dir == 1)
                {
                    while (n != 0 && !obstacleSet.Contains((x, y + 1)))
                    {
                        y++;
                        n--;
                    }
                }
                if (dir == 2)
                {
                    while (n != 0 && !obstacleSet.Contains((x + 1, y)))
                    {
                        x++;
                        n--;
                    }
                }
                if (dir == 3)
                {
                    while (n != 0 && !obstacleSet.Contains((x, y - 1)))
                    {
                        y--;
                        n--;
                    }
                }
                if (dir == 4)
                {
                    while (n != 0 && !obstacleSet.Contains((x - 1, y)))
                    {
                        x--;
                        n--;
                    }
                } 
                res = Math.Max(res, (x*x + y*y));
            }
        }
        return res;
    }
}