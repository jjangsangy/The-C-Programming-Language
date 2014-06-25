main() {
       int hist[129];      /*  128 legal chars + 1 illegal group*/
       ...
       count(hist, 128);   /* count the letters into hist */
       printf( ... );      /* comments look like this; use them */
       ...        /* anywhere blanks, tabs or newlines could appear */
}

count(buf, size)
  int size, buf[ ]; {
       int i, c;
       for( i=0; i<=size; i++ )
               buf[i]  =  0;                     /*  set buf to zero */
       while(  (c=getchar(  )) != '\0' ) {       /* read til eof */
               if( c > size || c < 0 )
                       c = size;                 /* fix illegal input */
               buf[c]++;
       }
       return;
}
