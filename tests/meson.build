cfiles = [
	'../src/multiplier.c',
	'../src/time.c'
]
cflags = [
	'-ansi',
	'-pedantic',
	'-pedantic-errors',
	'-O3',
	'-Wall',
	'-Werror',
]

gm_cfiles = cfiles
gm_cfiles += 'get_mul.c'

get_m = executable('get_mul_test', sources: gm_cfiles, c_args: cflags)

test('gobed_get_multiplier', get_m)
