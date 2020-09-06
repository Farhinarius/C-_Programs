#include <iostream>

class ConsoleSurface
{
private:
    char* surf;
public:

    int width;
    int height;


    explicit ConsoleSurface(int x, int y) : width(x), height(y)
    {
        int wh = x * y;
        this->surf = new char[wh];

        for (int a = 0; a < wh; ++a)
        {
            this->surf[a] = '.';
        }
    }

    void SetPoint(int x, int y, char c)
    {
        int wh = x + y * this->width;
        this->surf[wh] = c;
    }

    void Render()
    {
        int wh = this->width * this->height;

        for (int a = 0; a < wh; ++a)
        {
            std::cout << this->surf[a];

            if (((a + 1) % this->width) == 0) std::cout << '\n';
        }
    }

    ~ConsoleSurface() { delete[] surf; }
};

void DrawSquare(ConsoleSurface* cs, int x, int y, int w, int h, char c)
{
    for (int a = 0; a < w; ++a)
    {
        for (int b = 0; b < h; ++b)
        {
            cs->SetPoint(a + x, b + y, c);
        }
    }
}

int main()
{
    ConsoleSurface* cs = new ConsoleSurface(40, 20);

    DrawSquare(cs, 2, 2, 4, 4, '#');
    DrawSquare(cs, 10, 10, 5, 7, '@');

    cs->Render();

    std::cin.ignore();
    return 1;
}