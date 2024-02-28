# If-Statement-ED

Este projeto contém dois programas escritos em C++: `imc.cpp` e `AnoBissexto.cpp`.

## [imc.cpp](imc.cpp)

Este programa calcula o Índice de Massa Corporal (IMC) de uma pessoa e classifica o resultado. O usuário é solicitado a inserir a massa (em kg) e a altura (em metros), e o programa retorna a classificação do IMC.

## [AnoBissexto.cpp](AnoBissexto.cpp)

Este programa verifica se um ano é bissexto ou não. Um ano é considerado bissexto se satisfizer uma das seguintes condições:

- É divisível por 4, mas não por 100;
- É divisível por 400.

O usuário é solicitado a inserir um ano e o programa retorna se o ano é bissexto ou não.

## Compilação e execução

Um `Makefile` está incluído para compilar e executar os programas. Use os seguintes comandos:

- `make`: compila os programas
- `make run`: executa os programas
- `make clean`: remove os arquivos compilados

# Testes de Entrada e Saída

Aqui estão alguns exemplos de como os programas funcionam com diferentes entradas.


## imc.cpp

### Teste 1

Entrada: 

```
70 1.75
```

Saída:

```
Classificação IMC: Peso normal
```

### Teste 2

Entrada:

```
100 1.75
```

Saída:

```
Classificação IMC: Obesidade
```

## AnoBissexto.cpp

### Teste 1

Entrada: 

```
2000
```

Saída:

```
2020 é um ano bissexto.
```

### Teste 2

Entrada:

```
1900
```

Saída:

```
1900 não é um ano bissexto.
```