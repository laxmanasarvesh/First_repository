#include <stdio.h>
#include <signal.h>
#include <time.h>
void mytime()
{
	char cur_time[1000];

  time_t      t;
  struct tm*  ptm;

  t = time(NULL);
  ptm = localtime(&t);

  strftime(cur_time, 128, "%d-%b-%Y %H:%M:%S", ptm);

  printf("Current date and time: %s\n", cur_time);
	alarm(3);
}
int main()
{
	signal(SIGALRM,mytime);
	alarm(3);
	while(1);

}	
