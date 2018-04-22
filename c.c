# 1 "src/codegen_main.c"
# 1 "/home/hugo/Codes/miniml//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "src/codegen_main.c"
# 1 "src/common.h" 1



# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 367 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 410 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 411 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 368 "/usr/include/features.h" 2 3 4
# 391 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 392 "/usr/include/features.h" 2 3 4
# 28 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 1 3 4
# 216 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 3 4

# 216 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 34 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
# 121 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 122 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 36 "/usr/include/stdio.h" 2 3 4
# 44 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;





# 64 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 74 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 31 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 82 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 21 "/usr/include/_G_config.h" 2 3 4
typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 32 "/usr/include/libio.h" 2 3 4
# 49 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 50 "/usr/include/libio.h" 2 3 4
# 144 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;





typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 173 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 241 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 289 "/usr/include/libio.h" 3 4
  __off64_t _offset;







  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;

  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 333 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
# 385 "/usr/include/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 429 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 459 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 75 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 90 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;
# 102 "/usr/include/stdio.h" 3 4
typedef __ssize_t ssize_t;







typedef _G_fpos_t fpos_t;




# 164 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 165 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));




extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));








extern FILE *tmpfile (void) ;
# 209 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;

# 227 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 266 "/usr/include/stdio.h" 3 4






extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 295 "/usr/include/stdio.h" 3 4

# 306 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;
# 319 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));

# 351 "/usr/include/stdio.h" 3 4





extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));

# 412 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
# 443 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 463 "/usr/include/stdio.h" 3 4








extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 494 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 522 "/usr/include/stdio.h" 3 4









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 550 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 565 "/usr/include/stdio.h" 3 4








extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 602 "/usr/include/stdio.h" 3 4
extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);
# 617 "/usr/include/stdio.h" 3 4





extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
# 640 "/usr/include/stdio.h" 3 4

# 665 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;








extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);

# 744 "/usr/include/stdio.h" 3 4





extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

# 773 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 792 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 815 "/usr/include/stdio.h" 3 4

# 824 "/usr/include/stdio.h" 3 4


extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

# 841 "/usr/include/stdio.h" 3 4





extern void perror (const char *__s);






# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 854 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
# 872 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));





extern char *cuserid (char *__s);
# 912 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 942 "/usr/include/stdio.h" 3 4

# 5 "src/common.h" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 32 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 1 3 4
# 328 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 3 4
typedef int wchar_t;
# 33 "/usr/include/stdlib.h" 2 3 4








# 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
# 50 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4
typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;
# 42 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
# 43 "/usr/include/stdlib.h" 2 3 4
# 95 "/usr/include/stdlib.h" 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;


# 139 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) ;




extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

# 206 "/usr/include/stdlib.h" 3 4


__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

# 305 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) ;


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

# 44 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __loff_t loff_t;



typedef __ino_t ino_t;
# 60 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
# 98 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __pid_t pid_t;





typedef __id_t id_t;
# 122 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __key_t key_t;
# 132 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 57 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;



# 73 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 91 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 103 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 133 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef __useconds_t useconds_t;



typedef __suseconds_t suseconds_t;





# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 1 3 4
# 147 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 194 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 228 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 270 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4
# 60 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;





typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 90 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    short __spins;
    short __elision;
    __pthread_list_t __list;
# 125 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{

  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    signed char __rwelision;




    unsigned char __pad1[7];


    unsigned long int __pad2;


    unsigned int __flags;

  } __data;
# 220 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 271 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



# 315 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__ , __leaf__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 372 "/usr/include/stdlib.h" 3 4


extern int rand (void) __attribute__ ((__nothrow__ , __leaf__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ , __leaf__));







extern double drand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 464 "/usr/include/stdlib.h" 3 4


extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;










extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));

# 503 "/usr/include/stdlib.h" 3 4
extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (2))) ;




extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int at_quick_exit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



# 539 "/usr/include/stdlib.h" 3 4




extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void quick_exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));







extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));






extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;

# 578 "/usr/include/stdlib.h" 3 4
extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 619 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 662 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 711 "/usr/include/stdlib.h" 3 4





extern int system (const char *__command) ;

# 733 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) ;






typedef int (*__compar_fn_t) (const void *, const void *);
# 751 "/usr/include/stdlib.h" 3 4



extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
# 774 "/usr/include/stdlib.h" 3 4
extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;

# 859 "/usr/include/stdlib.h" 3 4



extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ , __leaf__));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));

# 898 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;





extern void setkey (const char *__key) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int posix_openpt (int __oflag) ;







extern int grantpt (int __fd) __attribute__ ((__nothrow__ , __leaf__));



extern int unlockpt (int __fd) __attribute__ ((__nothrow__ , __leaf__));




extern char *ptsname (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;
# 954 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 955 "/usr/include/stdlib.h" 2 3 4
# 967 "/usr/include/stdlib.h" 3 4

# 6 "src/common.h" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stdbool.h" 1 3 4
# 7 "src/common.h" 2

# 1 "/usr/include/ctype.h" 1 3 4
# 28 "/usr/include/ctype.h" 3 4

# 39 "/usr/include/ctype.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 40 "/usr/include/ctype.h" 2 3 4






enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
# 79 "/usr/include/ctype.h" 3 4
extern const unsigned short int **__ctype_b_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern const __int32_t **__ctype_tolower_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern const __int32_t **__ctype_toupper_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 104 "/usr/include/ctype.h" 3 4






extern int isalnum (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isalpha (int) __attribute__ ((__nothrow__ , __leaf__));
extern int iscntrl (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isdigit (int) __attribute__ ((__nothrow__ , __leaf__));
extern int islower (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isgraph (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isprint (int) __attribute__ ((__nothrow__ , __leaf__));
extern int ispunct (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isspace (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isupper (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isxdigit (int) __attribute__ ((__nothrow__ , __leaf__));



extern int tolower (int __c) __attribute__ ((__nothrow__ , __leaf__));


extern int toupper (int __c) __attribute__ ((__nothrow__ , __leaf__));








extern int isblank (int) __attribute__ ((__nothrow__ , __leaf__));


# 150 "/usr/include/ctype.h" 3 4
extern int isascii (int __c) __attribute__ ((__nothrow__ , __leaf__));



extern int toascii (int __c) __attribute__ ((__nothrow__ , __leaf__));



extern int _toupper (int) __attribute__ ((__nothrow__ , __leaf__));
extern int _tolower (int) __attribute__ ((__nothrow__ , __leaf__));
# 257 "/usr/include/ctype.h" 3 4
# 1 "/usr/include/xlocale.h" 1 3 4
# 27 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 258 "/usr/include/ctype.h" 2 3 4
# 271 "/usr/include/ctype.h" 3 4
extern int isalnum_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isalpha_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int iscntrl_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isdigit_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int islower_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isgraph_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isprint_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int ispunct_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isspace_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isupper_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isxdigit_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));

extern int isblank_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));



extern int __tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern int tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));


extern int __toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern int toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
# 347 "/usr/include/ctype.h" 3 4

# 9 "src/common.h" 2
# 1 "/usr/include/errno.h" 1 3 4
# 31 "/usr/include/errno.h" 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/errno.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/errno.h" 3 4
# 1 "/usr/include/linux/errno.h" 1 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/errno.h" 1 3 4
# 1 "/usr/include/asm-generic/errno.h" 1 3 4



# 1 "/usr/include/asm-generic/errno-base.h" 1 3 4
# 5 "/usr/include/asm-generic/errno.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/errno.h" 2 3 4
# 1 "/usr/include/linux/errno.h" 2 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/errno.h" 2 3 4
# 50 "/usr/include/x86_64-linux-gnu/bits/errno.h" 3 4
extern int *__errno_location (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 36 "/usr/include/errno.h" 2 3 4
# 58 "/usr/include/errno.h" 3 4

# 10 "src/common.h" 2
# 1 "/usr/include/getopt.h" 1 3 4
# 57 "/usr/include/getopt.h" 3 4
extern char *optarg;
# 71 "/usr/include/getopt.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
# 104 "/usr/include/getopt.h" 3 4
struct option
{
  const char *name;


  int has_arg;
  int *flag;
  int val;
};
# 150 "/usr/include/getopt.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       __attribute__ ((__nothrow__ , __leaf__));
# 173 "/usr/include/getopt.h" 3 4
extern int getopt_long (int ___argc, char *const *___argv,
   const char *__shortopts,
          const struct option *__longopts, int *__longind)
       __attribute__ ((__nothrow__ , __leaf__));
extern int getopt_long_only (int ___argc, char *const *___argv,
        const char *__shortopts,
               const struct option *__longopts, int *__longind)
       __attribute__ ((__nothrow__ , __leaf__));
# 11 "src/common.h" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h" 1 3 4
# 12 "src/common.h" 2
# 1 "/usr/include/string.h" 1 3 4
# 27 "/usr/include/string.h" 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 1 3 4
# 33 "/usr/include/string.h" 2 3 4









extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 92 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 123 "/usr/include/string.h" 3 4


extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

# 162 "/usr/include/string.h" 3 4
extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));




extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 206 "/usr/include/string.h" 3 4

# 231 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 258 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 277 "/usr/include/string.h" 3 4



extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 310 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 337 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 392 "/usr/include/string.h" 3 4


extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));

# 422 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ , __leaf__))

                        __attribute__ ((__nonnull__ (2)));
# 440 "/usr/include/string.h" 3 4
extern char *strerror_l (int __errnum, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));





extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 559 "/usr/include/string.h" 3 4
extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 658 "/usr/include/string.h" 3 4

# 13 "src/common.h" 2

# 1 "libcalg/include/libcalg-1.0/libcalg.h" 1
# 24 "libcalg/include/libcalg-1.0/libcalg.h"
# 1 "libcalg/include/libcalg-1.0/libcalg/compare-int.h" 1
# 49 "libcalg/include/libcalg-1.0/libcalg/compare-int.h"

# 49 "libcalg/include/libcalg-1.0/libcalg/compare-int.h"
int int_equal(void *location1, void *location2);
# 62 "libcalg/include/libcalg-1.0/libcalg/compare-int.h"
int int_compare(void *location1, void *location2);
# 25 "libcalg/include/libcalg-1.0/libcalg.h" 2
# 1 "libcalg/include/libcalg-1.0/libcalg/compare-pointer.h" 1
# 47 "libcalg/include/libcalg-1.0/libcalg/compare-pointer.h"
int pointer_equal(void *location1, void *location2);
# 60 "libcalg/include/libcalg-1.0/libcalg/compare-pointer.h"
int pointer_compare(void *location1, void *location2);
# 26 "libcalg/include/libcalg-1.0/libcalg.h" 2
# 1 "libcalg/include/libcalg-1.0/libcalg/compare-string.h" 1
# 50 "libcalg/include/libcalg-1.0/libcalg/compare-string.h"
int string_equal(void *string1, void *string2);
# 63 "libcalg/include/libcalg-1.0/libcalg/compare-string.h"
int string_compare(void *string1, void *string2);
# 75 "libcalg/include/libcalg-1.0/libcalg/compare-string.h"
int string_nocase_equal(void *string1, void *string2);
# 88 "libcalg/include/libcalg-1.0/libcalg/compare-string.h"
int string_nocase_compare(void *string1, void *string2);
# 27 "libcalg/include/libcalg-1.0/libcalg.h" 2

# 1 "libcalg/include/libcalg-1.0/libcalg/hash-int.h" 1
# 42 "libcalg/include/libcalg-1.0/libcalg/hash-int.h"
unsigned int int_hash(void *location);
# 29 "libcalg/include/libcalg-1.0/libcalg.h" 2
# 1 "libcalg/include/libcalg-1.0/libcalg/hash-pointer.h" 1
# 42 "libcalg/include/libcalg-1.0/libcalg/hash-pointer.h"
unsigned int pointer_hash(void *location);
# 30 "libcalg/include/libcalg-1.0/libcalg.h" 2
# 1 "libcalg/include/libcalg-1.0/libcalg/hash-string.h" 1
# 42 "libcalg/include/libcalg-1.0/libcalg/hash-string.h"
unsigned int string_hash(void *string);
# 51 "libcalg/include/libcalg-1.0/libcalg/hash-string.h"
unsigned int string_nocase_hash(void *string);
# 31 "libcalg/include/libcalg-1.0/libcalg.h" 2

# 1 "libcalg/include/libcalg-1.0/libcalg/arraylist.h" 1
# 50 "libcalg/include/libcalg-1.0/libcalg/arraylist.h"
typedef void *ArrayListValue;
# 59 "libcalg/include/libcalg-1.0/libcalg/arraylist.h"
typedef struct _ArrayList ArrayList;





struct _ArrayList {



 ArrayListValue *data;



 unsigned int length;



 unsigned int _alloced;
};







typedef int (*ArrayListEqualFunc)(ArrayListValue value1,
                                  ArrayListValue value2);
# 101 "libcalg/include/libcalg-1.0/libcalg/arraylist.h"
typedef int (*ArrayListCompareFunc)(ArrayListValue value1,
                                    ArrayListValue value2);
# 116 "libcalg/include/libcalg-1.0/libcalg/arraylist.h"
ArrayList *arraylist_new(unsigned int length);







void arraylist_free(ArrayList *arraylist);
# 136 "libcalg/include/libcalg-1.0/libcalg/arraylist.h"
int arraylist_append(ArrayList *arraylist, ArrayListValue data);
# 148 "libcalg/include/libcalg-1.0/libcalg/arraylist.h"
int arraylist_prepend(ArrayList *arraylist, ArrayListValue data);
# 157 "libcalg/include/libcalg-1.0/libcalg/arraylist.h"
void arraylist_remove(ArrayList *arraylist, unsigned int index);
# 167 "libcalg/include/libcalg-1.0/libcalg/arraylist.h"
void arraylist_remove_range(ArrayList *arraylist, unsigned int index,
                            unsigned int length);
# 183 "libcalg/include/libcalg-1.0/libcalg/arraylist.h"
int arraylist_insert(ArrayList *arraylist, unsigned int index,
                     ArrayListValue data);
# 197 "libcalg/include/libcalg-1.0/libcalg/arraylist.h"
int arraylist_index_of(ArrayList *arraylist,
                       ArrayListEqualFunc callback,
                       ArrayListValue data);







void arraylist_clear(ArrayList *arraylist);
# 216 "libcalg/include/libcalg-1.0/libcalg/arraylist.h"
void arraylist_sort(ArrayList *arraylist, ArrayListCompareFunc compare_func);
# 33 "libcalg/include/libcalg-1.0/libcalg.h" 2
# 1 "libcalg/include/libcalg-1.0/libcalg/avl-tree.h" 1
# 67 "libcalg/include/libcalg-1.0/libcalg/avl-tree.h"
typedef struct _AVLTree AVLTree;





typedef void *AVLTreeKey;





typedef void *AVLTreeValue;
# 97 "libcalg/include/libcalg-1.0/libcalg/avl-tree.h"
typedef struct _AVLTreeNode AVLTreeNode;





typedef enum {
 AVL_TREE_NODE_LEFT = 0,
 AVL_TREE_NODE_RIGHT = 1
} AVLTreeNodeSide;
# 119 "libcalg/include/libcalg-1.0/libcalg/avl-tree.h"
typedef int (*AVLTreeCompareFunc)(AVLTreeValue value1, AVLTreeValue value2);
# 129 "libcalg/include/libcalg-1.0/libcalg/avl-tree.h"
AVLTree *avl_tree_new(AVLTreeCompareFunc compare_func);







void avl_tree_free(AVLTree *tree);
# 150 "libcalg/include/libcalg-1.0/libcalg/avl-tree.h"
AVLTreeNode *avl_tree_insert(AVLTree *tree, AVLTreeKey key,
                             AVLTreeValue value);
# 160 "libcalg/include/libcalg-1.0/libcalg/avl-tree.h"
void avl_tree_remove_node(AVLTree *tree, AVLTreeNode *node);
# 173 "libcalg/include/libcalg-1.0/libcalg/avl-tree.h"
int avl_tree_remove(AVLTree *tree, AVLTreeKey key);
# 185 "libcalg/include/libcalg-1.0/libcalg/avl-tree.h"
AVLTreeNode *avl_tree_lookup_node(AVLTree *tree, AVLTreeKey key);
# 200 "libcalg/include/libcalg-1.0/libcalg/avl-tree.h"
AVLTreeValue avl_tree_lookup(AVLTree *tree, AVLTreeKey key);
# 210 "libcalg/include/libcalg-1.0/libcalg/avl-tree.h"
AVLTreeNode *avl_tree_root_node(AVLTree *tree);
# 219 "libcalg/include/libcalg-1.0/libcalg/avl-tree.h"
AVLTreeKey avl_tree_node_key(AVLTreeNode *node);
# 228 "libcalg/include/libcalg-1.0/libcalg/avl-tree.h"
AVLTreeValue avl_tree_node_value(AVLTreeNode *node);
# 239 "libcalg/include/libcalg-1.0/libcalg/avl-tree.h"
AVLTreeNode *avl_tree_node_child(AVLTreeNode *node, AVLTreeNodeSide side);
# 249 "libcalg/include/libcalg-1.0/libcalg/avl-tree.h"
AVLTreeNode *avl_tree_node_parent(AVLTreeNode *node);
# 258 "libcalg/include/libcalg-1.0/libcalg/avl-tree.h"
int avl_tree_subtree_height(AVLTreeNode *node);
# 271 "libcalg/include/libcalg-1.0/libcalg/avl-tree.h"
AVLTreeValue *avl_tree_to_array(AVLTree *tree);
# 280 "libcalg/include/libcalg-1.0/libcalg/avl-tree.h"
unsigned int avl_tree_num_entries(AVLTree *tree);
# 34 "libcalg/include/libcalg-1.0/libcalg.h" 2
# 1 "libcalg/include/libcalg-1.0/libcalg/binary-heap.h" 1
# 53 "libcalg/include/libcalg-1.0/libcalg/binary-heap.h"
typedef enum {


 BINARY_HEAP_TYPE_MIN,



 BINARY_HEAP_TYPE_MAX
} BinaryHeapType;





typedef void *BinaryHeapValue;
# 85 "libcalg/include/libcalg-1.0/libcalg/binary-heap.h"
typedef int (*BinaryHeapCompareFunc)(BinaryHeapValue value1,
                                     BinaryHeapValue value2);





typedef struct _BinaryHeap BinaryHeap;
# 104 "libcalg/include/libcalg-1.0/libcalg/binary-heap.h"
BinaryHeap *binary_heap_new(BinaryHeapType heap_type,
                            BinaryHeapCompareFunc compare_func);







void binary_heap_free(BinaryHeap *heap);
# 125 "libcalg/include/libcalg-1.0/libcalg/binary-heap.h"
int binary_heap_insert(BinaryHeap *heap, BinaryHeapValue value);
# 135 "libcalg/include/libcalg-1.0/libcalg/binary-heap.h"
BinaryHeapValue binary_heap_pop(BinaryHeap *heap);
# 144 "libcalg/include/libcalg-1.0/libcalg/binary-heap.h"
unsigned int binary_heap_num_entries(BinaryHeap *heap);
# 35 "libcalg/include/libcalg-1.0/libcalg.h" 2
# 1 "libcalg/include/libcalg-1.0/libcalg/binomial-heap.h" 1
# 53 "libcalg/include/libcalg-1.0/libcalg/binomial-heap.h"
typedef enum {


 BINOMIAL_HEAP_TYPE_MIN,



 BINOMIAL_HEAP_TYPE_MAX
} BinomialHeapType;





typedef void *BinomialHeapValue;
# 85 "libcalg/include/libcalg-1.0/libcalg/binomial-heap.h"
typedef int (*BinomialHeapCompareFunc)(BinomialHeapValue value1,
                                       BinomialHeapValue value2);





typedef struct _BinomialHeap BinomialHeap;
# 104 "libcalg/include/libcalg-1.0/libcalg/binomial-heap.h"
BinomialHeap *binomial_heap_new(BinomialHeapType heap_type,
                                BinomialHeapCompareFunc compare_func);







void binomial_heap_free(BinomialHeap *heap);
# 125 "libcalg/include/libcalg-1.0/libcalg/binomial-heap.h"
int binomial_heap_insert(BinomialHeap *heap, BinomialHeapValue value);
# 135 "libcalg/include/libcalg-1.0/libcalg/binomial-heap.h"
BinomialHeapValue binomial_heap_pop(BinomialHeap *heap);
# 144 "libcalg/include/libcalg-1.0/libcalg/binomial-heap.h"
unsigned int binomial_heap_num_entries(BinomialHeap *heap);
# 36 "libcalg/include/libcalg-1.0/libcalg.h" 2
# 1 "libcalg/include/libcalg-1.0/libcalg/bloom-filter.h" 1
# 51 "libcalg/include/libcalg-1.0/libcalg/bloom-filter.h"
typedef struct _BloomFilter BloomFilter;





typedef void *BloomFilterValue;
# 67 "libcalg/include/libcalg-1.0/libcalg/bloom-filter.h"
typedef unsigned int (*BloomFilterHashFunc)(BloomFilterValue data);
# 89 "libcalg/include/libcalg-1.0/libcalg/bloom-filter.h"
BloomFilter *bloom_filter_new(unsigned int table_size,
                              BloomFilterHashFunc hash_func,
                              unsigned int num_functions);







void bloom_filter_free(BloomFilter *bloomfilter);
# 108 "libcalg/include/libcalg-1.0/libcalg/bloom-filter.h"
void bloom_filter_insert(BloomFilter *bloomfilter, BloomFilterValue value);
# 121 "libcalg/include/libcalg-1.0/libcalg/bloom-filter.h"
int bloom_filter_query(BloomFilter *bloomfilter, BloomFilterValue value);
# 132 "libcalg/include/libcalg-1.0/libcalg/bloom-filter.h"
void bloom_filter_read(BloomFilter *bloomfilter, unsigned char *array);
# 146 "libcalg/include/libcalg-1.0/libcalg/bloom-filter.h"
void bloom_filter_load(BloomFilter *bloomfilter, unsigned char *array);
# 165 "libcalg/include/libcalg-1.0/libcalg/bloom-filter.h"
BloomFilter *bloom_filter_union(BloomFilter *filter1,
                                BloomFilter *filter2);
