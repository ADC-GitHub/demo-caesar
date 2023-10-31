/*
C TESTBED VERSION  : 10.2.0
FILE UNDER TEST  : "C:\Users\Andre\Documents\GitDemo\demo-caesar\caesar.c"
DATE OF ANALYSIS : Tue Oct 31 10:50:54 2023
*/
 
#include <stdlib.h>
#define QQQdialect GCC____C99                                                                                                                                                                                                        
#undef QQQ146
#undef QQQ148
#undef QQQbndchk
#undef QQQ294
#undef QQQEMBEDDEDICE
 /* Note: for BITMAP execution histories QQQthreaded is not defined */
#undef QQQthreaded 
#define QQQdo178b
#undef QQQfixbra
#undef QQQswitch3
#undef QQQternary
#undef QQQswitch
#undef QQQmacrof
#undef QQQMULTIPROCESSEXH
#undef QQFLUSH
#undef QQNEWBS
#define qqqMaxBranchDepth      2
#undef QQQstructbitmap
 static int zzfileid =      1;
#undef QQQALGONE
#undef QQQVCLFLG
#undef QQQFORKFL
#undef QQQIADDRF
#undef QQQRTI
#undef QQQPERFA
#undef QQQADRMOD
#undef QQQDCAPFL
#undef QQQTEMPLATEONLY
#undef QQQNOATEXIT
#undef QQQUPLOADATEND
#undef QQQNOSTDIO
#undef QQQASHLINGVITRA
#undef QQQBITMAPMCDC 
#undef QQQTIC2XSERIALIO
#undef QQQTIC2XFLASH
#undef QQQCOMPRESSED_EXH
#undef QQQMAINFL
#undef QQQSINGLEFILE
#undef QQQFILEID
#undef QQQseparate
 static int caesar_1zzopen                                                                                       = 0;
#ifndef QQQLDRA_PORT                                                                                                                                                                                                                                                
#define FILEPOINT FILE * f,                                                                                                                                                                                                                                         
#if !defined(QQQTEMPLATEONLY) && !defined(FILE) && !defined(QQQNOSTDIO)                                                                                                                                                                                             
#include <stdio.h>                                                                                                                                                                                                                                                  
    /* ----------------------------------------------------------------------* 100 *                                                                                                                                                                                
     * If stdio.h is not available then insert:                                                                                                                                                                                                                     
     *      typedef int * FILE;                                                                                                                                                                                                                                     
     * -----------------------------------------------------------------------------                                                                                                                                                                                
     */                                                                                                                                                                                                                                                             
#endif  /* !(QQQTEMPLATEONLY) && !(FILE) && !(QQQNOSTDIO) */                                                                                                                                                                                                        
#else  /* QQQLDRA_PORT */                                                                                                                                                                                                                                           
#define FILEPOINT                                                                                                                                                                                                                                                   
#include "ldra_port.h"        /* Generic header file for LDRA_PORT */                                                                                                                                                                                               
#ifdef inc_ldra_port_instr                                                                                                                                                                                                                                          
#include "ldra_port_instr.h"  /* Communication definitions and ldra_port common code */                                                                                                                                                                             
#endif  /* inc_ldra_port_instr */                                                                                                                                                                                                                                   
#endif /* QQQLDRA_PORT */                                                                                                                                                                                                                                           
#ifndef QQQnumfil                                                                                                                                                                                                                                                   
#define QQQnumfil 40  /* default setting */                                                                                                                                                                                                                         
#endif  /* QQQnumfil */                                                                                                                                                                                                                                             
#if defined(QQQstructbitmap) && defined(QQQSINGLEFILE)                                                                                                                                                                                                              
      typedef void(*ldra_void_function)();                                                                                                                                                                                                                          
