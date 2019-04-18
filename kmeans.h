typedef struct Point
{
    float x, y;
} Point;

void KMeans(Point *data, Point *means, int num_of_clusters, int num_of_iters, int num_of_elements);