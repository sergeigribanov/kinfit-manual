import os
env=Environment(PDFLATEX='lualatex', PDFLATEXFLAGS='-shell-escape')
documents = ['kinfit-manual']

for name in documents:
    env.PDF(target = os.path.join('doc', name + '.pdf'),
    source = os.path.join('tex', name + '.tex'))