# 185 "libcalg/include/libcalg-1.0/libcalg/bloom-filter.h"
BloomFilter *bloom_filter_intersection(BloomFilter *filter1,
                                       BloomFilter *filter2);
# 37 "libcalg/include/libcalg-1.0/libcalg.h" 2
# 1 "libcalg/include/libcalg-1.0/libcalg/hash-table.h" 1
# 56 "libcalg/include/libcalg-1.0/libcalg/hash-table.h"
typedef struct _HashTable HashTable;





typedef struct _HashTableIterator HashTableIterator;





typedef struct _HashTableEntry HashTableEntry;





typedef void *HashTableKey;





typedef void *HashTableValue;






typedef struct _HashTablePair{
 HashTableKey key;
 HashTableValue value;
} HashTablePair;





struct _HashTableIterator {
 HashTable *hash_table;
 HashTableEntry *next_entry;
 unsigned int next_chain;
};
# 116 "libcalg/include/libcalg-1.0/libcalg/hash-table.h"
typedef unsigned int (*HashTableHashFunc)(HashTableKey value);
# 125 "libcalg/include/libcalg-1.0/libcalg/hash-table.h"
typedef int (*HashTableEqualFunc)(HashTableKey value1, HashTableKey value2);






typedef void (*HashTableKeyFreeFunc)(HashTableKey value);






typedef void (*HashTableValueFreeFunc)(HashTableValue value);
# 153 "libcalg/include/libcalg-1.0/libcalg/hash-table.h"
HashTable *hash_table_new(HashTableHashFunc hash_func,
                          HashTableEqualFunc equal_func);







void hash_table_free(HashTable *hash_table);
# 173 "libcalg/include/libcalg-1.0/libcalg/hash-table.h"
void hash_table_register_free_functions(HashTable *hash_table,
                                        HashTableKeyFreeFunc key_free_func,
                                        HashTableValueFreeFunc value_free_func);
# 189 "libcalg/include/libcalg-1.0/libcalg/hash-table.h"
int hash_table_insert(HashTable *hash_table,
                      HashTableKey key,
                      HashTableValue value);
# 202 "libcalg/include/libcalg-1.0/libcalg/hash-table.h"
HashTableValue hash_table_lookup(HashTable *hash_table,
                                 HashTableKey key);
# 214 "libcalg/include/libcalg-1.0/libcalg/hash-table.h"
int hash_table_remove(HashTable *hash_table, HashTableKey key);
# 223 "libcalg/include/libcalg-1.0/libcalg/hash-table.h"
unsigned int hash_table_num_entries(HashTable *hash_table);
# 233 "libcalg/include/libcalg-1.0/libcalg/hash-table.h"
void hash_table_iterate(HashTable *hash_table, HashTableIterator *iter);
# 245 "libcalg/include/libcalg-1.0/libcalg/hash-table.h"
int hash_table_iter_has_more(HashTableIterator *iterator);
# 262 "libcalg/include/libcalg-1.0/libcalg/hash-table.h"
HashTablePair hash_table_iter_next(HashTableIterator *iterator);
# 38 "libcalg/include/libcalg-1.0/libcalg.h" 2
# 1 "libcalg/include/libcalg-1.0/libcalg/list.h" 1
# 69 "libcalg/include/libcalg-1.0/libcalg/list.h"
typedef struct _ListEntry ListEntry;





typedef struct _ListIterator ListIterator;





typedef void *ListValue;





struct _ListIterator {
 ListEntry **prev_next;
 ListEntry *current;
};
# 108 "libcalg/include/libcalg-1.0/libcalg/list.h"
typedef int (*ListCompareFunc)(ListValue value1, ListValue value2);
# 120 "libcalg/include/libcalg-1.0/libcalg/list.h"
typedef int (*ListEqualFunc)(ListValue value1, ListValue value2);







void list_free(ListEntry *list);
# 139 "libcalg/include/libcalg-1.0/libcalg/list.h"
ListEntry *list_prepend(ListEntry **list, ListValue data);
# 150 "libcalg/include/libcalg-1.0/libcalg/list.h"
ListEntry *list_append(ListEntry **list, ListValue data);
# 160 "libcalg/include/libcalg-1.0/libcalg/list.h"
ListEntry *list_prev(ListEntry *listentry);
# 170 "libcalg/include/libcalg-1.0/libcalg/list.h"
ListEntry *list_next(ListEntry *listentry);
# 179 "libcalg/include/libcalg-1.0/libcalg/list.h"
ListValue list_data(ListEntry *listentry);
# 188 "libcalg/include/libcalg-1.0/libcalg/list.h"
void list_set_data(ListEntry *listentry, ListValue value);
# 198 "libcalg/include/libcalg-1.0/libcalg/list.h"
ListEntry *list_nth_entry(ListEntry *list, unsigned int n);
# 209 "libcalg/include/libcalg-1.0/libcalg/list.h"
ListValue list_nth_data(ListEntry *list, unsigned int n);
# 218 "libcalg/include/libcalg-1.0/libcalg/list.h"
unsigned int list_length(ListEntry *list);
# 230 "libcalg/include/libcalg-1.0/libcalg/list.h"
ListValue *list_to_array(ListEntry *list);
# 241 "libcalg/include/libcalg-1.0/libcalg/list.h"
int list_remove_entry(ListEntry **list, ListEntry *entry);
# 253 "libcalg/include/libcalg-1.0/libcalg/list.h"
unsigned int list_remove_data(ListEntry **list, ListEqualFunc callback,
                              ListValue data);
# 263 "libcalg/include/libcalg-1.0/libcalg/list.h"
void list_sort(ListEntry **list, ListCompareFunc compare_func);
# 276 "libcalg/include/libcalg-1.0/libcalg/list.h"
ListEntry *list_find_data(ListEntry *list,
                          ListEqualFunc callback,
                          ListValue data);
# 287 "libcalg/include/libcalg-1.0/libcalg/list.h"
void list_iterate(ListEntry **list, ListIterator *iter);
# 298 "libcalg/include/libcalg-1.0/libcalg/list.h"
int list_iter_has_more(ListIterator *iterator);
# 308 "libcalg/include/libcalg-1.0/libcalg/list.h"
ListValue list_iter_next(ListIterator *iterator);
# 317 "libcalg/include/libcalg-1.0/libcalg/list.h"
void list_iter_remove(ListIterator *iterator);
# 39 "libcalg/include/libcalg-1.0/libcalg.h" 2
# 1 "libcalg/include/libcalg-1.0/libcalg/queue.h" 1
# 52 "libcalg/include/libcalg-1.0/libcalg/queue.h"
typedef struct _Queue Queue;





typedef void *QueueValue;
# 73 "libcalg/include/libcalg-1.0/libcalg/queue.h"
Queue *queue_new(void);







void queue_free(Queue *queue);
# 93 "libcalg/include/libcalg-1.0/libcalg/queue.h"
int queue_push_head(Queue *queue, QueueValue data);
# 103 "libcalg/include/libcalg-1.0/libcalg/queue.h"
QueueValue queue_pop_head(Queue *queue);
# 114 "libcalg/include/libcalg-1.0/libcalg/queue.h"
QueueValue queue_peek_head(Queue *queue);
# 126 "libcalg/include/libcalg-1.0/libcalg/queue.h"
int queue_push_tail(Queue *queue, QueueValue data);
# 136 "libcalg/include/libcalg-1.0/libcalg/queue.h"
QueueValue queue_pop_tail(Queue *queue);
# 147 "libcalg/include/libcalg-1.0/libcalg/queue.h"
QueueValue queue_peek_tail(Queue *queue);
# 157 "libcalg/include/libcalg-1.0/libcalg/queue.h"
int queue_is_empty(Queue *queue);
# 40 "libcalg/include/libcalg-1.0/libcalg.h" 2
# 1 "libcalg/include/libcalg-1.0/libcalg/rb-tree.h" 1
# 68 "libcalg/include/libcalg-1.0/libcalg/rb-tree.h"
typedef struct _RBTree RBTree;





typedef void *RBTreeKey;





typedef void *RBTreeValue;
# 98 "libcalg/include/libcalg-1.0/libcalg/rb-tree.h"
typedef struct _RBTreeNode RBTreeNode;
# 111 "libcalg/include/libcalg-1.0/libcalg/rb-tree.h"
typedef int (*RBTreeCompareFunc)(RBTreeValue data1, RBTreeValue data2);





typedef enum {
 RB_TREE_NODE_RED,
 RB_TREE_NODE_BLACK,
} RBTreeNodeColor;





typedef enum {
 RB_TREE_NODE_LEFT = 0,
 RB_TREE_NODE_RIGHT = 1
} RBTreeNodeSide;
# 139 "libcalg/include/libcalg-1.0/libcalg/rb-tree.h"
RBTree *rb_tree_new(RBTreeCompareFunc compare_func);







void rb_tree_free(RBTree *tree);
# 160 "libcalg/include/libcalg-1.0/libcalg/rb-tree.h"
RBTreeNode *rb_tree_insert(RBTree *tree, RBTreeKey key, RBTreeValue value);
# 169 "libcalg/include/libcalg-1.0/libcalg/rb-tree.h"
void rb_tree_remove_node(RBTree *tree, RBTreeNode *node);
# 182 "libcalg/include/libcalg-1.0/libcalg/rb-tree.h"
int rb_tree_remove(RBTree *tree, RBTreeKey key);
# 194 "libcalg/include/libcalg-1.0/libcalg/rb-tree.h"
RBTreeNode *rb_tree_lookup_node(RBTree *tree, RBTreeKey key);
# 209 "libcalg/include/libcalg-1.0/libcalg/rb-tree.h"
RBTreeValue rb_tree_lookup(RBTree *tree, RBTreeKey key);
# 219 "libcalg/include/libcalg-1.0/libcalg/rb-tree.h"
RBTreeNode *rb_tree_root_node(RBTree *tree);
# 228 "libcalg/include/libcalg-1.0/libcalg/rb-tree.h"
RBTreeKey rb_tree_node_key(RBTreeNode *node);
# 237 "libcalg/include/libcalg-1.0/libcalg/rb-tree.h"
RBTreeValue rb_tree_node_value(RBTreeNode *node);
# 248 "libcalg/include/libcalg-1.0/libcalg/rb-tree.h"
RBTreeNode *rb_tree_node_child(RBTreeNode *node, RBTreeNodeSide side);
# 258 "libcalg/include/libcalg-1.0/libcalg/rb-tree.h"
RBTreeNode *rb_tree_node_parent(RBTreeNode *node);
# 267 "libcalg/include/libcalg-1.0/libcalg/rb-tree.h"
int rb_tree_subtree_height(RBTreeNode *node);
# 280 "libcalg/include/libcalg-1.0/libcalg/rb-tree.h"
RBTreeValue *rb_tree_to_array(RBTree *tree);
# 289 "libcalg/include/libcalg-1.0/libcalg/rb-tree.h"
int rb_tree_num_entries(RBTree *tree);
# 41 "libcalg/include/libcalg-1.0/libcalg.h" 2
# 1 "libcalg/include/libcalg-1.0/libcalg/set.h" 1
# 59 "libcalg/include/libcalg-1.0/libcalg/set.h"
typedef struct _Set Set;







typedef struct _SetIterator SetIterator;





typedef struct _SetEntry SetEntry;





typedef void *SetValue;





struct _SetIterator {
 Set *set;
 SetEntry *next_entry;
 unsigned int next_chain;
};
# 101 "libcalg/include/libcalg-1.0/libcalg/set.h"
typedef unsigned int (*SetHashFunc)(SetValue value);






typedef int (*SetEqualFunc)(SetValue value1, SetValue value2);






typedef void (*SetFreeFunc)(SetValue value);
# 127 "libcalg/include/libcalg-1.0/libcalg/set.h"
Set *set_new(SetHashFunc hash_func, SetEqualFunc equal_func);







void set_free(Set *set);
# 146 "libcalg/include/libcalg-1.0/libcalg/set.h"
void set_register_free_function(Set *set, SetFreeFunc free_func);
# 159 "libcalg/include/libcalg-1.0/libcalg/set.h"
int set_insert(Set *set, SetValue data);
# 171 "libcalg/include/libcalg-1.0/libcalg/set.h"
int set_remove(Set *set, SetValue data);
# 182 "libcalg/include/libcalg-1.0/libcalg/set.h"
int set_query(Set *set, SetValue data);
# 191 "libcalg/include/libcalg-1.0/libcalg/set.h"
unsigned int set_num_entries(Set *set);
# 202 "libcalg/include/libcalg-1.0/libcalg/set.h"
SetValue *set_to_array(Set *set);
# 214 "libcalg/include/libcalg-1.0/libcalg/set.h"
Set *set_union(Set *set1, Set *set2);
# 226 "libcalg/include/libcalg-1.0/libcalg/set.h"
Set *set_intersection(Set *set1, Set *set2);
# 236 "libcalg/include/libcalg-1.0/libcalg/set.h"
void set_iterate(Set *set, SetIterator *iter);
# 247 "libcalg/include/libcalg-1.0/libcalg/set.h"
int set_iter_has_more(SetIterator *iterator);
# 257 "libcalg/include/libcalg-1.0/libcalg/set.h"
SetValue set_iter_next(SetIterator *iterator);
# 42 "libcalg/include/libcalg-1.0/libcalg.h" 2
# 1 "libcalg/include/libcalg-1.0/libcalg/slist.h" 1
# 81 "libcalg/include/libcalg-1.0/libcalg/slist.h"
typedef struct _SListEntry SListEntry;





typedef struct _SListIterator SListIterator;





typedef void *SListValue;





struct _SListIterator {
 SListEntry **prev_next;
 SListEntry *current;
};
# 118 "libcalg/include/libcalg-1.0/libcalg/slist.h"
typedef int (*SListCompareFunc)(SListValue value1, SListValue value2);
# 128 "libcalg/include/libcalg-1.0/libcalg/slist.h"
typedef int (*SListEqualFunc)(SListValue value1, SListValue value2);







void slist_free(SListEntry *list);
# 147 "libcalg/include/libcalg-1.0/libcalg/slist.h"
SListEntry *slist_prepend(SListEntry **list, SListValue data);
# 158 "libcalg/include/libcalg-1.0/libcalg/slist.h"
SListEntry *slist_append(SListEntry **list, SListValue data);
# 167 "libcalg/include/libcalg-1.0/libcalg/slist.h"
SListEntry *slist_next(SListEntry *listentry);
# 176 "libcalg/include/libcalg-1.0/libcalg/slist.h"
SListValue slist_data(SListEntry *listentry);
# 185 "libcalg/include/libcalg-1.0/libcalg/slist.h"
void slist_set_data(SListEntry *listentry, SListValue value);
# 195 "libcalg/include/libcalg-1.0/libcalg/slist.h"
SListEntry *slist_nth_entry(SListEntry *list, unsigned int n);
# 206 "libcalg/include/libcalg-1.0/libcalg/slist.h"
SListValue slist_nth_data(SListEntry *list, unsigned int n);
# 215 "libcalg/include/libcalg-1.0/libcalg/slist.h"
unsigned int slist_length(SListEntry *list);
# 227 "libcalg/include/libcalg-1.0/libcalg/slist.h"
SListValue *slist_to_array(SListEntry *list);
# 238 "libcalg/include/libcalg-1.0/libcalg/slist.h"
int slist_remove_entry(SListEntry **list, SListEntry *entry);
# 250 "libcalg/include/libcalg-1.0/libcalg/slist.h"
unsigned int slist_remove_data(SListEntry **list,
                               SListEqualFunc callback,
                               SListValue data);
# 261 "libcalg/include/libcalg-1.0/libcalg/slist.h"
void slist_sort(SListEntry **list, SListCompareFunc compare_func);
# 275 "libcalg/include/libcalg-1.0/libcalg/slist.h"
SListEntry *slist_find_data(SListEntry *list,
                            SListEqualFunc callback,
                            SListValue data);
# 287 "libcalg/include/libcalg-1.0/libcalg/slist.h"
void slist_iterate(SListEntry **list, SListIterator *iter);
# 298 "libcalg/include/libcalg-1.0/libcalg/slist.h"
int slist_iter_has_more(SListIterator *iterator);
# 308 "libcalg/include/libcalg-1.0/libcalg/slist.h"
SListValue slist_iter_next(SListIterator *iterator);
# 317 "libcalg/include/libcalg-1.0/libcalg/slist.h"
void slist_iter_remove(SListIterator *iterator);
# 43 "libcalg/include/libcalg-1.0/libcalg.h" 2
# 1 "libcalg/include/libcalg-1.0/libcalg/trie.h" 1
# 51 "libcalg/include/libcalg-1.0/libcalg/trie.h"
typedef struct _Trie Trie;





typedef void *TrieValue;
# 73 "libcalg/include/libcalg-1.0/libcalg/trie.h"
Trie *trie_new(void);







void trie_free(Trie *trie);
# 95 "libcalg/include/libcalg-1.0/libcalg/trie.h"
int trie_insert(Trie *trie, char *key, TrieValue value);
# 110 "libcalg/include/libcalg-1.0/libcalg/trie.h"
int trie_insert_binary(Trie *trie, unsigned char *key,
                       int key_length, TrieValue value);
# 124 "libcalg/include/libcalg-1.0/libcalg/trie.h"
TrieValue trie_lookup(Trie *trie, char *key);
# 138 "libcalg/include/libcalg-1.0/libcalg/trie.h"
TrieValue trie_lookup_binary(Trie *trie, unsigned char *key, int key_length);
# 151 "libcalg/include/libcalg-1.0/libcalg/trie.h"
int trie_remove(Trie *trie, char *key);
# 165 "libcalg/include/libcalg-1.0/libcalg/trie.h"
int trie_remove_binary(Trie *trie, unsigned char *key, int key_length);
# 174 "libcalg/include/libcalg-1.0/libcalg/trie.h"
unsigned int trie_num_entries(Trie *trie);
# 44 "libcalg/include/libcalg-1.0/libcalg.h" 2
# 1 "libcalg/include/libcalg-1.0/libcalg/sortedarray.h" 1
# 52 "libcalg/include/libcalg-1.0/libcalg/sortedarray.h"
typedef void *SortedArrayValue;
# 65 "libcalg/include/libcalg-1.0/libcalg/sortedarray.h"
typedef struct _SortedArray SortedArray;
# 76 "libcalg/include/libcalg-1.0/libcalg/sortedarray.h"
typedef int (*SortedArrayEqualFunc)(SortedArrayValue value1,
                                    SortedArrayValue value2);
# 88 "libcalg/include/libcalg-1.0/libcalg/sortedarray.h"
typedef int (*SortedArrayCompareFunc)(SortedArrayValue value1,
                                      SortedArrayValue value2);
# 98 "libcalg/include/libcalg-1.0/libcalg/sortedarray.h"
SortedArrayValue *sortedarray_get(SortedArray *array, unsigned int i);







unsigned int sortedarray_length(SortedArray *array);
# 121 "libcalg/include/libcalg-1.0/libcalg/sortedarray.h"
SortedArray *sortedarray_new(unsigned int length,
                             SortedArrayEqualFunc equ_func,
                             SortedArrayCompareFunc cmp_func);






void sortedarray_free(SortedArray *sortedarray);
# 139 "libcalg/include/libcalg-1.0/libcalg/sortedarray.h"
void sortedarray_remove(SortedArray *sortedarray, unsigned int index);
# 149 "libcalg/include/libcalg-1.0/libcalg/sortedarray.h"
void sortedarray_remove_range(SortedArray *sortedarray, unsigned int index,
                              unsigned int length);
# 160 "libcalg/include/libcalg-1.0/libcalg/sortedarray.h"
int sortedarray_insert(SortedArray *sortedarray, SortedArrayValue data);
# 169 "libcalg/include/libcalg-1.0/libcalg/sortedarray.h"
int sortedarray_index_of(SortedArray *sortedarray, SortedArrayValue data);






void sortedarray_clear(SortedArray *sortedarray);
# 45 "libcalg/include/libcalg-1.0/libcalg.h" 2
# 15 "src/common.h" 2

# 1 "src/list.h" 1





typedef void (*ListPrintFunc)(ListValue value);
typedef void (*ListConsumer)(ListValue value);

ListEntry *list_new(ListValue value);
ListEntry *list_from(ListValue first, ...);

ListEntry *list_concat(ListEntry *first, ListEntry *second);

ListEntry *list_last_entry(ListEntry *list);
ListValue list_last_data(ListEntry *list);

void list_foreach(ListEntry *list, ListConsumer func);
void list_print(ListEntry *list, ListPrintFunc func,
        const char *pref, const char *delim, const char *suff);

void arraylist_foreach(ArrayList *list, ListConsumer func);

typedef ListEntry AstList;
typedef ListEntry NameList;
typedef ListEntry TypeList;
typedef ListEntry ValueList;

typedef ListEntry TypedAstList;
typedef ListEntry ConsList;
typedef ListEntry SubstList;

void *nmalloc(int name);
# 17 "src/common.h" 2
# 1 "src/names.h" 1



# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 1 3 4
# 149 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 3 4

# 149 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 426 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 437 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 3 4
} max_align_t;
# 5 "src/names.h" 2




# 8 "src/names.h"
void names_init(void);
void names_free(void);

void names_settablecap(int capacity);

int names_getid(const char *name);
const char *names_getnm(int id);

int operator_id(int t);



void nmlist_free(NameList *list);
void nmlist_print(NameList *list);
# 18 "src/common.h" 2
# 1 "src/environment.h" 1



typedef struct env Env;

typedef struct expr_value Value;
typedef struct expr_typedata Type;



typedef enum expr_type {
    et_unit,
    et_int, et_float, et_bool, et_string,
    et_natfun, et_fun,
    et_tuple, et_list,

    et_poly, et_error
} TypeEnum;

typedef Value * (*NativeFunc1)(Value *);
typedef Value * (*NativeFunc2)(Value *, Value *);



struct env {
    int name;
    Type *type;
    Value *value;

    Env *next;
};

void env_free(Env *env);

Env *env_make(int name, Type *type, Value *value, Env *tail);
Env *env_addlist(NameList *names, TypeList *types, ValueList *values, Env *tail);

Env *env_find(int name, Env *env);

