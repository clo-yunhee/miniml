# 1 "codegen_main.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "codegen_main.c"
# 1 "common.h" 1



# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 364 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 415 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 416 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 365 "/usr/include/features.h" 2 3 4
# 388 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 389 "/usr/include/features.h" 2 3 4
# 28 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stddef.h" 1 3 4
# 216 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stddef.h" 3 4

# 216 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stddef.h" 3 4
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
# 1 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stddef.h" 1 3 4
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
# 1 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stdarg.h" 3 4
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
# 104 "/usr/include/stdio.h" 3 4
typedef __ssize_t ssize_t;







typedef _G_fpos_t fpos_t;




# 166 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 167 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));




extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));








extern FILE *tmpfile (void) ;
# 211 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
# 229 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 254 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 268 "/usr/include/stdio.h" 3 4






extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 297 "/usr/include/stdio.h" 3 4

# 308 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;
# 321 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));








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

# 414 "/usr/include/stdio.h" 3 4
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
# 445 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 465 "/usr/include/stdio.h" 3 4








extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 496 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 524 "/usr/include/stdio.h" 3 4









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 552 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 563 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 596 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
# 642 "/usr/include/stdio.h" 3 4

# 667 "/usr/include/stdio.h" 3 4
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

# 739 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

# 775 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 794 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 817 "/usr/include/stdio.h" 3 4

# 826 "/usr/include/stdio.h" 3 4


extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;








extern void perror (const char *__s);






# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];
# 856 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
# 874 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));
# 914 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 944 "/usr/include/stdio.h" 3 4

# 5 "common.h" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 32 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stddef.h" 1 3 4
# 328 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stddef.h" 3 4
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
# 56 "/usr/include/stdlib.h" 3 4


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


# 100 "/usr/include/stdlib.h" 3 4
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




__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

# 266 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) ;


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




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
# 115 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





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
# 146 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stddef.h" 1 3 4
# 147 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
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
# 216 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4






# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 1 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 44 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline unsigned int
__bswap_32 (unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}
# 108 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}
# 61 "/usr/include/endian.h" 2 3 4
# 217 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/select.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/select.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/select.h" 2 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 34 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;







# 1 "/usr/include/time.h" 1 3 4
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };
# 46 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 48 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 66 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 98 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 108 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 120 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 133 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 220 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4


__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 58 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4

# 223 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4





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



# 276 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__ , __leaf__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






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





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;










extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));



# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));






# 454 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (2))) ;




extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int at_quick_exit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void quick_exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));







extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));






extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;

# 539 "/usr/include/stdlib.h" 3 4
extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
# 567 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 580 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 602 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 623 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 672 "/usr/include/stdlib.h" 3 4





extern int system (const char *__command) ;

# 694 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) ;






typedef int (*__compar_fn_t) (const void *, const void *);
# 712 "/usr/include/stdlib.h" 3 4



extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
# 735 "/usr/include/stdlib.h" 3 4
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

# 772 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));






extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ , __leaf__));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));








extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 859 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;
# 911 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 921 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 922 "/usr/include/stdlib.h" 2 3 4
# 934 "/usr/include/stdlib.h" 3 4

# 6 "common.h" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stdbool.h" 1 3 4
# 7 "common.h" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stdarg.h" 1 3 4
# 8 "common.h" 2

# 1 "/usr/include/string.h" 1 3 4
# 27 "/usr/include/string.h" 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stddef.h" 1 3 4
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
# 160 "/usr/include/string.h" 2 3 4


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



