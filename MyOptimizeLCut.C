
//CHANNEL
bool isMuChannel = true;
bool isEleChannel = false;

//--------------------------------------------
//function to make graph from two array
//--------------------------------------------
TGraph* makeGraph(vector<double> Xarray, vector<double> Yarray){
  const int n = Xarray.size();
  double x[n], y[n];
   for (Int_t i=0;i<n;i++) {
     x[i] = Xarray[i];
     y[i] = Yarray[i] ;
   }
   TGraph* gr = new TGraph(n,x,y);
   return gr;
}

//--------------------------------------------
//function to decorate Graph  
//--------------------------------------------
TGraph* decorateGraph(TGraph *graph, TString xTitle, TString yTitle, TString myTitle, double yMin, double yMax, int color){
  graph->SetTitle(myTitle);
  graph->GetYaxis()->SetTitleOffset(1.30);
  graph->GetXaxis()->SetTitle(xTitle);
  graph->GetXaxis()->SetTitleSize(0.04);
  graph->GetXaxis()->SetLabelSize(0.035);
  graph->GetYaxis()->SetTitle(yTitle);
  graph->GetYaxis()->SetTitleSize(0.04);
  //graph->GetYaxis()->SetRangeUser(yMin, yMax);
  graph->GetYaxis()->SetRangeUser(0.3, 100);
  graph->GetYaxis()->SetMoreLogLabels(true);
  graph->GetXaxis()->SetMoreLogLabels(true);
  graph->GetYaxis()->SetLabelSize(0.035);
  graph->GetXaxis()->SetNdivisions(14);
  graph->GetYaxis()->SetNdivisions(10);
  graph->GetYaxis()->CenterTitle();
  graph->SetLineColor(color);
  graph->SetLineWidth(3);
  graph->SetMarkerSize(20);
  graph->SetMarkerStyle(20);
  graph->SetMarkerSize(1);
  graph->SetMarkerColor(color);
  return graph;
}

