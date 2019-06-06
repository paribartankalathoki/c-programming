//Declaration:  struct tm *localtime(const time_t *time);

  #include <time.h>
  #include <stdio.h>

  /* Print local and UTC time. */
  int main(void)
  {
    struct tm *local;
    time_t t;

    t = time(NULL);
    local = localtime(&t);
    printf("Local time and date: %s\n", asctime(local));
    local = gmtime(&t);
    printf("UTC time and date: %s\n", asctime(local));

    return 0;
  }


/*
Local time and date: Sat Mar  3 16:12:47 2007

UTC time and date: Sat Mar  3 16:12:47 2007

*/