extern void bcopy (const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 484 "/usr/include/string.h" 3 4
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 512 "/usr/include/string.h" 3 4
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 529 "/usr/include/string.h" 3 4
extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 552 "/usr/include/string.h" 3 4
extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




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
# 656 "/usr/include/string.h" 3 4

# 10 "common.h" 2
# 1 "/usr/include/ctype.h" 1 3 4
# 28 "/usr/include/ctype.h" 3 4

# 46 "/usr/include/ctype.h" 3 4
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

# 11 "common.h" 2
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
# 12 "common.h" 2

# 1 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg.h" 1
# 24 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg.h"
# 1 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/compare-int.h" 1
# 49 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/compare-int.h"

# 49 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/compare-int.h"
int int_equal(void *location1, void *location2);
# 62 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/compare-int.h"
int int_compare(void *location1, void *location2);
# 25 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg.h" 2
# 1 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/compare-pointer.h" 1
# 47 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/compare-pointer.h"
int pointer_equal(void *location1, void *location2);
# 60 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/compare-pointer.h"
int pointer_compare(void *location1, void *location2);
# 26 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg.h" 2
# 1 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/compare-string.h" 1
# 50 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/compare-string.h"
int string_equal(void *string1, void *string2);
# 63 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/compare-string.h"
int string_compare(void *string1, void *string2);
# 75 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/compare-string.h"
int string_nocase_equal(void *string1, void *string2);
# 88 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/compare-string.h"
int string_nocase_compare(void *string1, void *string2);
# 27 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg.h" 2

# 1 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/hash-int.h" 1
# 42 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/hash-int.h"
unsigned int int_hash(void *location);
# 29 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg.h" 2
# 1 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/hash-pointer.h" 1
# 42 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/hash-pointer.h"
unsigned int pointer_hash(void *location);
# 30 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg.h" 2
# 1 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/hash-string.h" 1
# 42 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/hash-string.h"
unsigned int string_hash(void *string);
# 51 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/hash-string.h"
unsigned int string_nocase_hash(void *string);
# 31 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg.h" 2

# 1 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/arraylist.h" 1
# 50 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/arraylist.h"
typedef void *ArrayListValue;
# 59 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/arraylist.h"
typedef struct _ArrayList ArrayList;





struct _ArrayList {



 ArrayListValue *data;



 unsigned int length;



 unsigned int _alloced;
};







typedef int (*ArrayListEqualFunc)(ArrayListValue value1,
                                  ArrayListValue value2);
# 101 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/arraylist.h"
typedef int (*ArrayListCompareFunc)(ArrayListValue value1,
                                    ArrayListValue value2);
# 116 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/arraylist.h"
ArrayList *arraylist_new(unsigned int length);







void arraylist_free(ArrayList *arraylist);
# 136 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/arraylist.h"
int arraylist_append(ArrayList *arraylist, ArrayListValue data);
# 148 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/arraylist.h"
int arraylist_prepend(ArrayList *arraylist, ArrayListValue data);
# 157 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/arraylist.h"
void arraylist_remove(ArrayList *arraylist, unsigned int index);
# 167 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/arraylist.h"
void arraylist_remove_range(ArrayList *arraylist, unsigned int index,
                            unsigned int length);
# 183 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/arraylist.h"
int arraylist_insert(ArrayList *arraylist, unsigned int index,
                     ArrayListValue data);
# 197 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/arraylist.h"
int arraylist_index_of(ArrayList *arraylist,
                       ArrayListEqualFunc callback,
                       ArrayListValue data);







void arraylist_clear(ArrayList *arraylist);
# 216 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/arraylist.h"
void arraylist_sort(ArrayList *arraylist, ArrayListCompareFunc compare_func);
# 33 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg.h" 2
# 1 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/avl-tree.h" 1
# 67 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/avl-tree.h"
typedef struct _AVLTree AVLTree;





typedef void *AVLTreeKey;





typedef void *AVLTreeValue;
# 97 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/avl-tree.h"
typedef struct _AVLTreeNode AVLTreeNode;





typedef enum {
 AVL_TREE_NODE_LEFT = 0,
 AVL_TREE_NODE_RIGHT = 1
} AVLTreeNodeSide;
# 119 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/avl-tree.h"
typedef int (*AVLTreeCompareFunc)(AVLTreeValue value1, AVLTreeValue value2);
# 129 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/avl-tree.h"
AVLTree *avl_tree_new(AVLTreeCompareFunc compare_func);







void avl_tree_free(AVLTree *tree);
# 150 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/avl-tree.h"
AVLTreeNode *avl_tree_insert(AVLTree *tree, AVLTreeKey key,
                             AVLTreeValue value);
# 160 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/avl-tree.h"
void avl_tree_remove_node(AVLTree *tree, AVLTreeNode *node);
# 173 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/avl-tree.h"
int avl_tree_remove(AVLTree *tree, AVLTreeKey key);
# 185 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/avl-tree.h"
AVLTreeNode *avl_tree_lookup_node(AVLTree *tree, AVLTreeKey key);
# 200 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/avl-tree.h"
AVLTreeValue avl_tree_lookup(AVLTree *tree, AVLTreeKey key);
# 210 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/avl-tree.h"
AVLTreeNode *avl_tree_root_node(AVLTree *tree);
# 219 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/avl-tree.h"
AVLTreeKey avl_tree_node_key(AVLTreeNode *node);
# 228 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/avl-tree.h"
AVLTreeValue avl_tree_node_value(AVLTreeNode *node);
# 239 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/avl-tree.h"
AVLTreeNode *avl_tree_node_child(AVLTreeNode *node, AVLTreeNodeSide side);
# 249 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/avl-tree.h"
AVLTreeNode *avl_tree_node_parent(AVLTreeNode *node);
# 258 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/avl-tree.h"
int avl_tree_subtree_height(AVLTreeNode *node);
# 271 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/avl-tree.h"
AVLTreeValue *avl_tree_to_array(AVLTree *tree);
# 280 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/avl-tree.h"
unsigned int avl_tree_num_entries(AVLTree *tree);
# 34 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg.h" 2
# 1 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/binary-heap.h" 1
# 53 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/binary-heap.h"
typedef enum {


 BINARY_HEAP_TYPE_MIN,



 BINARY_HEAP_TYPE_MAX
} BinaryHeapType;





typedef void *BinaryHeapValue;
# 85 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/binary-heap.h"
typedef int (*BinaryHeapCompareFunc)(BinaryHeapValue value1,
                                     BinaryHeapValue value2);





typedef struct _BinaryHeap BinaryHeap;
# 104 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/binary-heap.h"
BinaryHeap *binary_heap_new(BinaryHeapType heap_type,
                            BinaryHeapCompareFunc compare_func);







void binary_heap_free(BinaryHeap *heap);
# 125 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/binary-heap.h"
int binary_heap_insert(BinaryHeap *heap, BinaryHeapValue value);
# 135 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/binary-heap.h"
BinaryHeapValue binary_heap_pop(BinaryHeap *heap);
# 144 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/binary-heap.h"
unsigned int binary_heap_num_entries(BinaryHeap *heap);
# 35 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg.h" 2
# 1 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/binomial-heap.h" 1
# 53 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/binomial-heap.h"
typedef enum {


 BINOMIAL_HEAP_TYPE_MIN,



 BINOMIAL_HEAP_TYPE_MAX
} BinomialHeapType;





typedef void *BinomialHeapValue;
# 85 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/binomial-heap.h"
typedef int (*BinomialHeapCompareFunc)(BinomialHeapValue value1,
                                       BinomialHeapValue value2);





typedef struct _BinomialHeap BinomialHeap;
# 104 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/binomial-heap.h"
BinomialHeap *binomial_heap_new(BinomialHeapType heap_type,
                                BinomialHeapCompareFunc compare_func);







void binomial_heap_free(BinomialHeap *heap);
# 125 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/binomial-heap.h"
int binomial_heap_insert(BinomialHeap *heap, BinomialHeapValue value);
# 135 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/binomial-heap.h"
BinomialHeapValue binomial_heap_pop(BinomialHeap *heap);
# 144 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/binomial-heap.h"
unsigned int binomial_heap_num_entries(BinomialHeap *heap);
# 36 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg.h" 2
# 1 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/bloom-filter.h" 1
# 51 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/bloom-filter.h"
typedef struct _BloomFilter BloomFilter;





typedef void *BloomFilterValue;
# 67 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/bloom-filter.h"
typedef unsigned int (*BloomFilterHashFunc)(BloomFilterValue data);
# 89 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/bloom-filter.h"
BloomFilter *bloom_filter_new(unsigned int table_size,
                              BloomFilterHashFunc hash_func,
                              unsigned int num_functions);







void bloom_filter_free(BloomFilter *bloomfilter);
# 108 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/bloom-filter.h"
void bloom_filter_insert(BloomFilter *bloomfilter, BloomFilterValue value);
# 121 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/bloom-filter.h"
int bloom_filter_query(BloomFilter *bloomfilter, BloomFilterValue value);
# 132 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/bloom-filter.h"
void bloom_filter_read(BloomFilter *bloomfilter, unsigned char *array);
# 146 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/bloom-filter.h"
void bloom_filter_load(BloomFilter *bloomfilter, unsigned char *array);
# 165 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/bloom-filter.h"
BloomFilter *bloom_filter_union(BloomFilter *filter1,
                                BloomFilter *filter2);
# 185 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/bloom-filter.h"
BloomFilter *bloom_filter_intersection(BloomFilter *filter1,
                                       BloomFilter *filter2);
# 37 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg.h" 2
# 1 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/hash-table.h" 1
# 56 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/hash-table.h"
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
# 116 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/hash-table.h"
typedef unsigned int (*HashTableHashFunc)(HashTableKey value);
# 125 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/hash-table.h"
typedef int (*HashTableEqualFunc)(HashTableKey value1, HashTableKey value2);






typedef void (*HashTableKeyFreeFunc)(HashTableKey value);






typedef void (*HashTableValueFreeFunc)(HashTableValue value);
# 153 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/hash-table.h"
HashTable *hash_table_new(HashTableHashFunc hash_func,
                          HashTableEqualFunc equal_func);







void hash_table_free(HashTable *hash_table);
# 173 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/hash-table.h"
void hash_table_register_free_functions(HashTable *hash_table,
                                        HashTableKeyFreeFunc key_free_func,
                                        HashTableValueFreeFunc value_free_func);
# 189 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/hash-table.h"
int hash_table_insert(HashTable *hash_table,
                      HashTableKey key,
                      HashTableValue value);
# 202 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/hash-table.h"
HashTableValue hash_table_lookup(HashTable *hash_table,
                                 HashTableKey key);
# 214 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/hash-table.h"
int hash_table_remove(HashTable *hash_table, HashTableKey key);
# 223 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/hash-table.h"
unsigned int hash_table_num_entries(HashTable *hash_table);
# 233 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/hash-table.h"
void hash_table_iterate(HashTable *hash_table, HashTableIterator *iter);
# 245 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/hash-table.h"
int hash_table_iter_has_more(HashTableIterator *iterator);
# 262 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/hash-table.h"
HashTablePair hash_table_iter_next(HashTableIterator *iterator);
# 38 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg.h" 2
# 1 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/list.h" 1
# 69 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/list.h"
typedef struct _ListEntry ListEntry;





typedef struct _ListIterator ListIterator;





typedef void *ListValue;





struct _ListIterator {
 ListEntry **prev_next;
 ListEntry *current;
};
# 108 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/list.h"
typedef int (*ListCompareFunc)(ListValue value1, ListValue value2);
# 120 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/list.h"
typedef int (*ListEqualFunc)(ListValue value1, ListValue value2);







void list_free(ListEntry *list);
# 139 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/list.h"
ListEntry *list_prepend(ListEntry **list, ListValue data);
# 150 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/list.h"
ListEntry *list_append(ListEntry **list, ListValue data);
# 160 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/list.h"
ListEntry *list_prev(ListEntry *listentry);
# 170 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/list.h"
ListEntry *list_next(ListEntry *listentry);
# 179 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/list.h"
ListValue list_data(ListEntry *listentry);
# 188 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/list.h"
void list_set_data(ListEntry *listentry, ListValue value);
# 198 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/list.h"
ListEntry *list_nth_entry(ListEntry *list, unsigned int n);
# 209 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/list.h"
ListValue list_nth_data(ListEntry *list, unsigned int n);
# 218 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/list.h"
unsigned int list_length(ListEntry *list);
# 230 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/list.h"
ListValue *list_to_array(ListEntry *list);
# 241 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/list.h"
int list_remove_entry(ListEntry **list, ListEntry *entry);
# 253 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/list.h"
unsigned int list_remove_data(ListEntry **list, ListEqualFunc callback,
                              ListValue data);
# 263 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/list.h"
void list_sort(ListEntry **list, ListCompareFunc compare_func);
# 276 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/list.h"
ListEntry *list_find_data(ListEntry *list,
                          ListEqualFunc callback,
                          ListValue data);
# 287 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/list.h"
void list_iterate(ListEntry **list, ListIterator *iter);
# 298 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/list.h"
int list_iter_has_more(ListIterator *iterator);
# 308 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/list.h"
ListValue list_iter_next(ListIterator *iterator);
# 317 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/list.h"
void list_iter_remove(ListIterator *iterator);
# 39 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg.h" 2
# 1 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/queue.h" 1
# 52 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/queue.h"
typedef struct _Queue Queue;





typedef void *QueueValue;
# 73 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/queue.h"
Queue *queue_new(void);







void queue_free(Queue *queue);
# 93 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/queue.h"
int queue_push_head(Queue *queue, QueueValue data);
# 103 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/queue.h"
QueueValue queue_pop_head(Queue *queue);
# 114 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/queue.h"
QueueValue queue_peek_head(Queue *queue);
# 126 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/queue.h"
int queue_push_tail(Queue *queue, QueueValue data);
# 136 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/queue.h"
QueueValue queue_pop_tail(Queue *queue);
# 147 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/queue.h"
QueueValue queue_peek_tail(Queue *queue);
# 157 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/queue.h"
int queue_is_empty(Queue *queue);
# 40 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg.h" 2
# 1 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/rb-tree.h" 1
# 68 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/rb-tree.h"
typedef struct _RBTree RBTree;





typedef void *RBTreeKey;





typedef void *RBTreeValue;
# 98 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/rb-tree.h"
typedef struct _RBTreeNode RBTreeNode;
# 111 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/rb-tree.h"
typedef int (*RBTreeCompareFunc)(RBTreeValue data1, RBTreeValue data2);





typedef enum {
 RB_TREE_NODE_RED,
 RB_TREE_NODE_BLACK,
} RBTreeNodeColor;





typedef enum {
 RB_TREE_NODE_LEFT = 0,
 RB_TREE_NODE_RIGHT = 1
} RBTreeNodeSide;
# 139 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/rb-tree.h"
RBTree *rb_tree_new(RBTreeCompareFunc compare_func);







void rb_tree_free(RBTree *tree);
# 160 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/rb-tree.h"
RBTreeNode *rb_tree_insert(RBTree *tree, RBTreeKey key, RBTreeValue value);
# 169 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/rb-tree.h"
void rb_tree_remove_node(RBTree *tree, RBTreeNode *node);
# 182 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/rb-tree.h"
int rb_tree_remove(RBTree *tree, RBTreeKey key);
# 194 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/rb-tree.h"
RBTreeNode *rb_tree_lookup_node(RBTree *tree, RBTreeKey key);
# 209 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/rb-tree.h"
RBTreeValue rb_tree_lookup(RBTree *tree, RBTreeKey key);
# 219 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/rb-tree.h"
RBTreeNode *rb_tree_root_node(RBTree *tree);
# 228 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/rb-tree.h"
RBTreeKey rb_tree_node_key(RBTreeNode *node);
# 237 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/rb-tree.h"
RBTreeValue rb_tree_node_value(RBTreeNode *node);
# 248 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/rb-tree.h"
RBTreeNode *rb_tree_node_child(RBTreeNode *node, RBTreeNodeSide side);
# 258 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/rb-tree.h"
RBTreeNode *rb_tree_node_parent(RBTreeNode *node);
# 267 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/rb-tree.h"
int rb_tree_subtree_height(RBTreeNode *node);
# 280 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/rb-tree.h"
RBTreeValue *rb_tree_to_array(RBTree *tree);
# 289 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/rb-tree.h"
int rb_tree_num_entries(RBTree *tree);
# 41 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg.h" 2
# 1 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/set.h" 1
# 59 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/set.h"
typedef struct _Set Set;







typedef struct _SetIterator SetIterator;





typedef struct _SetEntry SetEntry;





typedef void *SetValue;





struct _SetIterator {
 Set *set;
 SetEntry *next_entry;
 unsigned int next_chain;
};
# 101 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/set.h"
typedef unsigned int (*SetHashFunc)(SetValue value);






typedef int (*SetEqualFunc)(SetValue value1, SetValue value2);






typedef void (*SetFreeFunc)(SetValue value);
# 127 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/set.h"
Set *set_new(SetHashFunc hash_func, SetEqualFunc equal_func);







void set_free(Set *set);
# 146 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/set.h"
void set_register_free_function(Set *set, SetFreeFunc free_func);
# 159 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/set.h"
int set_insert(Set *set, SetValue data);
# 171 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/set.h"
int set_remove(Set *set, SetValue data);
# 182 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/set.h"
int set_query(Set *set, SetValue data);
# 191 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/set.h"
unsigned int set_num_entries(Set *set);
# 202 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/set.h"
SetValue *set_to_array(Set *set);
# 214 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/set.h"
Set *set_union(Set *set1, Set *set2);
# 226 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/set.h"
Set *set_intersection(Set *set1, Set *set2);
# 236 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/set.h"
void set_iterate(Set *set, SetIterator *iter);
# 247 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/set.h"
int set_iter_has_more(SetIterator *iterator);
# 257 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/set.h"
SetValue set_iter_next(SetIterator *iterator);
# 42 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg.h" 2
# 1 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/slist.h" 1
# 81 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/slist.h"
typedef struct _SListEntry SListEntry;





typedef struct _SListIterator SListIterator;





typedef void *SListValue;





struct _SListIterator {
 SListEntry **prev_next;
 SListEntry *current;
};
# 118 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/slist.h"
typedef int (*SListCompareFunc)(SListValue value1, SListValue value2);
# 128 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/slist.h"
typedef int (*SListEqualFunc)(SListValue value1, SListValue value2);







void slist_free(SListEntry *list);
# 147 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/slist.h"
SListEntry *slist_prepend(SListEntry **list, SListValue data);
# 158 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/slist.h"
SListEntry *slist_append(SListEntry **list, SListValue data);
# 167 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/slist.h"
SListEntry *slist_next(SListEntry *listentry);
# 176 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/slist.h"
SListValue slist_data(SListEntry *listentry);
# 185 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/slist.h"
void slist_set_data(SListEntry *listentry, SListValue value);
# 195 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/slist.h"
SListEntry *slist_nth_entry(SListEntry *list, unsigned int n);
# 206 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/slist.h"
SListValue slist_nth_data(SListEntry *list, unsigned int n);
# 215 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/slist.h"
unsigned int slist_length(SListEntry *list);
# 227 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/slist.h"
SListValue *slist_to_array(SListEntry *list);
# 238 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/slist.h"
int slist_remove_entry(SListEntry **list, SListEntry *entry);
# 250 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/slist.h"
unsigned int slist_remove_data(SListEntry **list,
                               SListEqualFunc callback,
                               SListValue data);
# 261 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/slist.h"
void slist_sort(SListEntry **list, SListCompareFunc compare_func);
# 275 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/slist.h"
SListEntry *slist_find_data(SListEntry *list,
                            SListEqualFunc callback,
                            SListValue data);
# 287 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/slist.h"
void slist_iterate(SListEntry **list, SListIterator *iter);
# 298 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/slist.h"
int slist_iter_has_more(SListIterator *iterator);
# 308 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/slist.h"
SListValue slist_iter_next(SListIterator *iterator);
# 317 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/slist.h"
void slist_iter_remove(SListIterator *iterator);
# 43 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg.h" 2
# 1 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/trie.h" 1
# 51 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/trie.h"
typedef struct _Trie Trie;





typedef void *TrieValue;
# 73 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/trie.h"
Trie *trie_new(void);







void trie_free(Trie *trie);
# 95 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/trie.h"
int trie_insert(Trie *trie, char *key, TrieValue value);
# 110 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/trie.h"
int trie_insert_binary(Trie *trie, unsigned char *key,
                       int key_length, TrieValue value);
# 124 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/trie.h"
TrieValue trie_lookup(Trie *trie, char *key);
# 138 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/trie.h"
TrieValue trie_lookup_binary(Trie *trie, unsigned char *key, int key_length);
# 151 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/trie.h"
int trie_remove(Trie *trie, char *key);
# 165 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/trie.h"
int trie_remove_binary(Trie *trie, unsigned char *key, int key_length);
# 174 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/trie.h"
unsigned int trie_num_entries(Trie *trie);
# 44 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg.h" 2
# 1 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/sortedarray.h" 1
# 52 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/sortedarray.h"
typedef void *SortedArrayValue;
# 65 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/sortedarray.h"
typedef struct _SortedArray SortedArray;
# 76 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/sortedarray.h"
typedef int (*SortedArrayEqualFunc)(SortedArrayValue value1,
                                    SortedArrayValue value2);
# 88 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/sortedarray.h"
typedef int (*SortedArrayCompareFunc)(SortedArrayValue value1,
                                      SortedArrayValue value2);
# 98 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/sortedarray.h"
SortedArrayValue *sortedarray_get(SortedArray *array, unsigned int i);







unsigned int sortedarray_length(SortedArray *array);
# 121 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/sortedarray.h"
SortedArray *sortedarray_new(unsigned int length,
                             SortedArrayEqualFunc equ_func,
                             SortedArrayCompareFunc cmp_func);






void sortedarray_free(SortedArray *sortedarray);
# 139 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/sortedarray.h"
void sortedarray_remove(SortedArray *sortedarray, unsigned int index);
# 149 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/sortedarray.h"
void sortedarray_remove_range(SortedArray *sortedarray, unsigned int index,
                              unsigned int length);
# 160 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/sortedarray.h"
int sortedarray_insert(SortedArray *sortedarray, SortedArrayValue data);
# 169 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg/sortedarray.h"
int sortedarray_index_of(SortedArray *sortedarray, SortedArrayValue data);






void sortedarray_clear(SortedArray *sortedarray);
# 45 "/home/l3info/dufouhug/include/libcalg-1.0/libcalg.h" 2
# 14 "common.h" 2

# 1 "list.h" 1





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
# 16 "common.h" 2
# 1 "names.h" 1



# 1 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stddef.h" 1 3 4
# 149 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stddef.h" 3 4

# 149 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 426 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;
# 5 "names.h" 2




# 8 "names.h"
void names_init(void);
void names_free(void);

void names_settablecap(int capacity);

int names_getid(const char *name);
const char *names_getnm(int id);

int operator_id(int t);



void nmlist_free(NameList *list);
void nmlist_print(NameList *list);



extern int name_addi, name_addf;
extern int name_subi, name_subf;
extern int name_muli, name_mulf;
extern int name_divi, name_divf;
extern int name_equal;
extern int name_lt, name_lte;
extern int name_gt, name_gte;
extern int name_compare;
extern int name_and, name_or;
extern int name_print_string;
extern int name_print_int;
extern int name_print_float;
extern int name_print_bool;
extern int name_int_of_float;
extern int name_float_of_int;
# 17 "common.h" 2
# 1 "environment.h" 1



typedef struct env Env;

typedef struct expr_value Value;
typedef struct expr_typedata Type;



typedef enum expr_type {
    et_unit,
    et_int, et_float, et_bool, et_string,
    et_natfun1, et_natfun2,
    et_fun, et_tuple,

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

Env *env_init(void);
void env_free(Env *env);

Env *env_make(int name, Type *type, Value *value, Env *tail);
Env *env_addlist(NameList *names, TypeList *types, ValueList *values, Env *tail);

Env *env_find(int name, Env *env);

void env_print(Env *env);
void env_printrange(Env *env, Env *from);
void env_printall(Env *env);
# 18 "common.h" 2
# 1 "ast.h" 1




# 1 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stddef.h" 1 3 4
# 6 "ast.h" 2

typedef struct ast Ast;

typedef enum ast_type {
    e_unit, e_int, e_float, e_bool,
    e_string, e_var,
    e_block, e_list,
    e_funcall,
    e_let, e_if, e_tuple
} AstType;

struct ast {
    AstType type;
    union {

        int exprInteger;

        float exprFloat;

        
# 25 "ast.h" 3 4
       _Bool 
# 25 "ast.h"
            exprBool;

        char *exprString;

        int exprVariable;

        Ast *exprBlock;

        AstList *exprList;

        struct { Ast *function;
                 AstList *args; } exprFunCall;

        struct { NameList *names;
                 
# 39 "ast.h" 3 4
                _Bool 
# 39 "ast.h"
                     rec;
                 NameList *params;
                 Ast *expr;
                 Ast *block; } exprLet;

        struct { Ast *cond;
                 Ast *bIf;
                 Ast *bElse; } exprIf;

        AstList *exprTuple;
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
Ast *ast_make_float (float value);
Ast *ast_make_bool (
# 72 "ast.h" 3 4
              _Bool 
# 72 "ast.h"
                   value);
Ast *ast_make_string (char *value);
Ast *ast_make_variable (int name);

Ast *ast_make_block (Ast *ast);
Ast *ast_make_list (AstList *list);

Ast *ast_make_funcall (Ast *fun, AstList *args);
Ast *ast_make_unary (int op, Ast *right);
Ast *ast_make_binary (Ast *left, int op, Ast *right);

Ast *ast_make_let (NameList *names,
              
# 84 "ast.h" 3 4
             _Bool 
# 84 "ast.h"
                  rec, NameList *params,
              Ast *expr, Ast *block);

Ast *ast_make_if (Ast *cond, Ast *bIf,
                          Ast *bElse);

Ast *ast_make_tuple (AstList *elems);

void ast_free(Ast *ast);
void ast_print(Ast *ast);
# 19 "common.h" 2
# 1 "types.h" 1



struct expr_typedata {
    TypeEnum type;
    union {
        struct { TypeList *args;
                 Type *to; } typeFun;
        TypeList *typeTuple;
        int typePoly;
    };
};



Type *type_fun1 (Type *from, Type *to);
Type *type_fun2 (Type *from1, Type *from2, Type *to);
Type *type_fun (TypeList *args, Type *to);
Type *type_tuple (TypeList *elems);
Type *type_poly (int number);

void type_free(Type *type);
void type_print(Type *type);


# 25 "types.h" 3 4
_Bool 
# 25 "types.h"
    type_equ(Type *first, Type *second);



void tdlist_free(TypeList *list);
void tdlist_print(TypeList *list,
        const char *pref, const char *delim, const char *suff);


# 33 "types.h" 3 4
_Bool 
# 33 "types.h"
    tdlist_equ(TypeList *first, TypeList *second);



extern Type *terror;
extern Type *tunit;
extern Type *tint;
extern Type *tfloat;
extern Type *tbool;
extern Type *tstring;
extern Type *tpoly;
# 20 "common.h" 2
# 1 "values.h" 1





struct expr_value {
    TypeEnum type;
    union {
        int valInt;
        float valFloat;
        
# 11 "values.h" 3 4
       _Bool 
# 11 "values.h"
            valBool;
        char *valString;
        NativeFunc1 valNatfun1;
        NativeFunc2 valNatfun2;
        struct { Env *defsite;
                 NameList *params;
                 Ast *body; } valFun;
        ValueList *valTuple;
    };
};




Value *value_make_int (int value);
Value *value_make_float (float value);
Value *value_make_bool (
# 27 "values.h" 3 4
              _Bool 
# 27 "values.h"
                   value);
Value *value_make_string (char *value);
Value *value_make_natfun1 (NativeFunc1 fun);
Value *value_make_natfun2 (NativeFunc2 fun);
Value *value_make_fun (Env *env, NameList *params, Ast *body);
Value *value_make_tuple (ValueList *elems);

void value_free(Value *value);
void value_print(Value *value);



ValueList *vlist_make(Value *head, ValueList *tail);
ValueList *vlist_rev(ValueList *list);

void vlist_free(ValueList *list);
void vlist_print(ValueList *list);



extern Value *vunit;
extern Value *verror;
# 21 "common.h" 2
# 1 "natives.h" 1







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
# 22 "common.h" 2
# 1 "evaluate.h" 1




typedef struct typed_ast TypedAst;

void typed_print(TypedAst *ast);
void talist_print(TypedAstList *astlist);


Type *infer_type(Env *env, Ast *expr);


Value *visit_eval(Env *env, Ast *expr);
# 23 "common.h" 2
# 1 "run.h" 1



void run_list(AstList *list);
void run_expr(Env **env, Ast *expr);

NameList *ast_names(Ast *expr);
# 24 "common.h" 2
# 1 "codegen.h" 1




void generate_code(FILE *fout, AstList *astlist);
# 25 "common.h" 2
# 2 "codegen_main.c" 2

# 1 "ast_make.c" 1
# 9 "ast_make.c"
Ast *ast_make_unit (void) {
    Ast *ast = malloc(sizeof(Ast)); if (ast == 
# 10 "ast_make.c" 3 4
   ((void *)0)
# 10 "ast_make.c"
   ) return 
# 10 "ast_make.c" 3 4
   ((void *)0)
# 10 "ast_make.c"
   ; ast->type = e_unit;;
    return ast;
}

Ast *ast_make_integer (int value) {
    Ast *ast = malloc(sizeof(Ast)); if (ast == 
# 15 "ast_make.c" 3 4
   ((void *)0)
# 15 "ast_make.c"
   ) return 
# 15 "ast_make.c" 3 4
   ((void *)0)
# 15 "ast_make.c"
   ; ast->type = e_int;;
    ast->exprInteger = value;
    return ast;
}

Ast *ast_make_float (float value) {
    Ast *ast = malloc(sizeof(Ast)); if (ast == 
# 21 "ast_make.c" 3 4
   ((void *)0)
# 21 "ast_make.c"
   ) return 
# 21 "ast_make.c" 3 4
   ((void *)0)
# 21 "ast_make.c"
   ; ast->type = e_float;;
    ast->exprFloat = value;
    return ast;
}

Ast *ast_make_bool (
# 26 "ast_make.c" 3 4
              _Bool 
# 26 "ast_make.c"
                   value) {
    Ast *ast = malloc(sizeof(Ast)); if (ast == 
# 27 "ast_make.c" 3 4
   ((void *)0)
# 27 "ast_make.c"
   ) return 
# 27 "ast_make.c" 3 4
   ((void *)0)
# 27 "ast_make.c"
   ; ast->type = e_bool;;
    ast->exprBool = value;
    return ast;
}

Ast *ast_make_string (char *value) {
    Ast *ast = malloc(sizeof(Ast)); if (ast == 
# 33 "ast_make.c" 3 4
   ((void *)0)
# 33 "ast_make.c"
   ) return 
# 33 "ast_make.c" 3 4
   ((void *)0)
# 33 "ast_make.c"
   ; ast->type = e_string;;
    ast->exprString = value;
    return ast;
}

Ast *ast_make_variable (int name) {
    Ast *ast = malloc(sizeof(Ast)); if (ast == 
# 39 "ast_make.c" 3 4
   ((void *)0)
# 39 "ast_make.c"
   ) return 
# 39 "ast_make.c" 3 4
   ((void *)0)
# 39 "ast_make.c"
   ; ast->type = e_var;;
    ast->exprVariable = name;
    return ast;
}

Ast *ast_make_block (Ast *block) {
    Ast *ast = malloc(sizeof(Ast)); if (ast == 
# 45 "ast_make.c" 3 4
   ((void *)0)
# 45 "ast_make.c"
   ) return 
# 45 "ast_make.c" 3 4
   ((void *)0)
# 45 "ast_make.c"
   ; ast->type = e_block;;
    ast->exprBlock = block;
    return ast;
}

Ast *ast_make_list (AstList *list) {
    Ast *ast = malloc(sizeof(Ast)); if (ast == 
# 51 "ast_make.c" 3 4
   ((void *)0)
# 51 "ast_make.c"
   ) return 
# 51 "ast_make.c" 3 4
   ((void *)0)
# 51 "ast_make.c"
   ; ast->type = e_list;;
    ast->exprList = list;
    return ast;
}

Ast *ast_make_funcall (Ast *fun, AstList *args) {
    Ast *ast = malloc(sizeof(Ast)); if (ast == 
# 57 "ast_make.c" 3 4
   ((void *)0)
# 57 "ast_make.c"
   ) return 
# 57 "ast_make.c" 3 4
   ((void *)0)
# 57 "ast_make.c"
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
              
# 76 "ast_make.c" 3 4
             _Bool 
# 76 "ast_make.c"
                  rec, NameList *params,
              Ast *expr, Ast *block) {
    Ast *ast = malloc(sizeof(Ast)); if (ast == 
# 78 "ast_make.c" 3 4
   ((void *)0)
# 78 "ast_make.c"
   ) return 
# 78 "ast_make.c" 3 4
   ((void *)0)
# 78 "ast_make.c"
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
# 89 "ast_make.c" 3 4
   ((void *)0)
# 89 "ast_make.c"
   ) return 
# 89 "ast_make.c" 3 4
   ((void *)0)
# 89 "ast_make.c"
   ; ast->type = e_if;;
    ast->exprIf.cond = cond;
    ast->exprIf.bIf = bIf;
    ast->exprIf.bElse = bElse;
    return ast;
}

Ast *ast_make_tuple (AstList *exprs) {
    Ast *ast = malloc(sizeof(Ast)); if (ast == 
# 97 "ast_make.c" 3 4
   ((void *)0)
# 97 "ast_make.c"
   ) return 
# 97 "ast_make.c" 3 4
   ((void *)0)
# 97 "ast_make.c"
   ; ast->type = e_tuple;;
    ast->exprTuple = exprs;
    return ast;
}
# 4 "codegen_main.c" 2
# 1 "ast_free.c" 1


void alist_free(AstList *list) {
    list_foreach(list, (ListConsumer) ast_free);
    list_free(list);
}

void ast_free(Ast *ast) {
    if (ast == 
# 9 "ast_free.c" 3 4
              ((void *)0)
# 9 "ast_free.c"
                  ) return;

    switch (ast->type) {
    case e_string:
        free(ast->exprString);
        break;
    case e_block:
        ast_free(ast->exprBlock);
        break;
    case e_list:
        alist_free(ast->exprList);
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
    default:
        break;
    }

    free(ast);
}
# 5 "codegen_main.c" 2
# 1 "value_make.c" 1
# 9 "value_make.c"
Value *value_make_unit (void) {
    Value *val = malloc(sizeof(Value)); if (val == 
# 10 "value_make.c" 3 4
   ((void *)0)
# 10 "value_make.c"
   ) return 
# 10 "value_make.c" 3 4
   ((void *)0)
# 10 "value_make.c"
   ; val->type = et_unit;;
    return val;
}

Value *value_make_int (int value) {
    Value *val = malloc(sizeof(Value)); if (val == 
# 15 "value_make.c" 3 4
   ((void *)0)
# 15 "value_make.c"
   ) return 
# 15 "value_make.c" 3 4
   ((void *)0)
# 15 "value_make.c"
   ; val->type = et_int;;
    val->valInt = value;
    return val;
}

Value *value_make_float (float value) {
    Value *val = malloc(sizeof(Value)); if (val == 
# 21 "value_make.c" 3 4
   ((void *)0)
# 21 "value_make.c"
   ) return 
# 21 "value_make.c" 3 4
   ((void *)0)
# 21 "value_make.c"
   ; val->type = et_float;;
    val->valFloat = value;
    return val;
}

Value *value_make_bool (
# 26 "value_make.c" 3 4
              _Bool 
# 26 "value_make.c"
                   value) {
    Value *val = malloc(sizeof(Value)); if (val == 
# 27 "value_make.c" 3 4
   ((void *)0)
# 27 "value_make.c"
   ) return 
# 27 "value_make.c" 3 4
   ((void *)0)
# 27 "value_make.c"
   ; val->type = et_bool;;
    val->valBool = value;
    return val;
}

Value *value_make_string (char *value) {
    Value *val = malloc(sizeof(Value)); if (val == 
# 33 "value_make.c" 3 4
   ((void *)0)
# 33 "value_make.c"
   ) return 
# 33 "value_make.c" 3 4
   ((void *)0)
# 33 "value_make.c"
   ; val->type = et_string;;
    val->valString = value;
    return val;
}

Value *value_make_natfun1 (NativeFunc1 fun) {
    Value *val = malloc(sizeof(Value)); if (val == 
# 39 "value_make.c" 3 4
   ((void *)0)
# 39 "value_make.c"
   ) return 
# 39 "value_make.c" 3 4
   ((void *)0)
# 39 "value_make.c"
   ; val->type = et_natfun1;;
    val->valNatfun1 = fun;
    return val;
}

Value *value_make_natfun2 (NativeFunc2 fun) {
    Value *val = malloc(sizeof(Value)); if (val == 
# 45 "value_make.c" 3 4
   ((void *)0)
# 45 "value_make.c"
   ) return 
# 45 "value_make.c" 3 4
   ((void *)0)
# 45 "value_make.c"
   ; val->type = et_natfun2;;
    val->valNatfun2 = fun;
    return val;
}

Value *value_make_fun (Env *defsite, NameList *params, Ast *body) {
    Value *val = malloc(sizeof(Value)); if (val == 
# 51 "value_make.c" 3 4
   ((void *)0)
# 51 "value_make.c"
   ) return 
# 51 "value_make.c" 3 4
   ((void *)0)
# 51 "value_make.c"
   ; val->type = et_fun;;
    val->valFun.defsite = defsite;
    val->valFun.params = params;
    val->valFun.body = body;
    return val;
}

Value *value_make_tuple (ValueList *elems) {
    Value *val = malloc(sizeof(Value)); if (val == 
# 59 "value_make.c" 3 4
   ((void *)0)
# 59 "value_make.c"
   ) return 
# 59 "value_make.c" 3 4
   ((void *)0)
# 59 "value_make.c"
   ; val->type = et_tuple;;
    val->valTuple = elems;
    return val;
}

Value *value_make_error (void) {
    Value *val = malloc(sizeof(Value)); if (val == 
# 65 "value_make.c" 3 4
   ((void *)0)
# 65 "value_make.c"
   ) return 
# 65 "value_make.c" 3 4
   ((void *)0)
# 65 "value_make.c"
   ; val->type = et_error;;
    return val;
}


static Value v_unit = { .type = et_unit };
static Value v_error = { .type = et_error };

Value *vunit = &v_unit;
Value *verror = &v_error;
# 6 "codegen_main.c" 2
# 1 "value_free.c" 1


void vlist_free(ValueList *list) {
    list_foreach(list, (ListConsumer) value_free);
    list_free(list);
}

void value_free(Value *value) {
    if (value == 
# 9 "value_free.c" 3 4
                ((void *)0)
# 9 "value_free.c"
                    ) return;

    switch (value->type) {
    case et_fun:
        nmlist_free(value->valFun.params);
        ast_free(value->valFun.body);
        break;
    case et_tuple:
        vlist_free(value->valTuple);
        break;
    default:
        break;
    }

    free(value);
}
# 7 "codegen_main.c" 2
# 1 "value_print.c" 1


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
        printf("%s", value->valString);
        break;
    case et_natfun1:
    case et_natfun2:
        printf("<native-fun>");
        break;
    case et_fun:
        printf("<fun>");
        break;
    case et_tuple:
        vlist_print(value->valTuple);
        break;
    case et_error:
    default:
        printf("???");
        break;
    }
}
# 8 "codegen_main.c" 2
# 1 "type_make.c" 1



Type *new_type(TypeEnum et) {
    Type *type = malloc(sizeof(Type));
    if (type == 
# 6 "type_make.c" 3 4
               ((void *)0)
# 6 "type_make.c"
                   ) return 
# 6 "type_make.c" 3 4
                            ((void *)0)
# 6 "type_make.c"
                                ;
    type->type = et;
    return type;
}


Type *type_fun1 (Type *from, Type *to) {
    TypeList *args = list_new(from);
    return type_fun(args, to);
}

Type *type_fun2 (Type *from1, Type *from2, Type *to) {
    TypeList *args = list_new(from1);
    list_append(&args, from2);
    return type_fun(args, to);
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

Type *terror = &t_error;
Type *tunit = &t_unit;
Type *tint = &t_int;
Type *tfloat = &t_float;
Type *tbool = &t_bool;
Type *tstring = &t_string;
Type *tpoly = &t_poly;
# 9 "codegen_main.c" 2
# 1 "type_free.c" 1


void tdlist_free(TypeList *list) {
    list_foreach(list, (ListConsumer) type_free);
    list_free(list);
}

void type_free(Type *type) {
    if (type == 
# 9 "type_free.c" 3 4
               ((void *)0)
# 9 "type_free.c"
                   ) return;

    switch (type->type) {
# 21 "type_free.c"
    case et_fun:
        tdlist_free(type->typeFun.args);
        type_free(type->typeFun.to);
        break;
    case et_tuple:
        tdlist_free(type->typeTuple);
        break;
    default:
        break;
    }

    free(type);
}
# 10 "codegen_main.c" 2
# 1 "type_print.c" 1


void tdlist_print(TypeList *list, const char *pref, const char *delim, const char *suff) {
    list_print(list, (ListPrintFunc) type_print, pref, delim, suff);
}

void type_print(Type *type) {
    if (type == 
# 8 "type_print.c" 3 4
               ((void *)0)
# 8 "type_print.c"
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
# 41 "type_print.c"
    case et_fun:
        tdlist_print(type->typeFun.args, "", " -> ", "");
        printf(" -> ");
        type_print(type->typeFun.to);
        break;
    case et_tuple:
        tdlist_print(type->typeTuple, "(", " * ", ")");
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
# 11 "codegen_main.c" 2
# 1 "type_equ.c" 1



# 3 "type_equ.c" 3 4
_Bool 
# 3 "type_equ.c"
    tdlist_equ(TypeList *first, TypeList *second) {
    ListIterator it1, it2;
    list_iterate(&first, &it1);
    list_iterate(&second, &it2);

    while (list_iter_has_more(&it1) && list_iter_has_more(&it2)) {
        Type *type1 = list_iter_next(&it1);
        Type *type2 = list_iter_next(&it2);

        if (!type_equ(type1, type2))
            return 
# 13 "type_equ.c" 3 4
                  0
# 13 "type_equ.c"
                       ;
    }


    return list_iter_has_more(&it1) || list_iter_has_more(&it2);
}


# 20 "type_equ.c" 3 4
_Bool 
# 20 "type_equ.c"
    type_equ(Type *first, Type *second) {
    if (first == 
# 21 "type_equ.c" 3 4
                ((void *)0) 
# 21 "type_equ.c"
                     || second == 
# 21 "type_equ.c" 3 4
                                  ((void *)0)
# 21 "type_equ.c"
                                      ) return 
# 21 "type_equ.c" 3 4
                                               0
# 21 "type_equ.c"
                                                    ;
    if (first->type != second->type) {
        return 
# 23 "type_equ.c" 3 4
              0
# 23 "type_equ.c"
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
# 33 "type_equ.c" 3 4
              1
# 33 "type_equ.c"
                  ;







    case et_fun:
        return tdlist_equ(first->typeFun.args, second->typeFun.args)
                && type_equ(first->typeFun.to, second->typeFun.to);
    case et_tuple:
        return tdlist_equ(first->typeTuple, second->typeTuple);
    case et_poly:
        return first->typePoly == second->typePoly;
    default:
        fprintf(
# 49 "type_equ.c" 3 4
               stderr
# 49 "type_equ.c"
                     , "Type equality not implemented yet\n");
        return 
# 50 "type_equ.c" 3 4
              0
# 50 "type_equ.c"
                   ;
    }
}
# 12 "codegen_main.c" 2
# 1 "name_list.c" 1



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
# 13 "codegen_main.c" 2
# 1 "name_table.c" 1
# 12 "name_table.c"
static int add_name(char *name);

static HashTable *name_table = 
# 14 "name_table.c" 3 4
                              ((void *)0)
# 14 "name_table.c"
                                  ;
static HashTable *id_table = 
# 15 "name_table.c" 3 4
                            ((void *)0)
# 15 "name_table.c"
                                ;

static int last_id = 1;


int name_addi, name_addf;
int name_subi, name_subf;
int name_muli, name_mulf;
int name_divi, name_divf;
int name_equal;
int name_lt, name_lte;
int name_gt, name_gte;
int name_compare;
int name_and, name_or;
int name_print_string;
int name_print_int;
int name_print_float;
int name_print_bool;
int name_int_of_float;
int name_float_of_int;


int names_getid(const char *name) {
    char *namedup = strdup(name);
    int *id = hash_table_lookup(name_table, namedup);
    return id != 
# 40 "name_table.c" 3 4
                ((void *)0) 
# 40 "name_table.c"
                     ? *id : add_name(namedup);
}

const char *names_getnm(int id) {
    if (id == 0) return "<no-name>";
    const char *name = hash_table_lookup(id_table, &id);
    return name != 
# 46 "name_table.c" 3 4
                  ((void *)0) 
# 46 "name_table.c"
                       ? name : "<undefined>";
}

void names_init(void) {
    if (name_table != 
# 50 "name_table.c" 3 4
                     ((void *)0)
# 50 "name_table.c"
                         ) {
        fprintf(
# 51 "name_table.c" 3 4
               stderr
# 51 "name_table.c"
                     , "Name table is already initialized\n");
    } else {
        name_table = hash_table_new(string_hash, string_equal);
        id_table = hash_table_new(int_hash, int_equal);
        if (name_table == 
# 55 "name_table.c" 3 4
                         ((void *)0) 
# 55 "name_table.c"
                              || id_table == 
# 55 "name_table.c" 3 4
                                             ((void *)0)
# 55 "name_table.c"
                                                 ) {
            fprintf(
# 56 "name_table.c" 3 4
                   stderr
# 56 "name_table.c"
                         , "Name table was not initialized\n");
            if (name_table != 
# 57 "name_table.c" 3 4
                             ((void *)0)
# 57 "name_table.c"
                                 ) {
                hash_table_free(name_table);
                name_table = 
# 59 "name_table.c" 3 4
                            ((void *)0)
# 59 "name_table.c"
                                ;
            }
            if (id_table != 
# 61 "name_table.c" 3 4
                           ((void *)0)
# 61 "name_table.c"
                               ) {
                hash_table_free(id_table);
                id_table = 
# 63 "name_table.c" 3 4
                          ((void *)0)
# 63 "name_table.c"
                              ;
            }
        } else {
            hash_table_register_free_functions(name_table, 
# 66 "name_table.c" 3 4
                                                          ((void *)0)
# 66 "name_table.c"
                                                              , 
# 66 "name_table.c" 3 4
                                                                ((void *)0)
# 66 "name_table.c"
                                                                    );

            name_addi = add_name("+");
            name_subi = add_name("-");
            name_muli = add_name("*");
            name_divi = add_name("/");

            name_addf = add_name("+.");
            name_subf = add_name("-.");
            name_mulf = add_name("*.");
            name_divf = add_name("/.");

            name_equal = add_name("=");
            name_lt = add_name("<");
            name_lte = add_name("<=");
            name_gt = add_name(">");
            name_gte = add_name(">=");
            name_compare = add_name("compare");

            name_and = add_name("&&");
            name_or = add_name("||");

            name_print_string = add_name("print_string");
            name_print_int = add_name("print_int");
            name_print_float = add_name("print_float");
            name_print_bool = add_name("print_bool");

            name_int_of_float = add_name("int_of_float");
            name_float_of_int = add_name("float_of_int");
        }
    }
}

void names_free(void) {
    if (name_table == 
# 100 "name_table.c" 3 4
                     ((void *)0)
# 100 "name_table.c"
                         ) {
        fprintf(
# 101 "name_table.c" 3 4
               stderr
# 101 "name_table.c"
                     , "Name table is not initialized\n");
    } else {
        hash_table_free(name_table);
        hash_table_free(id_table);

        name_table = 
# 106 "name_table.c" 3 4
                    ((void *)0)
# 106 "name_table.c"
                        ;
        id_table = 
# 107 "name_table.c" 3 4
                  ((void *)0)
# 107 "name_table.c"
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
# 14 "codegen_main.c" 2
# 1 "environment.c" 1







Env *env_init(void) {

    Env *env = 
# 10 "environment.c" 3 4
              ((void *)0)
# 10 "environment.c"
                  ;





    env = env_make(name_addi, type_fun2(tint, tint, tint), value_make_natfun2(native_addi), env);;
    env = env_make(name_subi, type_fun2(tint, tint, tint), value_make_natfun2(native_subi), env);;
    env = env_make(name_muli, type_fun2(tint, tint, tint), value_make_natfun2(native_muli), env);;
    env = env_make(name_divi, type_fun2(tint, tint, tint), value_make_natfun2(native_divi), env);;





    env = env_make(name_addf, type_fun2(tfloat, tfloat, tfloat), value_make_natfun2(native_addf), env);;
    env = env_make(name_subf, type_fun2(tfloat, tfloat, tfloat), value_make_natfun2(native_subf), env);;
    env = env_make(name_mulf, type_fun2(tfloat, tfloat, tfloat), value_make_natfun2(native_mulf), env);;
    env = env_make(name_divf, type_fun2(tfloat, tfloat, tfloat), value_make_natfun2(native_divf), env);;







    env = env_make(name_compare, type_fun2(tpoly, tpoly, tint), value_make_natfun2(native_compare), env);;
    env = env_make(name_equal, type_fun2(tpoly, tpoly, tbool), value_make_natfun2(native_equal), env);;
    env = env_make(name_lt, type_fun2(tpoly, tpoly, tbool), value_make_natfun2(native_lt), env);;
    env = env_make(name_lte, type_fun2(tpoly, tpoly, tbool), value_make_natfun2(native_lte), env);;
    env = env_make(name_gt, type_fun2(tpoly, tpoly, tbool), value_make_natfun2(native_gt), env);;
    env = env_make(name_gte, type_fun2(tpoly, tpoly, tbool), value_make_natfun2(native_gte), env);;



    env = env_make(name_and, type_fun2(tbool, tbool, tbool), value_make_natfun2(native_and), env);;
    env = env_make(name_or, type_fun2(tbool, tbool, tbool), value_make_natfun2(native_or), env);;





    env = env_make(name_print_string, type_fun1(tstring, tunit), value_make_natfun1(native_print_string), env);;
    env = env_make(name_print_int, type_fun1(tint, tunit), value_make_natfun1(native_print_int), env);;
    env = env_make(name_print_float, type_fun1(tfloat, tunit), value_make_natfun1(native_print_float), env);;
    env = env_make(name_print_bool, type_fun1(tbool, tunit), value_make_natfun1(native_print_bool), env);;



    env = env_make(name_int_of_float, type_fun1(tfloat, tint), value_make_natfun1(native_int_of_float), env);;
    env = env_make(name_float_of_int, type_fun1(tint, tfloat), value_make_natfun1(native_float_of_int), env);;

    return env;
}

Env *env_make(int name, Type *type, Value *value, Env *tail) {
    Env *env = malloc(sizeof(Env));
    if (env == 
# 67 "environment.c" 3 4
              ((void *)0)
# 67 "environment.c"
                  ) return 
# 67 "environment.c" 3 4
                           ((void *)0)
# 67 "environment.c"
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
    Value *value;

    while (list_iter_has_more(&nameIt)
                && list_iter_has_more(&typeIt)
                && list_iter_has_more(&valueIt)) {
        name = *(int*) list_iter_next(&nameIt);
        type = list_iter_next(&typeIt);
        value = list_iter_next(&valueIt);

        env = env_make(name, type, value, env);
    }

    return env;
}

Env *env_find(int name, Env *env) {
    if (env == 
# 101 "environment.c" 3 4
              ((void *)0)
# 101 "environment.c"
                  ) return 
# 101 "environment.c" 3 4
                           ((void *)0)
# 101 "environment.c"
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
# 116 "environment.c" 3 4
              ((*__ctype_b_loc ())[(int) ((
# 116 "environment.c"
              name[0]
# 116 "environment.c" 3 4
              ))] & (unsigned short int) _ISalpha) 
# 116 "environment.c"
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
# 126 "environment.c" 3 4
              ((void *)0) 
# 126 "environment.c"
                   || env == from) return;
    env_printrange(env->next, from);
    env_print(env);
}


void env_printall(Env *env) {
    env_printrange(env, 
# 133 "environment.c" 3 4
                       ((void *)0)
# 133 "environment.c"
                           );
}

void env_free(Env *env) {
    if (env == 
# 137 "environment.c" 3 4
              ((void *)0)
# 137 "environment.c"
                  ) return;
    env_free(env->next);
    free(env);
}
# 15 "codegen_main.c" 2
# 1 "list.c" 1


ListEntry *list_new(ListValue value) {
    ListEntry *list = 
# 4 "list.c" 3 4
                     ((void *)0)
# 4 "list.c"
                         ;
    return list_append(&list, value);
}

ListEntry *list_from(ListValue first, ...) {
    ListEntry *list = list_new(first);

    va_list ap;
    
# 12 "list.c" 3 4
   __builtin_va_start(
# 12 "list.c"
   ap
# 12 "list.c" 3 4
   ,
# 12 "list.c"
   first
# 12 "list.c" 3 4
   )
# 12 "list.c"
                      ;

    ListValue entry;
    while ((entry = 
# 15 "list.c" 3 4
                   __builtin_va_arg(
# 15 "list.c"
                   ap
# 15 "list.c" 3 4
                   ,
# 15 "list.c"
                   ListValue
# 15 "list.c" 3 4
                   )
# 15 "list.c"
                                        ) != 
# 15 "list.c" 3 4
                                             ((void *)0)
# 15 "list.c"
                                                 ) {
        list_append(&list, entry);
    }

    
# 19 "list.c" 3 4
   __builtin_va_end(
# 19 "list.c"
   ap
# 19 "list.c" 3 4
   )
# 19 "list.c"
             ;

    return list;
}

ListEntry *list_concat(ListEntry *first, ListEntry *second) {
    ListEntry *final = 
# 25 "list.c" 3 4
                      ((void *)0)
# 25 "list.c"
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
# 43 "list.c" 3 4
               ((void *)0)
# 43 "list.c"
                   ) return 
# 43 "list.c" 3 4
                            ((void *)0)
# 43 "list.c"
                                ;

    ListEntry *next;

    do {
        next = list_next(list);
        if (next == 
# 49 "list.c" 3 4
                   ((void *)0)
# 49 "list.c"
                       ) break;

        list = next;
    } while (list != 
# 52 "list.c" 3 4
                    ((void *)0)
# 52 "list.c"
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
# 74 "list.c" 3 4
               ((void *)0)
# 74 "list.c"
                   ) printf("%s", pref);

    while (list_iter_has_more(&it)) {
        func(list_iter_next(&it));

        if (list_iter_has_more(&it)) {
            printf("%s", delim);
        }
    }

    if (suff != 
# 84 "list.c" 3 4
               ((void *)0)
# 84 "list.c"
                   ) printf("%s", suff);
}

void *nmalloc(int name) {
    int *p = malloc(sizeof(int));
    if (p == 
# 89 "list.c" 3 4
            ((void *)0)
# 89 "list.c"
                ) return 
# 89 "list.c" 3 4
                         ((void *)0)
# 89 "list.c"
                             ;

    *p = name;
    return p;
}


void arraylist_foreach(ArrayList *list, ListConsumer func) {
    for (unsigned int i = 0; i < list->length; ++i) {
        func(list->data[i]);
    }
}
# 16 "codegen_main.c" 2
# 1 "run.c" 1


void run_list(AstList *list) {





    Env *env = env_init();

    ListIterator it;
    list_iterate(&list, &it);

    while (list_iter_has_more(&it)) {
        Ast *expr = list_iter_next(&it);

        Env *start = env;
        run_expr(&env, expr);

        env_printrange(env, start);
    }
}

void run_expr(Env **env, Ast *expr) {
    NameList *names = ast_names(expr);
    Type *type = infer_type(*env, expr);

    if (type_equ(type, terror)) {
        fprintf(
# 29 "run.c" 3 4
               stderr
# 29 "run.c"
                     , "Typing error\n");
        return;
    }

    Value *value = visit_eval(*env, expr);

    if (list_length(names) == 1) {
        int name = *(int *) list_data(names);
        *env = env_make(name, type, value, *env);
    } else {
        *env = env_addlist(names, type->typeTuple, value->valTuple, *env);
    }
}

NameList *ast_names(Ast *expr) {

    if (expr->type == e_let && expr->exprLet.block == 
# 45 "run.c" 3 4
                                                     ((void *)0)
# 45 "run.c"
                                                         ) {
        return expr->exprLet.names;
    } else {
        return list_new(nmalloc(0));
    }
}
# 17 "codegen_main.c" 2
# 1 "string_escape.c" 1



static char chr_notesc[] = { ' ', '\'', '"', '\n', '\t', '\b', '\r', '\\' };
static char chr_escape[] = { ' ', '\'', '"', 'n', 't', 'b', 'r', '\\' };

static int nb_esc = sizeof(chr_escape) / sizeof(char);


char *unescape(const char *str) {

    size_t len = strlen(str) - 2;
    char *orig = strndup(str + 1, len);
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
# 35 "string_escape.c" 3 4
                       stderr
# 35 "string_escape.c"
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

    size_t len = 2 * strlen(str) + 2;
    char *result = calloc(len + 1, sizeof(char));
    unsigned int k = 0;


    ++str;
    result[k++] = '"';

    char c;
    int e;
    while ((c = *str++) != '\0' && k <= len) {
        if (c == '"' && *str == '\0') break;

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

    result[k++] = '"';
    result[k] = '\0';

    return result;
}
# 18 "codegen_main.c" 2

# 1 "eval/eval.h" 1



# 1 "./common.h" 1
# 5 "eval/eval.h" 2



Value *eval_var (Env *env, Ast * var);
Value *eval_list (Env *env, Ast * list);
Value *eval_funcall (Env *env, Ast * funcall);
Value *eval_let (Env *env, Ast * let);
Value *eval_ifelse (Env *env, Ast * ifelse);
Value *eval_tuple (Env *env, Ast * tuple);
# 20 "codegen_main.c" 2
# 1 "eval/eval.c" 1
# 1 "eval/eval.h" 1
# 2 "eval/eval.c" 2

Value *visit_eval(Env *env, Ast *expr) {
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
        return eval_var(env, expr);
    case e_block:
        return visit_eval(env, expr->exprBlock);
    case e_list:
        return eval_list(env, expr);
    case e_funcall:
        return eval_funcall(env, expr);
    case e_let:
        return eval_let(env, expr);
    case e_if:
        return eval_ifelse(env, expr);
    case e_tuple:
        return eval_tuple(env, expr);
    default:
        do { fprintf(
# 30 "eval/eval.c" 3 4
       stderr
# 30 "eval/eval.c"
       , "Evaluation not implemented yet" "\n"); return verror; } while (
# 30 "eval/eval.c" 3 4
       0
# 30 "eval/eval.c"
       );
    }

}
# 21 "codegen_main.c" 2
# 1 "eval/funcall.c" 1



Value *eval_funcall (Env *env, Ast * funcall) {
    Value *func = visit_eval(env, funcall->exprFunCall.function);
    AstList *args = funcall->exprFunCall.args;

    switch (func->type) {
    case et_fun:

        break;
    case et_natfun1:
    {
        Value *arg = visit_eval(env, list_data(args));

        return (func->valNatfun1)(arg);
    }
    case et_natfun2:
    {
        if (list_length(args) < 2) {
            do { fprintf(
# 21 "eval/funcall.c" 3 4
           stderr
# 21 "eval/funcall.c"
           , "Native functions cannot be curried" "\n"); return verror; } while (
# 21 "eval/funcall.c" 3 4
           0
# 21 "eval/funcall.c"
           );
        }

        Value *arg1 = visit_eval(env, list_nth_data(args, 0));
        Value *arg2 = visit_eval(env, list_nth_data(args, 1));

        return (func->valNatfun2)(arg1, arg2);
    }
    default:
        do { fprintf(
# 30 "eval/funcall.c" 3 4
       stderr
# 30 "eval/funcall.c"
       , "Expression is not a function and cannot be applied" "\n"); return verror; } while (
# 30 "eval/funcall.c" 3 4
       0
# 30 "eval/funcall.c"
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

        Value *value = visit_eval(env, arg);

        callsite = env_make(param_name, 
# 45 "eval/funcall.c" 3 4
                  ((void *)0)
# 45 "eval/funcall.c"
                  , value, callsite);
    }

    if (list_iter_has_more(&paramIt)) {
        return value_make_fun(callsite, params, func->valFun.body);
    } else {
        return visit_eval(callsite, func->valFun.body);
    }
}
# 22 "codegen_main.c" 2
# 1 "eval/ifelse.c" 1



Value *eval_ifelse (Env *env, Ast * ifelse) {
    Value *cond = visit_eval(env, ifelse->exprIf.cond);

    if (cond->valBool) {
        return visit_eval(env, ifelse->exprIf.bIf);
    } else {
        return visit_eval(env, ifelse->exprIf.bElse);
    }
}
# 23 "codegen_main.c" 2
# 1 "eval/let.c" 1



Value *eval_let (Env *env, Ast * let) {
    NameList *names = let->exprLet.names;

    Value *valExpr;

    if (let->exprLet.params == 
# 9 "eval/let.c" 3 4
                              ((void *)0)
# 9 "eval/let.c"
                                  ) {
        valExpr = visit_eval(env, let->exprLet.expr);
    } else {



        valExpr = value_make_fun(env, let->exprLet.params, let->exprLet.expr);


        if (let->exprLet.rec) {
            int name = *(int*) list_data(names);
            valExpr->valFun.defsite = env_make(name, 
# 20 "eval/let.c" 3 4
                                     ((void *)0)
# 20 "eval/let.c"
                                     , valExpr, valExpr->valFun.defsite);
        }
    }

    if (let->exprLet.block != 
# 24 "eval/let.c" 3 4
                             ((void *)0)
# 24 "eval/let.c"
                                 ) {
        Env *newEnv = env;

        if (list_length(names) == 1) {
            int name = *(int*) list_data(names);
            newEnv = env_make(name, 
# 29 "eval/let.c" 3 4
                    ((void *)0)
# 29 "eval/let.c"
                    , valExpr, newEnv);
        } else {
            newEnv = env_addlist(names, 
# 31 "eval/let.c" 3 4
                                       ((void *)0)
# 31 "eval/let.c"
                                           , valExpr->valTuple, newEnv);
        }

        return visit_eval(newEnv, let->exprLet.block);
    } else {
        return valExpr;
    }
}
# 24 "codegen_main.c" 2
# 1 "eval/list.c" 1



Value *eval_list (Env *env, Ast * list) {
    Value *value;

    AstList *expr = list->exprList;

    ListIterator it;
    list_iterate(&expr, &it);
    while (list_iter_has_more(&it)) {
        Ast *expr = list_iter_next(&it);

        value = visit_eval(env, expr);
    }

    return value;
}
# 25 "codegen_main.c" 2
# 1 "eval/tuple.c" 1



Value *eval_tuple (Env *env, Ast * tuple) {
    ValueList *elems = 
# 5 "eval/tuple.c" 3 4
                      ((void *)0)
# 5 "eval/tuple.c"
                          ;
    AstList *exprs = tuple->exprTuple;

    ListIterator it;
    list_iterate(&exprs, &it);
    while (list_iter_has_more(&it)) {
        Ast *expr = list_iter_next(&it);

        Value *value = visit_eval(env, expr);

        list_append(&elems, value);
    }

    return value_make_tuple(elems);
}
# 26 "codegen_main.c" 2
# 1 "eval/variable.c" 1



Value *eval_var (Env *env, Ast * var) {
    while (env != 
# 5 "eval/variable.c" 3 4
                 ((void *)0)
# 5 "eval/variable.c"
                     ) {
        if (env->name == var->exprVariable)
            return env->value;
        env = env->next;
    }
    do { fprintf(
# 10 "eval/variable.c" 3 4
   stderr
# 10 "eval/variable.c"
   , "Undefined name %s" "\n", names_getnm(var->exprVariable)); return verror; } while (
# 10 "eval/variable.c" 3 4
   0
# 10 "eval/variable.c"
   );
}
# 27 "codegen_main.c" 2

# 1 "infer/infer.h" 1
# 10 "infer/infer.h"
struct typed_ast {
    AstType type;
    union {

        int exprInteger;

        float exprFloat;

        
# 18 "infer/infer.h" 3 4
       _Bool 
# 18 "infer/infer.h"
            exprBool;

        char *exprString;

        int exprVariable;

        TypedAst *exprBlock;

        TypedAstList *exprList;

        struct { TypedAst *function;
                 TypedAstList *args; } exprFunCall;

        struct { Type *exprType;
                 
# 32 "infer/infer.h" 3 4
                _Bool 
# 32 "infer/infer.h"
                     rec;
                 TypeList *params;
                 TypedAst *expr;
                 TypedAst *block; } exprLet;

        struct { TypedAst *cond;
                 TypedAst *bIf;
                 TypedAst *bElse; } exprIf;

        TypedAstList *exprTuple;
    };

    int number;
    Type *xtype;
};



extern int poly;


Type *type_repoly(Type *type, 
# 53 "infer/infer.h" 3 4
                             _Bool 
# 53 "infer/infer.h"
                                  *error);



typedef struct { Type *first; Type *second; } Constraint;

Constraint *cons_make(Type *first, Type *second);
void cons_print(Constraint *cons);


ConsList *cons_zip(TypeList *first, TypeList *second);




typedef struct { int poly; Type *type; } Substitution;

Substitution *subst_make(int poly, Type *type);
void subst_print(Substitution *sub);


Type *subst_sub(Substitution *sub, Type *type, 
# 74 "infer/infer.h" 3 4
                                              _Bool 
# 74 "infer/infer.h"
                                                   *error);
TypeList *subst_sub_list(Substitution *sub, TypeList *list, 
# 75 "infer/infer.h" 3 4
                                                           _Bool 
# 75 "infer/infer.h"
                                                                *error);




TypedAst *annotate_ast(Env *env, Ast *ast, 
# 80 "infer/infer.h" 3 4
                                          _Bool 
# 80 "infer/infer.h"
                                               *error);
TypedAstList *annotate_list(Env *env, AstList *astlist, 
# 81 "infer/infer.h" 3 4
                                                       _Bool 
# 81 "infer/infer.h"
                                                            *error);



void collect_cons(ConsList **lptr, TypedAst *ast, 
# 85 "infer/infer.h" 3 4
                                                 _Bool 
# 85 "infer/infer.h"
                                                      *error);
void collect_cons_list(ConsList **lptr, TypedAstList *astlist, 
# 86 "infer/infer.h" 3 4
                                                              _Bool 
# 86 "infer/infer.h"
                                                                   *error);



SubstList *unify_one(Type *first, Type *second, 
# 90 "infer/infer.h" 3 4
                                               _Bool 
# 90 "infer/infer.h"
                                                    *error);



Type *apply_one(SubstList *subs, Type *type, 
# 94 "infer/infer.h" 3 4
                                            _Bool 
# 94 "infer/infer.h"
                                                 *error);
void apply_list(SubstList *subs, TypedAstList *ast, 
# 95 "infer/infer.h" 3 4
                                                   _Bool 
# 95 "infer/infer.h"
                                                        *error);






TypedAst *infer_annotate(Env *env, Ast *expr, 
# 102 "infer/infer.h" 3 4
                                             _Bool 
# 102 "infer/infer.h"
                                                  *error);


ConsList *infer_constraints(TypedAst *expr, 
# 105 "infer/infer.h" 3 4
                                           _Bool 
# 105 "infer/infer.h"
                                                *error);


SubstList *infer_unify(ConsList *constraints, 
# 108 "infer/infer.h" 3 4
                                             _Bool 
# 108 "infer/infer.h"
                                                  *error);


TypedAst *infer_apply(SubstList *subs, TypedAst *expr, 
# 111 "infer/infer.h" 3 4
                                                      _Bool 
# 111 "infer/infer.h"
                                                           *error);
# 29 "codegen_main.c" 2
# 1 "infer/infer.c" 1
# 1 "infer/infer.h" 1
# 2 "infer/infer.c" 2


int poly;




Type *infer_type(Env *env, Ast *expr) {

    poly = 1;

    
# 13 "infer/infer.c" 3 4
   _Bool 
# 13 "infer/infer.c"
        error = 
# 13 "infer/infer.c" 3 4
                0
# 13 "infer/infer.c"
                     ;

    TypedAst *annotated = infer_annotate(env, expr, &error);

    do { if (error) return terror; } while (
# 17 "infer/infer.c" 3 4
   0
# 17 "infer/infer.c"
   );

    ConsList *constraints = infer_constraints(annotated, &error);

    do { if (error) return terror; } while (
# 21 "infer/infer.c" 3 4
   0
# 21 "infer/infer.c"
   );

    SubstList *substitutions = infer_unify(constraints, &error);

    do { if (error) return terror; } while (
# 25 "infer/infer.c" 3 4
   0
# 25 "infer/infer.c"
   );

    TypedAst *typed = infer_apply(substitutions, annotated, &error);

    do { if (error) return terror; } while (
# 29 "infer/infer.c" 3 4
   0
# 29 "infer/infer.c"
   );

    return typed->xtype;
}
# 30 "codegen_main.c" 2
# 1 "infer/annotate.c" 1



TypedAstList *annotate_list(Env *env, AstList *astlist, 
# 4 "infer/annotate.c" 3 4
                                                       _Bool 
# 4 "infer/annotate.c"
                                                            *error) {
    TypedAstList *typedlist = 
# 5 "infer/annotate.c" 3 4
                             ((void *)0)
# 5 "infer/annotate.c"
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
# 22 "infer/annotate.c" 3 4
                                            _Bool 
# 22 "infer/annotate.c"
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
# 55 "infer/annotate.c" 3 4
                    ((void *)0)
# 55 "infer/annotate.c"
                        ) {

            xtype = type_repoly(entry->type, error);
        } else {
            do { fprintf(
# 59 "infer/annotate.c" 3 4
           stderr
# 59 "infer/annotate.c"
           , "Variable %s not found" "\n", names_getnm(var)); *error = 
# 59 "infer/annotate.c" 3 4
           1
# 59 "infer/annotate.c"
           ; } while (
# 59 "infer/annotate.c" 3 4
           0
# 59 "infer/annotate.c"
           );
        }
        break;
    }
    case e_block:
        typed->exprBlock = infer_annotate(env, ast->exprBlock, error);
        xtype = type_poly(poly++);
        break;
    case e_list:
        typed->exprList = annotate_list(env, ast->exprList, error);
        xtype = type_poly(poly++);
        break;
    case e_funcall:
        typed->exprFunCall.function = infer_annotate(env, ast->exprFunCall.function, error);
        typed->exprFunCall.args = annotate_list(env, ast->exprFunCall.args, error);
        xtype = type_poly(poly++);
        break;
    case e_let:
    {
        
# 78 "infer/annotate.c" 3 4
       _Bool 
# 78 "infer/annotate.c"
            rec = ast->exprLet.rec;
        NameList *names = ast->exprLet.names;
        Ast *block = ast->exprLet.block;
        NameList *params = ast->exprLet.params;

        unsigned int nameCount = list_length(names);

        typed->exprLet.rec = rec;
        typed->exprLet.params = 
# 86 "infer/annotate.c" 3 4
                               ((void *)0)
# 86 "infer/annotate.c"
                                   ;
        typed->exprLet.block = 
# 87 "infer/annotate.c" 3 4
                              ((void *)0)
# 87 "infer/annotate.c"
                                  ;
        typed->exprLet.expr = 
# 88 "infer/annotate.c" 3 4
                             ((void *)0)
# 88 "infer/annotate.c"
                                 ;


        Env *envExpr = env;


        if (params == 
# 94 "infer/annotate.c" 3 4
                     ((void *)0)
# 94 "infer/annotate.c"
                         ) {
            if (rec) {
                do { fprintf(
# 96 "infer/annotate.c" 3 4
               stderr
# 96 "infer/annotate.c"
               , "Recursive variable bindings not supported" "\n"); *error = 
# 96 "infer/annotate.c" 3 4
               1
# 96 "infer/annotate.c"
               ; } while (
# 96 "infer/annotate.c" 3 4
               0
# 96 "infer/annotate.c"
               );
                break;
            }

            if (nameCount > 1) {
                TypeList *types = 
# 101 "infer/annotate.c" 3 4
                                 ((void *)0)
# 101 "infer/annotate.c"
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
# 116 "infer/annotate.c" 3 4
               stderr
# 116 "infer/annotate.c"
               , "Can't define tuple named functions" "\n"); *error = 
# 116 "infer/annotate.c" 3 4
               1
# 116 "infer/annotate.c"
               ; } while (
# 116 "infer/annotate.c" 3 4
               0
# 116 "infer/annotate.c"
               );
                break;
            }

            TypeList *paramTypes = 
# 120 "infer/annotate.c" 3 4
                                  ((void *)0)
# 120 "infer/annotate.c"
                                      ;
            ListIterator it;
            list_iterate(&params, &it);
            while (list_iter_has_more(&it)) {
                int name = *(int *) list_iter_next(&it);
                Type *type = type_poly(poly++);

                envExpr = env_make(name, type, 
# 127 "infer/annotate.c" 3 4
                         ((void *)0)
# 127 "infer/annotate.c"
                         , envExpr);
                list_append(&paramTypes, type);
            }

            typed->exprLet.params = paramTypes;
            xtype = type_fun(paramTypes, type_poly(poly++));


            if (rec && nameCount > 0) {
                int name = *(int *) list_data(names);
                envExpr = env_make(name, xtype, 
# 137 "infer/annotate.c" 3 4
                         ((void *)0)
# 137 "infer/annotate.c"
                         , envExpr);
            }
        }

        typed->exprLet.expr = infer_annotate(envExpr, ast->exprLet.expr, error);
        typed->exprLet.exprType = xtype;


        if (block != 
# 145 "infer/annotate.c" 3 4
                    ((void *)0)
# 145 "infer/annotate.c"
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
# 158 "infer/annotate.c" 3 4
                              ((void *)0)
# 158 "infer/annotate.c"
                              , envBlock);
                }
            } else {

                int name = *(int *) list_data(names);

                envBlock = env_make(name, xtype, 
# 164 "infer/annotate.c" 3 4
                          ((void *)0)
# 164 "infer/annotate.c"
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
# 179 "infer/annotate.c" 3 4
                    ((void *)0)
# 179 "infer/annotate.c"
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
# 190 "infer/annotate.c" 3 4
                         ((void *)0)
# 190 "infer/annotate.c"
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
    default:
        do { fprintf(
# 202 "infer/annotate.c" 3 4
       stderr
# 202 "infer/annotate.c"
       , "Inference number type not implemented" "\n"); *error = 
# 202 "infer/annotate.c" 3 4
       1
# 202 "infer/annotate.c"
       ; } while (
# 202 "infer/annotate.c" 3 4
       0
# 202 "infer/annotate.c"
       );
        break;
    }

    typed->xtype = xtype;

    return typed;
}
# 31 "codegen_main.c" 2
# 1 "infer/apply.c" 1







Type *apply_one(SubstList *subs, Type *type, 
# 8 "infer/apply.c" 3 4
                                            _Bool 
# 8 "infer/apply.c"
                                                 *error) {
    if (subs == 
# 9 "infer/apply.c" 3 4
               ((void *)0)
# 9 "infer/apply.c"
                   ) return type;

    Substitution *first = list_data(subs);
    SubstList *next = list_next(subs);

    return subst_sub(first, apply_one(next, type, error), error);
}


void apply_list(SubstList *subs, TypedAstList *list, 
# 18 "infer/apply.c" 3 4
                                                    _Bool 
# 18 "infer/apply.c"
                                                         *error) {
    ListIterator it;
    list_iterate(&list, &it);

    while (list_iter_has_more(&it)) {
        TypedAst *ast = list_iter_next(&it);
        infer_apply(subs, ast, error);
    }
}


TypedAst *infer_apply(SubstList *subs, TypedAst *expr, 
# 29 "infer/apply.c" 3 4
                                                      _Bool 
# 29 "infer/apply.c"
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
    case e_list:
        apply_list(subs, expr->exprList, error);
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
# 54 "infer/apply.c" 3 4
                    ((void *)0)
# 54 "infer/apply.c"
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
    default:
        do { fprintf(
# 74 "infer/apply.c" 3 4
       stderr
# 74 "infer/apply.c"
       , "Inference apply type not implemented" "\n"); *error = 
# 74 "infer/apply.c" 3 4
       1
# 74 "infer/apply.c"
       ; } while (
# 74 "infer/apply.c" 3 4
       0
# 74 "infer/apply.c"
       );
        break;
    }

    expr->xtype = apply_one(subs, expr->xtype, error);

    return expr;

}
# 32 "codegen_main.c" 2
# 1 "infer/constraints.c" 1