void env_print(Env *env);
void env_printrange(Env *env, Env *from);
void env_printall(Env *env);
# 19 "src/common.h" 2
# 1 "src/natives.h" 1




typedef void (*native_func_t)(void);
typedef Value * (*native_fn1_t)(Value *);
typedef Value * (*native_fn2_t)(Value *, Value *);

typedef struct native_function NativeDesc;

struct native_cons { Type *first, *second; };

struct native_function {

    int name;


    native_func_t func;


    TypeList *args;


    Type *retType;


    ListEntry *consList;
};





NativeDesc *native_make(const char *name, native_func_t func);


void native_args(NativeDesc *fn, Type *out, ...);


void native_cons(NativeDesc *fn, Type *first, Type *second);


NativeDesc *native_copy(NativeDesc *fn);




Type *native_actual_type(NativeDesc *fn, Type *type);


Value *native_apply(NativeDesc *fn, ValueList *args);




void natives_init();


Env *natives_env(Env *env);





Value * native_addi (Value * x , Value * y );
Value * native_subi (Value * x , Value * y );
Value * native_muli (Value * x , Value * y );
Value * native_divi (Value * x , Value * y );

Value * native_addf (Value * x , Value * y );
Value * native_subf (Value * x , Value * y );
Value * native_mulf (Value * x , Value * y );
Value * native_divf (Value * x , Value * y );

Value * native_compare (Value * x , Value * y );
Value * native_equal (Value * x , Value * y );
Value * native_lt (Value * x , Value * y );
Value * native_gt (Value * x , Value * y );
Value * native_lte (Value * x , Value * y );
Value * native_gte (Value * x , Value * y );
Value * native_and (Value * x , Value * y );
Value * native_or (Value * x , Value * y );

Value * native_print_string (Value * str );
Value * native_print_int (Value * x );
Value * native_print_float (Value * x );
Value * native_print_bool (Value * x );

Value * native_int_of_float (Value * x );
Value * native_float_of_int (Value * x );

Value * native_hd (Value * lst );
Value * native_tl (Value * lst );
# 20 "src/common.h" 2
# 1 "src/ast.h" 1




# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 1 3 4
# 6 "src/ast.h" 2

typedef struct ast Ast;

typedef enum ast_type {
    e_unit, e_int, e_float, e_bool,
    e_string, e_var,
    e_block, e_seq,
    e_funcall,
    e_let, e_if,
    e_tuple, e_list
} AstType;

struct ast {
    AstType type;
    union {

        int exprInteger;

        double exprFloat;

        
# 26 "src/ast.h" 3 4
       _Bool 
# 26 "src/ast.h"
            exprBool;

        char *exprString;

        int exprVariable;

        Ast *exprBlock;

        AstList *exprSeq;

        struct { Ast *function;
                 AstList *args; } exprFunCall;

        struct { NameList *names;
                 
# 40 "src/ast.h" 3 4
                _Bool 
# 40 "src/ast.h"
                     rec;
                 NameList *params;
                 Ast *expr;
                 Ast *block; } exprLet;

        struct { Ast *cond;
                 Ast *bIf;
                 Ast *bElse; } exprIf;

        AstList *exprTuple;

        struct { Ast *head;
                 Ast *tail; } exprList;
    };
};



const char *token_name(int t);
void token_print(int t);

char *escape(const char *str);
char *unescape(const char *str);



void alist_free(AstList *list);
void alist_print(AstList *list);





Ast *ast_make_unit (void);
Ast *ast_make_integer (int value);
Ast *ast_make_float (double value);
Ast *ast_make_bool (
# 76 "src/ast.h" 3 4
              _Bool 
# 76 "src/ast.h"
                   value);
Ast *ast_make_string (char *value);
Ast *ast_make_variable (int name);

Ast *ast_make_block (Ast *ast);
Ast *ast_make_seq (AstList *seq);

Ast *ast_make_funcall (Ast *fun, AstList *args);
Ast *ast_make_unary (int op, Ast *right);
Ast *ast_make_binary (Ast *left, int op, Ast *right);

Ast *ast_make_let (NameList *names,
              
# 88 "src/ast.h" 3 4
             _Bool 
# 88 "src/ast.h"
                  rec, NameList *params,
              Ast *expr, Ast *block);

Ast *ast_make_if (Ast *cond, Ast *bIf,
                          Ast *bElse);

Ast *ast_make_tuple (AstList *elems);

Ast *ast_make_list (Ast *head, Ast *tail);

void ast_free(Ast *ast);
void ast_print(Ast *ast);
# 21 "src/common.h" 2
# 1 "src/types.h" 1



struct expr_typedata {
    TypeEnum type;
    union {
        NativeDesc *typeNative;
        struct { TypeList *args;
                 Type *to; } typeFun;
        TypeList *typeTuple;
        Type *typeList;
        int typePoly;
    };
};



Type *type_native (NativeDesc *fn);
Type *type_fun (TypeList *args, Type *to);
Type *type_tuple (TypeList *elems);
Type *type_list (Type *elem);
Type *type_poly (int number);

void type_free(Type *type);
void type_print(Type *type);


# 27 "src/types.h" 3 4
_Bool 
# 27 "src/types.h"
    type_equ(Type *first, Type *second);



void tdlist_free(TypeList *list);
void tdlist_print(TypeList *list,
        const char *pref, const char *delim, const char *suff);


# 35 "src/types.h" 3 4
_Bool 
# 35 "src/types.h"
    tdlist_equ(TypeList *first, TypeList *second);



extern Type *terror;
extern Type *tunit;
extern Type *tint;
extern Type *tfloat;
extern Type *tbool;
extern Type *tstring;
extern Type *tlist;
extern Type *tpoly;
# 22 "src/common.h" 2
# 1 "src/values.h" 1





struct expr_value {
    TypeEnum type;
    union {
        int valInt;
        double valFloat;
        
# 11 "src/values.h" 3 4
       _Bool 
# 11 "src/values.h"
            valBool;
        char *valString;
        NativeDesc *valNative;
        struct { Env *defsite;
                 NameList *params;
                 Ast *body; } valFun;
        ValueList *valTuple;
        struct { Value *head;
                 Value *tail; } valList;
    };
};




Value *value_make_int (int value);
Value *value_make_float (double value);
Value *value_make_bool (
# 28 "src/values.h" 3 4
              _Bool 
# 28 "src/values.h"
                   value);
Value *value_make_string (char *value);
Value *value_make_native (NativeDesc *fn);
Value *value_make_fun (Env *env, NameList *params, Ast *body);
Value *value_make_tuple (ValueList *elems);
Value *value_make_list (Value *head, Value *tail);

void value_free(Value *value);
void value_print(Value *value);



ValueList *vlist_make(Value *head, ValueList *tail);
ValueList *vlist_rev(ValueList *list);

void vlist_free(ValueList *list);
void vlist_print(ValueList *list);



extern Value *vunit;
extern Value *verror;
# 23 "src/common.h" 2
# 1 "src/evaluate.h" 1




typedef struct typed_ast TypedAst;

void typed_print(TypedAst *ast);
void talist_print(TypedAstList *astlist);

extern int flag_debug;


Type *infer_type(Env *env, Ast *expr, 
# 13 "src/evaluate.h" 3 4
                                     _Bool 
# 13 "src/evaluate.h"
                                          *error);


Value *visit_eval(Env *env, Ast *expr, 
# 16 "src/evaluate.h" 3 4
                                      _Bool 
# 16 "src/evaluate.h"
                                           *error);
# 24 "src/common.h" 2
# 1 "src/run.h" 1
# 10 "src/run.h"
void run_list(AstList *list, 
# 10 "src/run.h" 3 4
                            _Bool 
# 10 "src/run.h"
                                 do_value, 
# 10 "src/run.h" 3 4
                                           _Bool 
# 10 "src/run.h"
                                                *error);
void run_expr(Env **env, Ast *expr, 
# 11 "src/run.h" 3 4
                                   _Bool 
# 11 "src/run.h"
                                        do_value, 
# 11 "src/run.h" 3 4
                                                  _Bool 
# 11 "src/run.h"
                                                       *error);

NameList *ast_names(Ast *expr);
# 25 "src/common.h" 2
# 1 "src/codegen.h" 1




void generate_code(FILE *fout, AstList *astlist);
# 26 "src/common.h" 2
# 2 "src/codegen_main.c" 2

# 1 "src/ast_make.c" 1
# 9 "src/ast_make.c"
Ast *ast_make_unit (void) {
    Ast *ast = malloc(sizeof(Ast)); if (ast == 
# 10 "src/ast_make.c" 3 4
   ((void *)0)
# 10 "src/ast_make.c"
   ) return 
# 10 "src/ast_make.c" 3 4
   ((void *)0)
# 10 "src/ast_make.c"
   ; ast->type = e_unit;;
    return ast;
}

Ast *ast_make_integer (int value) {
    Ast *ast = malloc(sizeof(Ast)); if (ast == 
# 15 "src/ast_make.c" 3 4
   ((void *)0)
# 15 "src/ast_make.c"
   ) return 
# 15 "src/ast_make.c" 3 4
   ((void *)0)
# 15 "src/ast_make.c"
   ; ast->type = e_int;;
    ast->exprInteger = value;
    return ast;
}

Ast *ast_make_float (double value) {
    Ast *ast = malloc(sizeof(Ast)); if (ast == 
# 21 "src/ast_make.c" 3 4
   ((void *)0)
# 21 "src/ast_make.c"
   ) return 
# 21 "src/ast_make.c" 3 4
   ((void *)0)
# 21 "src/ast_make.c"
   ; ast->type = e_float;;
    ast->exprFloat = value;
    return ast;
}

Ast *ast_make_bool (
# 26 "src/ast_make.c" 3 4
              _Bool 
# 26 "src/ast_make.c"
                   value) {
    Ast *ast = malloc(sizeof(Ast)); if (ast == 
# 27 "src/ast_make.c" 3 4
   ((void *)0)
# 27 "src/ast_make.c"
   ) return 
# 27 "src/ast_make.c" 3 4
   ((void *)0)
# 27 "src/ast_make.c"
   ; ast->type = e_bool;;
    ast->exprBool = value;
    return ast;
}

Ast *ast_make_string (char *value) {
    Ast *ast = malloc(sizeof(Ast)); if (ast == 
# 33 "src/ast_make.c" 3 4
   ((void *)0)
# 33 "src/ast_make.c"
   ) return 
# 33 "src/ast_make.c" 3 4
   ((void *)0)
# 33 "src/ast_make.c"
   ; ast->type = e_string;;
    ast->exprString = value;
    return ast;
}

Ast *ast_make_variable (int name) {
    Ast *ast = malloc(sizeof(Ast)); if (ast == 
# 39 "src/ast_make.c" 3 4
   ((void *)0)
# 39 "src/ast_make.c"
   ) return 
# 39 "src/ast_make.c" 3 4
   ((void *)0)
# 39 "src/ast_make.c"
   ; ast->type = e_var;;
    ast->exprVariable = name;
    return ast;
}

Ast *ast_make_block (Ast *block) {
    Ast *ast = malloc(sizeof(Ast)); if (ast == 
# 45 "src/ast_make.c" 3 4
   ((void *)0)
# 45 "src/ast_make.c"
   ) return 
# 45 "src/ast_make.c" 3 4
   ((void *)0)
# 45 "src/ast_make.c"
   ; ast->type = e_block;;
    ast->exprBlock = block;
    return ast;
}

Ast *ast_make_seq (AstList *seq) {
    Ast *ast = malloc(sizeof(Ast)); if (ast == 
# 51 "src/ast_make.c" 3 4
   ((void *)0)
# 51 "src/ast_make.c"
   ) return 
# 51 "src/ast_make.c" 3 4
   ((void *)0)
# 51 "src/ast_make.c"
   ; ast->type = e_seq;;
    ast->exprSeq = seq;
    return ast;
}

Ast *ast_make_funcall (Ast *fun, AstList *args) {
    Ast *ast = malloc(sizeof(Ast)); if (ast == 
# 57 "src/ast_make.c" 3 4
   ((void *)0)
# 57 "src/ast_make.c"
   ) return 
# 57 "src/ast_make.c" 3 4
   ((void *)0)
# 57 "src/ast_make.c"
   ; ast->type = e_funcall;;
    ast->exprFunCall.function = fun;
    ast->exprFunCall.args = args;
    return ast;
}

Ast *ast_make_unary (int op, Ast *right) {

    return ast_make_funcall(ast_make_variable(op), list_new(right));
}

Ast *ast_make_binary (Ast *left, int op, Ast *right) {

    AstList *args = list_new(left);
    list_append(&args, right);
    return ast_make_funcall(ast_make_variable(op), args);
}

Ast *ast_make_let (NameList *names,
              
# 76 "src/ast_make.c" 3 4
             _Bool 
# 76 "src/ast_make.c"
                  rec, NameList *params,
              Ast *expr, Ast *block) {
    Ast *ast = malloc(sizeof(Ast)); if (ast == 
# 78 "src/ast_make.c" 3 4
   ((void *)0)
# 78 "src/ast_make.c"
   ) return 
# 78 "src/ast_make.c" 3 4
   ((void *)0)
# 78 "src/ast_make.c"
   ; ast->type = e_let;;
    ast->exprLet.names = names;
    ast->exprLet.rec = rec;
    ast->exprLet.params = params;
    ast->exprLet.expr = expr;
    ast->exprLet.block = block;
    return ast;
}

Ast *ast_make_if (Ast *cond, Ast *bIf,
                          Ast *bElse) {
    Ast *ast = malloc(sizeof(Ast)); if (ast == 
# 89 "src/ast_make.c" 3 4
   ((void *)0)
# 89 "src/ast_make.c"
   ) return 
# 89 "src/ast_make.c" 3 4
   ((void *)0)
# 89 "src/ast_make.c"
   ; ast->type = e_if;;
    ast->exprIf.cond = cond;
    ast->exprIf.bIf = bIf;
    ast->exprIf.bElse = bElse;
    return ast;
}

Ast *ast_make_tuple (AstList *exprs) {
    Ast *ast = malloc(sizeof(Ast)); if (ast == 
# 97 "src/ast_make.c" 3 4
   ((void *)0)
# 97 "src/ast_make.c"
   ) return 
# 97 "src/ast_make.c" 3 4
   ((void *)0)
# 97 "src/ast_make.c"
   ; ast->type = e_tuple;;
    ast->exprTuple = exprs;
    return ast;
}

Ast *ast_make_list (Ast *head, Ast *tail) {
    Ast *ast = malloc(sizeof(Ast)); if (ast == 
# 103 "src/ast_make.c" 3 4
   ((void *)0)
# 103 "src/ast_make.c"
   ) return 
# 103 "src/ast_make.c" 3 4
   ((void *)0)
# 103 "src/ast_make.c"
   ; ast->type = e_list;;
    ast->exprList.head = head;
    ast->exprList.tail = tail;
    return ast;
}
# 4 "src/codegen_main.c" 2
# 1 "src/ast_free.c" 1


void alist_free(AstList *list) {
    list_foreach(list, (ListConsumer) ast_free);
    list_free(list);
}

void ast_free(Ast *ast) {
    if (ast == 
# 9 "src/ast_free.c" 3 4
              ((void *)0)
# 9 "src/ast_free.c"
                  ) return;

    switch (ast->type) {
    case e_string:
        free(ast->exprString);
        break;
    case e_block:
        ast_free(ast->exprBlock);
        break;
    case e_seq:
        alist_free(ast->exprSeq);
        break;
    case e_funcall:
        ast_free(ast->exprFunCall.function);
        alist_free(ast->exprFunCall.args);
        break;
    case e_let:
        nmlist_free(ast->exprLet.params);
        ast_free(ast->exprLet.expr);
        ast_free(ast->exprLet.block);
        break;
    case e_if:
        ast_free(ast->exprIf.cond);
        ast_free(ast->exprIf.bIf);
        ast_free(ast->exprIf.bElse);
        break;
    case e_tuple:
        alist_free(ast->exprTuple);
        break;
    case e_list:
        ast_free(ast->exprList.head);
        ast_free(ast->exprList.tail);
        break;
    default:
        break;
    }

    free(ast);
}
# 5 "src/codegen_main.c" 2
# 1 "src/value_make.c" 1
# 9 "src/value_make.c"
Value *value_make_unit (void) {
    Value *val = malloc(sizeof(Value)); if (val == 
# 10 "src/value_make.c" 3 4
   ((void *)0)
# 10 "src/value_make.c"
   ) return 
# 10 "src/value_make.c" 3 4
   ((void *)0)
# 10 "src/value_make.c"
   ; val->type = et_unit;;
    return val;
}

Value *value_make_int (int value) {
    Value *val = malloc(sizeof(Value)); if (val == 
# 15 "src/value_make.c" 3 4
   ((void *)0)
# 15 "src/value_make.c"
   ) return 
# 15 "src/value_make.c" 3 4
   ((void *)0)
# 15 "src/value_make.c"
   ; val->type = et_int;;
    val->valInt = value;
    return val;
}

Value *value_make_float (double value) {
    Value *val = malloc(sizeof(Value)); if (val == 
# 21 "src/value_make.c" 3 4
   ((void *)0)
# 21 "src/value_make.c"
   ) return 
# 21 "src/value_make.c" 3 4
   ((void *)0)
# 21 "src/value_make.c"
   ; val->type = et_float;;
    val->valFloat = value;
    return val;
}

Value *value_make_bool (
# 26 "src/value_make.c" 3 4
              _Bool 
# 26 "src/value_make.c"
                   value) {
    Value *val = malloc(sizeof(Value)); if (val == 
# 27 "src/value_make.c" 3 4
   ((void *)0)
# 27 "src/value_make.c"
   ) return 
# 27 "src/value_make.c" 3 4
   ((void *)0)
# 27 "src/value_make.c"
   ; val->type = et_bool;;
    val->valBool = value;
    return val;
}

Value *value_make_string (char *value) {
    Value *val = malloc(sizeof(Value)); if (val == 
# 33 "src/value_make.c" 3 4
   ((void *)0)
# 33 "src/value_make.c"
   ) return 
# 33 "src/value_make.c" 3 4
   ((void *)0)
# 33 "src/value_make.c"
   ; val->type = et_string;;
    val->valString = value;
    return val;
}

Value *value_make_native (NativeDesc *fn) {
    Value *val = malloc(sizeof(Value)); if (val == 
# 39 "src/value_make.c" 3 4
   ((void *)0)
# 39 "src/value_make.c"
   ) return 
# 39 "src/value_make.c" 3 4
   ((void *)0)
# 39 "src/value_make.c"
   ; val->type = et_natfun;;
    val->valNative = fn;
    return val;
}

Value *value_make_fun (Env *defsite, NameList *params, Ast *body) {
    Value *val = malloc(sizeof(Value)); if (val == 
# 45 "src/value_make.c" 3 4
   ((void *)0)
# 45 "src/value_make.c"
   ) return 
# 45 "src/value_make.c" 3 4
   ((void *)0)
# 45 "src/value_make.c"
   ; val->type = et_fun;;
    val->valFun.defsite = defsite;
    val->valFun.params = params;
    val->valFun.body = body;
    return val;
}

Value *value_make_tuple (ValueList *elems) {
    Value *val = malloc(sizeof(Value)); if (val == 
# 53 "src/value_make.c" 3 4
   ((void *)0)
# 53 "src/value_make.c"
   ) return 
# 53 "src/value_make.c" 3 4
   ((void *)0)
# 53 "src/value_make.c"
   ; val->type = et_tuple;;
    val->valTuple = elems;
    return val;
}

Value *value_make_list (Value *head, Value *tail) {
    Value *val = malloc(sizeof(Value)); if (val == 
# 59 "src/value_make.c" 3 4
   ((void *)0)
# 59 "src/value_make.c"
   ) return 
# 59 "src/value_make.c" 3 4
   ((void *)0)
# 59 "src/value_make.c"
   ; val->type = et_list;;
    val->valList.head = head;
    val->valList.tail = tail;
    return val;
}

Value *value_make_error (void) {
    Value *val = malloc(sizeof(Value)); if (val == 
# 66 "src/value_make.c" 3 4
   ((void *)0)
# 66 "src/value_make.c"
   ) return 
# 66 "src/value_make.c" 3 4
   ((void *)0)
# 66 "src/value_make.c"
   ; val->type = et_error;;
    return val;
}


static Value v_unit = { .type = et_unit };
static Value v_error = { .type = et_error };

Value *vunit = &v_unit;
Value *verror = &v_error;
# 6 "src/codegen_main.c" 2
# 1 "src/value_free.c" 1


void vlist_free(ValueList *list) {
    list_foreach(list, (ListConsumer) value_free);
    list_free(list);
}

void value_free(Value *value) {
    if (value == 
# 9 "src/value_free.c" 3 4
                ((void *)0)
# 9 "src/value_free.c"
                    ) return;

    switch (value->type) {
    case et_fun:
        nmlist_free(value->valFun.params);
        ast_free(value->valFun.body);
        break;
    case et_tuple:
        vlist_free(value->valTuple);
        break;
    case et_list:
        value_free(value->valList.head);
        value_free(value->valList.tail);
        break;
    default:
        break;
    }

    free(value);
}
# 7 "src/codegen_main.c" 2
# 1 "src/value_print.c" 1


void value_print_list(Value *list);

void vlist_print(ValueList *list) {
    list_print(list, (ListPrintFunc) value_print, "(", ", ", ")");
}

void value_print(Value *value) {
    switch (value->type) {
    case et_unit:
        printf("()");
        break;
    case et_int:
        printf("%d", value->valInt);
        break;
    case et_float:
        printf("%g", value->valFloat);
        break;
    case et_bool:
        printf("%s", (value->valBool ? "true" : "false"));
        break;
    case et_string:
        printf("\"%s\"", escape(value->valString));
        break;
    case et_natfun:
        printf("<native-fun>");
        break;
    case et_fun:
        printf("<fun>");
        break;
    case et_tuple:
        vlist_print(value->valTuple);
        break;
    case et_list:
        printf("[");
        value_print_list(value);
        printf("]");
        break;
    case et_error:
    default:
        printf("???");
        break;
    }
}


