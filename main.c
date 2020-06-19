int main(void)
{
   char *line = 0;
   int ret;
   int fd;
    int idx=1;
 
   fd = open("./test.txt", O_RDONLY);
   while ((ret = get_next_line(fd, &line)) > 0)
   {
      printf("line %d : %s\n", idx, line);
        idx++;
        free(line);
   }
   printf("line %d : %s\n", idx, line);
   free(line);
   return (0);
}