ConsList *infer_constraints(TypedAst *expr, 
# 4 "infer/constraints.c" 3 4
                                           _Bool 
# 4 "infer/constraints.c"
                                                *error) {
    ConsList *list = 
# 5 "infer/constraints.c" 3 4
                    ((void *)0)
# 5 "infer/constraints.c"
                        ;

    collect_cons(&list, expr, error);

    return list;
}

ConsList *cons_zip(TypeList *first, TypeList *second) {
    if (list_length(first) != list_length(second)) {
        return 
# 14 "infer/constraints.c" 3 4
              ((void *)0)
# 14 "infer/constraints.c"
                  ;
    }

    ConsList *zipped = 
# 17 "infer/constraints.c" 3 4
                      ((void *)0)
# 17 "infer/constraints.c"
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
# 34 "infer/constraints.c" 3 4
                                                              _Bool 
# 34 "infer/constraints.c"
                                                                   *error) {
    ListIterator it;
    list_iterate(&astlist, &it);

    while (list_iter_has_more(&it)) {
        TypedAst *ast = list_iter_next(&it);
        collect_cons(lptr, ast, error);
    }
}

void collect_cons(ConsList **lptr, TypedAst *ast, 
# 44 "infer/constraints.c" 3 4
                                                 _Bool 
# 44 "infer/constraints.c"
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
    case e_list:
    {

        TypedAst *last = list_last_data(ast->exprList);
        list_append(lptr, cons_make(xtype, last->xtype));
        collect_cons_list(lptr, ast->exprList, error);
        break;
    }
    case e_funcall:
    {
        TypedAstList *args = ast->exprFunCall.args;
        unsigned int argCount = list_length(args);

        TypedAst *func = ast->exprFunCall.function;
        Type *fntype = func->xtype;






        switch (fntype->type) {
# 101 "infer/constraints.c"
        case et_fun:
        {
            TypeList *params = fntype->typeFun.args;
            Type *retType = fntype->typeFun.to;

            unsigned int paramCount = list_length(params);
            if (argCount > paramCount) {
                do { fprintf(
# 108 "infer/constraints.c" 3 4
               stderr
# 108 "infer/constraints.c"
               , "Too many arguments" "\n"); *error = 
# 108 "infer/constraints.c" 3 4
               1
# 108 "infer/constraints.c"
               ; } while (
# 108 "infer/constraints.c" 3 4
               0
# 108 "infer/constraints.c"
               );
                return;
            }

            ListIterator argIt;
            list_iterate(&args, &argIt);

            while (list_iter_has_more(&argIt) && params != 
# 115 "infer/constraints.c" 3 4
                                                          ((void *)0)
# 115 "infer/constraints.c"
                                                              ) {
                TypedAst *arg = list_iter_next(&argIt);
                Type *paramType = list_data(params);

                list_append(lptr, cons_make(paramType, arg->xtype));

                params = list_next(params);
            }


            if (params != 
# 125 "infer/constraints.c" 3 4
                         ((void *)0)
# 125 "infer/constraints.c"
                             ) {
                retType = type_fun(params, retType);
            }

            list_append(lptr, cons_make(retType, xtype));

            break;
        }
        case et_poly:
        {
            TypeList *params = 
# 135 "infer/constraints.c" 3 4
                              ((void *)0)
# 135 "infer/constraints.c"
                                  ;
            ListIterator it;
            list_iterate(&args, &it);
            while (list_iter_has_more(&it)) {
                TypedAst *arg = list_iter_next(&it);

                list_append(&params, arg->xtype);
            }

            Type *dedfntype = type_fun(params, xtype);

            list_append(lptr, cons_make(fntype, dedfntype));

            break;
        }
        default:
            do { fprintf(
# 151 "infer/constraints.c" 3 4
           stderr
# 151 "infer/constraints.c"
           , "Expression is not a function and cannot be applied" "\n"); *error = 
# 151 "infer/constraints.c" 3 4
           1
# 151 "infer/constraints.c"
           ; } while (
# 151 "infer/constraints.c" 3 4
           0
# 151 "infer/constraints.c"
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
# 171 "infer/constraints.c" 3 4
                     ((void *)0)
# 171 "infer/constraints.c"
                         ) {
           retType = type_fun(params, retType);
        }


        list_append(lptr, cons_make(retType, declType));
        collect_cons(lptr, expr, error);

        if (block != 
# 179 "infer/constraints.c" 3 4
                    ((void *)0)
# 179 "infer/constraints.c"
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
# 196 "infer/constraints.c" 3 4
                    ((void *)0)
# 196 "infer/constraints.c"
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
    default:
        do { fprintf(
# 209 "infer/constraints.c" 3 4
       stderr
# 209 "infer/constraints.c"
       , "Inference collect type not implemented" "\n"); *error = 
# 209 "infer/constraints.c" 3 4
       1
# 209 "infer/constraints.c"
       ; } while (
# 209 "infer/constraints.c" 3 4
       0
# 209 "infer/constraints.c"
       );
        break;
    }

}
# 33 "codegen_main.c" 2
# 1 "infer/make.c" 1




Substitution *subst_make(int poly, Type *type) {
    Substitution *st = malloc(sizeof(Substitution));
    if (st == 
# 7 "infer/make.c" 3 4
             ((void *)0)
# 7 "infer/make.c"
                 ) return 
# 7 "infer/make.c" 3 4
                          ((void *)0)
# 7 "infer/make.c"
                              ;

    st->poly = poly;
    st->type = type;
    return st;
}


Constraint *cons_make(Type *first, Type *second) {
    Constraint *cons = malloc(sizeof(Constraint));
    if (cons == 
# 17 "infer/make.c" 3 4
               ((void *)0)
# 17 "infer/make.c"
                   ) return 
# 17 "infer/make.c" 3 4
                            ((void *)0)
# 17 "infer/make.c"
                                ;

    cons->first = first;
    cons->second = second;

    return cons;
}
# 34 "codegen_main.c" 2
# 1 "infer/print.c" 1



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
# 35 "codegen_main.c" 2
# 1 "infer/repoly.c" 1



Type *type_repoly(Type *type, 
# 4 "infer/repoly.c" 3 4
                             _Bool 
# 4 "infer/repoly.c"
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
    case et_fun:
    {
        TypeList *args = 
# 20 "infer/repoly.c" 3 4
                        ((void *)0)
# 20 "infer/repoly.c"
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
# 33 "infer/repoly.c" 3 4
                         ((void *)0)
# 33 "infer/repoly.c"
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
    case et_poly:
    {

        if (newType->typePoly == 0) {
            newType->typePoly = poly++;
        }
        break;
    }
    default:
        do { fprintf(
# 52 "infer/repoly.c" 3 4
       stderr
# 52 "infer/repoly.c"
       , "Inference repoly type not implemented" "\n"); *error = 
# 52 "infer/repoly.c" 3 4
       1
# 52 "infer/repoly.c"
       ; } while (
# 52 "infer/repoly.c" 3 4
       0
# 52 "infer/repoly.c"
       );
        break;
    }

    return newType;

}
# 36 "codegen_main.c" 2
# 1 "infer/subst.c" 1







TypeList *subst_sub_list(Substitution *sub, TypeList *list, 
# 8 "infer/subst.c" 3 4
                                                           _Bool 
# 8 "infer/subst.c"
                                                                *error) {
    TypeList *sublist = 
# 9 "infer/subst.c" 3 4
                       ((void *)0)
# 9 "infer/subst.c"
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
# 24 "infer/subst.c" 3 4
                                              _Bool 
# 24 "infer/subst.c"
                                                   *error) {
    switch (type->type) {
    case et_unit:
    case et_int:
    case et_float:
    case et_bool:
    case et_string:
    case et_error:
        return type;
# 44 "infer/subst.c"
    case et_fun:
        return type_fun(
                subst_sub_list(sub, type->typeFun.args, error),
                subst_sub(sub, type->typeFun.to, error)
        );
    case et_tuple:
        return type_tuple(
                subst_sub_list(sub, type->typeTuple, error)
        );
    case et_poly:

        if (type->typePoly == sub->poly) {
            return sub->type;
        } else {
            return type;
        }
    default:
        do { fprintf(
# 61 "infer/subst.c" 3 4
       stderr
# 61 "infer/subst.c"
       , "Inference subst type not implemented" "\n"); *error = 
# 61 "infer/subst.c" 3 4
       1
# 61 "infer/subst.c"
       ; } while (
# 61 "infer/subst.c" 3 4
       0
# 61 "infer/subst.c"
       );
        return type;
    }
}
# 37 "codegen_main.c" 2
# 1 "infer/typed_print.c" 1


void talist_print(TypedAstList *astlist) {
    list_print(astlist, (ListPrintFunc) typed_print, "[", ", ", "]");
}

void typed_print(TypedAst *ast) {
    if (ast == 
# 8 "infer/typed_print.c" 3 4
              ((void *)0)
# 8 "infer/typed_print.c"
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
    case e_list:
        printf("List ");
        talist_print(ast->exprList);
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
# 58 "infer/typed_print.c" 3 4
                                  ((void *)0)
# 58 "infer/typed_print.c"
                                      ) {
            printf("Var");
        } else {
            printf("Fun");
        }
        if (ast->exprLet.block != 
# 63 "infer/typed_print.c" 3 4
                                 ((void *)0)
# 63 "infer/typed_print.c"
                                     ) {
            printf("In");
        }
        printf(" (");
        if (ast->exprLet.exprType != 
# 67 "infer/typed_print.c" 3 4
                                    ((void *)0)
# 67 "infer/typed_print.c"
                                        ) {
            type_print(ast->exprLet.exprType);
            printf(", ");
        }
        if (ast->exprLet.params != 
# 71 "infer/typed_print.c" 3 4
                                  ((void *)0)
# 71 "infer/typed_print.c"
                                      ) {
            printf("Params ");
            tdlist_print(ast->exprLet.params, "(", ", ", ")");
            printf(", ");
        }
        typed_print(ast->exprLet.expr);
        if (ast->exprLet.block != 
# 77 "infer/typed_print.c" 3 4
                                 ((void *)0)
# 77 "infer/typed_print.c"
                                     ) {
            printf(", ");
            typed_print(ast->exprLet.block);
        }
        printf(")");
        break;
    case e_if:
        printf("If");
        if (ast->exprIf.bElse != 
# 85 "infer/typed_print.c" 3 4
                                ((void *)0)
# 85 "infer/typed_print.c"
                                    ) {
            printf("Else");
        }
        printf(" (");
        typed_print(ast->exprIf.cond);
        printf(", ");
        typed_print(ast->exprIf.bIf);
        if (ast->exprIf.bElse != 
# 92 "infer/typed_print.c" 3 4
                                ((void *)0)
# 92 "infer/typed_print.c"
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
    default:
        printf("Unhandled");
        break;
    }

}
# 38 "codegen_main.c" 2
# 1 "infer/unify.c" 1



SubstList *infer_unify(ConsList *constraints, 
# 4 "infer/unify.c" 3 4
                                             _Bool 
# 4 "infer/unify.c"
                                                  *error) {
    if (constraints == 
# 5 "infer/unify.c" 3 4
                      ((void *)0)
# 5 "infer/unify.c"
                          ) return 
# 5 "infer/unify.c" 3 4
                                   ((void *)0)
# 5 "infer/unify.c"
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
# 21 "infer/unify.c" 3 4
                                               _Bool 
# 21 "infer/unify.c"
                                                    *error) {
    if (type_equ(first, second)) return 
# 22 "infer/unify.c" 3 4
                                       ((void *)0)
# 22 "infer/unify.c"
                                           ;

    TypeEnum t1 = first->type;
    TypeEnum t2 = second->type;

    if (t1 == et_poly) return list_new(subst_make(first->typePoly, second));
    if (t2 == et_poly) return list_new(subst_make(second->typePoly, first));

    if (t1 == et_fun && t2 == et_fun) {
        ConsList *cons = cons_zip(first->typeFun.args, second->typeFun.args);
        if (cons == 
# 32 "infer/unify.c" 3 4
                   ((void *)0)
# 32 "infer/unify.c"
                       ) {
            do { fprintf(
# 33 "infer/unify.c" 3 4
           stderr
# 33 "infer/unify.c"
           , "Function type mismatch" "\n"); *error = 
# 33 "infer/unify.c" 3 4
           1
# 33 "infer/unify.c"
           ; } while (
# 33 "infer/unify.c" 3 4
           0
# 33 "infer/unify.c"
           );
            return 
# 34 "infer/unify.c" 3 4
                  ((void *)0)
# 34 "infer/unify.c"
                      ;
        }

        list_prepend(&cons, cons_make(first->typeFun.to, second->typeFun.to));

        return infer_unify(cons, error);
    }

    if (t1 == et_tuple && t2 == et_tuple) {
        ConsList *cons = cons_zip(first->typeTuple, second->typeTuple);
        if (cons == 
# 44 "infer/unify.c" 3 4
                   ((void *)0)
# 44 "infer/unify.c"
                       ) {
            do { fprintf(
# 45 "infer/unify.c" 3 4
           stderr
# 45 "infer/unify.c"
           , "Tuple type mismatch" "\n"); *error = 
# 45 "infer/unify.c" 3 4
           1
# 45 "infer/unify.c"
           ; } while (
# 45 "infer/unify.c" 3 4
           0
# 45 "infer/unify.c"
           );
            return 
# 46 "infer/unify.c" 3 4
                  ((void *)0)
# 46 "infer/unify.c"
                      ;
        }

        return infer_unify(cons, error);
    }

    do { fprintf(
# 52 "infer/unify.c" 3 4
   stderr
# 52 "infer/unify.c"
   , "Type mismatch" "\n"); *error = 
# 52 "infer/unify.c" 3 4
   1
# 52 "infer/unify.c"
   ; } while (
# 52 "infer/unify.c" 3 4
   0
# 52 "infer/unify.c"
   );
    return 
# 53 "infer/unify.c" 3 4
          ((void *)0)
# 53 "infer/unify.c"
              ;

}
# 39 "codegen_main.c" 2

# 1 "natives/nat.h" 1
# 41 "codegen_main.c" 2
# 1 "natives/cmp.c" 1


# 1 "natives/nat.h" 1
# 4 "natives/cmp.c" 2




int cmp_tuple(Value *x, Value *y);
int cmpi(int x, int y);
int cmpf(float x, float y);


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
    do { if (x->type != y->type) { fprintf(
# 38 "natives/cmp.c" 3 4
   stderr
# 38 "natives/cmp.c"
   , "Can't compare different types"); return value_make_bool(
# 38 "natives/cmp.c" 3 4
   0
# 38 "natives/cmp.c"
   ); } } while (
# 38 "natives/cmp.c" 3 4
   0
# 38 "natives/cmp.c"
   );

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
    case et_natfun1:
    case et_natfun2:
    case et_fun:
        fprintf(
# 54 "natives/cmp.c" 3 4
               stderr
# 54 "natives/cmp.c"
                     , "Cannot compare functional values");
        return value_make_int((-1));
    case et_tuple:
        return value_make_int((cmp_tuple(x, y)));
    default:
        fprintf(
# 59 "natives/cmp.c" 3 4
               stderr
# 59 "natives/cmp.c"
                     , "Comparison not implemented yet");
        return value_make_int((-1));
    }
}