void value_print_list(Value *list) {
    Value *head = list->valList.head;
    Value *tail = list->valList.tail;


    if (head == 
# 53 "src/value_print.c" 3 4
               ((void *)0)
# 53 "src/value_print.c"
                   ) return;


    value_print(head);


    if (tail->valList.head != 
# 59 "src/value_print.c" 3 4
                             ((void *)0)
# 59 "src/value_print.c"
                                 ) {
        printf("; ");
        value_print_list(tail);
    }
}
# 8 "src/codegen_main.c" 2
# 1 "src/type_make.c" 1



Type *new_type(TypeEnum et) {
    Type *type = malloc(sizeof(Type));
    if (type == 
# 6 "src/type_make.c" 3 4
               ((void *)0)
# 6 "src/type_make.c"
                   ) return 
# 6 "src/type_make.c" 3 4
                            ((void *)0)
# 6 "src/type_make.c"
                                ;
    type->type = et;
    return type;
}


Type *type_native (NativeDesc *fn) {
    Type *type = new_type(et_natfun);
    type->typeNative = fn;
    return type;
}

Type *type_fun (TypeList *args, Type *to) {
    Type *type = new_type(et_fun);
    type->typeFun.args = args;
    type->typeFun.to = to;
    return type;
}

Type *type_tuple (TypeList *elems) {
    Type *type = new_type(et_tuple);
    type->typeTuple = elems;
    return type;
}

Type *type_list (Type *elem) {
    Type *type = new_type(et_list);
    type->typeList = elem;
    return type;
}

Type *type_poly (int number) {
    Type *type = new_type(et_poly);
    type->typePoly = number;
    return type;
}


static Type t_error = { .type = et_error };
static Type t_unit = { .type = et_unit };
static Type t_int = { .type = et_int };
static Type t_float = { .type = et_float };
static Type t_bool = { .type = et_bool };
static Type t_string = { .type = et_string };
static Type t_poly = { .type = et_poly, .typePoly = 0 };
static Type t_list = { .type = et_list, .typeList = &t_poly };

Type *terror = &t_error;
Type *tunit = &t_unit;
Type *tint = &t_int;
Type *tfloat = &t_float;
Type *tbool = &t_bool;
Type *tstring = &t_string;
Type *tlist = &t_list;
Type *tpoly = &t_poly;
# 9 "src/codegen_main.c" 2
# 1 "src/type_free.c" 1


void tdlist_free(TypeList *list) {
    list_foreach(list, (ListConsumer) type_free);
    list_free(list);
}

void type_free(Type *type) {
    if (type == 
# 9 "src/type_free.c" 3 4
               ((void *)0)
# 9 "src/type_free.c"
                   ) return;

    switch (type->type) {
# 21 "src/type_free.c"
    case et_fun:
        tdlist_free(type->typeFun.args);
        type_free(type->typeFun.to);
        break;
    case et_tuple:
        tdlist_free(type->typeTuple);
        break;
    case et_list:
        type_free(type->typeList);
        break;
    default:
        break;
    }

    free(type);
}
# 10 "src/codegen_main.c" 2
# 1 "src/type_print.c" 1


void tdlist_print(TypeList *list, const char *pref, const char *delim, const char *suff) {
    list_print(list, (ListPrintFunc) type_print, pref, delim, suff);
}

void type_print(Type *type) {
    if (type == 
# 8 "src/type_print.c" 3 4
               ((void *)0)
# 8 "src/type_print.c"
                   ) {
        printf("<null>");
        return;
    }

    switch (type->type) {
    case et_unit:
        printf("unit");
        break;
    case et_int:
        printf("int");
        break;
    case et_float:
        printf("float");
        break;
    case et_bool:
        printf("bool");
        break;
    case et_string:
        printf("string");
        break;
    case et_natfun:
        printf("(");
        tdlist_print(type->typeNative->args, "", " -> ", "");
        printf(" -> ");
        type_print(type->typeNative->retType);
        printf(")");
        break;
    case et_fun:
        printf("(");
        tdlist_print(type->typeFun.args, "", " -> ", "");
        printf(" -> ");
        type_print(type->typeFun.to);
        printf(")");
        break;
    case et_tuple:
        tdlist_print(type->typeTuple, "(", " * ", ")");
        break;
    case et_list:
        type_print(type->typeList);
        printf(" list");
        break;
    case et_poly:
        printf("'");
        if (type->typePoly <= 26) {
            printf("%c", (char) ('a' + type->typePoly - 1));
        } else {
            printf("_%d", type->typePoly);
        }
        break;
    case et_error:
        printf("<error>");
        break;
    default:
        printf("<unknown>");
        break;
    }
}
# 11 "src/codegen_main.c" 2
# 1 "src/type_equ.c" 1



# 3 "src/type_equ.c" 3 4
_Bool 
# 3 "src/type_equ.c"
    tdlist_equ(TypeList *first, TypeList *second) {
    ListIterator it1, it2;
    list_iterate(&first, &it1);
    list_iterate(&second, &it2);

    while (list_iter_has_more(&it1) && list_iter_has_more(&it2)) {
        Type *type1 = list_iter_next(&it1);
        Type *type2 = list_iter_next(&it2);

        if (!type_equ(type1, type2))
            return 
# 13 "src/type_equ.c" 3 4
                  0
# 13 "src/type_equ.c"
                       ;
    }


    return list_iter_has_more(&it1) || list_iter_has_more(&it2);
}


# 20 "src/type_equ.c" 3 4
_Bool 
# 20 "src/type_equ.c"
    type_equ(Type *first, Type *second) {
    if (first == 
# 21 "src/type_equ.c" 3 4
                ((void *)0) 
# 21 "src/type_equ.c"
                     || second == 
# 21 "src/type_equ.c" 3 4
                                  ((void *)0)
# 21 "src/type_equ.c"
                                      ) return 
# 21 "src/type_equ.c" 3 4
                                               0
# 21 "src/type_equ.c"
                                                    ;
    if (first->type != second->type) {
        return 
# 23 "src/type_equ.c" 3 4
              0
# 23 "src/type_equ.c"
                   ;
    }

    switch (first->type) {
    case et_unit:
    case et_int:
    case et_float:
    case et_bool:
    case et_string:
    case et_error:
        return 
# 33 "src/type_equ.c" 3 4
              1
# 33 "src/type_equ.c"
                  ;







    case et_fun:
        return tdlist_equ(first->typeFun.args, second->typeFun.args)
                && type_equ(first->typeFun.to, second->typeFun.to);
    case et_tuple:
        return tdlist_equ(first->typeTuple, second->typeTuple);
    case et_list:
        return type_equ(first->typeList, second->typeList);
    case et_poly:
        return first->typePoly == second->typePoly;
    default:
        fprintf(
# 51 "src/type_equ.c" 3 4
               stderr
# 51 "src/type_equ.c"
                     , "Type equality not implemented yet\n");
        return 
# 52 "src/type_equ.c" 3 4
              0
# 52 "src/type_equ.c"
                   ;
    }
}
# 12 "src/codegen_main.c" 2
# 1 "src/name_list.c" 1



void nmlist_free(NameList *list) {
    list_foreach(list, free);
    list_free(list);
}

static void print_nameptr(int *ptr) {
    printf("%s", names_getnm(*ptr));
}

void nmlist_print(NameList *list) {
    list_print(list, (ListPrintFunc) print_nameptr, "(", ", ", ")");
}
# 13 "src/codegen_main.c" 2
# 1 "src/name_table.c" 1
# 12 "src/name_table.c"
static int add_name(char *name);

static HashTable *name_table = 
# 14 "src/name_table.c" 3 4
                              ((void *)0)
# 14 "src/name_table.c"
                                  ;
static HashTable *id_table = 
# 15 "src/name_table.c" 3 4
                            ((void *)0)
# 15 "src/name_table.c"
                                ;

static int last_id = 1;


int names_getid(const char *name) {
    char *namedup = strdup(name);
    int *id = hash_table_lookup(name_table, namedup);
    return id != 
# 23 "src/name_table.c" 3 4
                ((void *)0) 
# 23 "src/name_table.c"
                     ? *id : add_name(namedup);
}

const char *names_getnm(int id) {
    if (id == 0) return "<no-name>";
    const char *name = hash_table_lookup(id_table, &id);
    return name != 
# 29 "src/name_table.c" 3 4
                  ((void *)0) 
# 29 "src/name_table.c"
                       ? name : "<undefined>";
}

void names_init(void) {
    if (name_table != 
# 33 "src/name_table.c" 3 4
                     ((void *)0)
# 33 "src/name_table.c"
                         ) {
        fprintf(
# 34 "src/name_table.c" 3 4
               stderr
# 34 "src/name_table.c"
                     , "Name table is already initialized\n");
    } else {
        name_table = hash_table_new(string_hash, string_equal);
        id_table = hash_table_new(int_hash, int_equal);
        if (name_table == 
# 38 "src/name_table.c" 3 4
                         ((void *)0) 
# 38 "src/name_table.c"
                              || id_table == 
# 38 "src/name_table.c" 3 4
                                             ((void *)0)
# 38 "src/name_table.c"
                                                 ) {
            fprintf(
# 39 "src/name_table.c" 3 4
                   stderr
# 39 "src/name_table.c"
                         , "Name table was not initialized\n");
            if (name_table != 
# 40 "src/name_table.c" 3 4
                             ((void *)0)
# 40 "src/name_table.c"
                                 ) {
                hash_table_free(name_table);
                name_table = 
# 42 "src/name_table.c" 3 4
                            ((void *)0)
# 42 "src/name_table.c"
                                ;
            }
            if (id_table != 
# 44 "src/name_table.c" 3 4
                           ((void *)0)
# 44 "src/name_table.c"
                               ) {
                hash_table_free(id_table);
                id_table = 
# 46 "src/name_table.c" 3 4
                          ((void *)0)
# 46 "src/name_table.c"
                              ;
            }
        } else {
            hash_table_register_free_functions(name_table, 
# 49 "src/name_table.c" 3 4
                                                          ((void *)0)
# 49 "src/name_table.c"
                                                              , 
# 49 "src/name_table.c" 3 4
                                                                ((void *)0)
# 49 "src/name_table.c"
                                                                    );
        }
    }
}

void names_free(void) {
    if (name_table == 
# 55 "src/name_table.c" 3 4
                     ((void *)0)
# 55 "src/name_table.c"
                         ) {
        fprintf(
# 56 "src/name_table.c" 3 4
               stderr
# 56 "src/name_table.c"
                     , "Name table is not initialized\n");
    } else {
        hash_table_free(name_table);
        hash_table_free(id_table);

        name_table = 
# 61 "src/name_table.c" 3 4
                    ((void *)0)
# 61 "src/name_table.c"
                        ;
        id_table = 
# 62 "src/name_table.c" 3 4
                  ((void *)0)
# 62 "src/name_table.c"
                      ;
    }
}



static int add_name(char *name) {
    int *id = malloc(sizeof(int));
    *id = ++last_id;

    hash_table_insert(name_table, name, id);
    hash_table_insert(id_table, id, name);

    return last_id;
}
# 14 "src/codegen_main.c" 2
# 1 "src/native_make.c" 1





NativeDesc *native_make(const char *name, native_func_t func) {
    NativeDesc *fn = malloc(sizeof(NativeDesc));
    memset(fn, 0, sizeof(NativeDesc));

    fn->name = names_getid(name);
    fn->func = func;
    fn->consList = 
# 12 "src/native_make.c" 3 4
                  ((void *)0)
# 12 "src/native_make.c"
                      ;

    return fn;
}




void native_args(NativeDesc *fn, Type *out, ...) {
    va_list ap;
    
# 22 "src/native_make.c" 3 4
   __builtin_va_start(
# 22 "src/native_make.c"
   ap
# 22 "src/native_make.c" 3 4
   ,
# 22 "src/native_make.c"
   out
# 22 "src/native_make.c" 3 4
   )
# 22 "src/native_make.c"
                    ;

    fn->retType = out;
    fn->args = 
# 25 "src/native_make.c" 3 4
              ((void *)0)
# 25 "src/native_make.c"
                  ;

    Type *arg;
    while ((arg = 
# 28 "src/native_make.c" 3 4
                 __builtin_va_arg(
# 28 "src/native_make.c"
                 ap
# 28 "src/native_make.c" 3 4
                 ,
# 28 "src/native_make.c"
                 Type *
# 28 "src/native_make.c" 3 4
                 )
# 28 "src/native_make.c"
                                   ) != 
# 28 "src/native_make.c" 3 4
                                        ((void *)0)
# 28 "src/native_make.c"
                                            ) {
        list_append(&fn->args, arg);
    }

    
# 32 "src/native_make.c" 3 4
   __builtin_va_end(
# 32 "src/native_make.c"
   ap
# 32 "src/native_make.c" 3 4
   )
# 32 "src/native_make.c"
             ;
}




void native_cons(NativeDesc *fn, Type *first, Type *second) {
    struct native_cons *cons = malloc(sizeof(struct native_cons));
    cons->first = first;
    cons->second = second;

    list_append(&fn->consList, cons);
}




NativeDesc *native_copy(NativeDesc *fn) {
    NativeDesc *copy = malloc(sizeof(NativeDesc));

    memcpy(copy, fn, sizeof(NativeDesc));

    return copy;
}
# 15 "src/codegen_main.c" 2
# 1 "src/native_init.c" 1



static ListEntry *functions = 
# 4 "src/native_init.c" 3 4
                             ((void *)0)
# 4 "src/native_init.c"
                                 ;
# 18 "src/native_init.c"
void natives_init() {
    NativeDesc *fn;



    do { fn = native_make(("+"), (native_func_t) native_addi ); native_args(fn, tint, tint, tint, 
# 23 "src/native_init.c" 3 4
   ((void *)0)
# 23 "src/native_init.c"
   ); } while (
# 23 "src/native_init.c" 3 4
   0
# 23 "src/native_init.c"
   ); list_append(&functions, fn);
    do { fn = native_make(("-"), (native_func_t) native_subi ); native_args(fn, tint, tint, tint, 
# 24 "src/native_init.c" 3 4
   ((void *)0)
# 24 "src/native_init.c"
   ); } while (
# 24 "src/native_init.c" 3 4
   0
# 24 "src/native_init.c"
   ); list_append(&functions, fn);
    do { fn = native_make(("*"), (native_func_t) native_muli ); native_args(fn, tint, tint, tint, 
# 25 "src/native_init.c" 3 4
   ((void *)0)
# 25 "src/native_init.c"
   ); } while (
# 25 "src/native_init.c" 3 4
   0
# 25 "src/native_init.c"
   ); list_append(&functions, fn);
    do { fn = native_make(("/"), (native_func_t) native_divi ); native_args(fn, tint, tint, tint, 
# 26 "src/native_init.c" 3 4
   ((void *)0)
# 26 "src/native_init.c"
   ); } while (
# 26 "src/native_init.c" 3 4
   0
# 26 "src/native_init.c"
   ); list_append(&functions, fn);



    do { fn = native_make(("+."), (native_func_t) native_addf ); native_args(fn, tfloat, tfloat, tfloat, 
# 30 "src/native_init.c" 3 4
   ((void *)0)
# 30 "src/native_init.c"
   ); } while (
# 30 "src/native_init.c" 3 4
   0
# 30 "src/native_init.c"
   ); list_append(&functions, fn);
    do { fn = native_make(("-."), (native_func_t) native_subf ); native_args(fn, tfloat, tfloat, tfloat, 
# 31 "src/native_init.c" 3 4
   ((void *)0)
# 31 "src/native_init.c"
   ); } while (
# 31 "src/native_init.c" 3 4
   0
# 31 "src/native_init.c"
   ); list_append(&functions, fn);
    do { fn = native_make(("*."), (native_func_t) native_mulf ); native_args(fn, tfloat, tfloat, tfloat, 
# 32 "src/native_init.c" 3 4
   ((void *)0)
# 32 "src/native_init.c"
   ); } while (
# 32 "src/native_init.c" 3 4
   0
# 32 "src/native_init.c"
   ); list_append(&functions, fn);
    do { fn = native_make(("/."), (native_func_t) native_divf ); native_args(fn, tfloat, tfloat, tfloat, 
# 33 "src/native_init.c" 3 4
   ((void *)0)
# 33 "src/native_init.c"
   ); } while (
# 33 "src/native_init.c" 3 4
   0
# 33 "src/native_init.c"
   ); list_append(&functions, fn);



    do { fn = native_make(("compare"), (native_func_t) native_compare ); native_args(fn, tint, tpoly, tpoly, 
# 37 "src/native_init.c" 3 4
   ((void *)0)
# 37 "src/native_init.c"
   ); } while (
# 37 "src/native_init.c" 3 4
   0
# 37 "src/native_init.c"
   );
    native_cons(fn, (type_poly(1)), (type_poly(2)));
    list_append(&functions, fn);

    do { fn = native_make(("="), (native_func_t) native_equal ); native_args(fn, tbool, tpoly, tpoly, 
# 41 "src/native_init.c" 3 4
   ((void *)0)
# 41 "src/native_init.c"
   ); } while (
# 41 "src/native_init.c" 3 4
   0
# 41 "src/native_init.c"
   );
    native_cons(fn, (type_poly(1)), (type_poly(2)));
    list_append(&functions, fn);

    do { fn = native_make(("<"), (native_func_t) native_lt ); native_args(fn, tbool, tpoly, tpoly, 
# 45 "src/native_init.c" 3 4
   ((void *)0)
# 45 "src/native_init.c"
   ); } while (
# 45 "src/native_init.c" 3 4
   0
# 45 "src/native_init.c"
   );
    native_cons(fn, (type_poly(1)), (type_poly(2)));
    list_append(&functions, fn);

    do { fn = native_make(("<="), (native_func_t) native_lte ); native_args(fn, tbool, tpoly, tpoly, 
# 49 "src/native_init.c" 3 4
   ((void *)0)
# 49 "src/native_init.c"
   ); } while (
# 49 "src/native_init.c" 3 4
   0
# 49 "src/native_init.c"
   );
    native_cons(fn, (type_poly(1)), (type_poly(2)));
    list_append(&functions, fn);

    do { fn = native_make((">"), (native_func_t) native_gt ); native_args(fn, tbool, tpoly, tpoly, 
# 53 "src/native_init.c" 3 4
   ((void *)0)
# 53 "src/native_init.c"
   ); } while (
# 53 "src/native_init.c" 3 4
   0
# 53 "src/native_init.c"
   );
    native_cons(fn, (type_poly(1)), (type_poly(2)));
    list_append(&functions, fn);

    do { fn = native_make((">="), (native_func_t) native_gte ); native_args(fn, tbool, tpoly, tpoly, 
# 57 "src/native_init.c" 3 4
   ((void *)0)
# 57 "src/native_init.c"
   ); } while (
# 57 "src/native_init.c" 3 4
   0
# 57 "src/native_init.c"
   );
    native_cons(fn, (type_poly(1)), (type_poly(2)));
    list_append(&functions, fn);



    do { fn = native_make(("&&"), (native_func_t) native_and ); native_args(fn, tbool, tbool, tbool, 
# 63 "src/native_init.c" 3 4
   ((void *)0)
# 63 "src/native_init.c"
   ); } while (
# 63 "src/native_init.c" 3 4
   0
# 63 "src/native_init.c"
   ); list_append(&functions, fn);
    do { fn = native_make(("||"), (native_func_t) native_or ); native_args(fn, tbool, tbool, tbool, 
# 64 "src/native_init.c" 3 4
   ((void *)0)
# 64 "src/native_init.c"
   ); } while (
# 64 "src/native_init.c" 3 4
   0
# 64 "src/native_init.c"
   ); list_append(&functions, fn);



    do { fn = native_make(("print_string"), (native_func_t) native_print_string ); native_args(fn, tunit, tstring, 
# 68 "src/native_init.c" 3 4
   ((void *)0)
# 68 "src/native_init.c"
   ); } while (
# 68 "src/native_init.c" 3 4
   0
# 68 "src/native_init.c"
   ); list_append(&functions, fn);
    do { fn = native_make(("print_int"), (native_func_t) native_print_int ); native_args(fn, tunit, tint, 
# 69 "src/native_init.c" 3 4
   ((void *)0)
# 69 "src/native_init.c"
   ); } while (
# 69 "src/native_init.c" 3 4
   0
# 69 "src/native_init.c"
   ); list_append(&functions, fn);
    do { fn = native_make(("print_float"), (native_func_t) native_print_float ); native_args(fn, tunit, tfloat, 
# 70 "src/native_init.c" 3 4
   ((void *)0)
# 70 "src/native_init.c"
   ); } while (
# 70 "src/native_init.c" 3 4
   0
# 70 "src/native_init.c"
   ); list_append(&functions, fn);
    do { fn = native_make(("print_bool"), (native_func_t) native_print_bool ); native_args(fn, tunit, tbool, 
# 71 "src/native_init.c" 3 4
   ((void *)0)
# 71 "src/native_init.c"
   ); } while (
# 71 "src/native_init.c" 3 4
   0
# 71 "src/native_init.c"
   ); list_append(&functions, fn);



    do { fn = native_make(("int_of_float"), (native_func_t) native_int_of_float ); native_args(fn, tint, tfloat, 
# 75 "src/native_init.c" 3 4
   ((void *)0)
# 75 "src/native_init.c"
   ); } while (
# 75 "src/native_init.c" 3 4
   0
# 75 "src/native_init.c"
   ); list_append(&functions, fn);
    do { fn = native_make(("float_of_int"), (native_func_t) native_float_of_int ); native_args(fn, tfloat, tint, 
# 76 "src/native_init.c" 3 4
   ((void *)0)
# 76 "src/native_init.c"
   ); } while (
# 76 "src/native_init.c" 3 4
   0
# 76 "src/native_init.c"
   ); list_append(&functions, fn);



    do { fn = native_make(("hd"), (native_func_t) native_hd ); native_args(fn, tpoly, tlist, 
# 80 "src/native_init.c" 3 4
   ((void *)0)
# 80 "src/native_init.c"
   ); } while (
# 80 "src/native_init.c" 3 4
   0
# 80 "src/native_init.c"
   ); list_append(&functions, fn);
    native_cons(fn, (type_poly(1)), type_list((type_poly(0))));
    list_append(&functions, fn);

    do { fn = native_make(("tl"), (native_func_t) native_tl ); native_args(fn, tlist, tlist, 
# 84 "src/native_init.c" 3 4
   ((void *)0)
# 84 "src/native_init.c"
   ); } while (
# 84 "src/native_init.c" 3 4
   0
# 84 "src/native_init.c"
   ); list_append(&functions, fn);
    native_cons(fn, (type_poly(0)), (type_poly(1)));
    list_append(&functions, fn);
}


