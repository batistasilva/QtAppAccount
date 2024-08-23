#Versao de Compilacao - 1
#qmake -project 
#qmake -o Makefile "INCLUDEPATH+=/usr/include/postgresql" "LIBS+=-L -lpq"
#make

#Versao de Compilação - 2
qmake -project 
qmake -o Makefile "INCLUDEPATH+=/usr/include/postgresql" "LIBS+=-L -lpq"
make

