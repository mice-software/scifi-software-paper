{
//=========Macro generated from canvas: KunoPlots/KunoPlots
//=========  (Fri Jul  1 20:24:16 2016) by ROOT version5.34/30
   TCanvas *KunoPlots = new TCanvas("KunoPlots", "KunoPlots",65,52,800,600);
   KunoPlots->SetHighLightColor(2);
   KunoPlots->Range(0,0,1,1);
   KunoPlots->SetFillColor(0);
   KunoPlots->SetBorderMode(0);
   KunoPlots->SetBorderSize(2);
   KunoPlots->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: KunoPlots_1
   TPad *KunoPlots_1 = new TPad("KunoPlots_1", "KunoPlots_1",0.01,0.01,0.49,0.99);
   KunoPlots_1->Draw();
   KunoPlots_1->cd();
   KunoPlots_1->Range(-85.87501,-2202010,722.875,1.981809e+07);
   KunoPlots_1->SetFillColor(0);
   KunoPlots_1->SetBorderMode(0);
   KunoPlots_1->SetBorderSize(2);
   KunoPlots_1->SetFrameBorderMode(0);
   KunoPlots_1->SetFrameBorderMode(0);
   
   TH1F *Ch_SumU = new TH1F("Ch_SumU","Hit Channel Sum TkU",670,-5,642);
   Ch_SumU->SetBinContent(273,750);
   Ch_SumU->SetBinContent(310,750);
   Ch_SumU->SetBinContent(334,94320);
   Ch_SumU->SetBinContent(335,1.677722e+07);
   Ch_SumU->SetBinContent(336,1.677722e+07);
   Ch_SumU->SetBinContent(337,92460);
   Ch_SumU->SetBinContent(400,870);
   Ch_SumU->SetEntries(6.433992e+07);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("Ch_SumU");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries =   6.433992e+07");
   text = ptstats->AddText("Mean  =  318.5");
   text = ptstats->AddText("RMS   = 0.5571");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   Ch_SumU->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(Ch_SumU);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Ch_SumU->SetLineColor(ci);
   Ch_SumU->GetXaxis()->SetTitle("Channel Number");
   Ch_SumU->GetXaxis()->CenterTitle(true);
   Ch_SumU->GetXaxis()->SetLabelFont(42);
   Ch_SumU->GetXaxis()->SetLabelSize(0.035);
   Ch_SumU->GetXaxis()->SetTitleSize(0.035);
   Ch_SumU->GetXaxis()->SetTitleFont(42);
   Ch_SumU->GetYaxis()->SetLabelFont(42);
   Ch_SumU->GetYaxis()->SetLabelSize(0.035);
   Ch_SumU->GetYaxis()->SetTitleSize(0.035);
   Ch_SumU->GetYaxis()->SetTitleFont(42);
   Ch_SumU->GetZaxis()->SetLabelFont(42);
   Ch_SumU->GetZaxis()->SetLabelSize(0.035);
   Ch_SumU->GetZaxis()->SetTitleSize(0.035);
   Ch_SumU->GetZaxis()->SetTitleFont(42);
   Ch_SumU->Draw("");
   
   TPaveText *pt = new TPaveText(0.2256575,0.94,0.7743425,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("Hit Channel Sum TkU");
   pt->Draw();
   KunoPlots_1->Modified();
   KunoPlots->cd();
  
// ------------>Primitives in pad: KunoPlots_2
   KunoPlots_2 = new TPad("KunoPlots_2", "KunoPlots_2",0.51,0.01,0.99,0.99);
   KunoPlots_2->Draw();
   KunoPlots_2->cd();
   KunoPlots_2->Range(-85.87501,-2202010,722.875,1.981809e+07);
   KunoPlots_2->SetFillColor(0);
   KunoPlots_2->SetBorderMode(0);
   KunoPlots_2->SetBorderSize(2);
   KunoPlots_2->SetFrameBorderMode(0);
   KunoPlots_2->SetFrameBorderMode(0);
   
   TH1F *Ch_SumD = new TH1F("Ch_SumD","Hit Channel Sum TkD",670,-5,642);
   Ch_SumD->SetBinContent(229,750);
   Ch_SumD->SetBinContent(262,1650);
   Ch_SumD->SetBinContent(268,870);
   Ch_SumD->SetBinContent(276,810);
   Ch_SumD->SetBinContent(285,870);
   Ch_SumD->SetBinContent(287,840);
   Ch_SumD->SetBinContent(313,810);
   Ch_SumD->SetBinContent(323,810);
   Ch_SumD->SetBinContent(327,780);
   Ch_SumD->SetBinContent(332,750);
   Ch_SumD->SetBinContent(333,1560);
   Ch_SumD->SetBinContent(334,73215);
   Ch_SumD->SetBinContent(335,1.677722e+07);
   Ch_SumD->SetBinContent(336,1.677722e+07);
   Ch_SumD->SetBinContent(337,8697510);
   Ch_SumD->SetBinContent(338,1912140);
   Ch_SumD->SetBinContent(343,630);
   Ch_SumD->SetBinContent(344,840);
   Ch_SumD->SetBinContent(351,840);
   Ch_SumD->SetBinContent(362,960);
   Ch_SumD->SetBinContent(373,810);
   Ch_SumD->SetBinContent(378,750);
   Ch_SumD->SetBinContent(383,780);
   Ch_SumD->SetBinContent(398,1440);
   Ch_SumD->SetEntries(6.703479e+07);
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("Ch_SumD");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries =   6.703479e+07");
   text = ptstats->AddText("Mean  =  318.8");
   text = ptstats->AddText("RMS   =  1.042");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   Ch_SumD->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(Ch_SumD);

   ci = TColor::GetColor("#000099");
   Ch_SumD->SetLineColor(ci);
   Ch_SumD->GetXaxis()->SetTitle("Channel Number");
   Ch_SumD->GetXaxis()->CenterTitle(true);
   Ch_SumD->GetXaxis()->SetLabelFont(42);
   Ch_SumD->GetXaxis()->SetLabelSize(0.035);
   Ch_SumD->GetXaxis()->SetTitleSize(0.035);
   Ch_SumD->GetXaxis()->SetTitleFont(42);
   Ch_SumD->GetYaxis()->SetLabelFont(42);
   Ch_SumD->GetYaxis()->SetLabelSize(0.035);
   Ch_SumD->GetYaxis()->SetTitleSize(0.035);
   Ch_SumD->GetYaxis()->SetTitleFont(42);
   Ch_SumD->GetZaxis()->SetLabelFont(42);
   Ch_SumD->GetZaxis()->SetLabelSize(0.035);
   Ch_SumD->GetZaxis()->SetTitleSize(0.035);
   Ch_SumD->GetZaxis()->SetTitleFont(42);
   Ch_SumD->Draw("");
   
   pt = new TPaveText(0.2243488,0.94,0.7756512,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("Hit Channel Sum TkD");
   pt->Draw();
   KunoPlots_2->Modified();
   KunoPlots->cd();
   KunoPlots->Modified();
   KunoPlots->cd();
   KunoPlots->SetSelected(KunoPlots);
}