Env *natives_env(Env *env) {
    ListIterator it;
    list_iterate(&functions, &it);

    while (list_iter_has_more(&it)) {
        NativeDesc *fn = list_iter_next(&it);

        env = env_make(fn->name, type_native(fn), value_make_native(fn), env);
    }

    return env;
}
# 16 "src/codegen_main.c" 2
# 1 "src/native_apply.c" 1
# 10 "src/native_apply.c"
Value *native_apply(NativeDesc *fn, ValueList *args) {

    unsigned int paramCount = list_length(fn->args);
    unsigned int argCount = list_length(args);

    if (paramCount != argCount) {
        fprintf(
# 16 "src/native_apply.c" 3 4
               stderr
# 16 "src/native_apply.c"
                     , "Argument count mismatch");
        return verror;
    }

    switch (paramCount) {
    case 1:
        return ((native_fn1_t) fn->func)(list_nth_data(args, 0));
    case 2:
        return ((native_fn2_t) fn->func)(list_nth_data(args, 0), list_nth_data(args, 1));
    default:
        fprintf(
# 26 "src/native_apply.c" 3 4
               stderr
# 26 "src/native_apply.c"
                     , "Native apply param count not implemetned yet");
        return verror;
    }

}
# 17 "src/codegen_main.c" 2
# 1 "src/native_cons.c" 1



Type *native_actual_type(NativeDesc *fn, Type *type) {

    Type *newType = malloc(sizeof(Type));

    memcpy(newType, type, sizeof(Type));

    switch (type->type) {
    case et_unit:
    case et_int:
    case et_float:
    case et_bool:
    case et_string:
    case et_error:
        break;
    case et_natfun:
    {
        TypeList *args = 
# 20 "src/native_cons.c" 3 4
                        ((void *)0)
# 20 "src/native_cons.c"
                            ;
        ListIterator it;
        list_iterate(&type->typeNative->args, &it);
        while (list_iter_has_more(&it)) {
            Type *arg = list_iter_next(&it);
            list_append(&args, native_actual_type(fn, arg));
        }
        newType->typeNative->args = args;
        newType->typeNative->retType = native_actual_type(fn, type->typeNative->retType);
        break;
    }
    case et_fun:
    {
        TypeList *args = 
# 33 "src/native_cons.c" 3 4
                        ((void *)0)
# 33 "src/native_cons.c"
                            ;
        ListIterator it;
        list_iterate(&type->typeFun.args, &it);
        while (list_iter_has_more(&it)) {
            Type *arg = list_iter_next(&it);
            list_append(&args, native_actual_type(fn, arg));
        }
        newType->typeFun.args = args;
        newType->typeFun.to = native_actual_type(fn, type->typeFun.to);
        break;
    }
    case et_tuple:
    {
        TypeList *tuple = 
# 46 "src/native_cons.c" 3 4
                         ((void *)0)
# 46 "src/native_cons.c"
                             ;
        ListIterator it;
        list_iterate(&type->typeTuple, &it);
        while (list_iter_has_more(&it)) {
            Type *elem = list_iter_next(&it);
            list_append(&tuple, native_actual_type(fn, elem));
        }
        newType->typeTuple = tuple;
        break;
    }
    case et_list:
    {
        newType->typeList = native_actual_type(fn, type->typeList);
        break;
    }
    case et_poly:
    {


        free(newType);
        unsigned int i = (unsigned) newType->typePoly;
        if (i == 0) {
            newType = fn->retType;
        } else {
            unsigned int size = list_length(fn->args);
            if (i <= size) {
                newType = list_nth_data(fn->args, i - 1);
            } else {
                fprintf(
# 74 "src/native_cons.c" 3 4
                       stderr
# 74 "src/native_cons.c"
                             , "Native constraint index out of bounds\n");
                return terror;
            }
        }
        break;
    }
    default:
        fprintf(
# 81 "src/native_cons.c" 3 4
               stderr
# 81 "src/native_cons.c"
                     , "Native constraint visit type not implemented\n");
        return terror;
    }

    return newType;

}
# 18 "src/codegen_main.c" 2
# 1 "src/environment.c" 1


Env *env_make(int name, Type *type, Value *value, Env *tail) {
    Env *env = malloc(sizeof(Env));
    if (env == 
# 5 "src/environment.c" 3 4
              ((void *)0)
# 5 "src/environment.c"
                  ) return 
# 5 "src/environment.c" 3 4
                           ((void *)0)
# 5 "src/environment.c"
                               ;
    env->name = name;
    env->type = type;
    env->value = value;
    env->next = tail;
    return env;
}

Env *env_addlist(NameList *names, TypeList *types, ValueList *values, Env *tail) {
    Env *env = tail;

    ListIterator nameIt, typeIt, valueIt;
    list_iterate(&names, &nameIt);
    list_iterate(&types, &typeIt);
    list_iterate(&values, &valueIt);

    int name;
    Type *type;
    Value *value = vunit;

    while (list_iter_has_more(&nameIt)) {
        name = *(int*) list_iter_next(&nameIt);
        type = list_iter_next(&typeIt);

        if (values != 
# 29 "src/environment.c" 3 4
                     ((void *)0)
# 29 "src/environment.c"
                         ) {
            value = list_iter_next(&valueIt);
        }

        env = env_make(name, type, value, env);
    }

    return env;
}

Env *env_find(int name, Env *env) {
    if (env == 
# 40 "src/environment.c" 3 4
              ((void *)0)
# 40 "src/environment.c"
                  ) return 
# 40 "src/environment.c" 3 4
                           ((void *)0)
# 40 "src/environment.c"
                               ;

    if (env->name == name) return env;
    else return env_find(name, env->next);
}

void env_print(Env *env) {
    if (env->name == 0) {
        printf("-");
    } else {
        const char *name = names_getnm(env->name);

        printf("val ");


        printf(
# 55 "src/environment.c" 3 4
              ((*__ctype_b_loc ())[(int) ((
# 55 "src/environment.c"
              name[0]
# 55 "src/environment.c" 3 4
              ))] & (unsigned short int) _ISalpha) 
# 55 "src/environment.c"
                               ? "%s" : "( %s )", name);
    }
    printf(" : ");
    type_print(env->type);
    printf(" = ");
    value_print(env->value);
    printf("\n");
}

void env_printrange(Env *env, Env *from) {
    if (env == 
# 65 "src/environment.c" 3 4
              ((void *)0) 
# 65 "src/environment.c"
                   || env == from) return;
    env_printrange(env->next, from);
    env_print(env);
}


void env_printall(Env *env) {
    env_printrange(env, 
# 72 "src/environment.c" 3 4
                       ((void *)0)
# 72 "src/environment.c"
                           );
}

void env_free(Env *env) {
    if (env == 
# 76 "src/environment.c" 3 4
              ((void *)0)
# 76 "src/environment.c"
                  ) return;
    env_free(env->next);
    free(env);
}
# 19 "src/codegen_main.c" 2
# 1 "src/list.c" 1


ListEntry *list_new(ListValue value) {
    ListEntry *list = 
# 4 "src/list.c" 3 4
                     ((void *)0)
# 4 "src/list.c"
                         ;
    return list_append(&list, value);
}

ListEntry *list_from(ListValue first, ...) {
    ListEntry *list = list_new(first);

    va_list ap;
    
# 12 "src/list.c" 3 4
   __builtin_va_start(
# 12 "src/list.c"
   ap
# 12 "src/list.c" 3 4
   ,
# 12 "src/list.c"
   first
# 12 "src/list.c" 3 4
   )
# 12 "src/list.c"
                      ;

    ListValue entry;
    while ((entry = 
# 15 "src/list.c" 3 4
                   __builtin_va_arg(
# 15 "src/list.c"
                   ap
# 15 "src/list.c" 3 4
                   ,
# 15 "src/list.c"
                   ListValue
# 15 "src/list.c" 3 4
                   )
# 15 "src/list.c"
                                        ) != 
# 15 "src/list.c" 3 4
                                             ((void *)0)
# 15 "src/list.c"
                                                 ) {
        list_append(&list, entry);
    }

    
# 19 "src/list.c" 3 4
   __builtin_va_end(
# 19 "src/list.c"
   ap
# 19 "src/list.c" 3 4
   )
# 19 "src/list.c"
             ;

    return list;
}

ListEntry *list_concat(ListEntry *first, ListEntry *second) {
    ListEntry *final = 
# 25 "src/list.c" 3 4
                      ((void *)0)
# 25 "src/list.c"
                          ;

    ListIterator it1;
    list_iterate(&first, &it1);
    while (list_iter_has_more(&it1)) {
        list_append(&final, list_iter_next(&it1));
    }

    ListIterator it2;
    list_iterate(&second, &it2);
    while (list_iter_has_more(&it2)) {
        list_append(&final, list_iter_next(&it2));
    }

    return final;
}

ListEntry *list_last_entry(ListEntry *list) {
    if (list == 
# 43 "src/list.c" 3 4
               ((void *)0)
# 43 "src/list.c"
                   ) return 
# 43 "src/list.c" 3 4
                            ((void *)0)
# 43 "src/list.c"
                                ;

    ListEntry *next;

    do {
        next = list_next(list);
        if (next == 
# 49 "src/list.c" 3 4
                   ((void *)0)
# 49 "src/list.c"
                       ) break;

        list = next;
    } while (list != 
# 52 "src/list.c" 3 4
                    ((void *)0)
# 52 "src/list.c"
                        );

    return list;
}

ListValue list_last_data(ListEntry *list) {
    return list_data(list_last_entry(list));
}

void list_foreach(ListEntry *list, ListConsumer func) {
    ListIterator it;
    list_iterate(&list, &it);

    while (list_iter_has_more(&it)) {
        func(list_iter_next(&it));
    }
}

void list_print(ListEntry *list, ListPrintFunc func, const char *pref, const char *delim, const char *suff) {
    ListIterator it;
    list_iterate(&list, &it);

    if (pref != 
# 74 "src/list.c" 3 4
               ((void *)0)
# 74 "src/list.c"
                   ) printf("%s", pref);

    while (list_iter_has_more(&it)) {
        func(list_iter_next(&it));

        if (list_iter_has_more(&it)) {
            printf("%s", delim);
        }
    }

    if (suff != 
# 84 "src/list.c" 3 4
               ((void *)0)
# 84 "src/list.c"
                   ) printf("%s", suff);
}

void *nmalloc(int name) {
    int *p = malloc(sizeof(int));
    if (p == 
# 89 "src/list.c" 3 4
            ((void *)0)
# 89 "src/list.c"
                ) return 
# 89 "src/list.c" 3 4
                         ((void *)0)
# 89 "src/list.c"
                             ;

    *p = name;
    return p;
}


void arraylist_foreach(ArrayList *list, ListConsumer func) {
    for (unsigned int i = 0; i < list->length; ++i) {
        func(list->data[i]);
    }
}
# 20 "src/codegen_main.c" 2
# 1 "src/run.c" 1


void run_list(AstList *list, 
# 3 "src/run.c" 3 4
                            _Bool 
# 3 "src/run.c"
                                 do_value, 
# 3 "src/run.c" 3 4
                                           _Bool 
# 3 "src/run.c"
                                                *error) {





    Env *env = natives_env(
# 9 "src/run.c" 3 4
                          ((void *)0)
# 9 "src/run.c"
                              );

    ListIterator it;
    list_iterate(&list, &it);

    while (list_iter_has_more(&it)) {
        Ast *expr = list_iter_next(&it);

        Env *start = env;
        run_expr(&env, expr, do_value, error);

        if (*error) {
            return;
        }

        if (do_value) {
            env_printrange(env, start);
        }
    }
}

void run_expr(Env **env, Ast *expr, 
# 30 "src/run.c" 3 4
                                   _Bool 
# 30 "src/run.c"
                                        do_value, 
# 30 "src/run.c" 3 4
                                                  _Bool 
# 30 "src/run.c"
                                                       *error) {
    NameList *names;
    Type *type;
    Value *value;

    names = ast_names(expr);
    type = infer_type(*env, expr, error);

    if (*error) {
        return;
    }


    value = do_value ? visit_eval(*env, expr, error) : vunit;

    if (*error) {
        return;
    }

    if (list_length(names) == 1) {
        int name = *(int *) list_data(names);
        *env = env_make(name, type, value, *env);
    } else {
        *env = env_addlist(
                names,
                type->typeTuple,

                do_value ? value->valTuple : 
# 57 "src/run.c" 3 4
                                            ((void *)0)
# 57 "src/run.c"
                                                ,
                *env
        );
    }
}

NameList *ast_names(Ast *expr) {

    if (expr->type == e_let && expr->exprLet.block == 
# 65 "src/run.c" 3 4
                                                     ((void *)0)
# 65 "src/run.c"
                                                         ) {
        return expr->exprLet.names;
    } else {
        return list_new(nmalloc(0));
    }
}
# 21 "src/codegen_main.c" 2
# 1 "src/string_escape.c" 1



static char chr_notesc[] = { ' ', '\'', '"', '\n', '\t', '\b', '\r', '\\' };
static char chr_escape[] = { ' ', '\'', '"', 'n', 't', 'b', 'r', '\\' };

static int nb_esc = sizeof(chr_escape) / sizeof(char);


char *unescape(const char *str) {
    size_t len = strlen(str);
    char *orig = strndup(str, len);
    char *chptr = orig;


    char *result = calloc(len + 1, sizeof(char));
    unsigned int k = 0;

    char c;
    int e;
    while ((c = *chptr++) != '\0' && k <= len) {
        if (c == '\\') {
            c = *chptr++;
            if (c == '\0') break;

            for (e = 0; e < nb_esc; ++e) {
                if (c == chr_escape[e]) {
                    result[k++] = chr_notesc[e];
                    break;
                }
            }

            if (e == nb_esc) {
                fprintf(
# 34 "src/string_escape.c" 3 4
                       stderr
# 34 "src/string_escape.c"
                             , "Invalid escape code: '\\%c' \n", c);
                result[k++] = '\\';
                result[k++] = c;
            }
        } else {
            result[k++] = c;
        }
    }

    result[k] = '\0';

    free(orig);

    return result;
}


char *escape(const char *str) {

    size_t len = 2 * strlen(str);
    char *result = calloc(len + 1, sizeof(char));
    unsigned int k = 0;

    char c;
    int e;
    while ((c = *str++) != '\0' && k <= len) {
        for (e = 2; e < nb_esc; ++e) {
            if (c == chr_notesc[e]) {
                result[k++] = '\\';
                result[k++] = chr_escape[e];
                break;
            }
        }
        if (e == nb_esc) {
            result[k++] = c;
        }
    }

    result[k] = '\0';

    return result;
}
# 22 "src/codegen_main.c" 2

# 1 "src/eval/eval.h" 1



# 1 "src/common.h" 1
# 5 "src/eval/eval.h" 2



Value *eval_var (Env *env, Ast * var, 
# 8 "src/eval/eval.h" 3 4
_Bool 
# 8 "src/eval/eval.h"
*error);
Value *eval_seq (Env *env, Ast * seq, 
# 9 "src/eval/eval.h" 3 4
_Bool 
# 9 "src/eval/eval.h"
*error);
Value *eval_funcall (Env *env, Ast * funcall, 
# 10 "src/eval/eval.h" 3 4
_Bool 
# 10 "src/eval/eval.h"
*error);
Value *eval_let (Env *env, Ast * let, 
# 11 "src/eval/eval.h" 3 4
_Bool 
# 11 "src/eval/eval.h"
*error);
Value *eval_ifelse (Env *env, Ast * ifelse, 
# 12 "src/eval/eval.h" 3 4
_Bool 
# 12 "src/eval/eval.h"
*error);
Value *eval_tuple (Env *env, Ast * tuple, 
# 13 "src/eval/eval.h" 3 4
_Bool 
# 13 "src/eval/eval.h"
*error);
Value *eval_list (Env *env, Ast * list, 
# 14 "src/eval/eval.h" 3 4
_Bool 
# 14 "src/eval/eval.h"
*error);
# 24 "src/codegen_main.c" 2
# 1 "src/eval/eval.c" 1
# 1 "src/eval/eval.h" 1
# 2 "src/eval/eval.c" 2

Value *visit_eval(Env *env, Ast *expr, 
# 3 "src/eval/eval.c" 3 4
                                      _Bool 
# 3 "src/eval/eval.c"
                                           *error) {
    switch (expr->type) {
    case e_unit:
        return vunit;
    case e_int:
        return value_make_int(expr->exprInteger);
    case e_float:
        return value_make_float(expr->exprFloat);
    case e_bool:
        return value_make_bool(expr->exprBool);
    case e_string:
        return value_make_string(expr->exprString);
    case e_var:
        return eval_var(env, expr, error);
    case e_block:
        return visit_eval(env, expr->exprBlock, error);
    case e_seq:
        return eval_seq(env, expr, error);
    case e_funcall:
        return eval_funcall(env, expr, error);
    case e_let:
        return eval_let(env, expr, error);
    case e_if:
        return eval_ifelse(env, expr, error);
    case e_tuple:
        return eval_tuple(env, expr, error);
    case e_list:
        return eval_list(env, expr, error);
    default:
        do { fprintf(
# 32 "src/eval/eval.c" 3 4
       stderr
# 32 "src/eval/eval.c"
       , "Evaluation not implemented yet" "\n"); *error = 
# 32 "src/eval/eval.c" 3 4
       1
# 32 "src/eval/eval.c"
       ; return vunit; } while (
# 32 "src/eval/eval.c" 3 4
       0
# 32 "src/eval/eval.c"
       );
    }

}
# 25 "src/codegen_main.c" 2
# 1 "src/eval/funcall.c" 1



Value *eval_funcall (Env *env, Ast * funcall, 
# 4 "src/eval/funcall.c" 3 4
_Bool 
# 4 "src/eval/funcall.c"
*error) {
    Value *func = visit_eval(env, funcall->exprFunCall.function, error);
    AstList *args = funcall->exprFunCall.args;

    switch (func->type) {
    case et_fun:

        break;
    case et_natfun:
    {
        ValueList *argValues = 
# 14 "src/eval/funcall.c" 3 4
                              ((void *)0)
# 14 "src/eval/funcall.c"
                                  ;

        ListIterator it;
        list_iterate(&args, &it);
        while (list_iter_has_more(&it)) {
            Ast *arg = list_iter_next(&it);

            list_append(&argValues, visit_eval(env, arg, error));
        }

        return native_apply(func->valNative, argValues);
    }
    default:
        do { fprintf(
# 27 "src/eval/funcall.c" 3 4
       stderr
# 27 "src/eval/funcall.c"
       , "Expression is not a function and cannot be applied" "\n"); *error = 
# 27 "src/eval/funcall.c" 3 4
       1
# 27 "src/eval/funcall.c"
       ; return vunit; } while (
# 27 "src/eval/funcall.c" 3 4
       0
# 27 "src/eval/funcall.c"
       );
    }

    Env *callsite = func->valFun.defsite;
    NameList *params = func->valFun.params;

    ListIterator argIt, paramIt;
    list_iterate(&args, &argIt);
    list_iterate(&params, &paramIt);
    while (list_iter_has_more(&argIt)) {
        Ast *arg = list_iter_next(&argIt);
        int param_name = *(int*) list_iter_next(&paramIt);

        Value *value = visit_eval(env, arg, error);

        callsite = env_make(param_name, 
# 42 "src/eval/funcall.c" 3 4
                  ((void *)0)
# 42 "src/eval/funcall.c"
                  , value, callsite);
        params = list_next(params);
    }

    if (list_iter_has_more(&paramIt)) {
        return value_make_fun(callsite, params, func->valFun.body);
    } else {
        return visit_eval(callsite, func->valFun.body, error);
    }
}
# 26 "src/codegen_main.c" 2
# 1 "src/eval/ifelse.c" 1



Value *eval_ifelse (Env *env, Ast * ifelse, 
# 4 "src/eval/ifelse.c" 3 4
_Bool 
# 4 "src/eval/ifelse.c"
*error) {
    Value *cond = visit_eval(env, ifelse->exprIf.cond, error);

    if (cond->valBool) {
        return visit_eval(env, ifelse->exprIf.bIf, error);
    } else {
        return visit_eval(env, ifelse->exprIf.bElse, error);
    }
}
# 27 "src/codegen_main.c" 2
# 1 "src/eval/let.c" 1



Value *eval_let (Env *env, Ast * let, 
# 4 "src/eval/let.c" 3 4
_Bool 
# 4 "src/eval/let.c"
*error) {
    NameList *names = let->exprLet.names;

    Value *valExpr;

    if (let->exprLet.params == 
# 9 "src/eval/let.c" 3 4
                              ((void *)0)
# 9 "src/eval/let.c"
                                  ) {
        valExpr = visit_eval(env, let->exprLet.expr, error);
    } else {



        valExpr = value_make_fun(env, let->exprLet.params, let->exprLet.expr);


        if (let->exprLet.rec) {
            int name = *(int*) list_data(names);
            valExpr->valFun.defsite = env_make(name, 
# 20 "src/eval/let.c" 3 4
                                     ((void *)0)
# 20 "src/eval/let.c"
                                     , valExpr, valExpr->valFun.defsite);
        }
    }

    if (let->exprLet.block != 
# 24 "src/eval/let.c" 3 4
                             ((void *)0)
# 24 "src/eval/let.c"
                                 ) {
        Env *newEnv = env;

        if (list_length(names) == 1) {
            int name = *(int*) list_data(names);
            newEnv = env_make(name, 
# 29 "src/eval/let.c" 3 4
                    ((void *)0)
# 29 "src/eval/let.c"
                    , valExpr, newEnv);
        } else {
            newEnv = env_addlist(names, 
# 31 "src/eval/let.c" 3 4
                                       ((void *)0)
# 31 "src/eval/let.c"
                                           , valExpr->valTuple, newEnv);
        }

        return visit_eval(newEnv, let->exprLet.block, error);
    } else {
        return valExpr;
    }
}
# 28 "src/codegen_main.c" 2
# 1 "src/eval/list.c" 1



