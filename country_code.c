#include <stdio.h>

struct dialing_code {
    char *country;
    int code;
};
int main() {
    struct dialing_code country_codes[] = {
        {"Argentina", 54}, {"Bangladesh", 880},
        {"Brazil", 55}, {"China", 86},
        {"India", 91}, {"Germany", 49}
    };
    int n = sizeof(country_codes) / sizeof(country_codes[0]);
    int input, found = 0;
    printf("Enter country code: ");
    scanf("%d", &input);
    for(int i = 0; i < n; i++) {
        if(country_codes[i].code == input) {
            printf("Country: %s\n", country_codes[i].country);
            found = 1;
            break;
        }
    }
    if(!found) printf("Error: Code not found\n");
    return 0;
}