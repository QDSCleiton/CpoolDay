void print_char(char c);

int main(void)

{

  int i;

  {

   for (i = 0; i <= 127; i++)
   
     {

      printf('«%3d: %c\n », i, i');
  
     } 
  
  }
 
  my_print_ascii();
  
  return 0;

}