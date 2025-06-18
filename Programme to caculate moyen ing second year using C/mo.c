#include <stdio.h>

float insalg(float algtd, float algex, int cof) {
    float moyalg = (algtd * 0.4) + (algex * 0.6);
    return moyalg * cof;
}

float insana(float anatd, float anaex, int cof) {
    float moyana = (anatd * 0.4) + (anaex * 0.6);
    return moyana * cof;
}

float insent(float enttd, float entex, int cof) {
    float moyent = (enttd * 0.4) + (entex * 0.6);
    return moyent * cof;
}

float inspoo(float pootd, float pooex, int cof) {
    float moypoo = (pootd * 0.4) + (pooex * 0.6);
    return moypoo * cof;
}

float insprop(float proptd, float propex, int cof) {
    float moyprop = (proptd * 0.4) + (propex * 0.6);
    return moyprop * cof;
}

float inssfsd(float sfsdtd, float sfsdex, int cof) {
    float moysfsd = (sfsdtd * 0.4) + (sfsdex * 0.6);
    return moysfsd * cof;
}

float insado(float adotd, float adoex, int cof) {
    float moyado = (adotd * 0.4) + (adoex * 0.6);
    return moyado * cof;
}

float inscom(float comtd, float comex, int cof) {
    float moycom = (comtd * 0.4) + (comex * 0.6);
    return moycom * cof;
}

float moyen(float moyado, float moycom, float moysfsd, float moyprop, float moypoo, float moyent, float moyalg, float moyana) {
    float genralmoy = ((moyado + moycom + moysfsd + moyana + moyprop + moypoo + moyent + moyalg) / 31);
    return genralmoy;
}

int main() {
    float algtd, algex, anatd, anaex, enttd, entex, pootd, pooex, proptd, propex, sfsdtd, sfsdex, adotd, adoex, comtd, comex;
    int cofal, cofan, cofen, cofpo, cofpr, cofsf, cofad, cofcm;

    printf("Enter your grades:\n");

    printf("TD Alg: ");
    scanf("%f", &algtd);
    printf("EX Alg: ");
    scanf("%f", &algex);
    printf("Coefficient Alg: ");
    scanf("%d", &cofal);

    printf("TD Ana: ");
    scanf("%f", &anatd);
    printf("EX Ana: ");
    scanf("%f", &anaex);
    printf("Coefficient Ana: ");
    scanf("%d", &cofan);

    printf("TD Ent: ");
    scanf("%f", &enttd);
    printf("EX Ent: ");
    scanf("%f", &entex);
    printf("Coefficient Ent: ");
    scanf("%d", &cofen);

    printf("TD Poo: ");
    scanf("%f", &pootd);
    printf("EX Poo: ");
    scanf("%f", &pooex);
    printf("Coefficient Poo: ");
    scanf("%d", &cofpo);

    printf("TD Prop: ");
    scanf("%f", &proptd);
    printf("EX Prop: ");
    scanf("%f", &propex);
    printf("Coefficient Prop: ");
    scanf("%d", &cofpr);

    printf("TD SFSD: ");
    scanf("%f", &sfsdtd);
    printf("EX SFSD: ");
    scanf("%f", &sfsdex);
    printf("Coefficient SFSD: ");
    scanf("%d", &cofsf);

    printf("TD ADO: ");
    scanf("%f", &adotd);
    printf("EX ADO: ");
    scanf("%f", &adoex);
    printf("Coefficient ADO: ");
    scanf("%d", &cofad);

    printf("TD COM: ");
    scanf("%f", &comtd);
    printf("EX COM: ");
    scanf("%f", &comex);
    printf("Coefficient COM: ");
    scanf("%d", &cofcm);

    float moyalg = insalg(algtd, algex, cofal);
    float moyana = insana(anatd, anaex, cofan);
    float moyent = insent(enttd, entex, cofen);
    float moyprop = insprop(proptd, propex, cofpr);
    float moysfsd = inssfsd(sfsdtd, sfsdex, cofsf);
    float moyado = insado(adotd, adoex, cofad);
    float moypoo = inspoo(pootd, pooex, cofpo);
    float moycom = inscom(comtd, comex, cofcm);

    int n, i;

    do {
        printf("\n1/ Calculate your average\n");
        printf("2/ Correct a grade\n");
        printf("3/ Exit\n");
        printf("Choose an option: ");
        scanf("%d", &n);

        switch (n) {
            case 1:
                printf("Your general grade: %.2f\n", moyen(moyado, moycom, moysfsd, moyprop, moypoo, moyent, moyalg, moyana));
                break;

            case 2:
                printf("What subject do you want to correct?\n");
                printf("1/ Alg\n2/ Ana\n3/ Ent\n4/ Poo\n5/ Prop\n6/ SFSD\n7/ ADO\n8/ COM\n");
                printf("Enter your answer: ");
                scanf("%d", &i);
                float newtd, newex;
                printf("Re-enter your TD grade: ");
                scanf("%f", &newtd);
                printf("Re-enter your EX grade: ");
                scanf("%f", &newex);

                switch (i) {
                    case 1: moyalg = insalg(newtd, newex, cofal); break;
                    case 2: moyana = insana(newtd, newex, cofan); break;
                    case 3: moyent = insent(newtd, newex, cofen); break;
                    case 4: moypoo = inspoo(newtd, newex, cofpo); break;
                    case 5: moyprop = insprop(newtd, newex, cofpr); break;
                    case 6: moysfsd = inssfsd(newtd, newex, cofsf); break;
                    case 7: moyado = insado(newtd, newex, cofad); break;
                    case 8: moycom = inscom(newtd, newex, cofcm); break;
                    default: printf("Invalid choice\n"); break;
                }
                printf("Your new grade is: %.2f\n", moyen(moyado, moycom, moysfsd, moyprop, moypoo, moyent, moyalg, moyana));
                break;

            case 3:
                printf("Thank you!\n");
                break;

            default:
                printf("Invalid choice\n");
                break;
        }
    } while (n != 3);

    return 0;
}
