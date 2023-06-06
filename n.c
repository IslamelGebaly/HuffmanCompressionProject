#include <stdio.h>

int main()
{
  char ch;
  FILE * pf = fopen("test_huffman.txt.huff", "r");
  while(1)
  {
    ch = fgetc(pf);
    if(ch == EOF)
    {
      fseek(pf, 1, SEEK_CUR);
    }
    printf("%c", ch);
  }
  return 0;
}
