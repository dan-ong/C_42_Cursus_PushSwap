# C_42_Cursus_PushSwap

<Sort requirements>
For push swap, you will need to be able to sort sets of 3, 5, 100 and 500 random integers. I'll list the max amount of moves allowed in each category, as well as the max amount of moves allowed for the best score
-3 Numbers (Mandatory: <3 moves, Best: N/A)
-5 Numbers (Mandatory: <12 moves, Best: N/A)
-100 Numbers (Mandatory: <1500, Best: <700)
-500 Numbers (Mandatory: <11500, Best: <5500)

<Error catching>
There are certain types of arguments that should not be accepted by the push swap program and cause it to return Error\n. These are:
-Text of any kind (eg. ./push_swap one 2 3)
-Duplicate numbers (eg. ./push_swap 1 1 2 3)
-Any integers bigger than INT_MAX/smaller than INT_MIN (not listed in subject but checked in eval)
In the case that there are no arguments, push swap should return nothing. (edited)
