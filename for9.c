int main() {
    int N, count = 0;

    scanf("%d", &N);

    for (; N != 0; N /= 10) {
        count++;
    }

    printf("%d", count);

    return 0;
}
