#include <cmath>


struct Force {
    double x;
    double y;
    double z;
};

struct Position {
    double x;
    double y;
    double z;
};

class IntermlecularPotential
{

};


class PotentialArAr: public IntermlecularPotential
{
    public:
        const double epsilon = 0.997;
        const double sigma = 3.40;
        const double sigmaRaised12 = pow(this->sigma, 12);
        const double sigmaRaised6 = pow(this->sigma, 6);
        const double epsilonMulti48 = 48 * this->epsilon;
        const double epsilonMulti24 = 24 * this->epsilon;

    public:
        void calculateForce(Argon *pParticle, int particlesCout)
        {
            for(int i=0; i<particlesCout-1; i++)
            {
                for(int j=i+1; j<=particlesCout; j++)
                {
                    double dtX = (pParticle+j)->pos.x - (pParticle+i)->pos.x;
                    double dtY = (pParticle+j)->pos.y - (pParticle+i)->pos.y;
                    double dtZ = (pParticle+j)->pos.z - (pParticle+i)->pos.z;
                    
                    (pParticle+j)->force.x = this->epsilonMulti48 * ((sigmaRaised12/pow(dtX, 13)) - 
                    this->epsilonMulti24*(sigmaRaised6/pow(dtX, 7)));
                    (pParticle+j)->force.y = this->epsilonMulti48 * ((sigmaRaised12/pow(dtY, 13)) - 
                    this->epsilonMulti24*(sigmaRaised6/pow(dtY, 7)));
                    (pParticle+j)->force.z = this->epsilonMulti48 * ((sigmaRaised12/pow(dtZ, 13)) - 
                    this->epsilonMulti24*(sigmaRaised6/pow(dtZ, 7)));
                }
            }   
        }
};


class Particle
{

};


class Argon: public Particle
{
    public: 
        const double mass = 39.9;
        Position pos;
        Force force;
};


class System
{
    public:
        Argon * pParticles;
        IntermlecularPotential * pPotential;

    System(Argon * pParticles, IntermlecularPotential * pPotential)
    {
        this->pParticles = pParticles;
        this->pPotential = pPotential;
    }
};


int main()
{
    IntermlecularPotential* interPotential = new PotentialArAr();

}