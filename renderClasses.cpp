#include "vectors.cpp"
#define DEFAULT_MAX_POLYS 1000

class Poly
{
    public:

    vector3 op;
    vector3 a;
    vector3 b;

    Poly(vector3 p1 = vector3(0, 0, 0), vector3 p2 = vector3(0, 1, 0), vector3 p3 = vector3(1, 0, 0)) {
        op = p1;
        a = subVec(p1, p3);
        b = subVec(p1, p2);
    }
    ~Poly();
};

class Renderer
{
    public:
    vector3 C; // Position of the Camera
    vector3 f; // direction of the Camera
    Poly polys[DEFAULT_MAX_POLYS]; // polygons in the scene
    float ref; // the refraction of the lense normally < 1
    int tresX; // the x resulution of the window
    int tresY; // the y resulution of the window
    int rresX; // the x resulution of the render
    int rresY; // the y resulution of the render

    Renderer(int trueResX, int trueResY, int renderresX, int renderresY, vector3 CamPos, vector3 direc, float refraction, Poly polygons[], int polgonsLenght)
    {
        C = CamPos;
        f = direc;
        ref = refraction;
        for(int i = 0; i < polgonsLenght; i++)
        {
            polys[i] = polygons[i];
        }
    }

    ~Renderer();

    void init();

    void update()
    {
        
    }

    void addPoly(Poly pol)
    {
        polys[sizeof(polys)/sizeof(polys[0])] = pol;
    }
};

vector3 addVec(vector3 a, vector3 b)
{
    // Add gpu vector addition
}

vector3 subVec(vector3 a, vector3 b)
{
    // Add gpu vector subtraction
}