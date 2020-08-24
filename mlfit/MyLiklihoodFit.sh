t2wDataCard=$1
mass=$2
#combineTool.py -M Impacts -d $t2wDataCard -m $mass --doInitialFit --robustFit 1 -t -1 | tee doInitialFit.log 
#combineTool.py -M Impacts -d $t2wDataCard -m $mass --doFit --robustFit 1 -t -1 --parallel 10 | tee doFit.log
combineTool.py -M Impacts -d $t2wDataCard -m $mass -o nuisImpactJSON 
plotImpacts.py --cms-label "   Internal" -i nuisImpactJSON -o nuisImpactPDF


