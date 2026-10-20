# Situação

Um vetor

10 7 2 4 3 77 6 8 5 22 49 51 101 19 7 1

## Insertion sort

Insertion (n(a - 1))/z

for (int i = 1; i < 16; ++i) {
        int tmp = v[i];
        j = i;

        while (tmp < v[j-1] && j > 0) {
                v[j] = v[j-1];
                --j;
        }
        v[j] = tmp;
}

## Merge sort

Primeiro algoritmo com complexidade de espaço O(n) que conhecemos. É uma máquina de devorar memória.
Divide um vetor pela metade recursivamente, então faz insertion sort em cada um de seus segmentos divididos
e faz merge neles (Junta eles).

512 511

256000
5120
512

256512
005120

261632 + 1024 = 262656

