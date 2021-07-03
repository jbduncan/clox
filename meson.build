project(
  'clox', 'c',
  version : '0.1',
  default_options : ['warning_level=3'])

clox_sources = [
  'main.c',
  'chunk.h',
  'chunk.c',
  'common.h',
  'debug.h',
  'debug.c',
  'memory.h',
  'memory.c',
  'value.h',
  'value.c'
]

exe = executable(
  'clox',
  clox_sources,
  install : true,
  c_args : ['-Wall', '-Wextra', '-Werror', '-Wno-unused-parameter'])

test('basic', exe)
