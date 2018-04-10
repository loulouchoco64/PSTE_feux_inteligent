#include "traffic_light.h"

using namespace std;

Traffic_light::Traffic_light(int etat, int posx, int posy)
{
    m_etat = etat;
    m_posx = posx;
    m_posy = posy;
    m_idx = 0;
}