int cmp_tuple(Value *x, Value *y) {
    ValueList *elx = x->valTuple;
    ValueList *ely = y->valTuple;

    if (list_length(elx) != list_length(ely)) {
        fprintf(
# 70 "natives/cmp.c" 3 4
               stderr
# 70 "natives/cmp.c"
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

int cmpi(int x, int y) {
    return (x < y) ? -1 : (x > y);
}

int cmpf(float x, float y) {
    return (x < y) ? -1 : (x > y);
}
# 42 "codegen_main.c" 2
# 1 "natives/conv.c" 1


Value * native_int_of_float (Value * x ) {
    return value_make_int(((int) x->valFloat));
}

Value * native_float_of_int (Value * x ) {
    return value_make_float(((float) x->valInt));
}
# 43 "codegen_main.c" 2
# 1 "natives/mathf.c" 1


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
# 17 "natives/mathf.c" 3 4
               stderr
# 17 "natives/mathf.c"
                     , "Division by zero\n");
        return vunit;
    }
    return value_make_float((x->valFloat / y->valFloat));
}
# 44 "codegen_main.c" 2
# 1 "natives/mathi.c" 1
# 1 "/usr/lib/gcc/x86_64-linux-gnu/6/include-fixed/limits.h" 1 3 4
# 34 "/usr/lib/gcc/x86_64-linux-gnu/6/include-fixed/limits.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/6/include-fixed/syslimits.h" 1 3 4






