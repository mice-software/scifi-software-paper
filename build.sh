#!/bin/sh
#

pdflatex MICETrackerSoftware.tex
bibtex MICETrackerSoftware.aux
pdflatex MICETrackerSoftware.tex
pdflatex MICETrackerSoftware.tex

