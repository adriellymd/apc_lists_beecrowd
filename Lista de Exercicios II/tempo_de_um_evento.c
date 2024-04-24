#include <stdio.h>

int main() {
    int dia_inicial, dia_final, horario1[3], horario2[3];
    int horario_inicial, horario_final, total_segundos, dias, horas, minutos, segundos;

    scanf("Dia %d", &dia_inicial);
    scanf("%d : %d : %d", &horario1[0], &horario1[1], &horario1[2]);

    while (getchar() != '\n'); //eu tive problema com o scanf, funcionou com essa funcao

    scanf("Dia %d", &dia_final);
    scanf("%d : %d : %d", &horario2[0], &horario2[1], &horario2[2]);

    horario_inicial = horario1[0] * 3600 + horario1[1] * 60 + horario1[2];
    horario_final = horario2[0] * 3600 + horario2[1] * 60 + horario2[2];
    total_segundos = (dia_final - dia_inicial) * 86400 + (horario_final - horario_inicial);

    dias = total_segundos / 86400;
    total_segundos %= 86400;
    horas = total_segundos / 3600;
    total_segundos %= 3600;
    minutos = total_segundos / 60;
    segundos = total_segundos % 60;

    printf("%d dia(s)\n", dias);
    printf("%d hora(s)\n", horas);
    printf("%d minuto(s)\n", minutos);
    printf("%d segundo(s)\n", segundos);

    return 0;
}