# 1 "/usr/lib/gcc/x86_64-linux-gnu/6/include-fixed/limits.h" 1 3 4
# 168 "/usr/lib/gcc/x86_64-linux-gnu/6/include-fixed/limits.h" 3 4
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
# 169 "/usr/lib/gcc/x86_64-linux-gnu/6/include-fixed/limits.h" 2 3 4
# 8 "/usr/lib/gcc/x86_64-linux-gnu/6/include-fixed/syslimits.h" 2 3 4
# 35 "/usr/lib/gcc/x86_64-linux-gnu/6/include-fixed/limits.h" 2 3 4
# 2 "natives/mathi.c" 2
# 33 "natives/mathi.c"
Value * native_addi (Value * x , Value * y ) {
    int valx = x->valInt;
    int valy = y->valInt;
    if (((valy) < 0 ? (valx) < (
# 36 "natives/mathi.c" 3 4
       (-0x7fffffff - 1)
# 36 "natives/mathi.c"
       ) - (valy) : (0x7fffffff) - (valy) < (valx))) {
        fprintf(
# 37 "natives/mathi.c" 3 4
               stderr
# 37 "natives/mathi.c"
                     , "Integer add overflow\n");
    }
    return value_make_int((valx + valy));
}

Value * native_subi (Value * x , Value * y ) {
    int valx = x->valInt;
    int valy = y->valInt;
    if (((valy) < 0 ? (0x7fffffff) + (valy) < (valx) : (valx) < (
# 45 "natives/mathi.c" 3 4
       (-0x7fffffff - 1)
# 45 "natives/mathi.c"
       ) + (valy))) {
        fprintf(
# 46 "natives/mathi.c" 3 4
               stderr
# 46 "natives/mathi.c"
                     , "Integer subtract overflow\n");
    }
    return value_make_int((valx - valy));
}

