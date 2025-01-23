# Tic-Tac-Toe Console Game

## Overview
A simple console-based Tic-Tac-Toe game for two players. Supports custom board sizes but optimized for classic 3x3 gameplay. Players alternate turns placing X and O marks until a winner is declared or a tie occurs.

## Features
- Custom board size (N x N)
- Alternate player turns
- Win detection for rows/columns/diagonals
- Tie game recognition
- Input validation
- Real-time board display

## Gameplay Example
```
Player X turn. Enter empty box (r,c): 2 2
. . . 
. X . 
. . . 

Player O turn. Enter empty box (r,c): 1 1
O . . 
. X . 
. . .
```

## Implementation Details
- 2D array board storage
- Alternating player turns using counter
- Basic win condition checks:
 Horizontal/Vertical lines, 
 Diagonals (limited to 3x3)
- Tie detection when board fills
