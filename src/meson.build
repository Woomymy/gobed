cfound = run_command('../tools/c.sh')
cfiles = cfound.stdout().strip().split('\n')

cflags = [
	'-ansi',
	'-pedantic',
	'-pedantic-errors',
	'-O3',
	'-Wall',
	'-Werror',
]

executable('gobed', sources: cfiles, c_args: cflags, install : true)
