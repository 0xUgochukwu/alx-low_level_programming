void print_diagsums(int *a, int size)
{
  int i, sum1 = 0, sum2 = 0;
  
  // Iterate over the matrix and add up the values on the diagonals
  for (i = 0; i < size; i++)
  {
    sum1 += *(a + i*size + i);         // main diagonal
    sum2 += *(a + i*size + size-i-1);  // secondary diagonal
  }
  
  // Print out the sums of the diagonals
  printf("Sum of main diagonal: %d\n", sum1);
  printf("Sum of secondary diagonal: %d\n", sum2);
}

