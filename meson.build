project(
  'clox', 'c',
  version : '0.1',
  default_options : ['warning_level=3']
)

clox_sources = [
  'chunk.h',
  'chunk.c',
  'common.h',
  'compiler.c',
  'compiler.h',
  'debug.c',
  'debug.h',
  'main.c',
  'memory.c',
  'memory.h',
  'scanner.c',
  'scanner.h',
  'value.c',
  'value.h',
  'vm.c',
  'vm.h',
]

exe = executable(
  'clox',
  clox_sources,
  install : true,
  c_args : [
    '-Wall',
    '-Wextra',
    # '-Werror',
    '-Wno-unused-parameter',
  ]
)

test('basic', exe)
