#define MAX 100
#define MAX_JUGADORES 4

struct competidor{
    char nombre [MAX];
    int puntos;
};
struct competidor competidores[MAX_JUGADORES];
void menu();