Value *eval_list (Env *env, Ast * list, 
# 4 "src/eval/list.c" 3 4
_Bool 
# 4 "src/eval/list.c"
*error) {

    Ast *head = list->exprList.head;
    Ast *tail = list->exprList.tail;

    Value *valHead = 
# 9 "src/eval/list.c" 3 4
                    ((void *)0)
# 9 "src/eval/list.c"
                        ;
    Value *valTail = 
# 10 "src/eval/list.c" 3 4
                    ((void *)0)
# 10 "src/eval/list.c"
                        ;


    if (head != 
# 13 "src/eval/list.c" 3 4
               ((void *)0)
# 13 "src/eval/list.c"
                   ) {
        valHead = visit_eval(env, head, error);


        if (tail != 
# 17 "src/eval/list.c" 3 4
                   ((void *)0)
# 17 "src/eval/list.c"
                       ) {
            valTail = visit_eval(env, tail, error);
        }
    }

    return value_make_list(valHead, valTail);

}
# 29 "src/codegen_main.c" 2
# 1 "src/eval/seq.c" 1



Value *eval_seq (Env *env, Ast * seq, 
# 4 "src/eval/seq.c" 3 4
_Bool 
# 4 "src/eval/seq.c"
*error) {
    Value *value;

    AstList *expr = seq->exprSeq;

    ListIterator it;
    list_iterate(&expr, &it);
    while (list_iter_has_more(&it)) {
        Ast *expr = list_iter_next(&it);

        value = visit_eval(env, expr, error);
    }

    return value;
}
# 30 "src/codegen_main.c" 2
# 1 "src/eval/tuple.c" 1



Value *eval_tuple (Env *env, Ast * tuple, 
# 4 "src/eval/tuple.c" 3 4
_Bool 
# 4 "src/eval/tuple.c"
*error) {
    ValueList *elems = 
# 5 "src/eval/tuple.c" 3 4
                      ((void *)0)
# 5 "src/eval/tuple.c"
                          ;
    AstList *exprs = tuple->exprTuple;

    ListIterator it;
    list_iterate(&exprs, &it);
    while (list_iter_has_more(&it)) {
        Ast *expr = list_iter_next(&it);

        Value *value = visit_eval(env, expr, error);

        list_append(&elems, value);
    }

    return value_make_tuple(elems);
}
# 31 "src/codegen_main.c" 2
# 1 "src/eval/variable.c" 1



Value *eval_var (Env *env, Ast * var, 
# 4 "src/eval/variable.c" 3 4
_Bool 
# 4 "src/eval/variable.c"
*error) {
    while (env != 
# 5 "src/eval/variable.c" 3 4
                 ((void *)0)
# 5 "src/eval/variable.c"
                     ) {
        if (env->name == var->exprVariable)
            return env->value;
        env = env->next;
    }
    do { fprintf(
# 10 "src/eval/variable.c" 3 4
   stderr
# 10 "src/eval/variable.c"
   , "Undefined name %s" "\n", names_getnm(var->exprVariable)); *error = 
# 10 "src/eval/variable.c" 3 4
   1
# 10 "src/eval/variable.c"
   ; return vunit; } while (
# 10 "src/eval/variable.c" 3 4
   0
# 10 "src/eval/variable.c"
   );
}
# 32 "src/codegen_main.c" 2

# 1 "src/infer/infer.h" 1
# 10 "src/infer/infer.h"
struct typed_ast {
    AstType type;
    union {

        int exprInteger;

        double exprFloat;

        
# 18 "src/infer/infer.h" 3 4
       _Bool 
# 18 "src/infer/infer.h"
            exprBool;

        char *exprString;

        int exprVariable;

        TypedAst *exprBlock;

        TypedAstList *exprSeq;

        struct { TypedAst *function;
                 TypedAstList *args; } exprFunCall;

        struct { Type *exprType;
                 
# 32 "src/infer/infer.h" 3 4
                _Bool 
# 32 "src/infer/infer.h"
                     rec;
                 TypeList *params;
                 TypedAst *expr;
                 TypedAst *block; } exprLet;

        struct { TypedAst *cond;
                 TypedAst *bIf;
                 TypedAst *bElse; } exprIf;

        TypedAstList *exprTuple;

        struct { TypedAst *head;
                 TypedAst *tail; } exprList;
    };

    int number;
    Type *xtype;
};



extern int poly;


Type *type_repoly(Type *type, 
# 56 "src/infer/infer.h" 3 4
                             _Bool 
# 56 "src/infer/infer.h"
                                  *error);



typedef struct { Type *first; Type *second; } Constraint;

Constraint *cons_make(Type *first, Type *second);
void cons_print(Constraint *cons);


ConsList *cons_zip(TypeList *first, TypeList *second);




typedef struct { int poly; Type *type; } Substitution;

Substitution *subst_make(int poly, Type *type);
void subst_print(Substitution *sub);


Type *subst_sub(Substitution *sub, Type *type, 
# 77 "src/infer/infer.h" 3 4
                                              _Bool 
# 77 "src/infer/infer.h"
                                                   *error);
TypeList *subst_sub_list(Substitution *sub, TypeList *list, 
# 78 "src/infer/infer.h" 3 4
                                                           _Bool 
# 78 "src/infer/infer.h"
                                                                *error);




TypedAst *annotate_ast(Env *env, Ast *ast, 
# 83 "src/infer/infer.h" 3 4
                                          _Bool 
# 83 "src/infer/infer.h"
                                               *error);
TypedAstList *annotate_list(Env *env, AstList *astlist, 
# 84 "src/infer/infer.h" 3 4
                                                       _Bool 
# 84 "src/infer/infer.h"
                                                            *error);



void collect_cons(ConsList **lptr, TypedAst *ast, 
# 88 "src/infer/infer.h" 3 4
                                                 _Bool 
# 88 "src/infer/infer.h"
                                                      *error);
void collect_cons_list(ConsList **lptr, TypedAstList *astlist, 
# 89 "src/infer/infer.h" 3 4
                                                              _Bool 
# 89 "src/infer/infer.h"
                                                                   *error);



SubstList *unify_one(Type *first, Type *second, 
# 93 "src/infer/infer.h" 3 4
                                               _Bool 
# 93 "src/infer/infer.h"
                                                    *error);



Type *apply_one(SubstList *subs, Type *type, 
# 97 "src/infer/infer.h" 3 4
                                            _Bool 
# 97 "src/infer/infer.h"
                                                 *error);
void apply_list(SubstList *subs, TypedAstList *ast, 
# 98 "src/infer/infer.h" 3 4
                                                   _Bool 
# 98 "src/infer/infer.h"
                                                        *error);






TypedAst *infer_annotate(Env *env, Ast *expr, 
# 105 "src/infer/infer.h" 3 4
                                             _Bool 
# 105 "src/infer/infer.h"
                                                  *error);


ConsList *infer_constraints(TypedAst *expr, 
# 108 "src/infer/infer.h" 3 4
                                           _Bool 
# 108 "src/infer/infer.h"
                                                *error);


SubstList *infer_unify(ConsList *constraints, 
# 111 "src/infer/infer.h" 3 4
                                             _Bool 
# 111 "src/infer/infer.h"
                                                  *error);


TypedAst *infer_apply(SubstList *subs, TypedAst *expr, 
# 114 "src/infer/infer.h" 3 4
                                                      _Bool 
# 114 "src/infer/infer.h"
                                                           *error);
# 34 "src/codegen_main.c" 2
# 1 "src/infer/infer.c" 1
# 1 "src/infer/infer.h" 1
# 2 "src/infer/infer.c" 2


int poly;




Type *infer_type(Env *env, Ast *expr, 
# 9 "src/infer/infer.c" 3 4
                                     _Bool 
# 9 "src/infer/infer.c"
                                          *error) {

    poly = 1;

    TypedAst *annotated = infer_annotate(env, expr, error);
    if (flag_debug) {
        printf(" - Pre-AST: \n");
        typed_print(annotated);
        printf("\n***\n\n");
    }
    do { if (*error) return terror; } while (
# 19 "src/infer/infer.c" 3 4
   0
# 19 "src/infer/infer.c"
   );

    ConsList *constraints = infer_constraints(annotated, error);
    if (flag_debug) {
        list_print(constraints, (ListPrintFunc) cons_print,
                " - Cons: \n", ",\n", "\n***\n\n");
    }
    do { if (*error) return terror; } while (
# 26 "src/infer/infer.c" 3 4
   0
# 26 "src/infer/infer.c"
   );

    SubstList *substitutions = infer_unify(constraints, error);
    if (flag_debug) {
        list_print(substitutions, (ListPrintFunc) subst_print,
                " - Subs: \n", ",\n", "\n***\n\n");
    }
    do { if (*error) return terror; } while (
# 33 "src/infer/infer.c" 3 4
   0
# 33 "src/infer/infer.c"
   );

    TypedAst *typed = infer_apply(substitutions, annotated, error);
    if (flag_debug) {
        printf(" - Post-AST: \n");
        typed_print(typed);
        printf("\n***\n\n");
    }
    do { if (*error) return terror; } while (
# 41 "src/infer/infer.c" 3 4
   0
# 41 "src/infer/infer.c"
   );

    return typed->xtype;
}
# 35 "src/codegen_main.c" 2
# 1 "src/infer/annotate.c" 1



TypedAstList *annotate_list(Env *env, AstList *astlist, 
# 4 "src/infer/annotate.c" 3 4
                                                       _Bool 
# 4 "src/infer/annotate.c"
                                                            *error) {
    TypedAstList *typedlist = 
# 5 "src/infer/annotate.c" 3 4
                             ((void *)0)
# 5 "src/infer/annotate.c"
                                 ;

    ListIterator it;
    list_iterate(&astlist, &it);


    while (list_iter_has_more(&it)) {
        Ast *ast = list_iter_next(&it);
        TypedAst *typed = infer_annotate(env, ast, error);

        list_append(&typedlist, typed);
    }

    return typedlist;
}


TypedAst *infer_annotate(Env *env, Ast *ast, 
# 22 "src/infer/annotate.c" 3 4
                                            _Bool 
# 22 "src/infer/annotate.c"
                                                 *error) {

    TypedAst *typed = malloc(sizeof(TypedAst));
    typed->type = ast->type;

    Type *xtype = terror;

    switch (ast->type) {
    case e_unit:
        xtype = tunit;
        break;
    case e_int:
        typed->exprInteger = ast->exprInteger;
        xtype = tint;
        break;
    case e_float:
        typed->exprFloat = ast->exprFloat;
        xtype = tfloat;
        break;
    case e_bool:
        typed->exprBool = ast->exprBool;
        xtype = tbool;
        break;
    case e_string:
        typed->exprString = ast->exprString;
        xtype = tstring;
        break;
    case e_var:
    {
        int var = ast->exprVariable;
        typed->exprVariable = var;
        Env *entry = env_find(var, env);

        if (entry != 
# 55 "src/infer/annotate.c" 3 4
                    ((void *)0)
# 55 "src/infer/annotate.c"
                        ) {

            xtype = type_repoly(entry->type, error);
        } else {
            do { fprintf(
# 59 "src/infer/annotate.c" 3 4
           stderr
# 59 "src/infer/annotate.c"
           , "Variable %s not found" "\n", names_getnm(var)); *error = 
# 59 "src/infer/annotate.c" 3 4
           1
# 59 "src/infer/annotate.c"
           ; } while (
# 59 "src/infer/annotate.c" 3 4
           0
# 59 "src/infer/annotate.c"
           );
        }
        break;
    }
    case e_block:
        typed->exprBlock = infer_annotate(env, ast->exprBlock, error);
        xtype = type_poly(poly++);
        break;
    case e_seq:
        typed->exprSeq = annotate_list(env, ast->exprSeq, error);
        xtype = type_poly(poly++);
        break;
    case e_funcall:
        typed->exprFunCall.function = infer_annotate(env, ast->exprFunCall.function, error);
        typed->exprFunCall.args = annotate_list(env, ast->exprFunCall.args, error);
        xtype = type_poly(poly++);
        break;
    case e_let:
    {
        
# 78 "src/infer/annotate.c" 3 4
       _Bool 
# 78 "src/infer/annotate.c"
            rec = ast->exprLet.rec;
        NameList *names = ast->exprLet.names;
        Ast *block = ast->exprLet.block;
        NameList *params = ast->exprLet.params;

        unsigned int nameCount = list_length(names);

        typed->exprLet.rec = rec;
        typed->exprLet.params = 
# 86 "src/infer/annotate.c" 3 4
                               ((void *)0)
# 86 "src/infer/annotate.c"
                                   ;
        typed->exprLet.block = 
# 87 "src/infer/annotate.c" 3 4
                              ((void *)0)
# 87 "src/infer/annotate.c"
                                  ;
        typed->exprLet.expr = 
# 88 "src/infer/annotate.c" 3 4
                             ((void *)0)
# 88 "src/infer/annotate.c"
                                 ;


        Env *envExpr = env;


        if (params == 
# 94 "src/infer/annotate.c" 3 4
                     ((void *)0)
# 94 "src/infer/annotate.c"
                         ) {
            if (rec) {
                do { fprintf(
# 96 "src/infer/annotate.c" 3 4
               stderr
# 96 "src/infer/annotate.c"
               , "Recursive variable bindings not supported" "\n"); *error = 
# 96 "src/infer/annotate.c" 3 4
               1
# 96 "src/infer/annotate.c"
               ; } while (
# 96 "src/infer/annotate.c" 3 4
               0
# 96 "src/infer/annotate.c"
               );
                break;
            }

            if (nameCount > 1) {
                TypeList *types = 
# 101 "src/infer/annotate.c" 3 4
                                 ((void *)0)
# 101 "src/infer/annotate.c"
                                     ;
                ListIterator it;
                list_iterate(&names, &it);
                while (list_iter_has_more(&it)) {
                    list_iter_next(&it);
                    list_append(&types, type_poly(poly++));
                }
                xtype = type_tuple(types);
            } else {
                xtype = type_poly(poly++);
            }
        } else {


            if (nameCount > 1) {
                do { fprintf(
# 116 "src/infer/annotate.c" 3 4
               stderr
# 116 "src/infer/annotate.c"
               , "Can't define tuple named functions" "\n"); *error = 
# 116 "src/infer/annotate.c" 3 4
               1
# 116 "src/infer/annotate.c"
               ; } while (
# 116 "src/infer/annotate.c" 3 4
               0
# 116 "src/infer/annotate.c"
               );
                break;
            }

            TypeList *paramTypes = 
# 120 "src/infer/annotate.c" 3 4
                                  ((void *)0)
# 120 "src/infer/annotate.c"
                                      ;
            ListIterator it;
            list_iterate(&params, &it);
            while (list_iter_has_more(&it)) {
                int name = *(int *) list_iter_next(&it);
                Type *type = type_poly(poly++);

                envExpr = env_make(name, type, 
# 127 "src/infer/annotate.c" 3 4
                         ((void *)0)
# 127 "src/infer/annotate.c"
                         , envExpr);
                list_append(&paramTypes, type);
            }

            typed->exprLet.params = paramTypes;
            xtype = type_fun(paramTypes, type_poly(poly++));


            if (rec && nameCount > 0) {
                int name = *(int *) list_data(names);
                envExpr = env_make(name, xtype, 
# 137 "src/infer/annotate.c" 3 4
                         ((void *)0)
# 137 "src/infer/annotate.c"
                         , envExpr);
            }
        }

        typed->exprLet.expr = infer_annotate(envExpr, ast->exprLet.expr, error);
        typed->exprLet.exprType = xtype;


        if (block != 
# 145 "src/infer/annotate.c" 3 4
                    ((void *)0)
# 145 "src/infer/annotate.c"
                        ) {
            Env *envBlock = env;


            if (nameCount > 1) {
                ListIterator nameIt, typeIt;
                list_iterate(&names, &nameIt);
                list_iterate(&xtype->typeTuple, &typeIt);

                while (list_iter_has_more(&nameIt) && list_iter_has_more(&typeIt)) {
                    int name = *(int *) list_iter_next(&nameIt);
                    Type *type = list_iter_next(&typeIt);

                    envBlock = env_make(name, type, 
# 158 "src/infer/annotate.c" 3 4
                              ((void *)0)
# 158 "src/infer/annotate.c"
                              , envBlock);
                }
            } else {

                int name = *(int *) list_data(names);

                envBlock = env_make(name, xtype, 
# 164 "src/infer/annotate.c" 3 4
                          ((void *)0)
# 164 "src/infer/annotate.c"
                          , envBlock);
            }

            typed->exprLet.block = infer_annotate(envBlock, ast->exprLet.block, error);
            xtype = type_poly(poly++);
        }

        break;
    }
    case e_if:
    {
        typed->exprIf.cond = infer_annotate(env, ast->exprIf.cond, error);
        typed->exprIf.bIf = infer_annotate(env, ast->exprIf.bIf, error);

        Ast *bElse = ast->exprIf.bElse;
        if (bElse != 
# 179 "src/infer/annotate.c" 3 4
                    ((void *)0)
# 179 "src/infer/annotate.c"
                        ) {
            typed->exprIf.bElse = infer_annotate(env, bElse, error);
        }

        xtype = type_poly(poly++);
        break;
    }
    case e_tuple:
    {
        typed->exprTuple = annotate_list(env, ast->exprTuple, error);

        TypeList *types = 
# 190 "src/infer/annotate.c" 3 4
                         ((void *)0)
# 190 "src/infer/annotate.c"
                             ;
        ListIterator it;
        list_iterate(&typed->exprTuple, &it);
        while (list_iter_has_more(&it)) {
            TypedAst *elem = list_iter_next(&it);
            list_append(&types, elem->xtype);
        }

        xtype = type_tuple(types);
        break;
    }
    case e_list:
    {
        Ast *head = ast->exprList.head;
        Ast *tail = ast->exprList.tail;

        Type *elemType;


        if (head != 
# 209 "src/infer/annotate.c" 3 4
                   ((void *)0)
# 209 "src/infer/annotate.c"
                       ) {
            typed->exprList.head = infer_annotate(env, head, error);
            typed->exprList.tail = infer_annotate(env, tail, error);

            elemType = typed->exprList.head->xtype;
        } else {
            elemType = type_poly(poly++);
        }

        xtype = type_list(elemType);
        break;
    }
    default:
        do { fprintf(
# 222 "src/infer/annotate.c" 3 4
       stderr
# 222 "src/infer/annotate.c"
       , "Inference annotate type not implemented" "\n"); *error = 
# 222 "src/infer/annotate.c" 3 4
       1
# 222 "src/infer/annotate.c"
       ; } while (
# 222 "src/infer/annotate.c" 3 4
       0
# 222 "src/infer/annotate.c"
       );
        break;
    }

    typed->xtype = xtype;

    return typed;
}
# 36 "src/codegen_main.c" 2
# 1 "src/infer/apply.c" 1







Type *apply_one(SubstList *subs, Type *type, 
# 8 "src/infer/apply.c" 3 4
                                            _Bool 
# 8 "src/infer/apply.c"
                                                 *error) {
    if (subs == 
# 9 "src/infer/apply.c" 3 4
               ((void *)0)
# 9 "src/infer/apply.c"
                   ) return type;

    Substitution *first = list_data(subs);
    SubstList *next = list_next(subs);

    return subst_sub(first, apply_one(next, type, error), error);
}


void apply_list(SubstList *subs, TypedAstList *list, 
# 18 "src/infer/apply.c" 3 4
                                                    _Bool 
# 18 "src/infer/apply.c"
                                                         *error) {
    ListIterator it;
    list_iterate(&list, &it);

    while (list_iter_has_more(&it)) {
        TypedAst *ast = list_iter_next(&it);
        infer_apply(subs, ast, error);
    }
}


TypedAst *infer_apply(SubstList *subs, TypedAst *expr, 
# 29 "src/infer/apply.c" 3 4
                                                      _Bool 
# 29 "src/infer/apply.c"
                                                           *error) {

    switch (expr->type) {
    case e_unit:
    case e_int:
    case e_float:
    case e_bool:
    case e_string:
    case e_var:
        break;
    case e_block:
        infer_apply(subs, expr->exprBlock, error);
        break;
    case e_seq:
        apply_list(subs, expr->exprSeq, error);
        break;
    case e_funcall:
        infer_apply(subs, expr->exprFunCall.function, error);
        apply_list(subs, expr->exprFunCall.args, error);
        break;
    case e_let:
    {
        infer_apply(subs, expr->exprLet.expr, error);

        TypedAst *block = expr->exprLet.block;
        if (block != 
# 54 "src/infer/apply.c" 3 4
                    ((void *)0)
# 54 "src/infer/apply.c"
                        ) {
            infer_apply(subs, block, error);
        }
        break;
    }
    case e_if:
    {
        infer_apply(subs, expr->exprIf.cond, error);
        infer_apply(subs, expr->exprIf.bIf, error);

        TypedAst *bElse = expr->exprIf.bElse;
        if (bElse) {
            infer_apply(subs, bElse, error);
        }
        break;
    }
    case e_tuple:
        apply_list(subs, expr->exprTuple, error);
        break;
    case e_list:
    {
        TypedAst *head = expr->exprList.head;
        TypedAst *tail = expr->exprList.tail;

        if (head != 
# 78 "src/infer/apply.c" 3 4
                   ((void *)0)
# 78 "src/infer/apply.c"
                       ) {
            infer_apply(subs, head, error);
            infer_apply(subs, tail, error);
        }
        break;
    }
    default:
        do { fprintf(
# 85 "src/infer/apply.c" 3 4
       stderr
# 85 "src/infer/apply.c"
       , "Inference apply type not implemented" "\n"); *error = 
# 85 "src/infer/apply.c" 3 4
       1
# 85 "src/infer/apply.c"
       ; } while (
# 85 "src/infer/apply.c" 3 4
       0
# 85 "src/infer/apply.c"
       );
        break;
    }

    expr->xtype = apply_one(subs, expr->xtype, error);

    return expr;

}
# 37 "src/codegen_main.c" 2
# 1 "src/infer/constraints.c" 1



