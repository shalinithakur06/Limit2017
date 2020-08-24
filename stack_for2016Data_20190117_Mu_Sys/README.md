root -l MyCutFlowTable.C 
texmaker cutflowTable.tex &

root -l MyLCutTable.C 
texmaker lCutTable.tex &

root -l MyOptimizeCharge.C 
root -l MyOptimizeLimit.C 
root -l MyOptimizeMuTrig.C
root -l MyOptimizeTau21.C

cd limit/
texmaker limitTable.tex &
