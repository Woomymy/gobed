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
gt_cfiles = cfiles
gt_cfiles += 'get_time.c'
get_m = executable('get_mul_test', sources: gm_cfiles, c_args: cflags)
get_t = executable('get_time_test', sources: gt_cfiles, c_args: cflags)
test('gobed_get_multiplier', get_m)
test('gobed_get_time', get_t)
