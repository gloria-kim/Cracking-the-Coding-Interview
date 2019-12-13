//bitwise operations
//& (bitwise AND) = 1 if both bits are 1; compare EVERY bit
//| (bitwise OR) = 0 if both bits are 0; compare EVERY bit
//^ (bitwise XOR) 0 if both bits are same; 1 if different; compare EVERY bit

//bitwise AND
bool AND(char a, char b)
{
  if (a & b == 1)
  {
    return true;
  }
  if (a & b == 0)
  {
    return false;
  }
}


//test bits one-at-a-time
short CountBits(unsigned int x)
{
  short num_bits = 0;
  while(x)
  {
    nm_bits += x & 1; //if x = 1, then 1. Otherwise, 0.
    x >>= 1;
  }
  return num_bits;
}

int main()
{
  AND and;
  bool result;
  result = and(3,5);
  print result;

}
