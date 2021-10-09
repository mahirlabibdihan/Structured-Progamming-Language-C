/*
 ______   _________ _      _       _
|  ____ \|___   ___| |    | |     | |
| |    \ \   | |   | |____| |     | |
| |    | |   | |   |  ____  |     | |
| |____/ /___| |___| |    | |_____| |
|_______/|_________|_|    |_________|
M A H I R     L A B I B     D I H A N

*/

#include <stdio.h>
#include <time.h>

// struct tm
// { /* A structure for storing the attributes of a broken-down time; (once
//    * again, it isn't defined elsewhere, so no guard is necessary).  Note
//    * that we are within the scope of <time.h> itself, so we must provide
//    * the complete structure declaration here.
//    */
//   int  tm_sec;  	/* Seconds: 0-60 (to accommodate leap seconds) */
//   int  tm_min;  	/* Minutes: 0-59 */
//   int  tm_hour; 	/* Hours since midnight: 0-23 */
//   int  tm_mday; 	/* Day of the month: 1-31 */
//   int  tm_mon;  	/* Months *since* January: 0-11 */
//   int  tm_year; 	/* Years since 1900 */
//   int  tm_wday; 	/* Days since Sunday (0-6) */
//   int  tm_yday; 	/* Days since Jan. 1: 0-365 */
//   int  tm_isdst;	/* +1=Daylight Savings Time, 0=No DST, -1=unknown */
// };


// typedef long clock_t;
// typedef long time_t;
// #define CLOCKS_PER_SEC	((clock_t)(1000))

time_t time(time_t *time);
struct tm *localtime(const time_t *time);
struct tm *gmtime(const time_t *time);
char *ctime(const time_t *timer);
int main()
{
	time_t Current;
	// time() returns seconds since Jan 1 , 1970 + stores it in the argument it is passed in .
	time(&Current);   
	// Current=time(NULL);
	printf("%ld\n",Current);


	time_t current;
	time(&current);   

	// ctime converts seconds into string containing date,time
	puts(ctime(&Current));



	// localtime splits seconds into second,minute,hour,day,date,month,year
	struct tm *Time = localtime(&Current);
	


	printf("%d / %d / %d - %d:%d:%d\n",Time->tm_mday,Time->tm_mon+1,Time->tm_year+1900,Time->tm_hour,Time->tm_min,Time->tm_sec);

	struct tm *GTime = gmtime(&current);
	printf("%d / %d / %d - %d:%d:%d\n",GTime->tm_mday,GTime->tm_mon+1,GTime->tm_year+1900,GTime->tm_hour,GTime->tm_min,GTime->tm_sec);



}