#if defined(QQQMAINFL)                                                                                                                                                                                                                                              
        /* Set qqqshell_upload to 1 if you want to call the qqqtotalupload separately. Although                                                                                                                                                                     
           through the target you would have to set this to 0 before calling the qqqupload.                                                                                                                                                                         
           Move this into ldra_port mechanism. */                                                                                                                                                                                                                   
       int qqqshell_upload = 0;                                                                                                                                                                                                                                     
       int QQQfcn_ptr_num = 0;                                                                                                                                                                                                                                      
       static int qqqisinitialised = 0;                                                                                                                                                                                                                             
       ldra_void_function qqqaccumupload[QQQnumfil];                                                                                                                                                                                                                
       ldra_void_function qqqaccumreset[QQQnumfil];                                                                                                                                                                                                                 
       void qqqtotalupload(void);                                                                                                                                                                                                                                   
       void qqqtotalreset(void);                                                                                                                                                                                                                                    
       void qqpopulate_array_fcn_ptrQQ(int x, ldra_void_function y, ldra_void_function z)                                                                                                                                                                           
       {                                                                                                                                                                                                                                                            
         qqqaccumupload[x]=y;                                                                                                                                                                                                                                       
         qqqaccumreset[x]=z;                                                                                                                                                                                                                                        
         QQQfcn_ptr_num++;                                                                                                                                                                                                                                          
       }                                                                                                                                                                                                                                                            
#else  /* (QQQMAINFL) */                                                                                                                                                                                                                                            
        extern int QQQfcn_ptr_num;                                                                                                                                                                                                                                  
        extern ldra_void_function qqqaccumupload[QQQnumfil];                                                                                                                                                                                                        
        extern void qqpopulate_array_fcn_ptrQQ(int x, ldra_void_function y, ldra_void_function z);                                                                                                                                                                  
        static int qqqstructzzopen = 0;                                                                                                                                                                                                                             
#endif  /* defined(QQQMAINFL) */                                                                                                                                                                                                                                    
#endif  /* defined(QQQstructbitmap) && defined(QQQSINGLEFILE) */                                                                                                                                                                                                    
#ifdef QQQ_KEEPCOMMENTS                                                                                                                                                                                                                                             
  /* -----------------------------------------------------------------------* 101 *                                                                                                                                                                                 
  *            Special settings for systems lacking standard functions.                                                                                                                                                                                             
  * To include code for fprintf define ldra_fprintf                                                                                                                                                                                                                 
  * To include code for sscanf  define ldra_sscanf                                                                                                                                                                                                                  
  * -----------------------------------------------------------------------------                                                                                                                                                                                   
  */                                                                                                                                                                                                                                                                
#endif  /* QQQ_KEEPCOMMENTS */                                                                                                                                                                                                                                      
#if !defined(QQQSUPPRESS_UNDEF)                                                                                                                                                                                                                                     
#undef ldra_fprintf                                                                                                                                                                                                                                                 
#undef ldra_sscanf                                                                                                                                                                                                                                                  
#endif  /* !defined(QQQSUPPRESS_UNDEF) */                                                                                                                                                                                                                           
  /*  #define ldra_fprintf */                                                                                                                                                                                                                                       
  /*  #define ldra_sscanf */                                                                                                                                                                                                                                        
#undef QQQHITMAP_STORAGE                                                                                                                                                                                                                                            
#undef qqnull_params                                                                                                                                                                                                                                                
#define qqnull_params void                                                                                                                                                                                                                                          
#define QQQ_PROTOTYPE_DEF                                                                                                                                                                                                                                           
  /* Conventional Instrumentation */                                                                                                                                                                                                                                
