project('gobed', 'c',
  version : '1.0',
  default_options : ['warning_level=3'])

cfound = run_command('tools/c.sh')
cfiles = cfound.stdout().strip().split('\n')

executable('gobed', sources: cfiles, install : true)
