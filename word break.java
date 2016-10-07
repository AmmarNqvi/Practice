public c l a s s Solut ion {
public boolean wordBreak ( S t r ing s , Set <St r ing > di c t ) {
boolean [ ] t = new boolean [ s . length ( ) +1 ] ;
t [ 0 ] = t rue ; / / s e t f i r s t t o b e t rue , why?
/ / Be c aus e we ne ed i n i t i a l s t a t e
for ( int i =0; i <s . length ( ) ; i ++) {
/ / s h oul d c o n t i n u e from match p o s i t i o n
i f ( ! t [ i ] )
continue ;
for ( S t r ing a : di c t ) {
int len = a . length ( ) ;
int end = i + len ;
i f ( end > s . length ( ) )
continue ;
i f ( s . subs t r ing ( i , end ) . equal s ( a ) ) {
t [ end ] = t rue ;
}
}
}
return t [ s . length ( ) ] ;
}
}