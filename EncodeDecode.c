//
//  Roll number : 1 <= r < 2^35 [Bits 0 - 34]
//  Subject : 1 <= s < 2^15      [Bits 35 - 49]
//	Score : 0 <= sc <= 2^14      [Bits 50 - 63]
//

#include <stdio.h>
#include <string.h>

unsigned long long encode(unsigned long long roll,unsigned long long subject,unsigned long long score) {
    return score << 50 | subject << 35 | roll;
}

void decode(unsigned long long encoded, unsigned long long *pRoll,unsigned long long *pSubject,unsigned long long *pScore) {
    *pRoll = encoded & (unsigned long long)~0>>29;
    *pSubject = (encoded>>35) & (unsigned long long)~0>>49;
    *pScore = (encoded>>50) & (unsigned long long)~0>>50;
}

int main()
{
    unsigned long long roll, subject, score;
    unsigned long long encoded;
    char cmd[100];

    while (1) {
        printf("Enter command: ");
        scanf("%s", cmd);
        if (!strcmp(cmd, "encode")) {
            printf("Roll: ");
            scanf("%llu", &roll);
            printf("Subject: ");
            scanf("%llu", &subject);
            printf("Score: ");
            scanf("%llu", &score);
            encoded = encode(roll, subject, score);
            printf("Encoded value is: %llu\n", encoded);
        } else if (!strcmp(cmd, "decode")) {
            printf("Encoded value: ");
            scanf("%llu", &encoded);
            decode(encoded, &roll, &subject, &score);
            printf("Roll: %llu\nSubject: %llu\nScore: %llu\n", roll, subject, score);
        } else if (!strcmp(cmd, "quit") || !strcmp(cmd, "exit")) {
            printf("Bye!");
            break;
        } else {
            printf("Unknown command. Try again.\n");
        }
    }

    return 0;
}
