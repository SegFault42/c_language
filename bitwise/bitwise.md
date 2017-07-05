## Operateur bit a bit

Il existe six operateurs pour manipuler les bit en C:

```
& 	bitwise AND (ET)
| 	bitwise (inclusive OR) (OU)
^ 	bitwise XOR (eXclusive OR) (OU)
~ 	bitwise NOT (unary) (NON)
<< 	left shift (decallage gauche)
>> 	right shift (decallage droit)
```

Avant d'expliquer comment utilser ces operateurs, il faut savoir comment fonctionne les bits.

Prenons un unsigned char pour exemple

unsigned char a = 0;

Nous avons un char non signé qui est sur un octet (8 bits)

0000 0000

le premier bit (a droite) represente 1
le deuxieme represnte 2
le troisieme represente 4
le quatrieme represente 8
le cinquieme represente 16
le sixieme represente 32
le septieme represente 64
le huitieme represente 128

```
0000 0000
|||| ||||
|||| |||1
|||| ||2
|||| |4
|||| 8
|||16
||32
|64
128
```
Si vous assignons la valeur 128 a la variable 'a', nous aurons le dernier bit a 1 parceque si nous additionons les tout les bits, nous aurions bien 128 comme resultat

```
1000 0000

128 + 0 + 0 + 0 + 0 + 0 + 0 + 0 = 128
```

Maintenant si nous assignons 15 a notre variable 'a'

Nous aurons ce resultat :

```
0000 1111

0 + 0 + 0 + 0 + 8 + 4 + 2 + 1 = 15
```

Un dernier exemple :

```
a = 236

1110 1100

128 + 64 + 32 + 0 + 8 + 4 + 0 + 0 = 236
```
