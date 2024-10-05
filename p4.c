#include <stdio.h>
int main() {

    long long total_population = 1441981744;
    float percentage_women = 48.4;
    float literacy_rate_total = 85.95;
    float literacy_rate_male = 80.95;
    float literacy_rate_female = 62.84;


    long long women_population = (percentage_women / 100) * total_population;
    long long men_population = total_population - women_population;


    float literate_women = (literacy_rate_female / 100) * women_population;
    long long illiterate_women = women_population - literate_women;

        float literate_men = (literacy_rate_male / 100) * men_population;
    long long illiterate_men = men_population - literate_men;


    printf("Total Population: %lld\n", total_population);
    printf("Total Women Population: %lld\n", women_population);
    printf("Total Men Population: %lld\n", men_population);
    printf("Illiterate Women: %lld\n", illiterate_women);
    printf("Illiterate Men: %lld\n", illiterate_men);

    return 0;
}

