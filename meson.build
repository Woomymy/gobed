project('gobed', 'c',
  version : '1.0',
  default_options : ['warning_level=3'])

cfound = run_command('tools/c.sh')
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
