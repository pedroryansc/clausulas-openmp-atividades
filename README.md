# Cláusulas do OpenMP - Atividades

1 - A cláusula `private` em uma diretiva do OpenMP define que uma ou mais variáveis especificadas (por exemplo, "num") são privadas. Em outras palavras, isto significa que, na região paralela englobada pela diretiva e pela cláusula, cada thread terá uma cópia local da variável privada, sem que seu valor seja compartilhado entre as threads, ou seja, sem que as alterações em uma thread afete o valor da outra. Exemplo: saida/atividade1.exe

2 - A cláusula `shared` define que uma ou mais variáveis devem ser compartilhadas entre as threads de uma região paralela. Ao contrário da cláusula `private`, a `shared` faz com que as alterações nas variáveis em uma thread tenham efeito em todas as outras threads. Exemplo: saida/atividade2.cpp

3 - A cláusula `firstprivate` é semelhante à cláusula `private`