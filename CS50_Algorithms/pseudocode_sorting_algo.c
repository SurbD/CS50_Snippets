// SELECTION SORT
//
// For i from 0 to n-1
//      Find smallest number between numbers[i] and numbers[n-1]
//      Swap smallest number with numbers[i]
//
// Formula:
// (n-1) + (n-2) + (n-3) +...+ 1
// >>> n(n-1)/2
// >>> (n^2 - n)/2
// >>> n^2/2 - n/2
//
// Select Sort -> O(n^2) (Best and worst case is n squared)


// BUBBLE SORT
// 
// Repeat n-1 times
//      For i from 0 to n-2
//          If numbers[i] and numbers[i+1] out of order
//              Swap them
//      If no swaps 
//          Quit
//
// Formula:
//      (n-1) * (n-1)
//      n^2 - 1n - 1n + 1
//      n^2 - 2n + 1
