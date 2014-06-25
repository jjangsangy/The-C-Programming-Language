int     nsym    0;      /* current length of symbol table */

struct {
       char    id[10];
       int     line;
       char    type;
       int     usage;
} sym[100];             /* symbol table */

main( ) {
       ...
       if( (index = lookup(newname)) >= 0 )
               sym[index].usage++;              /* already there ... */
       else
               install(newname, newline, newtype);
       ...
}

lookup(s)
  char *s; {
       int i;
       extern struct {
               char    id[10];
               int     line;
               char    type;
               int     usage;
       } sym[ ];

       for( i=0; i<nsym; i++ )
               if( compar(s, sym[i].id) > 0 )
                       return(i);
       return(-1);
}

compar(s1,s2)           /*  return 1 if s1==s2, 0 otherwise */
  char *s1, *s2; {
       while( *s1++ == *s2 )
               if( *s2++ == '\0' )
                       return(1);
       return(0);
}
