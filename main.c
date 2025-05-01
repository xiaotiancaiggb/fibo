#include 
#include 
#include “fibo.h” 
 Int main (int argc, char * argv []) 
 { 
 Long ret; 
Int n; 
If (argc<2){ 
 Fprintf (stderr, “missing index.\n”); 
 Return -1; 
 }
 N=atoi (argv [1]);
 Ret = fibo (n); 
 Printf (“Fibo (%d) is %ld\n”,n,ret);
 Return EXIT_SUCCESS; 
 } 
