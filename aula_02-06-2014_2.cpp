Tipo
    RegEmp=Registro
    nome, area = texto
    tempo = inteiro
    consultor = texto
    FimRegEmp

VetEmp = Vetor [1 a 800] de RegEmp

Const
Totemp = 800

Var
i, totint, totrd, totseg: inteiro
area, maior: texto
totatend:inteiro
Vemp: Vetemp

In�cio
totint <- totrd <- totseg <- 0;
totatend <- 0;

Para (i de 1 a totemp) fa�a
    leia (Vemp[i]);
    Se (Vemp.area[i]='Internet') ent�o
        totint <- totint+1
    sen�o
        se (Vemp.area[i]='Redes') ent�o
            totrd <- totrd+1
                sen�o
                    se (Vemp.area[i]='Seguran�a') ent�o
                        totseg <- totseg+1
                    fimse
        fimse
    fimse

FimPara
escreva ('Internet', totint, 'Redes', totrd, 'Seguran�a', totseg);
escreva (totatend);

Se (totint > totrd) ent�o
    Se(totint > totseg) ent�o
    escreva ('Internet')
    Sen�o
        se (totseg > totint) ent�o
            escreva ('Seguran�a')
            fimse
        fimse
    sen�o
        se (totrd > totint) ent�o
            se (totrd > totseg) ent�o
            escreva('Redes')
            Sen�o
                se (totseg > totrd) ent�o
                    escreva ('Seguran�a')
                    fimse
                fimse
            fimse
        fimse
fim