ConsList *infer_constraints(TypedAst *expr, 
# 4 "src/infer/constraints.c" 3 4
                                           _Bool 
# 4 "src/infer/constraints.c"
                                                *error) {
    ConsList *list = 
# 5 "src/infer/constraints.c" 3 4
                    ((void *)0)
# 5 "src/infer/constraints.c"
                        ;

    collect_cons(&list, expr, error);

    return list;
}

ConsList *cons_zip(TypeList *first, TypeList *second) {
    if (list_length(first) != list_length(second)) {
        return 
# 14 "src/infer/constraints.c" 3 4
              ((void *)0)
# 14 "src/infer/constraints.c"
                  ;
    }

    ConsList *zipped = 
# 17 "src/infer/constraints.c" 3 4
                      ((void *)0)
# 17 "src/infer/constraints.c"
                          ;

    ListIterator it1, it2;
    list_iterate(&first, &it1);
    list_iterate(&second, &it2);

    while (list_iter_has_more(&it1) && list_iter_has_more(&it2)) {
        Type *type1 = list_iter_next(&it1);
        Type *type2 = list_iter_next(&it2);

        list_append(&zipped, cons_make(type1, type2));
    }

    return zipped;
}


void collect_cons_list(ConsList **lptr, TypedAstList *astlist, 
# 34 "src/infer/constraints.c" 3 4
                                                              _Bool 
# 34 "src/infer/constraints.c"
                                                                   *error) {
    ListIterator it;
    list_iterate(&astlist, &it);

    while (list_iter_has_more(&it)) {
        TypedAst *ast = list_iter_next(&it);
        collect_cons(lptr, ast, error);
    }
}

void collect_cons(ConsList **lptr, TypedAst *ast, 
# 44 "src/infer/constraints.c" 3 4
                                                 _Bool 
# 44 "src/infer/constraints.c"
                                                      *error) {

    Type *xtype = ast->xtype;

    switch (ast->type) {
    case e_unit:
    case e_int:
    case e_float:
    case e_bool:
    case e_string:
    case e_var:
        break;
    case e_block:
        list_append(lptr, cons_make(xtype, ast->exprBlock->xtype));
        collect_cons(lptr, ast->exprBlock, error);
        break;
    case e_seq:
    {

        TypedAst *last = list_last_data(ast->exprSeq);
        list_append(lptr, cons_make(xtype, last->xtype));
        collect_cons_list(lptr, ast->exprSeq, error);
        break;
    }
    case e_funcall:
    {
        TypedAstList *args = ast->exprFunCall.args;
        unsigned int argCount = list_length(args);

        TypedAst *func = ast->exprFunCall.function;
        Type *fntype = func->xtype;







        switch (fntype->type) {
        case et_natfun:
        {
            NativeDesc *fn = fntype->typeNative;

            TypeList *params = fn->args;
            Type *retType = fn->retType;

            unsigned int paramCount = list_length(params);
            if (argCount < paramCount) {
                do { fprintf(
# 92 "src/infer/constraints.c" 3 4
               stderr
# 92 "src/infer/constraints.c"
               , "Native function currying is not allowed" "\n"); *error = 
# 92 "src/infer/constraints.c" 3 4
               1
# 92 "src/infer/constraints.c"
               ; } while (
# 92 "src/infer/constraints.c" 3 4
               0
# 92 "src/infer/constraints.c"
               );
                return;
            } else if (argCount > paramCount) {
                do { fprintf(
# 95 "src/infer/constraints.c" 3 4
               stderr
# 95 "src/infer/constraints.c"
               , "Too many arguments" "\n"); *error = 
# 95 "src/infer/constraints.c" 3 4
               1
# 95 "src/infer/constraints.c"
               ; } while (
# 95 "src/infer/constraints.c" 3 4
               0
# 95 "src/infer/constraints.c"
               );
                return;
            }

            ListIterator argIt;
            list_iterate(&args, &argIt);

            while (list_iter_has_more(&argIt)) {
                TypedAst *arg = list_iter_next(&argIt);
                Type *paramType = list_data(params);

                list_append(lptr, cons_make(paramType, arg->xtype));
            }

            list_append(lptr, cons_make(retType, xtype));


            ListIterator consIt;
            list_iterate(&fn->consList, &consIt);

            struct native_cons *cons;
            Type *first, *second;

            while (list_iter_has_more(&consIt)) {
                cons = list_iter_next(&consIt);

                first = native_actual_type(fn, cons->first);
                second = native_actual_type(fn, cons->second);

                list_append(lptr, cons_make(first, second));
            }

            break;
        }
        case et_fun:
        {
            TypeList *params = fntype->typeFun.args;
            Type *retType = fntype->typeFun.to;

            unsigned int paramCount = list_length(params);
            if (argCount > paramCount) {
                do { fprintf(
# 136 "src/infer/constraints.c" 3 4
               stderr
# 136 "src/infer/constraints.c"
               , "Too many arguments" "\n"); *error = 
# 136 "src/infer/constraints.c" 3 4
               1
# 136 "src/infer/constraints.c"
               ; } while (
# 136 "src/infer/constraints.c" 3 4
               0
# 136 "src/infer/constraints.c"
               );
                return;
            }

            ListIterator argIt;
            list_iterate(&args, &argIt);

            while (list_iter_has_more(&argIt) && params != 
# 143 "src/infer/constraints.c" 3 4
                                                          ((void *)0)
# 143 "src/infer/constraints.c"
                                                              ) {
                TypedAst *arg = list_iter_next(&argIt);
                Type *paramType = list_data(params);

                list_append(lptr, cons_make(paramType, arg->xtype));

                params = list_next(params);
            }


            if (params != 
# 153 "src/infer/constraints.c" 3 4
                         ((void *)0)
# 153 "src/infer/constraints.c"
                             ) {
                retType = type_fun(params, retType);
            }

            list_append(lptr, cons_make(retType, xtype));

            break;
        }
        case et_poly:
        {
            TypeList *params = 
# 163 "src/infer/constraints.c" 3 4
                              ((void *)0)
# 163 "src/infer/constraints.c"
                                  ;
            ListIterator it;
            list_iterate(&args, &it);
            while (list_iter_has_more(&it)) {
                TypedAst *arg = list_iter_next(&it);

                list_append(&params, arg->xtype);
            }

            Type *dedFnType = type_fun(params, xtype);

            list_append(lptr, cons_make(fntype, dedFnType));

            break;
        }
        default:
            do { fprintf(
# 179 "src/infer/constraints.c" 3 4
           stderr
# 179 "src/infer/constraints.c"
           , "Expression is not a function and cannot be applied" "\n"); *error = 
# 179 "src/infer/constraints.c" 3 4
           1
# 179 "src/infer/constraints.c"
           ; } while (
# 179 "src/infer/constraints.c" 3 4
           0
# 179 "src/infer/constraints.c"
           );
            break;
        }

        collect_cons(lptr, func, error);
        collect_cons_list(lptr, args, error);

        break;
    }
    case e_let:
    {
        Type *declType = ast->exprLet.exprType;
        TypeList *params = ast->exprLet.params;

        TypedAst *expr = ast->exprLet.expr;
        TypedAst *block = ast->exprLet.block;

        Type *retType = expr->xtype;


        if (params != 
# 199 "src/infer/constraints.c" 3 4
                     ((void *)0)
# 199 "src/infer/constraints.c"
                         ) {
           retType = type_fun(params, retType);
        }


        list_append(lptr, cons_make(retType, declType));
        collect_cons(lptr, expr, error);

        if (block != 
# 207 "src/infer/constraints.c" 3 4
                    ((void *)0)
# 207 "src/infer/constraints.c"
                        ) {
            retType = block->xtype;
            collect_cons(lptr, block, error);
        }

        list_append(lptr, cons_make(xtype, retType));

        break;
    }
    case e_if:
    {
        list_append(lptr, cons_make(tbool, ast->exprIf.cond->xtype));

        collect_cons(lptr, ast->exprIf.cond, error);
        collect_cons(lptr, ast->exprIf.bIf, error);

        TypedAst *bElse = ast->exprIf.bElse;
        if (bElse != 
# 224 "src/infer/constraints.c" 3 4
                    ((void *)0)
# 224 "src/infer/constraints.c"
                        ) {
            list_append(lptr, cons_make(ast->exprIf.bIf->xtype, bElse->xtype));
            collect_cons(lptr, bElse, error);
        }

        list_append(lptr, cons_make(xtype, ast->exprIf.bIf->xtype));

        break;
    }
    case e_tuple:
        collect_cons_list(lptr, ast->exprTuple, error);
        break;
    case e_list:
    {
        TypedAst *head = ast->exprList.head;
        TypedAst *tail = ast->exprList.tail;

        if (head != 
# 241 "src/infer/constraints.c" 3 4
                   ((void *)0)
# 241 "src/infer/constraints.c"
                       ) {
            collect_cons(lptr, head, error);
            collect_cons(lptr, tail, error);


            Type *dedTailType = type_list(head->xtype);
            list_append(lptr, cons_make(tail->xtype, dedTailType));
        }

        break;
    }
    default:
        do { fprintf(
# 253 "src/infer/constraints.c" 3 4
       stderr
# 253 "src/infer/constraints.c"
       , "Inference constraint type not implemented" "\n"); *error = 
# 253 "src/infer/constraints.c" 3 4
       1
# 253 "src/infer/constraints.c"
       ; } while (
# 253 "src/infer/constraints.c" 3 4
       0
# 253 "src/infer/constraints.c"
       );
        break;
    }

}
# 38 "src/codegen_main.c" 2
# 1 "src/infer/make.c" 1




Substitution *subst_make(int poly, Type *type) {
    Substitution *st = malloc(sizeof(Substitution));
    if (st == 
# 7 "src/infer/make.c" 3 4
             ((void *)0)
# 7 "src/infer/make.c"
                 ) return 
# 7 "src/infer/make.c" 3 4
                          ((void *)0)
# 7 "src/infer/make.c"
                              ;

    st->poly = poly;
    st->type = type;
    return st;
}


Constraint *cons_make(Type *first, Type *second) {
    Constraint *cons = malloc(sizeof(Constraint));
    if (cons == 
# 17 "src/infer/make.c" 3 4
               ((void *)0)
# 17 "src/infer/make.c"
                   ) return 
# 17 "src/infer/make.c" 3 4
                            ((void *)0)
# 17 "src/infer/make.c"
                                ;

    cons->first = first;
    cons->second = second;

    return cons;
}
# 39 "src/codegen_main.c" 2
# 1 "src/infer/print.c" 1



void cons_print(Constraint *cons) {
    printf("( ");
    type_print(cons->first);
    printf(" <-> ");
    type_print(cons->second);
    printf(" )");

}

void subst_print(Substitution *sub) {
    printf("[");
    printf("'%c", (char) ('a' + sub->poly - 1));
    printf(" / ");
    type_print(sub->type);
    printf("]");
}
# 40 "src/codegen_main.c" 2
# 1 "src/infer/repoly.c" 1



Type *type_repoly(Type *type, 
# 4 "src/infer/repoly.c" 3 4
                             _Bool 
# 4 "src/infer/repoly.c"
                                  *error) {

    Type *newType = malloc(sizeof(Type));

    memcpy(newType, type, sizeof(Type));

    switch (type->type) {
    case et_unit:
    case et_int:
    case et_float:
    case et_bool:
    case et_string:
    case et_error:
        break;
    case et_natfun:
    {
        newType->typeNative = native_copy(newType->typeNative);

        TypeList *args = 
# 22 "src/infer/repoly.c" 3 4
                        ((void *)0)
# 22 "src/infer/repoly.c"
                            ;
        ListIterator it;
        list_iterate(&type->typeNative->args, &it);
        while (list_iter_has_more(&it)) {
            Type *arg = list_iter_next(&it);
            list_append(&args, type_repoly(arg, error));
        }
        newType->typeNative->args = args;
        newType->typeNative->retType = type_repoly(type->typeNative->retType, error);
        break;
    }
    case et_fun:
    {
        TypeList *args = 
# 35 "src/infer/repoly.c" 3 4
                        ((void *)0)
# 35 "src/infer/repoly.c"
                            ;
        ListIterator it;
        list_iterate(&type->typeFun.args, &it);
        while (list_iter_has_more(&it)) {
            Type *arg = list_iter_next(&it);
            list_append(&args, type_repoly(arg, error));
        }
        newType->typeFun.args = args;
        newType->typeFun.to = type_repoly(type->typeFun.to, error);
        break;
    }
    case et_tuple:
    {
        TypeList *tuple = 
# 48 "src/infer/repoly.c" 3 4
                         ((void *)0)
# 48 "src/infer/repoly.c"
                             ;
        ListIterator it;
        list_iterate(&type->typeTuple, &it);
        while (list_iter_has_more(&it)) {
            Type *elem = list_iter_next(&it);
            list_append(&tuple, type_repoly(elem, error));
        }
        newType->typeTuple = tuple;
        break;
    }
    case et_list:
    {
        newType->typeList = type_repoly(type->typeList, error);
        break;
    }
    case et_poly:
    {

        if (newType->typePoly == 0) {
            newType->typePoly = poly++;
        }
        break;
    }
    default:
        do { fprintf(
# 72 "src/infer/repoly.c" 3 4
       stderr
# 72 "src/infer/repoly.c"
       , "Inference repoly type not implemented" "\n"); *error = 
# 72 "src/infer/repoly.c" 3 4
       1
# 72 "src/infer/repoly.c"
       ; } while (
# 72 "src/infer/repoly.c" 3 4
       0
# 72 "src/infer/repoly.c"
       );
        break;
    }

    return newType;

}
# 41 "src/codegen_main.c" 2
# 1 "src/infer/subst.c" 1







TypeList *subst_sub_list(Substitution *sub, TypeList *list, 
# 8 "src/infer/subst.c" 3 4
                                                           _Bool 
# 8 "src/infer/subst.c"
                                                                *error) {
    TypeList *sublist = 
# 9 "src/infer/subst.c" 3 4
                       ((void *)0)
# 9 "src/infer/subst.c"
                           ;

    ListIterator it;
    list_iterate(&list, &it);

    while (list_iter_has_more(&it)) {
        Type *type = list_iter_next(&it);

        list_append(&sublist, subst_sub(sub, type, error));
    }

    return sublist;
}


Type *subst_sub(Substitution *sub, Type *type, 
# 24 "src/infer/subst.c" 3 4
                                              _Bool 
# 24 "src/infer/subst.c"
                                                   *error) {
    switch (type->type) {
    case et_unit:
    case et_int:
    case et_float:
    case et_bool:
    case et_string:
    case et_error:
        return type;
# 44 "src/infer/subst.c"
    case et_natfun:
    {

        NativeDesc *fn = type->typeNative;

        fn->args = subst_sub_list(sub, fn->args, error);
        fn->retType = subst_sub(sub, fn->retType, error);

        return type;
    }
        case et_fun:
        return type_fun(
                subst_sub_list(sub, type->typeFun.args, error),
                subst_sub(sub, type->typeFun.to, error)
        );
    case et_tuple:
        return type_tuple(
                subst_sub_list(sub, type->typeTuple, error)
        );
    case et_list:
        return type_list(subst_sub(sub, type->typeList, error));
    case et_poly:

        if (type->typePoly == sub->poly) {
            return sub->type;
        } else {
            return type;
        }
    default:
        do { fprintf(
# 73 "src/infer/subst.c" 3 4
       stderr
# 73 "src/infer/subst.c"
       , "Inference subst type not implemented" "\n"); *error = 
# 73 "src/infer/subst.c" 3 4
       1
# 73 "src/infer/subst.c"
       ; } while (
# 73 "src/infer/subst.c" 3 4
       0
# 73 "src/infer/subst.c"
       );
        return type;
    }
}
# 42 "src/codegen_main.c" 2
# 1 "src/infer/typed_print.c" 1


void talist_print(TypedAstList *astlist) {
    list_print(astlist, (ListPrintFunc) typed_print, "[", ", ", "]");
}

void typed_print(TypedAst *ast) {
    if (ast == 
# 8 "src/infer/typed_print.c" 3 4
              ((void *)0)
# 8 "src/infer/typed_print.c"
                  ) {
        printf("<NULL>");
        return;
    }

    printf("<");
    type_print(ast->xtype);
    printf("> ");

    switch (ast->type) {
    case e_unit:
        printf("Unit");
        break;
    case e_int:
        printf("Int %d", ast->exprInteger);
        break;
    case e_float:
        printf("Float %g", ast->exprFloat);
        break;
    case e_bool:
        printf("Bool %s", ast->exprBool ? "true" : "false");
        break;
    case e_string:
        printf("String (%s)", ast->exprString);
        break;
    case e_var:
        printf("Var %s", names_getnm(ast->exprVariable));
        break;
    case e_block:
        printf("Block (");
        typed_print(ast->exprBlock);
        printf(")");
        break;
    case e_seq:
        printf("Seq ");
        talist_print(ast->exprSeq);
        break;
    case e_funcall:
        printf("FunCall (");
        typed_print(ast->exprFunCall.function);
        printf(", ");
        printf("Args ");
        talist_print(ast->exprFunCall.args);
        printf(")");
        break;
    case e_let:
        printf("Let");
        if (ast->exprLet.rec) {
            printf("Rec");
        }
        if (ast->exprLet.params == 
# 58 "src/infer/typed_print.c" 3 4
                                  ((void *)0)
# 58 "src/infer/typed_print.c"
                                      ) {
            printf("Var");
        } else {
            printf("Fun");
        }
        if (ast->exprLet.block != 
# 63 "src/infer/typed_print.c" 3 4
                                 ((void *)0)
# 63 "src/infer/typed_print.c"
                                     ) {
            printf("In");
        }
        printf(" (");
        if (ast->exprLet.exprType != 
# 67 "src/infer/typed_print.c" 3 4
                                    ((void *)0)
# 67 "src/infer/typed_print.c"
                                        ) {
            type_print(ast->exprLet.exprType);
            printf(", ");
        }
        if (ast->exprLet.params != 
# 71 "src/infer/typed_print.c" 3 4
                                  ((void *)0)
# 71 "src/infer/typed_print.c"
                                      ) {
            printf("Params ");
            tdlist_print(ast->exprLet.params, "(", ", ", ")");
            printf(", ");
        }
        typed_print(ast->exprLet.expr);
        if (ast->exprLet.block != 
# 77 "src/infer/typed_print.c" 3 4
                                 ((void *)0)
# 77 "src/infer/typed_print.c"
                                     ) {
            printf(", ");
            typed_print(ast->exprLet.block);
        }
        printf(")");
        break;
    case e_if:
        printf("If");
        if (ast->exprIf.bElse != 
# 85 "src/infer/typed_print.c" 3 4
                                ((void *)0)
# 85 "src/infer/typed_print.c"
                                    ) {
            printf("Else");
        }
        printf(" (");
        typed_print(ast->exprIf.cond);
        printf(", ");
        typed_print(ast->exprIf.bIf);
        if (ast->exprIf.bElse != 
# 92 "src/infer/typed_print.c" 3 4
                                ((void *)0)
# 92 "src/infer/typed_print.c"
                                    ) {
            printf(", ");
            typed_print(ast->exprIf.bElse);
        }
        printf(")");
        break;
    case e_tuple:
        printf("Tuple ");
        talist_print(ast->exprTuple);
        break;
    case e_list:
        printf("List ");
        if (ast->exprList.head == 
# 104 "src/infer/typed_print.c" 3 4
                                 ((void *)0)
# 104 "src/infer/typed_print.c"
                                     ) {
            printf("[]");
        }
        else {
            printf("(");
            typed_print(ast->exprList.head);
            printf(" :: ");
            typed_print(ast->exprList.tail);
            printf(")");
        }
        break;
    default:
        printf("Unhandled");
        break;
    }

}
# 43 "src/codegen_main.c" 2
# 1 "src/infer/unify.c" 1



SubstList *infer_unify(ConsList *constraints, 
# 4 "src/infer/unify.c" 3 4
                                             _Bool 
# 4 "src/infer/unify.c"
                                                  *error) {
    if (constraints == 
# 5 "src/infer/unify.c" 3 4
                      ((void *)0)
# 5 "src/infer/unify.c"
                          ) return 
# 5 "src/infer/unify.c" 3 4
                                   ((void *)0)
# 5 "src/infer/unify.c"
                                       ;

    Constraint *cons = list_data(constraints);
    ConsList *next = list_next(constraints);

    SubstList *subs2 = infer_unify(next, error);

    Type *first = apply_one(subs2, cons->first, error);
    Type *second = apply_one(subs2, cons->second, error);

    SubstList *subs1 = unify_one(first, second, error);

    return list_concat(subs1, subs2);
}


SubstList *unify_one(Type *first, Type *second, 
# 21 "src/infer/unify.c" 3 4
                                               _Bool 
# 21 "src/infer/unify.c"
                                                    *error) {
    if (type_equ(first, second)) return 
# 22 "src/infer/unify.c" 3 4
                                       ((void *)0)
# 22 "src/infer/unify.c"
                                           ;

    TypeEnum t1 = first->type;
    TypeEnum t2 = second->type;

    if (t1 == et_poly) return list_new(subst_make(first->typePoly, second));
    if (t2 == et_poly) return list_new(subst_make(second->typePoly, first));

    if (t1 == et_fun && t2 == et_fun) {
        ConsList *cons = cons_zip(first->typeFun.args, second->typeFun.args);
        if (cons == 
# 32 "src/infer/unify.c" 3 4
                   ((void *)0)
# 32 "src/infer/unify.c"
                       ) {
            do { fprintf(
# 33 "src/infer/unify.c" 3 4
           stderr
# 33 "src/infer/unify.c"
           , "Function argument types mismatch" "\n"); *error = 
# 33 "src/infer/unify.c" 3 4
           1
# 33 "src/infer/unify.c"
           ; } while (
# 33 "src/infer/unify.c" 3 4
           0
# 33 "src/infer/unify.c"
           );
            return 
# 34 "src/infer/unify.c" 3 4
                  ((void *)0)
# 34 "src/infer/unify.c"
                      ;
        }

        list_prepend(&cons, cons_make(first->typeFun.to, second->typeFun.to));

        return infer_unify(cons, error);
    }

    if (t1 == et_tuple && t2 == et_tuple) {
        ConsList *cons = cons_zip(first->typeTuple, second->typeTuple);
        if (cons == 
# 44 "src/infer/unify.c" 3 4
                   ((void *)0)
# 44 "src/infer/unify.c"
                       ) {
            do { fprintf(
# 45 "src/infer/unify.c" 3 4
           stderr
# 45 "src/infer/unify.c"
           , "Tuple element types mismatch" "\n"); *error = 
# 45 "src/infer/unify.c" 3 4
           1
# 45 "src/infer/unify.c"
           ; } while (
# 45 "src/infer/unify.c" 3 4
           0
# 45 "src/infer/unify.c"
           );
            return 
# 46 "src/infer/unify.c" 3 4
                  ((void *)0)
# 46 "src/infer/unify.c"
                      ;
        }

        return infer_unify(cons, error);
    }

    if (t1 == et_list && t2 == et_list) {
        return unify_one(first->typeList, second->typeList, error);
    }

    do { fprintf(
# 56 "src/infer/unify.c" 3 4
   stderr
# 56 "src/infer/unify.c"
   , "Type mismatch" "\n"); *error = 
# 56 "src/infer/unify.c" 3 4
   1
# 56 "src/infer/unify.c"
   ; } while (
# 56 "src/infer/unify.c" 3 4
   0
# 56 "src/infer/unify.c"
   );
    return 
# 57 "src/infer/unify.c" 3 4
          ((void *)0)
# 57 "src/infer/unify.c"
              ;

}
# 44 "src/codegen_main.c" 2