#undef QQ_ANSI_PROTOTYPE                                                                                                                                                                                                                                            
#ifdef __STDC__                                                                                                                                                                                                                                                     
#define QQ_ANSI_PROTOTYPE 1                                                                                                                                                                                                                                         
#else /* __STDC__ */                                                                                                                                                                                                                                                
#ifdef VAXC                                                                                                                                                                                                                                                         
#define QQ_ANSI_PROTOTYPE 1                                                                                                                                                                                                                                         
#endif  /* VAXC */                                                                                                                                                                                                                                                  
#endif  /* __STDC__ */                                                                                                                                                                                                                                              
  static void qqoutput(FILEPOINT char * s,int i);                                                                                                                                                                                                                   
  static void qqoutput0(FILEPOINT char * s);                                                                                                                                                                                                                        
  static int caesar_1zqqzqz(qqnull_params);                                                                                                                                                                                                                         
  static int caesar_1zqqzqz1(qqnull_params);                                                                                                                                                                                                                        
  static int caesar_1zzqqzz (int qqqi);                                                                                                                                                                                                                             
  static int caesar_1zqzqzq (int qqqi);                                                                                                                                                                                                                             
  static int caesar_1zzzqtz (int qqqa, int qqqb);                                                                                                                                                                                                                   
  static int caesar_1zzzqfz (int qqqa, int qqqb);                                                                                                                                                                                                                   
  static int caesar_1zzdo17 (int a, int b);                                                                                                                                                                                                                         
/* ------------------------------ END OF TESTBED PROTOTYPES -------------------------------- */                                                                                                                                                                     
#define NB_LTR ( 'z' - 'a' + 1 )
 
void
  check_magic_number ( void )
  {
   int icaesar_1zzqqzz                                                                                      
 = caesar_1zzqqzz                                                                                       (       1 ) ; /* 37 */
    short
      tmp =
      ( short ) ( 0x1234 << 8 ) ;
    char
      c =
      (
      ( char * ) & tmp ) [ 0 ] ;
    int
      i = 0 << ( int ) c ;
    caesar_1zzqqzz                                                                                       (       2 ) ; /* 30 */  
  }
 
int
  absolute_int (
  int x )
  {
   int icaesar_1zzqqzz                                                                                      
 = caesar_1zzqqzz                                                                                       (       3 ) ; /* 37 */
    int
      abs_x ;
    if
      (
      x < 0
      )
 {
      {
        abs_x = - x ;
      }
    caesar_1zzqqzz                                                                                       (      4 ) ; /* 3 */
 }
    else
 {                                                                                                    ;
caesar_1zzqqzz                                                                                       (      5 ); /* 2 */
      {
        abs_x = x ;
      }
 }
    caesar_1zzqqzz                                                                                       (       6  ) ; /* 48 */ 
    return
    abs_x ;
  }
 
