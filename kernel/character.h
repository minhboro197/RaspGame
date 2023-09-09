
typedef struct{
    volatile unsigned int x;
    volatile unsigned int y;
    volatile unsigned int frame;
    volatile unsigned int state;
    volatile unsigned int delay;
} Explosion;

typedef struct{
    volatile unsigned int x;
    volatile unsigned int y;
    volatile unsigned int frame;
    volatile unsigned int state;
    volatile unsigned int delay;
    Explosion explosion[5];
} Bombs;

typedef struct {
    char direction;
    int distance;
}moves;


typedef struct {
    volatile unsigned int prior_x;
    volatile unsigned int prior_y;
    volatile unsigned int x;
    volatile unsigned int y;
    volatile unsigned int moveup_frame_offset;
    volatile unsigned int movedown_frame_offset;
    volatile unsigned int moveleft_frame_offset;
    volatile unsigned int moveright_frame_offset;
    volatile int offset;
    int move_index;
    unsigned int bomb_num;
    int clone;
    Bombs bomb[5];

} human;


int collision_detection(human humans[],unsigned int object_x, unsigned int object_y);
void drawGameAsset(int frame, unsigned int offset_x,unsigned int offset_y, unsigned int width, unsigned int height, const unsigned long* frame_array[]);
human character1_init(int x, int y);
unsigned int absolute(int num);
human controlCharater(human players[],human player1, char c);
human move(human players[],human npc,moves moves[], unsigned int move_size);