void MyOptimizeLCut(){
  vector<double> massVec;
  vector<double>limitVec1;
  vector<double>limitVec2;
  vector<double>limitVec3;
  vector<double>limitVec4;
  vector<double>limitVec5;
  vector<double>limitVec6;
  massVec.push_back(250 );       
  massVec.push_back(500 );       
  massVec.push_back(750 );       
  massVec.push_back(1000);       
  massVec.push_back(1250);       
  massVec.push_back(1500);       
  massVec.push_back(1750);       
  massVec.push_back(2000);       
  massVec.push_back(2500);       
  massVec.push_back(3000);       
  massVec.push_back(3500);       
  massVec.push_back(4000);       
  massVec.push_back(4500);       
  massVec.push_back(5000);       
  
  if(isMuChannel){
    limitVec1.push_back(77.1 );       limitVec2.push_back(55.8);       
    limitVec1.push_back(89.3 );       limitVec2.push_back(71.4);      
    limitVec1.push_back(27.6 );       limitVec2.push_back(24.5);      
    limitVec1.push_back(9.86 );       limitVec2.push_back(8.63);      
    limitVec1.push_back(4.32);        limitVec2.push_back(4.28);      
    limitVec1.push_back(3.13);        limitVec2.push_back(2.66);      
    limitVec1.push_back(3.1);         limitVec2.push_back(2.61);      
    limitVec1.push_back(3.08);        limitVec2.push_back(2.58);      
    limitVec1.push_back(3.07);        limitVec2.push_back(2.58);      
    limitVec1.push_back(3.11);        limitVec2.push_back(2.62);      
    limitVec1.push_back(3.15);        limitVec2.push_back(2.67);      
    limitVec1.push_back(3.18);        limitVec2.push_back(2.69);      
    limitVec1.push_back(3.19);        limitVec2.push_back(2.7);      
    limitVec1.push_back( 0.0);        limitVec2.push_back(0.0);      
    
    limitVec3.push_back(39.2 );       limitVec4.push_back(19.1 ); 
    limitVec3.push_back(58.0 );       limitVec4.push_back(34.5 ); 
    limitVec3.push_back(21.5 );       limitVec4.push_back(15.3 ); 
    limitVec3.push_back(8.25 );       limitVec4.push_back(6.91); 
    limitVec3.push_back(4.53 );       limitVec4.push_back(4.14); 
    limitVec3.push_back(2.46 );       limitVec4.push_back(2.38); 
    limitVec3.push_back(2.37 );       limitVec4.push_back(1.86); 
    limitVec3.push_back(2.35 );       limitVec4.push_back(1.84); 
    limitVec3.push_back(2.34 );       limitVec4.push_back(1.83); 
    limitVec3.push_back(2.37 );       limitVec4.push_back(1.86); 
    limitVec3.push_back(2.42 );       limitVec4.push_back(1.89); 
    limitVec3.push_back(2.44 );       limitVec4.push_back(1.9); 
    limitVec3.push_back(2.44 );       limitVec4.push_back(1.91); 
    limitVec3.push_back(1.34 );       limitVec4.push_back(1.34); 
    
    limitVec5.push_back(11.2 );       limitVec6.push_back(6.77 );      
    limitVec5.push_back(23.0 );       limitVec6.push_back(15.0 );      
    limitVec5.push_back(10.5 );       limitVec6.push_back(7.79 );      
    limitVec5.push_back(5.66 );       limitVec6.push_back(4.46 );      
    limitVec5.push_back( 3.62);       limitVec6.push_back(2.85 );      
    limitVec5.push_back(2.44 );       limitVec6.push_back(2.38 );      
    limitVec5.push_back(1.41 );       limitVec6.push_back(1.31 );      
    limitVec5.push_back(1.36 );       limitVec6.push_back(1.14 );      
    limitVec5.push_back(1.36 );       limitVec6.push_back(1.12 );      
    limitVec5.push_back(1.37 );       limitVec6.push_back(1.14 );      
    limitVec5.push_back(1.4  );       limitVec6.push_back(1.17 );      
    limitVec5.push_back(1.41 );       limitVec6.push_back(1.18 );      
    limitVec5.push_back(1.42 );       limitVec6.push_back(1.18 );      
    limitVec5.push_back(1.34 );       limitVec6.push_back(1.19 );      
  }
  if(isEleChannel){
    limitVec1.push_back(13.84 );       limitVec2.push_back(37.46 );       
    limitVec1.push_back(9.113 );       limitVec2.push_back(15.31 );      
    limitVec1.push_back(4.281 );       limitVec2.push_back(4.143 );      
    limitVec1.push_back( 2.276);       limitVec2.push_back( 2.875);      
    limitVec1.push_back( 1.317);       limitVec2.push_back( 1.451);      
    limitVec1.push_back( 1.222);       limitVec2.push_back( 1.134);      
    limitVec1.push_back( 1.222);       limitVec2.push_back( 1.131);      
    limitVec1.push_back( 1.258);       limitVec2.push_back( 1.115);      
    limitVec1.push_back( 1.257);       limitVec2.push_back( 1.161);      
    limitVec1.push_back( 1.248);       limitVec2.push_back( 1.155);      
    limitVec1.push_back( 1.254);       limitVec2.push_back( 1.159);      
    limitVec1.push_back(  1.28);       limitVec2.push_back( 1.183);      
    limitVec1.push_back( 1.285);       limitVec2.push_back( 1.186);      
    limitVec1.push_back( 1.291);       limitVec2.push_back( 1.191);      
    
    limitVec3.push_back(16.94 );      limitVec4.push_back( 19.9 ); 
    limitVec3.push_back(10.16 );      limitVec4.push_back(10.52 ); 
    limitVec3.push_back(4.708 );      limitVec4.push_back(5.298 ); 
    limitVec3.push_back( 2.369);      limitVec4.push_back( 2.816); 
    limitVec3.push_back( 1.417);      limitVec4.push_back( 1.513); 
    limitVec3.push_back( 1.282);      limitVec4.push_back( 1.332); 
    limitVec3.push_back( 1.258);      limitVec4.push_back( 1.308); 
    limitVec3.push_back( 1.318);      limitVec4.push_back( 1.365); 
    limitVec3.push_back( 1.311);      limitVec4.push_back( 1.358); 
    limitVec3.push_back( 1.305);      limitVec4.push_back( 1.355); 
    limitVec3.push_back( 1.306);      limitVec4.push_back( 1.356); 
    limitVec3.push_back( 1.335);      limitVec4.push_back( 1.383); 
    limitVec3.push_back( 1.339);      limitVec4.push_back( 1.387); 
    limitVec3.push_back( 1.344);      limitVec4.push_back( 1.393); 
    
    limitVec5.push_back(41.04 );      limitVec6.push_back(12.81  );      
    limitVec5.push_back(17.27 );      limitVec6.push_back( 8.11  );      
    limitVec5.push_back(4.281 );      limitVec6.push_back(4.156  );      
    limitVec5.push_back( 2.807);      limitVec6.push_back( 2.284 );      
    limitVec5.push_back( 1.361);      limitVec6.push_back( 1.401 );      
    limitVec5.push_back( 1.225);      limitVec6.push_back( 1.134 );      
    limitVec5.push_back( 1.222);      limitVec6.push_back( 1.126 );      
    limitVec5.push_back( 1.216);      limitVec6.push_back(  1.16 );      
    limitVec5.push_back( 1.261);      limitVec6.push_back( 1.153 );      
    limitVec5.push_back( 1.255);      limitVec6.push_back( 1.149 );      
    limitVec5.push_back( 1.261);      limitVec6.push_back( 1.153 );      
    limitVec5.push_back( 1.288);      limitVec6.push_back( 1.177 );      
    limitVec5.push_back(  1.29);      limitVec6.push_back( 1.181 );      
    limitVec5.push_back( 1.295);      limitVec6.push_back( 1.187 );      
  }
  
  vector<vector<double>> limitVecAll;
  limitVecAll.push_back(limitVec1);
  limitVecAll.push_back(limitVec2);
  limitVecAll.push_back(limitVec3);
  limitVecAll.push_back(limitVec4);
  limitVecAll.push_back(limitVec5);
  limitVecAll.push_back(limitVec6);

  vector<string>lCutVec;
  lCutVec.push_back("L-cut: set1");
  lCutVec.push_back("L-cut: set2");
  lCutVec.push_back("L-cut: set3");
  lCutVec.push_back("L-cut: set4");
  lCutVec.push_back("L-cut: set5");
  lCutVec.push_back("L-cut: set6");
  TCanvas * can = new TCanvas();
  TLegend* leg = new TLegend(0.50,0.55,0.85,0.85,NULL,"brNDC");
  gPad->SetGridy();
  gPad->SetGridx();
  gPad->SetLogy();
  gPad->SetLogx();
  leg->SetNColumns(2);
  leg->SetBorderSize(0);
  leg->SetTextSize(0.03);
  leg->SetFillColor(0);
  for(int i = 0; i<limitVecAll.size(); i++){
   can->cd();
   TGraph * myGraph = makeGraph(massVec, limitVecAll.at(i));
   int color = i+1;
   if(i==9) color = 433;
   if(isMuChannel){
     TString fullProcess = "#mu#mu*#rightarrow #mu#muZ #rightarrow 2#mu2q";   
     decorateGraph(myGraph, "M_{l^{*}} [GeV]", "#sigma (fb) #times BR("+fullProcess+")", "Expected limits for different L-cut :  #mu-channel", 0.1, 50, color);
   }
   if(isEleChannel){
     TString fullProcess = "ee*#rightarrow eeZ #rightarrow 2e2q";   
     decorateGraph(myGraph, "M_{l^{*}} [GeV]", "#sigma (fb) #times BR("+fullProcess+")", "Expected limits for different L-cut :  e-channel", 0.1, 50, color);
   }
   if(i==0) myGraph->Draw("ALP");
   else myGraph->Draw("LPsame");
   leg->AddEntry(myGraph, TString(lCutVec[i]),"PL");
  }
  leg->Draw();
  if(isMuChannel)can->SaveAs("limit_lCut_mu.pdf");
  if(isEleChannel)can->SaveAs("limit_lCut_ele.pdf");
}

