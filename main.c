
#include "fdf.h"
#include "stdio.h"

int deal_key(int key, void *data)
{
	printf("%d", key);
	return (0);
}

int main(int argc, char **argv)
{
	fdf *data;

	data = (fdf*)malloc(sizeof(fdf));
	read_file(data);


}