char *
  caesar_encrypt (
  char * str ,
  int shift )
  {
   int icaesar_1zzqqzz                                                                                      
 = caesar_1zzqqzz                                                                                       (       7 ) ; /* 37 */
 int                                                                                                  ZZ1100050 = (
 caesar_1zzqqzz                                                                                       (       8 ) * /* 26 + 23 */
  1 ) ; /* 26 */
    int
      abs_shift =
                    absolute_int (
                    shift ) ;
    int
      i = 0 ;
    char *
      buf =
      ( char * ) malloc ( 33 ) ;
    if
      (
      buf
      )
 {
      {
        while
          (
 (  /* 21 */ 
          * str
  )  /* 7 */
          )
          {
 { /* 32 */
            if
 (  /* 50 */
              (
              
  caesar_1zzdo17                                                                                       (     /*  81 */ 
              
  caesar_1zzzqfz                                                                                       (     /*  52 */ 
              * str >= 'a'
   ? caesar_1zzdo17                                                                                      ( 1,     11) : 
caesar_1zzdo17                                                                                      ( 0,     11) ,       9  )  /*  54 */
              &&
              
  caesar_1zzdo17                                                                                       (     /*  72 */ 
              * str <= 'z'
  ? 1 : 0  ,      13  )  /*  73 */
  ? 1 : 0  ,      15  )  /*  82 */
              )
  ) /* 1 */
 {
              {
                buf [ i ] = ( * str + abs_shift - 'a'  ) %
                ( 'z'  - 'a'  + 1 ) + 'a'  ;
              }
    caesar_1zzqqzz                                                                                       (     16 ) ; /* 3 */
 }
            else
 {                                                                                                    ;
caesar_1zzqqzz                                                                                       (     17 ); /* 2 */
              {
                if
 (  /* 50 */
                  (
                  
  caesar_1zzdo17                                                                                       (     /*  81 */ 
                  
  caesar_1zzzqfz                                                                                       (     /*  52 */ 
                  * str >= 'A'
   ? caesar_1zzdo17                                                                                      ( 1,     20) : 
caesar_1zzdo17                                                                                      ( 0,     20) ,      18  )  /*  54 */
                  &&
                  
  caesar_1zzdo17                                                                                       (     /*  72 */ 
                  * str <= 'Z'
  ? 1 : 0  ,      22  )  /*  73 */
  ? 1 : 0  ,      24  )  /*  82 */
                  )
  ) /* 1 */
 {
                  {
                    buf [ i ] = ( * str + abs_shift - 'A'  ) %
                    ( 'z'  - 'a'  + 1 ) + 'A'  ;
                  }
    caesar_1zzqqzz                                                                                       (     25 ) ; /* 3 */
 }
                else
 {                                                                                                    ;
caesar_1zzqqzz                                                                                       (     26 ); /* 2 */
                /* Spaces and other characters are not encrypted. */
                  {
                    buf [ i ] = *str ;
                  }
 }
              }
 }
            i ++ ;
            str ++ ;
    caesar_1zzqqzz                                                                                       (     27 ) ;} /* 6 */
          }
    caesar_1zzqqzz                                                                                       (     28 ) ; /* 5 */
        buf [ i ] = '\0'  ;
      }
 }                                                                                                   
else                                                                                                
  caesar_1zzqqzz                                                                                       (     29 ) ; /* 4 */
    caesar_1zzqqzz                                                                                       (      30  ) ; /* 48 */ 
    return
    buf ;
  }
 
char *
  caesar_decrypt (
  char * str ,
  int shift )
  {
   int icaesar_1zzqqzz                                                                                      
 = caesar_1zzqqzz                                                                                       (      31 ) ; /* 37 */
 int                                                                                                  ZZ1100111 = (
 caesar_1zzqqzz                                                                                       (      32 ) * /* 26 + 23 */
  1 ) ; /* 26 */
    int
      abs_shift =
                    absolute_int (
                    shift ) ;
    int
      i = 0 ;
    char *
      buf =
      ( char * ) malloc ( 33 ) ;
    if
      (
      buf
      )
 {
      {
        while
          (
 (  /* 21 */ 
          * str
  )  /* 7 */
          )
          {
 { /* 32 */
            if
 (  /* 50 */
              (
              
  caesar_1zzdo17                                                                                       (     /*  81 */ 
              
  caesar_1zzzqfz                                                                                       (     /*  52 */ 
              * str >= 'a'
   ? caesar_1zzdo17                                                                                      ( 1,     35) : 
caesar_1zzdo17                                                                                      ( 0,     35) ,      33  )  /*  54 */
              &&
              
  caesar_1zzdo17                                                                                       (     /*  72 */ 
              * str <= 'z'
  ? 1 : 0  ,      37  )  /*  73 */
  ? 1 : 0  ,      39  )  /*  82 */
              )
  ) /* 1 */
 {
              {
                buf [ i ] = ( * str + (
                ( 'z'  - 'a'  + 1 ) - abs_shift ) - 'a'  ) %
                ( 'z'  - 'a'  + 1 ) + 'a'  ;
              }
    caesar_1zzqqzz                                                                                       (     40 ) ; /* 3 */
 }
            else
 {                                                                                                    ;
caesar_1zzqqzz                                                                                       (     41 ); /* 2 */
              {
                if
 (  /* 50 */
                  (
                  
  caesar_1zzdo17                                                                                       (     /*  81 */ 
                  
  caesar_1zzzqfz                                                                                       (     /*  52 */ 
                  * str >= 'A'
   ? caesar_1zzdo17                                                                                      ( 1,     44) : 
caesar_1zzdo17                                                                                      ( 0,     44) ,      42  )  /*  54 */
                  &&
                  
  caesar_1zzdo17                                                                                       (     /*  72 */ 
                  * str <= 'Z'
  ? 1 : 0  ,      46  )  /*  73 */
  ? 1 : 0  ,      48  )  /*  82 */
                  )
  ) /* 1 */
 {
                  {
                    buf [ i ] = ( * str + (
                    ( 'z'  - 'a'  + 1 ) - abs_shift ) - 'A'  ) %
                    ( 'z'  - 'a'  + 1 ) + 'A'  ;
                  }
    caesar_1zzqqzz                                                                                       (     49 ) ; /* 3 */
 }
                else
 {                                                                                                    ;
caesar_1zzqqzz                                                                                       (     50 ); /* 2 */
                /* Spaces and other characters are not encrypted. */
                  {
                    buf [ i ] = *str ;
                  }
 }
              }
 }
            i ++ ;
            str ++ ;
    caesar_1zzqqzz                                                                                       (     51 ) ;} /* 6 */
          }
    caesar_1zzqqzz                                                                                       (     52 ) ; /* 5 */
        buf [ i ] = '\0'  ;
      }
 }                                                                                                   
else                                                                                                
  caesar_1zzqqzz                                                                                       (     53 ) ; /* 4 */
    caesar_1zzqqzz                                                                                       (      54  ) ; /* 48 */ 
    return
    buf ;
  }
 
