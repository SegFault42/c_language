# Operateur bit a bit

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

## 1) Representation en binaire 

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

## 2) Manipuler les bits

#### a) L'operateur AND '&'

Prenons 2 variable de type unsigned char :

```
unsigned char a = 236;
unsigned char b = 100;

en binaire :

a = 1110 1100
b = 0110 0100
```

L'operateur & (& binaire) met le bit a 1 si les bits correspondant son tout les deux a 1 sinon le bit est a 0

```
 --------------------------------
|bit a | bit b | a | b (a OR b) |
|-------------------------------|
|  0  |   0   |       0         |
|  0  |   1   |       0         |
|  1  |   0   |       0         |
|  1  |   1   |       1         |
 -------------------------------
```

si nous faisont :

```
unsigned char c = a & b;
```

'c' sera egale a 0110 0100
```
11101100
||||||||
01100100
||||||||
vvvvvvvv
01100100
```

resultat du programme bitwise_AND.c

```
a = 236
b = 100
c = 0
Avant operation:
a = 11101100
b = 01100100
c = 00000000
Apres operation:
a = 11101100
b = 01100100
c = 01100100
```

#### b) L'operateur OR '|'

Toujours avec les memes variable qu'au dessus :

```
unsigned char a = 236;
unsigned char b = 100;

en binaire :

a = 1110 1100
b = 0110 0100
```

L'operateur | (| binaire) met le bit a 1 si un des deux bits correspondant est a 1, sinon le bit est a 0.

```
 --------------------------------
|bit a | bit b | a | b (a OR b) |
|-------------------------------|
|  0  |   0   |       0         |
|  0  |   1   |       1         |
|  1  |   0   |       1         |
|  1  |   1   |       1         |
 -------------------------------
```

si nous faisont :

```
unsigned char c = a | b;
```

'c' sera egale a 1110 1100
```
11101100
||||||||
01100100
||||||||
vvvvvvvv
11101100
```

resultat du programme bitwise_OR.c

```
a = 236
b = 100
c = 0
Avant operation:
a = 11101100
b = 01100100
c = 00000000
Apres operation:
a = 11101100
b = 01100100
c = 11101100
```

#### c) L'operateur XOR '^'

Toujours avec les memes variable qu'au dessus :

```
unsigned char a = 236;
unsigned char b = 100;

en binaire :

a = 1110 1100
b = 0110 0100
```

L'operateur ^ (^ binaire) met le bit a 1 si les bits correspondant sont different.

```
 --------------------------------
|bit a | bit b | a | b(a XOR b) |
|-------------------------------|
|  0  |   0   |       0         |
|  0  |   1   |       1         |
|  1  |   0   |       1         |
|  1  |   1   |       0         |
 -------------------------------
```

si nous faisont :

```
unsigned char c = a ^ b;
```

'c' sera egale a 1110 1100
```
11101100
||||||||
01100100
||||||||
vvvvvvvv
10001000
```

resultat du programme bitwise_XOR.c

```
a = 236
b = 100
c = 0
Avant operation:
a = 11101100
b = 01100100
c = 00000000
Apres operation:
a = 11101100
b = 01100100
c = 10001000
```

#### d) L'operateur NOT '~'

Celui la est particulier car il s'utilise avec une seul variable a la fois.

Avec cette variable :

```
unsigned char a = 236;

en binaire :

a = 1110 1100
```

L'operateur ~ (~ binaire) inversse les bits. les bits a 1 passe a 0 et les bits a 0 passe a 1.

```
 -------------
|bit a|  ~a   |
|-------------|
|  0  |   1   |
|  1  |   0   |
 -------------
 ```

si nous faisont :

```
a = ~a;
```

'a' sera egale a 0001 0011

resultat du programme bitwise_NOT.c

```
a = 236
Avant operation:
a = 11101100
Apres operation:
a = 00010011

```

#### e) Decallage a droite '>>'

Cette operateur decalle a droite tout les bits de x.

Si nous avons :

```
 unsigned char a = 256;
 
 en binaire :
 a = 1110 1100
```

et que nous faisons :

```
 a >>= 2;
```

le resultat sera le suivant:

```
0011 1011
```

tout les bits seront decaller vers la droite 2 fois
```
  1110 1100
->0111 0110
->0011 1011
```
Si on avait:
```
a >>= 4;
```

il y aurait 4 fois un decallage vers la droite
```
  11101100
->01110110
->00111011
->00011101
->00001110
```
C'est la meme chose pour un decallage a gauche sauf que le decallage se fait dans l'autre sens.

A noter qui si on decalle vers la droite et nous redecallons le meme nombre de fois dans le sens inversse, les bits decaller hors zone seront perdu. Donc apres le decallage du sens inversse les bits seront a 0

```
unsigned int a = 255; (1111 1111)

a >>= 4; (0000 1111)
a <<= 4; (1111 0000)
```



