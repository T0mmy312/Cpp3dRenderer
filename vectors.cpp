#include <math.h>
#define FLOAT_TOL 0.00001

class vector3
{
    public:
    float x;
    float y;
    float z;

    vector3(float _x = 0, float _y = 0, float _z = 0) : x(_x), y(_y), z(_z) {}

    float lenght(){
        return sqrt(x * x + y * y + z * z);
    }

    vector3 unitVec(){
        float l = sqrt(x * x + y * y + z * z);

        vector3 out;
        out.x = x / l;
        out.y = y / l;

        return out;
    }
};

class vector2
{
    public:
    float x;
    float y;

    vector2(float _x = 0, float _y = 0) : x(_x), y(_y){}

    float lenght(){
        return sqrt(x * x + y * y);
    }

    vector2 unitVec(){
        float l = sqrt(x * x + y * y);

        vector2 out;
        out.x = x / l;
        out.y = y / l;

        return out;
    }
};

class gP
{
    public:
    vector3 op;
    vector3 a;

    vector3 calc(float t){
        vector3 out;
        out.x = op.x + t * a.x;
        out.y = op.y + t * a.y;
        out.z = op.z + t * a.z;
        return out;
    }
};

class plane
{
    public:
    vector3 op;
    vector3 a;
    vector3 b;

    vector3 calc(float t, float s){
        vector3 out;
        out.x = op.x + t * a.x + s * b.x;
        out.y = op.y + t * a.y + s * b.y;
        out.z = op.z + t * a.z + s * b.z;
        return out;
    }
};

vector3 crossProd(vector3 a, vector3 b)
{
    vector3 out;
    out.x = a.y * b.z - a.z * b.y;
    out.y = a.z * b.x - a.y * b.z;
    out.z = a.x * b.y - a.y * b.x;
    return out;
}

bool vecPar(vector3 a, vector3 b)
{
    float dotProd = a.x * b.x + a.y * b.y + a.z * b.z;
    float magProd = a.lenght() * b.lenght();
    return fabs(dotProd - magProd) < FLOAT_TOL;
}