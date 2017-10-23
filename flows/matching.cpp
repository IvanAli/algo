c l a s s   m a t c h i n g   {  
     p u b l i c :  
     v e c t o r <   v e c t o r < i n t >   >   g ;  
     v e c t o r < i n t >   p a ;  
     v e c t o r < i n t >   p b ;  
     v e c t o r < i n t >   w a s ;  
     i n t   n ,   m ;  
     i n t   r e s ;  
     i n t   i t e r ;  
  
     m a t c h i n g ( i n t   n ,   i n t   m )   :   n ( n ) ,   m ( m )   {  
         a s s e r t ( 0   < =   n   & &   0   < =   m ) ;  
         p a   =   v e c t o r < i n t > ( n ,   - 1 ) ;  
         p b   =   v e c t o r < i n t > ( m ,   - 1 ) ;  
         w a s   =   v e c t o r < i n t > ( n ,   0 ) ;  
         g . r e s i z e ( n ) ;  
         r e s   =   0 ;  
         i t e r   =   0 ;  
     }  
  
     v o i d   a d d ( i n t   f r o m ,   i n t   t o )   {  
         a s s e r t ( 0   < =   f r o m   & &   f r o m   <   n   & &   0   < =   t o   & &   t o   <   m ) ;  
         g [ f r o m ] . p u s h _ b a c k ( t o ) ;  
     }  
  
     b o o l   d f s ( i n t   v )   {  
         w a s [ v ]   =   i t e r ;  
         f o r   ( i n t   u   :   g [ v ] )   {  
             i f   ( p b [ u ]   = =   - 1 )   {  
                 p a [ v ]   =   u ;  
                 p b [ u ]   =   v ;  
                 r e t u r n   t r u e ;  
             }  
         }  
         f o r   ( i n t   u   :   g [ v ] )   {  
             i f   ( w a s [ p b [ u ] ]   ! =   i t e r   & &   d f s ( p b [ u ] ) )   {  
                 p a [ v ]   =   u ;  
                 p b [ u ]   =   v ;  
                 r e t u r n   t r u e ;  
             }  
         }  
         r e t u r n   f a l s e ;  
     }  
  
     i n t   s o l v e ( )   {  
         w h i l e   ( t r u e )   {  
             i t e r + + ;  
             i n t   a d d   =   0 ;  
             f o r   ( i n t   i   =   0 ;   i   <   n ;   i + + )   {  
                 i f   ( p a [ i ]   = =   - 1   & &   d f s ( i ) )   {  
                     a d d + + ;  
                 }  
             }  
             i f   ( a d d   = =   0 )   {  
                 b r e a k ;  
             }  
             r e s   + =   a d d ;  
         }  
         r e t u r n   r e s ;  
     }  
  
     i n t   r u n _ o n e ( i n t   v )   {  
         i f   ( p a [ v ]   ! =   - 1 )   {  
             r e t u r n   0 ;  
         }  
         i t e r + + ;  
         r e t u r n   ( i n t )   d f s ( v ) ;  
     }  
 } ; 