Value * native_muli (Value * x , Value * y ) {
    int valx = x->valInt;
    int valy = y->valInt;
    if (((valy) < 0 ? ((valx) < 0 ? (valx) < (0x7fffffff) / (valy) : (valy) == -1 ? 0 : (
# 54 "natives/mathi.c" 3 4
       (-0x7fffffff - 1)
# 54 "natives/mathi.c"
       ) / (valy) < (valx)) : (valy) == 0 ? 0 : ((valx) < 0 ? (valx) < (
# 54 "natives/mathi.c" 3 4
       (-0x7fffffff - 1)
# 54 "natives/mathi.c"
       ) / (valy) : (0x7fffffff) / (valy) < (valx)))) {
        fprintf(
# 55 "natives/mathi.c" 3 4
               stderr
# 55 "natives/mathi.c"
                     , "Integer multiply overflow\n");
    }
    return value_make_int((valx * valy));
}

Value * native_divi (Value * x , Value * y ) {
    int valx = x->valInt;
    int valy = y->valInt;
    if (valy == 0) {
        fprintf(
# 64 "natives/mathi.c" 3 4
               stderr
# 64 "natives/mathi.c"
                     , "Division by zero\n");
        return vunit;
    }
    if (((
# 67 "natives/mathi.c" 3 4
       (-0x7fffffff - 1)
# 67 "natives/mathi.c"
       ) < 0 && (valy) == -1 && (valx) < - (0x7fffffff))) {
        fprintf(
# 68 "natives/mathi.c" 3 4
               stderr
# 68 "natives/mathi.c"
                     , "Integer division overflow\n");
    }
    return value_make_int((valx / valy));
}
# 45 "codegen_main.c" 2
# 1 "natives/print.c" 1


