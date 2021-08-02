 /*#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <tchar.h>

float f(float x, float y, float z) {
    float a = x * x + 9.0f / 4.0f * y * y + z * z - 1;
    return a * a * a - x * x * z * z * z - 9.0f / 80.0f * y * y * z * z * z;

}

float h(float x, float z) {
    for (float y = 1.0f; y >= 0.0f; y -= 0.001f)
        if (f(x, y, z) <= 0.0f)
            return y;
    return 0.0f;
}

void color() {
    system("color c");
}

void sentance() {
    char title[] = "============ 2020 5 20 ============";          //输入标题
    char word[] = "Michael Han: Nancy Xie, I love you!";          //输入想说的文字
    printf("\n\t      ");                                         //调整格式
    printf("%s", title);
    printf("\n\t      ");
    printf("%s", word);
}

int main() {
    HANDLE o = GetStdHandle(STD_OUTPUT_HANDLE);
    _TCHAR buffer[25][80] = { _T(' ') };
    _TCHAR ramp[] = _T(".:-=+*#%@");

    for (float t = 0.0f;; t += 0.1f) {
        int sy = 0;
        float s = sinf(t);
        float a = s * s * s * s * 0.2f;
        for (float z = 1.3f; z > -1.2f; z -= 0.1f) {
            _TCHAR* p = &buffer[sy++][0];
            float tz = z * (1.2f - a);
            for (float x = -1.5f; x < 1.5f; x += 0.05f) {
                float tx = x * (1.2f + a);
                float v = f(tx, 0.0f, tz);
                if (v <= 0.0f) {
                    float y0 = h(tx, tz);
                    float ny = 0.01f;
                    float nx = h(tx + ny, tz) - y0;
                    float nz = h(tx, tz + ny) - y0;
                    float nd = 1.0f / sqrtf(nx * nx + ny * ny + nz * nz);
                    float d = (nx + ny - nz) * nd * 0.5f + 0.5f;
                    *p++ = ramp[(int)(d * 5.0f)];
                }
                else
                    *p++ = ' ';
            }
        }


        for (sy = 0; sy < 25; sy++) {
            COORD coord = { 0, sy };
            SetConsoleCursorPosition(o, coord);
            WriteConsole(o, buffer[sy], 79, NULL, 0);

        }
        Sleep(33);
        color();
        sentance();

    }
}
*/
/*
#include<stdio.h>
int main()
{
    printf("                                                                                         \n");
    printf("                       __________       ___                                              \n");
    printf("                      /          \\     / \\ \\    |____      __\\__                     \n");
    printf("                     /  ________  \\   / ___ \\  _/ __     | |   /                       \n");
    printf("                     |  |      |__|     _/_   |_|  /    [|] |/                           \n");
    printf("                     |  |              | | |      /     _|_ \\__/                        \n");
    printf("                     \\  \\_______        / \\      |___/        ____                    \n");
    printf("                      \\         \\    ____ ____      ____   __ |  |  ___   ______       \n");
    printf("                       \\_______  \\   |  |/    \\    /    \\_/ / |  | /  /  /      \\   \n");
    printf("                               \\  \\  |    ___  \\  / ____   /  |  |/  /  /  ____  \\   \n");
    printf("                     __        |  |  |   /   \\  \\ | |  |  /   |     /  |  /____\\  |   \n");
    printf("                    \\  \\_______|  |  |  |    |  | | |__|  |   |     \\  |  ________/   \n");
    printf("                     \\            /  |  |    |  |  \\       \\  |  |\\  \\  \\  \\____  \n");
    printf("                      \\__________/   |__|    |__|   \\___/\\__\\ |__| \\__\\  \\______/ \n");
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int max(int x, int y);
        int a, b, c;
    printf("请输入两位数：");
    scanf_s("%d\t %d", &a, &b);
    c = max(a, b);
    printf("max=%d\n", c);
    return 0;
}
int  max(int x, int y)
{
    int z;
    if (x > y)z = x;
    else z = y;
    return z;
}
*/
/*
#include<stdio.h>
int main()
{
    int a, b, c,max;
    printf("请输入三个数：");
    scanf_s("%d%d%d", &a, &b, &c);
    {
        if 
            (a > b&&a > c)max = a;
        else if 
            (b > c)max = b;
        else
            max = c;
    }
    printf("max=%d", max);
    return 0;
}
*/
/*
#include<stdio.h>
#define pi 3.14
int main()
{
    float s, r;
    r = 9e2;
    s = pi * r * r;
    printf("s=%.3lf", s);
    return 0;

}
*/
/*
#include<stdio.h>
int main()
{
    float a, b;
    a = 12345.6789e5;
    b = a + 20;
    printf("%f\n", a);
    printf("%f\n", b);
    return 0;
}
*/