# 1 "src/natives/nat.h" 1
# 46 "src/codegen_main.c" 2
# 1 "src/natives/cmp.c" 1


# 1 "src/natives/nat.h" 1
# 4 "src/natives/cmp.c" 2


int cmp_tuple(Value *x, Value *y);
int cmp_list(Value *x, Value *y);
int cmpi(int x, int y);
int cmpf(double x, double y);


Value * native_equal (Value * x , Value * y ) {
    return value_make_bool((native_compare(x, y)->valInt == 0));
}
Value * native_lt (Value * x , Value * y ) {
    return value_make_bool((native_compare(x, y)->valInt < 0));
}
Value * native_lte (Value * x , Value * y ) {
    return value_make_bool((native_compare(x, y)->valInt <= 0));
}
Value * native_gt (Value * x , Value * y ) {
    return value_make_bool((native_compare(x, y)->valInt > 0));
}
Value * native_gte (Value * x , Value * y ) {
    return value_make_bool((native_compare(x, y)->valInt >= 0));
}

Value * native_and (Value * x , Value * y ) {
    return value_make_bool((x->valBool && y->valBool));
}
Value * native_or (Value * x , Value * y ) {
    return value_make_bool((x->valBool || y->valBool));
}


Value * native_compare (Value * x , Value * y ) {
    if (x->type != y->type) {
        fprintf(
# 38 "src/natives/cmp.c" 3 4
               stderr
# 38 "src/natives/cmp.c"
                     , "Can't compare different types");
        return value_make_int((-1));
    }

    switch (x->type) {
    case et_unit:
        return value_make_int((0));
    case et_int:
        return value_make_int((cmpi(x->valInt, y->valInt)));
    case et_float:
        return value_make_int((cmpf(x->valFloat, y->valFloat)));
    case et_bool:
        return value_make_int((cmpi(x->valBool, y->valBool)));
    case et_string:
        return value_make_int((strcmp(x->valString, y->valString)));
    case et_natfun:
    case et_fun:
        fprintf(
# 55 "src/natives/cmp.c" 3 4
               stderr
# 55 "src/natives/cmp.c"
                     , "Cannot compare functional values");
        return value_make_int((-1));
    case et_tuple:
        return value_make_int((cmp_tuple(x, y)));
    case et_list:
        return value_make_int((cmp_list(x, y)));
    default:
        fprintf(
# 62 "src/natives/cmp.c" 3 4
               stderr
# 62 "src/natives/cmp.c"
                     , "Comparison not implemented yet");
        return value_make_int((-1));
    }
}


int cmp_tuple(Value *x, Value *y) {
    ValueList *elx = x->valTuple;
    ValueList *ely = y->valTuple;

    if (list_length(elx) != list_length(ely)) {
        fprintf(
# 73 "src/natives/cmp.c" 3 4
               stderr
# 73 "src/natives/cmp.c"
                     , "Can't compare different tuple types");
        return -1;
    }

    ListIterator itx, ity;
    list_iterate(&elx, &itx);
    list_iterate(&ely, &ity);

    int c = 0;

    while (c == 0 && list_iter_has_more(&itx) && list_iter_has_more(&ity)) {
        Value *vx = list_iter_next(&itx);
        Value *vy = list_iter_next(&ity);

        c = native_compare(vx, vy)->valInt;
    }

    return c;
}

int cmp_list(Value *x, Value *y) {


    Value *xHead = x->valList.head;
    Value *yHead = y->valList.head;

    if (xHead == 
# 99 "src/natives/cmp.c" 3 4
                ((void *)0)
# 99 "src/natives/cmp.c"
                    ) {
        return (yHead == 
# 100 "src/natives/cmp.c" 3 4
                        ((void *)0)
# 100 "src/natives/cmp.c"
                            ) ? 0 : -1;
    }
    if (yHead == 
# 102 "src/natives/cmp.c" 3 4
                ((void *)0)
# 102 "src/natives/cmp.c"
                    ) return 1;

    Value *xTail = x->valList.tail;
    Value *yTail = y->valList.tail;

    int c = native_compare(xHead, yHead)->valInt;

    if (c == 0) {
        return cmp_list(xTail, yTail);
    }
    return c;
}

int cmpi(int x, int y) {
    return (x < y) ? -1 : (x > y);
}

int cmpf(double x, double y) {
    return (x < y) ? -1 : (x > y);
}
# 47 "src/codegen_main.c" 2
# 1 "src/natives/conv.c" 1


Value * native_int_of_float (Value * x ) {
    return value_make_int(((int) x->valFloat));
}

Value * native_float_of_int (Value * x ) {
    return value_make_float(((double) x->valInt));
}
# 48 "src/codegen_main.c" 2
# 1 "src/natives/list.c" 1


Value * native_hd (Value * lst ) {
    return lst->valList.head;
}

Value * native_tl (Value * lst ) {
    return lst->valList.tail;
}
# 49 "src/codegen_main.c" 2
# 1 "src/natives/mathf.c" 1


Value * native_addf (Value * x , Value * y ) {
    return value_make_float((x->valFloat + y->valFloat));
}

Value * native_subf (Value * x , Value * y ) {
    return value_make_float((x->valFloat - y->valFloat));
}

Value * native_mulf (Value * x , Value * y ) {
    return value_make_float((x->valFloat * y->valFloat));
}

Value * native_divf (Value * x , Value * y ) {
    if (y->valFloat == 0) {
        fprintf(
# 17 "src/natives/mathf.c" 3 4
               stderr
# 17 "src/natives/mathf.c"
                     , "Division by zero\n");
        return vunit;
    }
    return value_make_float((x->valFloat / y->valFloat));
}
# 50 "src/codegen_main.c" 2
# 1 "src/natives/mathi.c" 1
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include-fixed/limits.h" 1 3 4
# 34 "/usr/lib/gcc/x86_64-linux-gnu/7/include-fixed/limits.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include-fixed/syslimits.h" 1 3 4






# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include-fixed/limits.h" 1 3 4
# 194 "/usr/lib/gcc/x86_64-linux-gnu/7/include-fixed/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 143 "/usr/include/limits.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 1 3 4
# 160 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 1 3 4
# 38 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 39 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 2 3 4
# 161 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 2 3 4
# 144 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/posix2_lim.h" 1 3 4
# 148 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/xopen_lim.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/xopen_lim.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/xopen_lim.h" 2 3 4
# 152 "/usr/include/limits.h" 2 3 4
# 195 "/usr/lib/gcc/x86_64-linux-gnu/7/include-fixed/limits.h" 2 3 4
# 8 "/usr/lib/gcc/x86_64-linux-gnu/7/include-fixed/syslimits.h" 2 3 4
# 35 "/usr/lib/gcc/x86_64-linux-gnu/7/include-fixed/limits.h" 2 3 4
# 2 "src/natives/mathi.c" 2
# 33 "src/natives/mathi.c"
Value * native_addi (Value * x , Value * y ) {
    int valx = x->valInt;
    int valy = y->valInt;
    if (((valy) < 0 ? (valx) < (
# 36 "src/natives/mathi.c" 3 4
       (-0x7fffffff - 1)
# 36 "src/natives/mathi.c"
       ) - (valy) : (0x7fffffff) - (valy) < (valx))) {
        fprintf(
# 37 "src/natives/mathi.c" 3 4
               stderr
# 37 "src/natives/mathi.c"
                     , "Integer add overflow\n");
    }
    return value_make_int((valx + valy));
}

Value * native_subi (Value * x , Value * y ) {
    int valx = x->valInt;
    int valy = y->valInt;
    if (((valy) < 0 ? (0x7fffffff) + (valy) < (valx) : (valx) < (
# 45 "src/natives/mathi.c" 3 4
       (-0x7fffffff - 1)
# 45 "src/natives/mathi.c"
       ) + (valy))) {
        fprintf(
# 46 "src/natives/mathi.c" 3 4
               stderr
# 46 "src/natives/mathi.c"
                     , "Integer subtract overflow\n");
    }
    return value_make_int((valx - valy));
}

Value * native_muli (Value * x , Value * y ) {
    int valx = x->valInt;
    int valy = y->valInt;
    if (((valy) < 0 ? ((valx) < 0 ? (valx) < (0x7fffffff) / (valy) : (valy) == -1 ? 0 : (
# 54 "src/natives/mathi.c" 3 4
       (-0x7fffffff - 1)
# 54 "src/natives/mathi.c"
       ) / (valy) < (valx)) : (valy) == 0 ? 0 : ((valx) < 0 ? (valx) < (
# 54 "src/natives/mathi.c" 3 4
       (-0x7fffffff - 1)
# 54 "src/natives/mathi.c"
       ) / (valy) : (0x7fffffff) / (valy) < (valx)))) {
        fprintf(
# 55 "src/natives/mathi.c" 3 4
               stderr
# 55 "src/natives/mathi.c"
                     , "Integer multiply overflow\n");
    }
    return value_make_int((valx * valy));
}

Value * native_divi (Value * x , Value * y ) {
    int valx = x->valInt;
    int valy = y->valInt;
    if (valy == 0) {
        fprintf(
# 64 "src/natives/mathi.c" 3 4
               stderr
# 64 "src/natives/mathi.c"
                     , "Division by zero\n");
        return vunit;
    }
    if (((
# 67 "src/natives/mathi.c" 3 4
       (-0x7fffffff - 1)
# 67 "src/natives/mathi.c"
       ) < 0 && (valy) == -1 && (valx) < - (0x7fffffff))) {
        fprintf(
# 68 "src/natives/mathi.c" 3 4
               stderr
# 68 "src/natives/mathi.c"
                     , "Integer division overflow\n");
    }
    return value_make_int((valx / valy));
}
# 51 "src/codegen_main.c" 2
# 1 "src/natives/print.c" 1


Value * native_print_string (Value * str ) {
    printf("%s", unescape(str->valString));
    return vunit;
}

Value * native_print_int (Value * x ) {
    printf("%d", x->valInt);
    return vunit;
}

Value * native_print_float (Value * x ) {
    printf("%g", x->valFloat);
    return vunit;
}

Value * native_print_bool (Value * x ) {
    printf("%s", (x->valBool ? "true" : "false"));
    return vunit;
}
# 52 "src/codegen_main.c" 2


int flag_debug = 0;

int main(void) {
   /* Initialize the name table */
   names_init();

   /* Initialize native functions */
   natives_init();

   /* Define the program statically */
   AstList *prog = list_from(
      ast_make_let(
         list_from(
            nmalloc(names_getid("x")),
            0
         ),
         0,
         0,
         ast_make_integer(1),
         0
      ),
      ast_make_let(
         list_from(
            nmalloc(names_getid("y")),
            0
         ),
         0,
         0,
         ast_make_float(5.000000F),
         0
      ),
      ast_make_let(
         list_from(
            nmalloc(names_getid("yf")),
            0
         ),
         0,
         0,
         ast_make_float(3.140000F),
         0
      ),
      ast_make_let(
         list_from(
            nmalloc(names_getid("z")),
            0
         ),
         0,
         0,
         ast_make_string(strdup("String with escape\n \" characters in it")),
         0
      ),
      ast_make_let(
         list_from(
            nmalloc(names_getid("x")),
            0
         ),
         0,
         0,
         ast_make_integer(2),
         ast_make_funcall(
            ast_make_variable(names_getid("*")),
            list_from(
               ast_make_variable(names_getid("x")),
               ast_make_variable(names_getid("x")),
               0
            )
         )
      ),
      ast_make_funcall(
         ast_make_variable(names_getid("+")),
         list_from(
            ast_make_let(
               list_from(
                  nmalloc(names_getid("x")),
                  0
               ),
               0,
               0,
               ast_make_integer(2),
               ast_make_funcall(
                  ast_make_variable(names_getid("*")),
                  list_from(
                     ast_make_variable(names_getid("x")),
                     ast_make_variable(names_getid("x")),
                     0
                  )
               )
            ),
            ast_make_variable(names_getid("x")),
            0
         )
      ),
      ast_make_funcall(
         ast_make_variable(names_getid("+")),
         list_from(
            ast_make_let(
               list_from(
                  nmalloc(names_getid("x")),
                  0
               ),
               0,
               0,
               ast_make_integer(2),
               ast_make_let(
                  list_from(
                     nmalloc(names_getid("y")),
                     0
                  ),
                  0,
                  0,
                  ast_make_integer(3),
                  ast_make_funcall(
                     ast_make_variable(names_getid("+")),
                     list_from(
                        ast_make_variable(names_getid("x")),
                        ast_make_variable(names_getid("y")),
                        0
                     )
                  )
               )
            ),
            ast_make_variable(names_getid("x")),
            0
         )
      ),
      ast_make_funcall(
         ast_make_variable(names_getid("+")),
         list_from(
            ast_make_funcall(
               ast_make_variable(names_getid("+")),
               list_from(
                  ast_make_let(
                     list_from(
                        nmalloc(names_getid("x")),
                        0
                     ),
                     0,
                     0,
                     ast_make_integer(2),
                     ast_make_let(
                        list_from(
                           nmalloc(names_getid("y")),
                           0
                        ),
                        0,
                        0,
                        ast_make_integer(3),
                        ast_make_funcall(
                           ast_make_variable(names_getid("+")),
                           list_from(
                              ast_make_variable(names_getid("x")),
                              ast_make_variable(names_getid("y")),
                              0
                           )
                        )
                     )
                  ),
                  ast_make_variable(names_getid("x")),
                  0
               )
            ),
            ast_make_let(
               list_from(
                  nmalloc(names_getid("x")),
                  0
               ),
               0,
               0,
               ast_make_integer(5),
               ast_make_funcall(
                  ast_make_variable(names_getid("*")),
                  list_from(
                     ast_make_variable(names_getid("x")),
                     ast_make_variable(names_getid("x")),
                     0
                  )
               )
            ),
            0
         )
      ),
      ast_make_let(
         list_from(
            nmalloc(names_getid("y")),
            0
         ),
         0,
         0,
         ast_make_integer(2),
         ast_make_let(
            list_from(
               nmalloc(names_getid("z")),
               0
            ),
            0,
            0,
            ast_make_variable(names_getid("y")),
            ast_make_let(
               list_from(
                  nmalloc(names_getid("y")),
                  0
               ),
               0,
               0,
               ast_make_integer(3),
               ast_make_funcall(
                  ast_make_variable(names_getid("+")),
                  list_from(
                     ast_make_funcall(
                        ast_make_variable(names_getid("+")),
                        list_from(
                           ast_make_variable(names_getid("x")),
                           ast_make_variable(names_getid("y")),
                           0
                        )
                     ),
                     ast_make_variable(names_getid("z")),
                     0
                  )
               )
            )
         )
      ),
      ast_make_let(
         list_from(
            nmalloc(names_getid("a")),
            0
         ),
         0,
         0,
         ast_make_funcall(
            ast_make_variable(names_getid("=")),
            list_from(
               ast_make_variable(names_getid("x")),
               ast_make_integer(1),
               0
            )
         ),
         0
      ),
      ast_make_let(
         list_from(
            nmalloc(names_getid("b")),
            0
         ),
         0,
         0,
         ast_make_funcall(
            ast_make_variable(names_getid("&&")),
            list_from(
               ast_make_variable(names_getid("a")),
               ast_make_funcall(
                  ast_make_variable(names_getid("<")),
                  list_from(
                     ast_make_float(3.000000F),
                     ast_make_variable(names_getid("y")),
                     0
                  )
               ),
               0
            )
         ),
         0
      ),
      ast_make_let(
         list_from(
            nmalloc(names_getid("x")),
            0
         ),
         0,
         0,
         ast_make_tuple(
            list_from(
               ast_make_integer(1),
               ast_make_integer(2),
               0
            )
         ),
         0
      ),
      ast_make_let(
         list_from(
            nmalloc(names_getid("y")),
            0
         ),
         0,
         0,
         ast_make_tuple(
            list_from(
               ast_make_variable(names_getid("x")),
               ast_make_variable(names_getid("x")),
               0
            )
         ),
         0
      ),
      ast_make_let(
         list_from(
            nmalloc(names_getid("a")),
            nmalloc(names_getid("b")),
            0
         ),
         0,
         0,
         ast_make_variable(names_getid("x")),
         0
      ),
      ast_make_let(
         list_from(
            nmalloc(names_getid("x")),
            nmalloc(names_getid("y")),
            nmalloc(names_getid("z")),
            0
         ),
         0,
         0,
         ast_make_tuple(
            list_from(
               ast_make_variable(names_getid("x")),
               ast_make_integer(1),
               ast_make_funcall(
                  ast_make_variable(names_getid("*")),
                  list_from(
                     ast_make_variable(names_getid("a")),
                     ast_make_variable(names_getid("b")),
                     0
                  )
               ),
               0
            )
         ),
         0
      ),
      ast_make_let(
         list_from(
            nmalloc(names_getid("x")),
            0
         ),
         0,
         0,
         ast_make_integer(9),
         ast_make_let(
            list_from(
               nmalloc(names_getid("y")),
               0
            ),
            0,
            0,
            ast_make_integer(1),
            ast_make_funcall(
               ast_make_variable(names_getid("+")),
               list_from(
                  ast_make_variable(names_getid("x")),
                  ast_make_variable(names_getid("y")),
                  0
               )
            )
         )
      ),
      ast_make_let(
         list_from(
            nmalloc(names_getid("+")),
            0
         ),
         0,
         list_from(
            nmalloc(names_getid("a")),
            nmalloc(names_getid("b")),
            0
         ),
         ast_make_funcall(
            ast_make_variable(names_getid("-")),
            list_from(
               ast_make_variable(names_getid("a")),
               ast_make_variable(names_getid("b")),
               0
            )
         ),
         0
      ),
      ast_make_let(
         list_from(
            nmalloc(names_getid("a")),
            0
         ),
         0,
         0,
         ast_make_integer(12),
         0
      ),
      ast_make_let(
         list_from(
            nmalloc(names_getid("a")),
            0
         ),
         0,
         0,
         ast_make_integer(5),
         ast_make_if(
            ast_make_funcall(
               ast_make_variable(names_getid("<")),
               list_from(
                  ast_make_variable(names_getid("a")),
                  ast_make_integer(1),
                  0
               )
            ),
            ast_make_integer(0),
            ast_make_integer(3)
         )
      ),
      ast_make_let(
         list_from(
            nmalloc(names_getid("f")),
            0
         ),
         0,
         list_from(
            nmalloc(names_getid("x")),
            0
         ),
         ast_make_funcall(
            ast_make_variable(names_getid("*")),
            list_from(
               ast_make_integer(2),
               ast_make_variable(names_getid("x")),
               0
            )
         ),
         0
      ),
      ast_make_let(
         list_from(
            nmalloc(names_getid("g")),
            0
         ),
         0,
         list_from(
            nmalloc(names_getid("x")),
            nmalloc(names_getid("y")),
            nmalloc(names_getid("z")),
            0
         ),
         ast_make_funcall(
            ast_make_variable(names_getid("+")),
            list_from(
               ast_make_variable(names_getid("x")),
               ast_make_funcall(
                  ast_make_variable(names_getid("*")),
                  list_from(
                     ast_make_variable(names_getid("y")),
                     ast_make_variable(names_getid("z")),
                     0
                  )
               ),
               0
            )
         ),
         0
      ),
      ast_make_let(
         list_from(
            nmalloc(names_getid("fact")),
            0
         ),
         1,
         list_from(
            nmalloc(names_getid("n")),
            0
         ),
         ast_make_if(
            ast_make_funcall(
               ast_make_variable(names_getid("=")),
               list_from(
                  ast_make_variable(names_getid("n")),
                  ast_make_integer(0),
                  0
               )
            ),
            ast_make_integer(1),
            ast_make_funcall(
               ast_make_variable(names_getid("*")),
               list_from(
                  ast_make_variable(names_getid("n")),
                  ast_make_funcall(
                     ast_make_variable(names_getid("fact")),
                     list_from(
                        ast_make_funcall(
                           ast_make_variable(names_getid("-")),
                           list_from(
                              ast_make_variable(names_getid("n")),
                              ast_make_integer(1),
                              0
                           )
                        ),
                        0
                     )
                  ),
                  0
               )
            )
         ),
         0
      ),
      ast_make_funcall(
         ast_make_let(
            0,
            0,
            list_from(
               nmalloc(names_getid("x")),
               0
            ),
            ast_make_funcall(
               ast_make_variable(names_getid("+")),
               list_from(
                  ast_make_variable(names_getid("x")),
                  ast_make_integer(1),
                  0
               )
            ),
            0
         ),
         list_from(
            ast_make_funcall(
               ast_make_variable(names_getid("fact")),
               list_from(
                  ast_make_variable(names_getid("a")),
                  0
               )
            ),
            0
         )
      ),
      0
   );

   /* Execute the program */
   int error = 0;

   run_list(prog, 1, (_Bool *) &error);

   /* Check for errors */
   if (error) {
      printf("An error occurred during the execution\n");
   }
   /* Free resources */
   alist_free(prog);
   names_free();

   return error;
}