Value * native_print_string (Value * str ) {
    printf("%s", unescape(str->valString));
    return vunit;
}

Value * native_print_int (Value * x ) {
    printf("%d", x->valInt);
    return vunit;
}

Value * native_print_float (Value * x ) {
    printf("%g", (double) x->valFloat);
    return vunit;
}

Value * native_print_bool (Value * x ) {
    printf("%s", (x->valBool ? "true" : "false"));
    return vunit;
}
# 46 "codegen_main.c" 2


int main(void) {
/* Initialize the name table */
names_init();

/* Define the program statically */
AstList *prog = 
((AstList *) list_from(
ast_make_let(
((NameList *) list_from(
nmalloc(names_getid("x")),
0))
, 0,
((NameList *) 0)
,
ast_make_integer(1)
,
0
)
,
ast_make_let(
((NameList *) list_from(
nmalloc(names_getid("y")),
0))
, 0,
((NameList *) 0)
,
ast_make_float(5.000000F)
,
0
)
,
ast_make_let(
((NameList *) list_from(
nmalloc(names_getid("yf")),
0))
, 0,
((NameList *) 0)
,
ast_make_float(3.140000F)
,
0
)
,
ast_make_let(
((NameList *) list_from(
nmalloc(names_getid("z")),
0))
, 0,
((NameList *) 0)
,
ast_make_string(strdup("String with escape\n \" characters in it"))
,
0
)
,
ast_make_let(
((NameList *) list_from(
nmalloc(names_getid("x")),
0))
, 0,
((NameList *) 0)
,
ast_make_integer(2)
,
ast_make_funcall(
ast_make_variable(names_getid("*"))
,
((AstList *) list_from(
ast_make_variable(names_getid("x"))
,
ast_make_variable(names_getid("x"))
,
0))
)
)
,
ast_make_funcall(
ast_make_variable(names_getid("+"))
,
((AstList *) list_from(
ast_make_let(
((NameList *) list_from(
nmalloc(names_getid("x")),
0))
, 0,
((NameList *) 0)
,
ast_make_integer(2)
,
ast_make_funcall(
ast_make_variable(names_getid("*"))
,
((AstList *) list_from(
ast_make_variable(names_getid("x"))
,
ast_make_variable(names_getid("x"))
,
0))
)
)
,
ast_make_variable(names_getid("x"))
,
0))
)
,
ast_make_funcall(
ast_make_variable(names_getid("+"))
,
((AstList *) list_from(
ast_make_let(
((NameList *) list_from(
nmalloc(names_getid("x")),
0))
, 0,
((NameList *) 0)
,
ast_make_integer(2)
,
ast_make_let(
((NameList *) list_from(
nmalloc(names_getid("y")),
0))
, 0,
((NameList *) 0)
,
ast_make_integer(3)
,
ast_make_funcall(
ast_make_variable(names_getid("+"))
,
((AstList *) list_from(
ast_make_variable(names_getid("x"))
,
ast_make_variable(names_getid("y"))
,
0))
)
)
)
,
ast_make_variable(names_getid("x"))
,
0))
)
,
ast_make_funcall(
ast_make_variable(names_getid("+"))
,
((AstList *) list_from(
ast_make_funcall(
ast_make_variable(names_getid("+"))
,
((AstList *) list_from(
ast_make_let(
((NameList *) list_from(
nmalloc(names_getid("x")),
0))
, 0,
((NameList *) 0)
,
ast_make_integer(2)
,
ast_make_let(
((NameList *) list_from(
nmalloc(names_getid("y")),
0))
, 0,
((NameList *) 0)
,
ast_make_integer(3)
,
ast_make_funcall(
ast_make_variable(names_getid("+"))
,
((AstList *) list_from(
ast_make_variable(names_getid("x"))
,
ast_make_variable(names_getid("y"))
,
0))
)
)
)
,
ast_make_variable(names_getid("x"))
,
0))
)
,
ast_make_let(
((NameList *) list_from(
nmalloc(names_getid("x")),
0))
, 0,
((NameList *) 0)
,
ast_make_integer(5)
,
ast_make_funcall(
ast_make_variable(names_getid("*"))
,
((AstList *) list_from(
ast_make_variable(names_getid("x"))
,
ast_make_variable(names_getid("x"))
,
0))
)
)
,
0))
)
,
ast_make_let(
((NameList *) list_from(
nmalloc(names_getid("y")),
0))
, 0,
((NameList *) 0)
,
ast_make_integer(2)
,
ast_make_let(
((NameList *) list_from(
nmalloc(names_getid("z")),
0))
, 0,
((NameList *) 0)
,
ast_make_variable(names_getid("y"))
,
ast_make_let(
((NameList *) list_from(
nmalloc(names_getid("y")),
0))
, 0,
((NameList *) 0)
,
ast_make_integer(3)
,
ast_make_funcall(
ast_make_variable(names_getid("+"))
,
((AstList *) list_from(
ast_make_funcall(
ast_make_variable(names_getid("+"))
,
((AstList *) list_from(
ast_make_variable(names_getid("x"))
,
ast_make_variable(names_getid("y"))
,
0))
)
,
ast_make_variable(names_getid("z"))
,
0))
)
)
)
)
,
ast_make_let(
((NameList *) list_from(
nmalloc(names_getid("a")),
0))
, 0,
((NameList *) 0)
,
ast_make_funcall(
ast_make_variable(names_getid("="))
,
((AstList *) list_from(
ast_make_variable(names_getid("x"))
,
ast_make_integer(1)
,
0))
)
,
0
)
,
ast_make_let(
((NameList *) list_from(
nmalloc(names_getid("b")),
0))
, 0,
((NameList *) 0)
,
ast_make_funcall(
ast_make_variable(names_getid("&&"))
,
((AstList *) list_from(
ast_make_variable(names_getid("a"))
,
ast_make_funcall(
ast_make_variable(names_getid("<"))
,
((AstList *) list_from(
ast_make_float(3.000000F)
,
ast_make_variable(names_getid("y"))
,
0))
)
,
0))
)
,
0
)
,
ast_make_let(
((NameList *) list_from(
nmalloc(names_getid("x")),
0))
, 0,
((NameList *) 0)
,
ast_make_tuple(
((AstList *) list_from(
ast_make_integer(1)
,
ast_make_integer(2)
,
0))
)
,
0
)
,
ast_make_let(
((NameList *) list_from(
nmalloc(names_getid("y")),
0))
, 0,
((NameList *) 0)
,
ast_make_tuple(
((AstList *) list_from(
ast_make_variable(names_getid("x"))
,
ast_make_variable(names_getid("x"))
,
0))
)
,
0
)
,
ast_make_let(
((NameList *) list_from(
nmalloc(names_getid("a")),
nmalloc(names_getid("b")),
0))
, 0,
((NameList *) 0)
,
ast_make_variable(names_getid("x"))
,
0
)
,
ast_make_let(
((NameList *) list_from(
nmalloc(names_getid("x")),
nmalloc(names_getid("y")),
nmalloc(names_getid("z")),
0))
, 0,
((NameList *) 0)
,
ast_make_tuple(
((AstList *) list_from(
ast_make_variable(names_getid("x"))
,
ast_make_integer(1)
,
ast_make_funcall(
ast_make_variable(names_getid("*"))
,
((AstList *) list_from(
ast_make_variable(names_getid("a"))
,
ast_make_variable(names_getid("b"))
,
0))
)
,
0))
)
,
0
)
,
ast_make_let(
((NameList *) list_from(
nmalloc(names_getid("x")),
0))
, 0,
((NameList *) 0)
,
ast_make_integer(9)
,
ast_make_let(
((NameList *) list_from(
nmalloc(names_getid("y")),
0))
, 0,
((NameList *) 0)
,
ast_make_integer(1)
,
ast_make_funcall(
ast_make_variable(names_getid("+"))
,
((AstList *) list_from(
ast_make_variable(names_getid("x"))
,
ast_make_variable(names_getid("y"))
,
0))
)
)
)
,
ast_make_let(
((NameList *) list_from(
nmalloc(names_getid("+")),
0))
, 0,
((NameList *) list_from(
nmalloc(names_getid("a")),
nmalloc(names_getid("b")),
0))
,
ast_make_funcall(
ast_make_variable(names_getid("-"))
,
((AstList *) list_from(
ast_make_variable(names_getid("a"))
,
ast_make_variable(names_getid("b"))
,
0))
)
,
0
)
,
ast_make_let(
((NameList *) list_from(
nmalloc(names_getid("a")),
0))
, 0,
((NameList *) 0)
,
ast_make_integer(12)
,
0
)
,
ast_make_let(
((NameList *) list_from(
nmalloc(names_getid("a")),
0))
, 0,
((NameList *) 0)
,
ast_make_integer(5)
,
ast_make_if(
ast_make_funcall(
ast_make_variable(names_getid("<"))
,
((AstList *) list_from(
ast_make_variable(names_getid("a"))
,
ast_make_integer(1)
,
0))
)
,
ast_make_integer(0)
,
ast_make_integer(3)
)
)
,
ast_make_let(
((NameList *) list_from(
nmalloc(names_getid("f")),
0))
, 0,
((NameList *) list_from(
nmalloc(names_getid("x")),
0))
,
ast_make_funcall(
ast_make_variable(names_getid("*"))
,
((AstList *) list_from(
ast_make_integer(2)
,
ast_make_variable(names_getid("x"))
,
0))
)
,
0
)
,
ast_make_let(
((NameList *) list_from(
nmalloc(names_getid("g")),
0))
, 0,
((NameList *) list_from(
nmalloc(names_getid("x")),
nmalloc(names_getid("y")),
nmalloc(names_getid("z")),
0))
,
ast_make_funcall(
ast_make_variable(names_getid("+"))
,
((AstList *) list_from(
ast_make_variable(names_getid("x"))
,
ast_make_funcall(
ast_make_variable(names_getid("*"))
,
((AstList *) list_from(
ast_make_variable(names_getid("y"))
,
ast_make_variable(names_getid("z"))
,
0))
)
,
0))
)
,
0
)
,
ast_make_let(
((NameList *) list_from(
nmalloc(names_getid("fact")),
0))
, 1,
((NameList *) list_from(
nmalloc(names_getid("n")),
0))
,
ast_make_if(
ast_make_funcall(
ast_make_variable(names_getid("="))
,
((AstList *) list_from(
ast_make_variable(names_getid("n"))
,
ast_make_integer(0)
,
0))
)
,
ast_make_integer(1)
,
ast_make_funcall(
ast_make_variable(names_getid("*"))
,
((AstList *) list_from(
ast_make_variable(names_getid("n"))
,
ast_make_funcall(
ast_make_variable(names_getid("fact"))
,
((AstList *) list_from(
ast_make_funcall(
ast_make_variable(names_getid("-"))
,
((AstList *) list_from(
ast_make_variable(names_getid("n"))
,
ast_make_integer(1)
,
0))
)
,
0))
)
,
0))
)
)
,
0
)
,
ast_make_funcall(
ast_make_let(
((NameList *) 0)
, 0,
((NameList *) list_from(
nmalloc(names_getid("x")),
0))
,
ast_make_funcall(
ast_make_variable(names_getid("+"))
,
((AstList *) list_from(
ast_make_variable(names_getid("x"))
,
ast_make_integer(1)
,
0))
)
,
0
)
,
((AstList *) list_from(
ast_make_funcall(
ast_make_variable(names_getid("fact"))
,
((AstList *) list_from(
ast_make_variable(names_getid("a"))
,
0))
)
,
0))
)
,
0))
;

/* Execute the program */
run_list(prog);

/* Free resources */
alist_free(prog);
names_free();
}

