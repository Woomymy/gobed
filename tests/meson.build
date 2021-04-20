cfiles = [
	'../src/multiplier.c',
	'../src/time.c',
	'main.c'
]
cflags = [
	'-ansi',
	'-pedantic',
	'-pedantic-errors',
	'-O3',
	'-Wall',
	'-Werror',
]

e = executable('gobedtest', sources: cfiles, c_args: cflags)

test('gobed', e)
