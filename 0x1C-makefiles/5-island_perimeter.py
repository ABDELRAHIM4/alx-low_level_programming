#!/usr/bin/python3
"""Create a function def island_perimeter(grid): that returns the perimeter of the island described in grid"""
def island_perimeter(grid):
    """Create a function def island_perimeter(grid):"""
    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0
    """iterate through each cell """
    for i in range(rows):
        """iterate through each cell """
        for j in range(cols):
            """iterate through each cell """
            if grid[i][j] == 1:
                """if is land zone"""
                if i == 0 or grid[i-1][j] == 0:
                    """check the top"""
                    perimeter += 1
                if i == rows-1 or grid[i+1][j] == 0:
                    """check the bottom"""
                    perimeter += 1
                if j == 0 or grid[i][j-1] == 0:
                    """check the left"""
                    perimeter += 1
                if j== cols-1 or grid[i][j+1] == 0:
                    """check the right"""
                    perimeter += 1
    """return perimeter"""
    return perimeter
