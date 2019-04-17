

ref_archive = open("entrada.txt", "r")

lista = []

for line in ref_archive:
    lista.append(line.split())

for i in range(len(lista)):
    print("\tint i"+str(i)+"=0;")
print("\tint i"+str(len(lista))+"=0;")
print()

for i in range(len(lista)):
    print("{"+lista[i][0]+"} {")
    print("\tprintf(\"encontrou: "+lista[i][0]+": \%s\\n\", yytext);")
    print("\ti"+str(i)+"++;")
    print("}")
print(".\t{")
print("\tprintf(\"caracter nao identificado\\n\", yytext);")
print("\ti"+str(len(lista))+"++;")
print("}")
print()

for i in range(len(lista)):
    print("\t\t\tprintf(\"\\tencontrou \%d "+lista[i][0]+"\\n\", i"+str(i)+");")
print("\t\t\tprintf(\"\\tencontrou %d caracteres nao identificados\\n\", i"+str(len(lista))+");")

