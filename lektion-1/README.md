# Installera C kompilatorn
Om du inte har homebrew (det är som en app-store för utvecklare) den är riktigt bra att ha till att installera kompilatorer.

[Install homebrew](https://brew.sh/)

När du har installerat det, installera C-kompilatorn: clang 

```
brew update
brew install --with-toolchain llvm
```


# Kompilera och kör programmet
Till skillnad från Java, körs C-program inte i en runtime. Du ska alltså inte ha något program för att köra ett C-program
Du ska bara kompilera det, sen kan du köra programmet.

Du kompilerar programmet såhär (när du står i den här mappen i terminalen)

```
clang main.c -o main
```

kommandot betyder: kompilera filen main.c och spara programmet som en fil som heter "main"

nu kan du köra programmet som du skulle köra vilket program som helst, från din terminal ;), på det här viset:

```
./main
[0 1 2 3 4 5 6 7 8 9]
[0 4 8 12 16 20 24 28 32 36]
```
