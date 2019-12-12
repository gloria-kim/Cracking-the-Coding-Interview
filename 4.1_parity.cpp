//bitwise operations
//& (bitwise AND) = 1 if both bits are 1
//| (bitwise OR) = 0 if both bits are 0
//^ (bitwise XOR) 0 if both bits are same; 1 if different

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
