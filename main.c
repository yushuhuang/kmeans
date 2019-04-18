#include <stdlib.h>
#include <stdio.h>
#include "kmeans.h"

#define num_of_elements 4096
#define num_of_clusters 3
#define num_of_iters 300

int main(int argc, char **argv)
{
    Point *data = (Point *)malloc(num_of_elements * sizeof(Point));
    FILE *fp = fopen("data", "r");
    int i = 0;
    while (fscanf(fp, "%f %f", &data[i].x, &data[i].y) == 2)
        i += 1;
    fclose(fp);

    Point *means = (Point *)malloc(num_of_clusters * sizeof(Point));
    KMeans(data, means, num_of_clusters, num_of_iters, num_of_elements);

    fp = fopen("means", "w");
    for (int i = 0; i < 3; i++)
        fprintf(fp, "%f %f\n", means[i].x, means[i].y);

    free(data);
    free(means);
    return 0;
}