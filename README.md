# c-iterators

This repository showcases how I've implemented auto-resetting iterators in C.

## Running

1. Git clone this repository.
2. Open this repository in VS Code.
3. Go to the Run and Debug tab in VS Code and use the dropdown menu at the top to select what example program you want to run.
4. Run the program and see the terminal output.

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
`sl_iterate_grid()` just calls `sl_iterate_width()` and `sl_iterate_height()`.

This means these iterators are very scalable, since it means you won't ever have to reimplement any subiterators for high-level iterators. In other words, you won't have to reinvent the wheel.

Note that iterators also automatically reset themselves once they reach their FINISHED state. `sl_reset_iterate_grid()` should only be called when you want to return from an iterator while-loop early.
