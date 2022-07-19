# c-iterators

This repository showcases how I've implemented iterators in C.

## Running

1. Git clone this repository.
2. Open this repository in VS Code.
3. Go to the Run and Debug tab in VS Code and use the dropdown menu at the top to select what example program you want to run.

## Motivation

This:
```c
void	foo(t_data *data)
{
	int	x;
	int	y;

	y = 0;
	while (y < data->height)
	{
		x = 0;
		while (x < data->width)
		{
			printf("x: %d, y: %d\n", data->it.x, data->it.y);
			x++;
		}
		y++;
	}
}
```
Becomes this:
```c
void	foo(t_data *data)
{
	while (sl_iterate_grid(data) != FINISHED)
		printf("x: %d, y: %d\n", data->it.x, data->it.y);
}
```
