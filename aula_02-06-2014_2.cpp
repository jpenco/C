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

Início
totint <- totrd <- totseg <- 0;
totatend <- 0;

Para (i de 1 a totemp) faça
    leia (Vemp[i]);
    Se (Vemp.area[i]='Internet') então
        totint <- totint+1
    senão
        se (Vemp.area[i]='Redes') então
            totrd <- totrd+1
                senão
                    se (Vemp.area[i]='Segurança') então
                        totseg <- totseg+1
                    fimse
        fimse
    fimse

FimPara
escreva ('Internet', totint, 'Redes', totrd, 'Segurança', totseg);
escreva (totatend);

Se (totint > totrd) então
    Se(totint > totseg) então
    escreva ('Internet')
    Senão
        se (totseg > totint) então
            escreva ('Segurança')
            fimse
        fimse
    senão
        se (totrd > totint) então
            se (totrd > totseg) então
            escreva('Redes')
            Senão
                se (totseg > totrd) então
                    escreva ('Segurança')
                    fimse
                fimse
            fimse
        fimse
fim

