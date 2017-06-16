# Header File personalizzati in C

Per creare un proprio header file basta seguire i seguenti passi:

1. Creare un file con estensione '.h':
Al suo interno inserire una **header guard**, ovvero una costante che determina se il file già è stato incluso o meno.

```
#ifndef NOME_LIB_H
#define NOME_LIB_H

// Prototipi delle funzioni della libreria;

#endif
```

**N.B.**: Nei file .h vanno SOLO i Prototipi delle funzioni.

2. Creare un file con estensione '.c' con lo stesso nome del corrispettivo file '.h':
Al suo interno, includere le librerie necessarie per il funzionamento del codice della libreria.
E' **obbligatorio** includere il file '.h' corrispettivo all'interno di questo file!

```
#include <stdio.h>
#include "nomeFile.h"

// Se il codice dovesse necessitare di costanti per il suo funzionamento:
#ifndef DEBUG
#define DEBUG 0
#endif

// Sviluppare il codice dei prototipi presenti nel file '.h'
```

Questo file non deve contenere la funzione ```main()```.
