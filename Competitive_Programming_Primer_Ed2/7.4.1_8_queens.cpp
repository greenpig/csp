#include <iostream>

int vis[3][16];
int n = 8;
int tot;
int C[8];

void search(int cur) {
    if (cur == n) {
        tot++;
        for (int i = 0; i < n; i++)
            printf("%d ", C[i]);
        printf("\n");
    }
    else for (int i = 0; i < n; i++) {
        if (!vis[0][i] && !vis[1][cur+i] && !vis[2][cur-i+n]) {
            C[cur] = i;
            vis[0][i] = vis[1][cur+i] = vis[2][cur-i+n] = 1;
            search(cur+1);
            vis[0][i] = vis[1][cur+i] = vis[2][cur-i+n] = 0;
        }
    }
}

int main() {
    search(0);
    printf("%d solutions in total\n", tot);
}