from distutils.core import setup
setup(name='CHNspendfrom',
      version='1.0',
      description='Command-line utility for chncoin "coin control"',
      author='Gavin Andresen',
      author_email='gavin@chncoinfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