void
  check_coverage (
  int y )
/* #define X 1
we will define X during Compliation cammand / script to test both variants of this code.
this could also be achieved with a makefile
coverage is always measured on 1 product variant as this is the binary for the final target.
*/
  {
   int icaesar_1zzqqzz                                                                                      
 = caesar_1zzqqzz                                                                                       (      55 ) ; /* 37 */
    y = 2 ;
    caesar_1zzqqzz                                                                                       (      56 ) ; /* 30 */  
  }
#define qqqbranches     56
#define QQQMAXMCDCSIZE    170
 static FILE * caesar_1zzhfil                                                                                       ;
  /* put in undefs to protect our parameter names from macros */                                                                                                                                                                                                    
#undef f                                                                                                                                                                                                                                                            
#undef i                                                                                                                                                                                                                                                            
#undef j                                                                                                                                                                                                                                                            
#undef k                                                                                                                                                                                                                                                            
#undef s                                                                                                                                                                                                                                                            
#undef l                                                                                                                                                                                                                                                            
#undef ii                                                                                                                                                                                                                                                           
#undef some                                                                                                                                                                                                                                                         
#undef none                                                                                                                                                                                                                                                         
#undef from                                                                                                                                                                                                                                                         
#undef a                                                                                                                                                                                                                                                            
#undef b                                                                                                                                                                                                                                                            
#undef iz                                                                                                                                                                                                                                                           
#undef jz                                                                                                                                                                                                                                                           
#undef qqnull_params                                                                                                                                                                                                                                                
#define qqnull_params void                                                                                                                                                                                                                                          
  /* Conventional Instrumentation */                                                                                                                                                                                                                                
    /* not single file and not fileid */                                                                                                                                                                                                                            
    static char qqqqone[]   = "%6d\n";           /* single point */                                                                                                                                                                                                 
  /* uncompressed data structures */                                                                                                                                                                                                                                
  static int caesar_1zqqzqz(qqnull_params);                                                                                                                                                                                                                         
  static int caesar_1zqqzqz1(qqnull_params);                                                                                                                                                                                                                        
    /* ----------------------------------------------------------------------* 200 *                                                                                                                                                                                
     *            Procedures                                                                                                                                                                                                                                        
     * -----------------------------------------------------------------------------                                                                                                                                                                                
     */                                                                                                                                                                                                                                                             
  /* ----------------------------------------------------------------------* 210 *                                                                                                                                                                                  
   *    C System utilities in use:                                                                                                                                                                                                                                  
   *        fprintf                                                                                                                                                                                                                                                 
   *        fclose                                                                                                                                                                                                                                                  
   *        sscanf                                                                                                                                                                                                                                                  
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  /* ----------------------------------------------------------------------* 213 *                                                                                                                                                                                  
   *            qqoutput* suite                                                                                                                                                                                                                                     
   *      Main output routines. These may require modification.                                                                                                                                                                                                     
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  /* ----------------------------------------------------------------------* 214 *                                                                                                                                                                                  
   *            qqoutput                                                                                                                                                                                                                                            
   *    This is the principle output routine.                                                                                                                                                                                                                       
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
    static void qqoutput(FILEPOINT char * s,int i)                                                                                                                                                                                                                  
  /* f - file pointer, s - format string, i - integer for probe value */                                                                                                                                                                                            
  {                                                                                                                                                                                                                                                                 
    /* printing to a file */                                                                                                                                                                                                                                        
    /* fprintf exists, not threaded */                                                                                                                                                                                                                              
      /* fprintf exists,not threaded, (not SINGLEFILE and not FILEID ) */                                                                                                                                                                                           
      /* fprintf exists,not threaded, (not SINGLEFILE and not FILEID ) and not forkfl  */                                                                                                                                                                           
      fprintf(f,s,i);                                                                                                                                                                                                                                               
  } /* end of qqoutput */                                                                                                                                                                                                                                           
    /* ----------------------------------------------------------------------* 215 *                                                                                                                                                                                
     *            qqoutput0                                                                                                                                                                                                                                         
     * -----------------------------------------------------------------------------                                                                                                                                                                                
     */                                                                                                                                                                                                                                                             
    static void qqoutput0(FILEPOINT char * s)                                                                                                                                                                                                                       
    {                                                                                                                                                                                                                                                               
      fprintf(f,s);                                                                                                                                                                                                                                                 
    } /* end of qqoutput0 */                                                                                                                                                                                                                                        
  /* ----------------------------------------------------------------------* 219 *                                                                                                                                                                                  
   *            end of qqoutput* suite                                                                                                                                                                                                                              
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
#undef QQQTEMP1                                                                                                                                                                                                                                                     
#define QQQTEMP1                                                                                                                                                                                                                                                    
  /* ----------- zqqzqz ---------------------------------------------------* 310 *                                                                                                                                                                                  
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  /* ----------------------------------------------------------------------* 312 *                                                                                                                                                                                  
   * This routine opens the execution history file. It is instrumented at the                                                                                                                                                                                       
   * start of the main program if one exists in the file. In general this is                                                                                                                                                                                        
   * superceded by caesar_1zqqzqz1 below.                                                                                                                                                                                                                           
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int caesar_1zqqzqz(qqnull_params)                                                                                                                                                                                                                          
  {                                                                                                                                                                                                                                                                 
    if ( caesar_1zzopen != 1 )                                                                                                                                                                                                                                      
    {                                                                                                                                                                                                                                                               
#undef QQQMUSTOPEN                                                                                                                                                                                                                                                  
      caesar_1zzopen = 1;                                                                                                                                                                                                                                           
    }                                                                                                                                                                                                                                                               
    return(1);                                                                                                                                                                                                                                                      
  }  /* end of zqqzqz */                                                                                                                                                                                                                                            
  /* ----------- zqqzqz1 --------------------------------------------------* 315 *                                                                                                                                                                                  
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  /* ----------------------------------------------------------------------* 317 *                                                                                                                                                                                  
   * This routine also opens the execution history file.  It is called                                                                                                                                                                                              
   * automatically if a probe fires and the execution history is not already                                                                                                                                                                                        
   * opened (caesar_1zzopen = 0 ).                                                                                                                                                                                                                                  
   * Because this always works ( it was intended for files with no main program                                                                                                                                                                                     
   * it is now the de facto common way to open the execution history.                                                                                                                                                                                               
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int caesar_1zqqzqz1(qqnull_params)                                                                                                                                                                                                                         
  {                                                                                                                                                                                                                                                                 
    if ( caesar_1zzopen != 1 )                                                                                                                                                                                                                                      
    {                                                                                                                                                                                                                                                               
      if ( caesar_1zzopen == 0 )                                                                                                                                                                                                                                    
      {                                                                                                                                                                                                                                                             
      caesar_1zzhfil =                                                                                                                                                                                                                                              
           fopen( "caesar_1.exh","w");  /* 12 */                                                                                                                                                                                                                    
      }                                                                                                                                                                                                                                                             
      else                                                                                                                                                                                                                                                          
      {                                                                                                                                                                                                                                                             
          caesar_1zzhfil =                                                                                                                                                                                                                                          
               fopen( "caesar_1.exh","a");  /* 13 */                                                                                                                                                                                                                
      }                                                                                                                                                                                                                                                             
      caesar_1zzopen = 1;                                                                                                                                                                                                                                           
    }                                                                                                                                                                                                                                                               
    return(1);                                                                                                                                                                                                                                                      
  }  /* end of zqqzqz1 */                                                                                                                                                                                                                                           
  /* ----------- zzqqzz ---------------------------------------------------* 321 *                                                                                                                                                                                  
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  /* ----------------------------------------------------------------------* 323 *                                                                                                                                                                                  
   *            This is the routine which usually puts an integer into                                                                                                                                                                                              
   * the execution history file and returns unity.                                                                                                                                                                                                                  
   * This routine is the primary routine for gathering                                                                                                                                                                                                              
   * the execution history. Note that the last entry                                                                                                                                                                                                                
   * is usually inserted by caesar_1zqzqzq.                                                                                                                                                                                                                         
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int caesar_1zzqqzz(int qqqi)                                                                                                                                                                                                                               
  {                                                                                                                                                                                                                                                                 
    if ( caesar_1zzopen != 1 )                                                                                                                                                                                                                                      
    {                                                                                                                                                                                                                                                               
      caesar_1zqqzqz1();                                                                                                                                                                                                                                            
    }                                                                                                                                                                                                                                                               
    if ( caesar_1zzopen )                                                                                                                                                                                                                                           
    {                                                                                                                                                                                                                                                               
      /* streamed */                                                                                                                                                                                                                                                
      /* unbuffered */                                                                                                                                                                                                                                              
        qqoutput(                                                                                                                                                                                                                                                   
        caesar_1zzhfil,                                                                                                                                                                                                                                             
          qqqqone, qqqi);                                                                                                                                                                                                                                           
    }                                                                                                                                                                                                                                                               
    return(1);                                                                                                                                                                                                                                                      
  } /* end of zzqqzz */                                                                                                                                                                                                                                             
  /* ----------- zqzqzq ---------------------------------------------------* 342 *                                                                                                                                                                                  
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  /* ----------------------------------------------------------------------* 344 *                                                                                                                                                                                  
   * This routine should be called before the program                                                                                                                                                                                                               
   * terminates. It closes the execution history                                                                                                                                                                                                                    
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int caesar_1zqzqzq(int qqqi)                                                                                                                                                                                                                               
  {                                                                                                                                                                                                                                                                 
      if ( caesar_1zzopen != 1 )                                                                                                                                                                                                                                    
      {                                                                                                                                                                                                                                                             
        caesar_1zqqzqz1();                                                                                                                                                                                                                                          
      }                                                                                                                                                                                                                                                             
      /* not compressed */                                                                                                                                                                                                                                          
      /* streamed */                                                                                                                                                                                                                                                
      /* notbuffered */                                                                                                                                                                                                                                             
      qqoutput(caesar_1zzhfil,                                                                                                                                                                                                                                      
        qqqqone, qqqi);                                                                                                                                                                                                                                             
      /* upload the history */                                                                                                                                                                                                                                      
        fclose(caesar_1zzhfil);                                                                                                                                                                                                                                     
        caesar_1zzopen = 2;                                                                                                                                                                                                                                         
    return(1);                                                                                                                                                                                                                                                      
  } /* end of zqzqzq */                                                                                                                                                                                                                                             
  /*   the following routines should be left alone */                                                                                                                                                                                                               
  /* ----------------------------------------------------------------------* 355 *                                                                                                                                                                                  
   *            caesar_1zzzqtz                                                                                                                                                                                                                                      
   * This routine captures the value of an expression                                                                                                                                                                                                               
   * and then returns a jump if the value is not 0.                                                                                                                                                                                                                 
   *                                                                                                                                                                                                                                                                
   *   qqqa - value of expression                                                                                                                                                                                                                                   
   *   qqqb - jump table index.                                                                                                                                                                                                                                     
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int caesar_1zzzqtz(int qqqa, int qqqb)                                                                                                                                                                                                                     
  {                                                                                                                                                                                                                                                                 
      if (qqqa)                                                                                                                                                                                                                                                     
      {                                                                                                                                                                                                                                                             
        caesar_1zzqqzz(qqqb) ;                                                                                                                                                                                                                                      
      }                                                                                                                                                                                                                                                             
    return(qqqa);                                                                                                                                                                                                                                                   
  } /* end of zzzqtz */                                                                                                                                                                                                                                             
  /* ----------------------------------------------------------------------* 356 *                                                                                                                                                                                  
   *            caesar_1zzzqfz                                                                                                                                                                                                                                      
   * This routine captures the value of an expression                                                                                                                                                                                                               
   * and then returns a jump if the value is 0.                                                                                                                                                                                                                     
   *                                                                                                                                                                                                                                                                
   *  qqqa - value of expression                                                                                                                                                                                                                                    
   *  qqqb - jump table index.                                                                                                                                                                                                                                      
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int caesar_1zzzqfz(int qqqa,int qqqb)                                                                                                                                                                                                                      
  {                                                                                                                                                                                                                                                                 
    {                                                                                                                                                                                                                                                               
      if (qqqa)                                                                                                                                                                                                                                                     
      {                                                                                                                                                                                                                                                             
        return(qqqa);                                                                                                                                                                                                                                               
      }                                                                                                                                                                                                                                                             
      else                                                                                                                                                                                                                                                          
      {                                                                                                                                                                                                                                                             
        caesar_1zzqqzz(qqqb);                                                                                                                                                                                                                                       
      }                                                                                                                                                                                                                                                             
    }                                                                                                                                                                                                                                                               
    return(qqqa);                                                                                                                                                                                                                                                   
  } /* zzzqfz */                                                                                                                                                                                                                                                    
  /* ----------------------------------------------------------------------* 357 *                                                                                                                                                                                  
   *            caesar_1zzdo17                                                                                                                                                                                                                                      
   * -----------------------------------------------------------------------------                                                                                                                                                                                  
   */                                                                                                                                                                                                                                                               
  static int caesar_1zzdo17(                                                                                                                                                                                                                                        
    int a, int b)                                                                                                                                                                                                                                                   
  {                                                                                                                                                                                                                                                                 
    if ( a )                                                                                                                                                                                                                                                        
    {                                                                                                                                                                                                                                                               
      caesar_1zzqqzz(b-1);                                                                                                                                                                                                                                          
    }                                                                                                                                                                                                                                                               
    else                                                                                                                                                                                                                                                            
    {                                                                                                                                                                                                                                                               
      caesar_1zzqqzz(b);                                                                                                                                                                                                                                            
    }                                                                                                                                                                                                                                                               
    return a;                                                                                                                                                                                                                                                       
  } /*  end of zzdo17 */                                                                                                                                                                                                                                            
/* END OF TESTBED INSTRUMENTATION */                                                                                                                                                                                                                                
 
