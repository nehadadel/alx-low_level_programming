#!/usr/bin/python3
"""
task5
"""

def island_perimeter(grid):
    """that returns the perimeter of the island described in grid"""
    prem = 0
    flag_c = 0
    flag_r = 0
    flag = 1
    for row in grid:
        for coulom in row:
            if coulom == 1:
                prem += 4
                flag_c += 1
                flag = 1
        prem = prem - (flag_c - 1) * 2
        if flag == 1:
            flag_r += 1
        flag_c = 0
    prem = prem - (flag_r - 1) * 2
    return prem
