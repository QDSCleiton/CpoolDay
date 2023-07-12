void print_char(char c)
{
       write(1, &c, 1);
}

int main(void)
{
  int i, j, k = 0;
 
  my_print_ascii("\n ___ TABLEAU DECIMAL ___");
  my_print_ascii("\n     0 1 2 3 4 5 6 7 8 9");
  for(i = 0; i < 26; i++) {
    print_char("\n %2d  ", i);
    for(j = 0; j < 10; j++, k++)
      print_char("%c ", k != 7 && k != 8 && k != 9 && k != 10 && k != 13 && k < 256 ? k : ' ');
  }
 
  my_print_ascii("\n _______________________");
  return 0;
}
