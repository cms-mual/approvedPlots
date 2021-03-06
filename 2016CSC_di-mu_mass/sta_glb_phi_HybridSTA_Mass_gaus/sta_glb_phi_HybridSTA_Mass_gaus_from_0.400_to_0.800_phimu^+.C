void sta_glb_phi_HybridSTA_Mass_gaus_from_0.400_to_0.800_phimu^+()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Jul 18 02:29:35 2020) by ROOT version 6.18/04
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",1,1,600,576);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   Canvas_1->SetHighLightColor(2);
   Canvas_1->Range(87.94737,0.02777916,93.21053,0.07367138);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetTicky(1);
   Canvas_1->SetLeftMargin(0.2);
   Canvas_1->SetRightMargin(0.04);
   Canvas_1->SetTopMargin(0.08);
   Canvas_1->SetBottomMargin(0.13);
   Canvas_1->SetFrameFillStyle(0);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameFillStyle(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *temp_0__259 = new TH1D("temp_0__259","glb sta p_{T} Pull",30,85,95);
   temp_0__259->SetBinContent(4,0.01502301);
   temp_0__259->SetBinContent(5,0.01745712);
   temp_0__259->SetBinContent(6,0.01846499);
   temp_0__259->SetBinContent(7,0.02086107);
   temp_0__259->SetBinContent(8,0.02361845);
   temp_0__259->SetBinContent(9,0.0275929);
   temp_0__259->SetBinContent(10,0.03042635);
   temp_0__259->SetBinContent(11,0.03548473);
   temp_0__259->SetBinContent(12,0.04117065);
   temp_0__259->SetBinContent(13,0.04626707);
   temp_0__259->SetBinContent(14,0.0499943);
   temp_0__259->SetBinContent(15,0.05377857);
   temp_0__259->SetBinContent(16,0.06159434);
   temp_0__259->SetBinContent(17,0.06465599);
   temp_0__259->SetBinContent(18,0.06324877);
   temp_0__259->SetBinContent(19,0.05887499);
   temp_0__259->SetBinContent(20,0.05782908);
   temp_0__259->SetBinContent(21,0.0545012);
   temp_0__259->SetBinContent(22,0.04915757);
   temp_0__259->SetBinContent(23,0.04267295);
   temp_0__259->SetBinContent(24,0.03630244);
   temp_0__259->SetBinContent(25,0.03259423);
   temp_0__259->SetBinContent(26,0.02677519);
   temp_0__259->SetBinContent(27,0.02384665);
   temp_0__259->SetBinContent(28,0.02025254);
   temp_0__259->SetBinContent(29,0.01447153);
   temp_0__259->SetBinContent(30,0.01308333);
   temp_0__259->SetBinContent(31,0.03027422);
   temp_0__259->SetBinError(4,0.0005344947);
   temp_0__259->SetBinError(5,0.0005761707);
   temp_0__259->SetBinError(6,0.0005925698);
   temp_0__259->SetBinError(7,0.0006298443);
   temp_0__259->SetBinError(8,0.0006701788);
   temp_0__259->SetBinError(9,0.0007243752);
   temp_0__259->SetBinError(10,0.0007606587);
   temp_0__259->SetBinError(11,0.0008214586);
   temp_0__259->SetBinError(12,0.0008848279);
   temp_0__259->SetBinError(13,0.0009379959);
   temp_0__259->SetBinError(14,0.0009750461);
   temp_0__259->SetBinError(15,0.001011276);
   temp_0__259->SetBinError(16,0.001082269);
   temp_0__259->SetBinError(17,0.001108841);
   temp_0__259->SetBinError(18,0.001096708);
   temp_0__259->SetBinError(19,0.001058109);
   temp_0__259->SetBinError(20,0.001048668);
   temp_0__259->SetBinError(21,0.001018047);
   temp_0__259->SetBinError(22,0.0009668523);
   temp_0__259->SetBinError(23,0.0009008268);
   temp_0__259->SetBinError(24,0.0008308695);
   temp_0__259->SetBinError(25,0.000787291);
   temp_0__259->SetBinError(26,0.0007135611);
   temp_0__259->SetBinError(27,0.0006734086);
   temp_0__259->SetBinError(28,0.0006205898);
   temp_0__259->SetBinError(29,0.0005245926);
   temp_0__259->SetBinError(30,0.0004987973);
   temp_0__259->SetBinError(31,0.0007587547);
   temp_0__259->SetMaximum(0.07);
   temp_0__259->SetEntries(52586);
   temp_0__259->SetStats(0);
   
   TF1 *gaus237 = new TF1("gaus","gaus",88.32657,92.83968, TF1::EAddToList::kNo);
   gaus237->SetFillColor(19);
   gaus237->SetFillStyle(0);
   gaus237->SetMarkerStyle(20);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3333ff");
   gaus237->SetLineColor(ci);
   gaus237->SetLineWidth(2);
   gaus237->SetChisquare(28.14382);
   gaus237->SetNDF(11);
   gaus237->GetXaxis()->SetLabelFont(42);
   gaus237->GetXaxis()->SetLabelOffset(0.007);
   gaus237->GetXaxis()->SetLabelSize(0.05);
   gaus237->GetXaxis()->SetTitleSize(0.06);
   gaus237->GetXaxis()->SetTitleOffset(0.9);
   gaus237->GetXaxis()->SetTitleFont(42);
   gaus237->GetYaxis()->SetLabelFont(42);
   gaus237->GetYaxis()->SetLabelOffset(0.007);
   gaus237->GetYaxis()->SetLabelSize(0.05);
   gaus237->GetYaxis()->SetTitleSize(0.06);
   gaus237->GetYaxis()->SetTitleOffset(1.1);
   gaus237->GetYaxis()->SetTitleFont(42);
   gaus237->SetParameter(0,0.062216);
   gaus237->SetParError(0,0.0004588481);
   gaus237->SetParLimits(0,0,0);
   gaus237->SetParameter(1,90.72932);
   gaus237->SetParError(1,0.01765369);
   gaus237->SetParLimits(1,0,0);
   gaus237->SetParameter(2,2.051622);
   gaus237->SetParError(2,0.0299897);
   gaus237->SetParLimits(2,0,12.32291);
   gaus237->SetParent(temp_0__259);
   temp_0__259->GetListOfFunctions()->Add(gaus237);

   ci = TColor::GetColor("#3333ff");
   temp_0__259->SetLineColor(ci);
   temp_0__259->SetLineStyle(0);
   temp_0__259->SetLineWidth(2);

   ci = TColor::GetColor("#3333ff");
   temp_0__259->SetMarkerColor(ci);
   temp_0__259->SetMarkerStyle(0);
   temp_0__259->SetMarkerSize(0.8);
   temp_0__259->GetXaxis()->SetTitle("Di-#mu mass [GeV]");
   temp_0__259->GetXaxis()->SetRange(13,24);
   temp_0__259->GetXaxis()->SetNdivisions(505);
   temp_0__259->GetXaxis()->SetLabelFont(42);
   temp_0__259->GetXaxis()->SetLabelOffset(0.007);
   temp_0__259->GetXaxis()->SetLabelSize(0.05);
   temp_0__259->GetXaxis()->SetTitleSize(0.06);
   temp_0__259->GetXaxis()->SetTitleOffset(0.98);
   temp_0__259->GetXaxis()->SetTitleFont(42);
   temp_0__259->GetYaxis()->SetTitle("a.u.");
   temp_0__259->GetYaxis()->SetLabelFont(42);
   temp_0__259->GetYaxis()->SetLabelOffset(0.007);
   temp_0__259->GetYaxis()->SetLabelSize(0.05);
   temp_0__259->GetYaxis()->SetTitleSize(0.06);
   temp_0__259->GetYaxis()->SetTitleOffset(1.5);
   temp_0__259->GetYaxis()->SetTitleFont(42);
   temp_0__259->GetZaxis()->SetLabelFont(42);
   temp_0__259->GetZaxis()->SetLabelOffset(0.007);
   temp_0__259->GetZaxis()->SetLabelSize(0.05);
   temp_0__259->GetZaxis()->SetTitleSize(0.06);
   temp_0__259->GetZaxis()->SetTitleOffset(1);
   temp_0__259->GetZaxis()->SetTitleFont(42);
   temp_0__259->Draw("");
   
   TH1D *temp_0__260 = new TH1D("temp_0__260","glb sta p_{T} Pull",30,85,95);
   temp_0__260->SetBinContent(4,0.01502301);
   temp_0__260->SetBinContent(5,0.01745712);
   temp_0__260->SetBinContent(6,0.01846499);
   temp_0__260->SetBinContent(7,0.02086107);
   temp_0__260->SetBinContent(8,0.02361845);
   temp_0__260->SetBinContent(9,0.0275929);
   temp_0__260->SetBinContent(10,0.03042635);
   temp_0__260->SetBinContent(11,0.03548473);
   temp_0__260->SetBinContent(12,0.04117065);
   temp_0__260->SetBinContent(13,0.04626707);
   temp_0__260->SetBinContent(14,0.0499943);
   temp_0__260->SetBinContent(15,0.05377857);
   temp_0__260->SetBinContent(16,0.06159434);
   temp_0__260->SetBinContent(17,0.06465599);
   temp_0__260->SetBinContent(18,0.06324877);
   temp_0__260->SetBinContent(19,0.05887499);
   temp_0__260->SetBinContent(20,0.05782908);
   temp_0__260->SetBinContent(21,0.0545012);
   temp_0__260->SetBinContent(22,0.04915757);
   temp_0__260->SetBinContent(23,0.04267295);
   temp_0__260->SetBinContent(24,0.03630244);
   temp_0__260->SetBinContent(25,0.03259423);
   temp_0__260->SetBinContent(26,0.02677519);
   temp_0__260->SetBinContent(27,0.02384665);
   temp_0__260->SetBinContent(28,0.02025254);
   temp_0__260->SetBinContent(29,0.01447153);
   temp_0__260->SetBinContent(30,0.01308333);
   temp_0__260->SetBinContent(31,0.03027422);
   temp_0__260->SetBinError(4,0.0005344947);
   temp_0__260->SetBinError(5,0.0005761707);
   temp_0__260->SetBinError(6,0.0005925698);
   temp_0__260->SetBinError(7,0.0006298443);
   temp_0__260->SetBinError(8,0.0006701788);
   temp_0__260->SetBinError(9,0.0007243752);
   temp_0__260->SetBinError(10,0.0007606587);
   temp_0__260->SetBinError(11,0.0008214586);
   temp_0__260->SetBinError(12,0.0008848279);
   temp_0__260->SetBinError(13,0.0009379959);
   temp_0__260->SetBinError(14,0.0009750461);
   temp_0__260->SetBinError(15,0.001011276);
   temp_0__260->SetBinError(16,0.001082269);
   temp_0__260->SetBinError(17,0.001108841);
   temp_0__260->SetBinError(18,0.001096708);
   temp_0__260->SetBinError(19,0.001058109);
   temp_0__260->SetBinError(20,0.001048668);
   temp_0__260->SetBinError(21,0.001018047);
   temp_0__260->SetBinError(22,0.0009668523);
   temp_0__260->SetBinError(23,0.0009008268);
   temp_0__260->SetBinError(24,0.0008308695);
   temp_0__260->SetBinError(25,0.000787291);
   temp_0__260->SetBinError(26,0.0007135611);
   temp_0__260->SetBinError(27,0.0006734086);
   temp_0__260->SetBinError(28,0.0006205898);
   temp_0__260->SetBinError(29,0.0005245926);
   temp_0__260->SetBinError(30,0.0004987973);
   temp_0__260->SetBinError(31,0.0007587547);
   temp_0__260->SetMaximum(0.07);
   temp_0__260->SetEntries(52586);
   temp_0__260->SetStats(0);
   
   TF1 *gaus238 = new TF1("gaus","gaus",88.32657,92.83968, TF1::EAddToList::kNo);
   gaus238->SetFillColor(19);
   gaus238->SetFillStyle(0);
   gaus238->SetMarkerStyle(20);

   ci = TColor::GetColor("#3333ff");
   gaus238->SetLineColor(ci);
   gaus238->SetLineWidth(2);
   gaus238->SetChisquare(28.14382);
   gaus238->SetNDF(11);
   gaus238->GetXaxis()->SetLabelFont(42);
   gaus238->GetXaxis()->SetLabelOffset(0.007);
   gaus238->GetXaxis()->SetLabelSize(0.05);
   gaus238->GetXaxis()->SetTitleSize(0.06);
   gaus238->GetXaxis()->SetTitleOffset(0.9);
   gaus238->GetXaxis()->SetTitleFont(42);
   gaus238->GetYaxis()->SetLabelFont(42);
   gaus238->GetYaxis()->SetLabelOffset(0.007);
   gaus238->GetYaxis()->SetLabelSize(0.05);
   gaus238->GetYaxis()->SetTitleSize(0.06);
   gaus238->GetYaxis()->SetTitleOffset(1.1);
   gaus238->GetYaxis()->SetTitleFont(42);
   gaus238->SetParameter(0,0.062216);
   gaus238->SetParError(0,0.0004588481);
   gaus238->SetParLimits(0,0,0);
   gaus238->SetParameter(1,90.72932);
   gaus238->SetParError(1,0.01765369);
   gaus238->SetParLimits(1,0,0);
   gaus238->SetParameter(2,2.051622);
   gaus238->SetParError(2,0.0299897);
   gaus238->SetParLimits(2,0,12.32291);
   gaus238->SetParent(temp_0__260);
   temp_0__260->GetListOfFunctions()->Add(gaus238);

   ci = TColor::GetColor("#3333ff");
   temp_0__260->SetLineColor(ci);
   temp_0__260->SetLineStyle(0);
   temp_0__260->SetLineWidth(2);

   ci = TColor::GetColor("#3333ff");
   temp_0__260->SetMarkerColor(ci);
   temp_0__260->SetMarkerStyle(0);
   temp_0__260->SetMarkerSize(0.8);
   temp_0__260->GetXaxis()->SetTitle("Di-#mu mass [GeV]");
   temp_0__260->GetXaxis()->SetRange(13,24);
   temp_0__260->GetXaxis()->SetNdivisions(505);
   temp_0__260->GetXaxis()->SetLabelFont(42);
   temp_0__260->GetXaxis()->SetLabelOffset(0.007);
   temp_0__260->GetXaxis()->SetLabelSize(0.05);
   temp_0__260->GetXaxis()->SetTitleSize(0.06);
   temp_0__260->GetXaxis()->SetTitleOffset(0.98);
   temp_0__260->GetXaxis()->SetTitleFont(42);
   temp_0__260->GetYaxis()->SetTitle("a.u.");
   temp_0__260->GetYaxis()->SetLabelFont(42);
   temp_0__260->GetYaxis()->SetLabelOffset(0.007);
   temp_0__260->GetYaxis()->SetLabelSize(0.05);
   temp_0__260->GetYaxis()->SetTitleSize(0.06);
   temp_0__260->GetYaxis()->SetTitleOffset(1.5);
   temp_0__260->GetYaxis()->SetTitleFont(42);
   temp_0__260->GetZaxis()->SetLabelFont(42);
   temp_0__260->GetZaxis()->SetLabelOffset(0.007);
   temp_0__260->GetZaxis()->SetLabelSize(0.05);
   temp_0__260->GetZaxis()->SetTitleSize(0.06);
   temp_0__260->GetZaxis()->SetTitleOffset(1);
   temp_0__260->GetZaxis()->SetTitleFont(42);
   temp_0__260->Draw("hist same");
   
   TH1D *temp_1__261 = new TH1D("temp_1__261","glb sta p_{T} Pull",30,85,95);
   temp_1__261->SetBinContent(4,0.01320645);
   temp_1__261->SetBinContent(5,0.01461139);
   temp_1__261->SetBinContent(6,0.01661578);
   temp_1__261->SetBinContent(7,0.01959425);
   temp_1__261->SetBinContent(8,0.02231047);
   temp_1__261->SetBinContent(9,0.02540134);
   temp_1__261->SetBinContent(10,0.02851095);
   temp_1__261->SetBinContent(11,0.03381226);
   temp_1__261->SetBinContent(12,0.03945076);
   temp_1__261->SetBinContent(13,0.04441489);
   temp_1__261->SetBinContent(14,0.05020325);
   temp_1__261->SetBinContent(15,0.05533597);
   temp_1__261->SetBinContent(16,0.05882022);
   temp_1__261->SetBinContent(17,0.06402787);
   temp_1__261->SetBinContent(18,0.06429013);
   temp_1__261->SetBinContent(19,0.06121799);
   temp_1__261->SetBinContent(20,0.06011277);
   temp_1__261->SetBinContent(21,0.05494258);
   temp_1__261->SetBinContent(22,0.05099002);
   temp_1__261->SetBinContent(23,0.0441901);
   temp_1__261->SetBinContent(24,0.03946949);
   temp_1__261->SetBinContent(25,0.03310043);
   temp_1__261->SetBinContent(26,0.02884814);
   temp_1__261->SetBinContent(27,0.02523275);
   temp_1__261->SetBinContent(28,0.02017496);
   temp_1__261->SetBinContent(29,0.01723395);
   temp_1__261->SetBinContent(30,0.01388082);
   temp_1__261->SetBinContent(31,0.03255718);
   temp_1__261->SetBinError(4,0.0004973837);
   temp_1__261->SetBinError(5,0.0005231718);
   temp_1__261->SetBinError(6,0.0005579032);
   temp_1__261->SetBinError(7,0.0006058469);
   temp_1__261->SetBinError(8,0.0006464767);
   temp_1__261->SetBinError(9,0.0006898058);
   temp_1__261->SetBinError(10,0.0007308098);
   temp_1__261->SetBinError(11,0.0007958581);
   temp_1__261->SetBinError(12,0.000859659);
   temp_1__261->SetBinError(13,0.0009121427);
   temp_1__261->SetBinError(14,0.0009697603);
   temp_1__261->SetBinError(15,0.001018128);
   temp_1__261->SetBinError(16,0.001049692);
   temp_1__261->SetBinError(17,0.001095174);
   temp_1__261->SetBinError(18,0.001097414);
   temp_1__261->SetBinError(19,0.001070873);
   temp_1__261->SetBinError(20,0.001061162);
   temp_1__261->SetBinError(21,0.001014502);
   temp_1__261->SetBinError(22,0.0009773297);
   temp_1__261->SetBinError(23,0.0009098316);
   temp_1__261->SetBinError(24,0.0008598631);
   temp_1__261->SetBinError(25,0.0007874361);
   temp_1__261->SetBinError(26,0.0007351186);
   temp_1__261->SetBinError(27,0.0006875129);
   temp_1__261->SetBinError(28,0.000614759);
   temp_1__261->SetBinError(29,0.0005681865);
   temp_1__261->SetBinError(30,0.0005099248);
   temp_1__261->SetBinError(31,0.0007809476);
   temp_1__261->SetMaximum(0.07);
   temp_1__261->SetEntries(53383);
   temp_1__261->SetStats(0);
   
   TF1 *gaus239 = new TF1("gaus","gaus",88.44236,92.91894, TF1::EAddToList::kNo);
   gaus239->SetFillColor(19);
   gaus239->SetFillStyle(0);
   gaus239->SetMarkerStyle(20);

   ci = TColor::GetColor("#ff3333");
   gaus239->SetLineColor(ci);
   gaus239->SetLineWidth(2);
   gaus239->SetChisquare(11.29438);
   gaus239->SetNDF(11);
   gaus239->GetXaxis()->SetLabelFont(42);
   gaus239->GetXaxis()->SetLabelOffset(0.007);
   gaus239->GetXaxis()->SetLabelSize(0.05);
   gaus239->GetXaxis()->SetTitleSize(0.06);
   gaus239->GetXaxis()->SetTitleOffset(0.9);
   gaus239->GetXaxis()->SetTitleFont(42);
   gaus239->GetYaxis()->SetLabelFont(42);
   gaus239->GetYaxis()->SetLabelOffset(0.007);
   gaus239->GetYaxis()->SetLabelSize(0.05);
   gaus239->GetYaxis()->SetTitleSize(0.06);
   gaus239->GetYaxis()->SetTitleOffset(1.1);
   gaus239->GetYaxis()->SetTitleFont(42);
   gaus239->SetParameter(0,0.06286331);
   gaus239->SetParError(0,0.0004570037);
   gaus239->SetParLimits(0,0,0);
   gaus239->SetParameter(1,90.82634);
   gaus239->SetParError(1,0.017777);
   gaus239->SetParLimits(1,0,0);
   gaus239->SetParameter(2,2.050152);
   gaus239->SetParError(2,0.02964694);
   gaus239->SetParLimits(2,0,12.31717);
   gaus239->SetParent(temp_1__261);
   temp_1__261->GetListOfFunctions()->Add(gaus239);

   ci = TColor::GetColor("#ff3333");
   temp_1__261->SetLineColor(ci);
   temp_1__261->SetLineStyle(0);
   temp_1__261->SetLineWidth(2);

   ci = TColor::GetColor("#ff3333");
   temp_1__261->SetMarkerColor(ci);
   temp_1__261->SetMarkerStyle(0);
   temp_1__261->SetMarkerSize(0.8);
   temp_1__261->GetXaxis()->SetTitle("Di-#mu mass [GeV]");
   temp_1__261->GetXaxis()->SetRange(13,24);
   temp_1__261->GetXaxis()->SetNdivisions(505);
   temp_1__261->GetXaxis()->SetLabelFont(42);
   temp_1__261->GetXaxis()->SetLabelOffset(0.007);
   temp_1__261->GetXaxis()->SetLabelSize(0.05);
   temp_1__261->GetXaxis()->SetTitleSize(0.06);
   temp_1__261->GetXaxis()->SetTitleOffset(0.98);
   temp_1__261->GetXaxis()->SetTitleFont(42);
   temp_1__261->GetYaxis()->SetTitle("a.u.");
   temp_1__261->GetYaxis()->SetLabelFont(42);
   temp_1__261->GetYaxis()->SetLabelOffset(0.007);
   temp_1__261->GetYaxis()->SetLabelSize(0.05);
   temp_1__261->GetYaxis()->SetTitleSize(0.06);
   temp_1__261->GetYaxis()->SetTitleOffset(1.5);
   temp_1__261->GetYaxis()->SetTitleFont(42);
   temp_1__261->GetZaxis()->SetLabelFont(42);
   temp_1__261->GetZaxis()->SetLabelOffset(0.007);
   temp_1__261->GetZaxis()->SetLabelSize(0.05);
   temp_1__261->GetZaxis()->SetTitleSize(0.06);
   temp_1__261->GetZaxis()->SetTitleOffset(1);
   temp_1__261->GetZaxis()->SetTitleFont(42);
   temp_1__261->Draw("same");
   
   TH1D *temp_1__262 = new TH1D("temp_1__262","glb sta p_{T} Pull",30,85,95);
   temp_1__262->SetBinContent(4,0.01320645);
   temp_1__262->SetBinContent(5,0.01461139);
   temp_1__262->SetBinContent(6,0.01661578);
   temp_1__262->SetBinContent(7,0.01959425);
   temp_1__262->SetBinContent(8,0.02231047);
   temp_1__262->SetBinContent(9,0.02540134);
   temp_1__262->SetBinContent(10,0.02851095);
   temp_1__262->SetBinContent(11,0.03381226);
   temp_1__262->SetBinContent(12,0.03945076);
   temp_1__262->SetBinContent(13,0.04441489);
   temp_1__262->SetBinContent(14,0.05020325);
   temp_1__262->SetBinContent(15,0.05533597);
   temp_1__262->SetBinContent(16,0.05882022);
   temp_1__262->SetBinContent(17,0.06402787);
   temp_1__262->SetBinContent(18,0.06429013);
   temp_1__262->SetBinContent(19,0.06121799);
   temp_1__262->SetBinContent(20,0.06011277);
   temp_1__262->SetBinContent(21,0.05494258);
   temp_1__262->SetBinContent(22,0.05099002);
   temp_1__262->SetBinContent(23,0.0441901);
   temp_1__262->SetBinContent(24,0.03946949);
   temp_1__262->SetBinContent(25,0.03310043);
   temp_1__262->SetBinContent(26,0.02884814);
   temp_1__262->SetBinContent(27,0.02523275);
   temp_1__262->SetBinContent(28,0.02017496);
   temp_1__262->SetBinContent(29,0.01723395);
   temp_1__262->SetBinContent(30,0.01388082);
   temp_1__262->SetBinContent(31,0.03255718);
   temp_1__262->SetBinError(4,0.0004973837);
   temp_1__262->SetBinError(5,0.0005231718);
   temp_1__262->SetBinError(6,0.0005579032);
   temp_1__262->SetBinError(7,0.0006058469);
   temp_1__262->SetBinError(8,0.0006464767);
   temp_1__262->SetBinError(9,0.0006898058);
   temp_1__262->SetBinError(10,0.0007308098);
   temp_1__262->SetBinError(11,0.0007958581);
   temp_1__262->SetBinError(12,0.000859659);
   temp_1__262->SetBinError(13,0.0009121427);
   temp_1__262->SetBinError(14,0.0009697603);
   temp_1__262->SetBinError(15,0.001018128);
   temp_1__262->SetBinError(16,0.001049692);
   temp_1__262->SetBinError(17,0.001095174);
   temp_1__262->SetBinError(18,0.001097414);
   temp_1__262->SetBinError(19,0.001070873);
   temp_1__262->SetBinError(20,0.001061162);
   temp_1__262->SetBinError(21,0.001014502);
   temp_1__262->SetBinError(22,0.0009773297);
   temp_1__262->SetBinError(23,0.0009098316);
   temp_1__262->SetBinError(24,0.0008598631);
   temp_1__262->SetBinError(25,0.0007874361);
   temp_1__262->SetBinError(26,0.0007351186);
   temp_1__262->SetBinError(27,0.0006875129);
   temp_1__262->SetBinError(28,0.000614759);
   temp_1__262->SetBinError(29,0.0005681865);
   temp_1__262->SetBinError(30,0.0005099248);
   temp_1__262->SetBinError(31,0.0007809476);
   temp_1__262->SetMaximum(0.07);
   temp_1__262->SetEntries(53383);
   temp_1__262->SetStats(0);
   
   TF1 *gaus240 = new TF1("gaus","gaus",88.44236,92.91894, TF1::EAddToList::kNo);
   gaus240->SetFillColor(19);
   gaus240->SetFillStyle(0);
   gaus240->SetMarkerStyle(20);

   ci = TColor::GetColor("#ff3333");
   gaus240->SetLineColor(ci);
   gaus240->SetLineWidth(2);
   gaus240->SetChisquare(11.29438);
   gaus240->SetNDF(11);
   gaus240->GetXaxis()->SetLabelFont(42);
   gaus240->GetXaxis()->SetLabelOffset(0.007);
   gaus240->GetXaxis()->SetLabelSize(0.05);
   gaus240->GetXaxis()->SetTitleSize(0.06);
   gaus240->GetXaxis()->SetTitleOffset(0.9);
   gaus240->GetXaxis()->SetTitleFont(42);
   gaus240->GetYaxis()->SetLabelFont(42);
   gaus240->GetYaxis()->SetLabelOffset(0.007);
   gaus240->GetYaxis()->SetLabelSize(0.05);
   gaus240->GetYaxis()->SetTitleSize(0.06);
   gaus240->GetYaxis()->SetTitleOffset(1.1);
   gaus240->GetYaxis()->SetTitleFont(42);
   gaus240->SetParameter(0,0.06286331);
   gaus240->SetParError(0,0.0004570037);
   gaus240->SetParLimits(0,0,0);
   gaus240->SetParameter(1,90.82634);
   gaus240->SetParError(1,0.017777);
   gaus240->SetParLimits(1,0,0);
   gaus240->SetParameter(2,2.050152);
   gaus240->SetParError(2,0.02964694);
   gaus240->SetParLimits(2,0,12.31717);
   gaus240->SetParent(temp_1__262);
   temp_1__262->GetListOfFunctions()->Add(gaus240);

   ci = TColor::GetColor("#ff3333");
   temp_1__262->SetLineColor(ci);
   temp_1__262->SetLineStyle(0);
   temp_1__262->SetLineWidth(2);

   ci = TColor::GetColor("#ff3333");
   temp_1__262->SetMarkerColor(ci);
   temp_1__262->SetMarkerStyle(0);
   temp_1__262->SetMarkerSize(0.8);
   temp_1__262->GetXaxis()->SetTitle("Di-#mu mass [GeV]");
   temp_1__262->GetXaxis()->SetRange(13,24);
   temp_1__262->GetXaxis()->SetNdivisions(505);
   temp_1__262->GetXaxis()->SetLabelFont(42);
   temp_1__262->GetXaxis()->SetLabelOffset(0.007);
   temp_1__262->GetXaxis()->SetLabelSize(0.05);
   temp_1__262->GetXaxis()->SetTitleSize(0.06);
   temp_1__262->GetXaxis()->SetTitleOffset(0.98);
   temp_1__262->GetXaxis()->SetTitleFont(42);
   temp_1__262->GetYaxis()->SetTitle("a.u.");
   temp_1__262->GetYaxis()->SetLabelFont(42);
   temp_1__262->GetYaxis()->SetLabelOffset(0.007);
   temp_1__262->GetYaxis()->SetLabelSize(0.05);
   temp_1__262->GetYaxis()->SetTitleSize(0.06);
   temp_1__262->GetYaxis()->SetTitleOffset(1.5);
   temp_1__262->GetYaxis()->SetTitleFont(42);
   temp_1__262->GetZaxis()->SetLabelFont(42);
   temp_1__262->GetZaxis()->SetLabelOffset(0.007);
   temp_1__262->GetZaxis()->SetLabelSize(0.05);
   temp_1__262->GetZaxis()->SetTitleSize(0.06);
   temp_1__262->GetZaxis()->SetTitleOffset(1);
   temp_1__262->GetZaxis()->SetTitleFont(42);
   temp_1__262->Draw("hist same");
   
   TH1D *temp_10__263 = new TH1D("temp_10__263","glb sta p_{T} Pull",30,85,95);
   temp_10__263->SetBinContent(4,0.01280009);
   temp_10__263->SetBinContent(5,0.01463671);
   temp_10__263->SetBinContent(6,0.01649206);
   temp_10__263->SetBinContent(7,0.0191158);
   temp_10__263->SetBinContent(8,0.02198317);
   temp_10__263->SetBinContent(9,0.02509417);
   temp_10__263->SetBinContent(10,0.0283551);
   temp_10__263->SetBinContent(11,0.03305909);
   temp_10__263->SetBinContent(12,0.03913117);
   temp_10__263->SetBinContent(13,0.04437864);
   temp_10__263->SetBinContent(14,0.05033827);
   temp_10__263->SetBinContent(15,0.05389906);
   temp_10__263->SetBinContent(16,0.05912779);
   temp_10__263->SetBinContent(17,0.06446897);
   temp_10__263->SetBinContent(18,0.0645252);
   temp_10__263->SetBinContent(19,0.06128301);
   temp_10__263->SetBinContent(20,0.05987743);
   temp_10__263->SetBinContent(21,0.05567945);
   temp_10__263->SetBinContent(22,0.05148147);
   temp_10__263->SetBinContent(23,0.04492213);
   temp_10__263->SetBinContent(24,0.03866264);
   temp_10__263->SetBinContent(25,0.03478326);
   temp_10__263->SetBinContent(26,0.02846755);
   temp_10__263->SetBinContent(27,0.02601248);
   temp_10__263->SetBinContent(28,0.01997789);
   temp_10__263->SetBinContent(29,0.01789764);
   temp_10__263->SetBinContent(30,0.01354973);
   temp_10__263->SetBinContent(31,0.03384621);
   temp_10__263->SetBinError(4,0.0004897818);
   temp_10__263->SetBinError(5,0.0005237425);
   temp_10__263->SetBinError(6,0.0005559473);
   temp_10__263->SetBinError(7,0.0005985389);
   temp_10__263->SetBinError(8,0.0006418615);
   temp_10__263->SetBinError(9,0.0006857765);
   temp_10__263->SetBinError(10,0.0007289736);
   temp_10__263->SetBinError(11,0.0007871212);
   temp_10__263->SetBinError(12,0.0008563624);
   temp_10__263->SetBinError(13,0.0009119755);
   temp_10__263->SetBinError(14,0.000971282);
   temp_10__263->SetBinError(15,0.001005048);
   temp_10__263->SetBinError(16,0.001052669);
   temp_10__263->SetBinError(17,0.001099187);
   temp_10__263->SetBinError(18,0.001099666);
   temp_10__263->SetBinError(19,0.001071683);
   temp_10__263->SetBinError(20,0.001059321);
   temp_10__263->SetBinError(21,0.001021512);
   temp_10__263->SetBinError(22,0.0009822491);
   temp_10__263->SetBinError(23,0.0009175428);
   temp_10__263->SetBinError(24,0.0008512202);
   temp_10__263->SetBinError(25,0.0008073862);
   temp_10__263->SetBinError(26,0.0007304176);
   temp_10__263->SetBinError(27,0.0006982116);
   temp_10__263->SetBinError(28,0.0006118866);
   temp_10__263->SetBinError(29,0.0005791539);
   temp_10__263->SetBinError(30,0.0005039199);
   temp_10__263->SetBinError(31,0.0007964366);
   temp_10__263->SetMaximum(0.07);
   temp_10__263->SetEntries(53359);
   temp_10__263->SetStats(0);
   
   TF1 *gaus241 = new TF1("gaus","gaus",88.46168,92.93241, TF1::EAddToList::kNo);
   gaus241->SetFillColor(19);
   gaus241->SetFillStyle(0);
   gaus241->SetMarkerStyle(20);

   ci = TColor::GetColor("#006600");
   gaus241->SetLineColor(ci);
   gaus241->SetLineWidth(2);
   gaus241->SetChisquare(12.51612);
   gaus241->SetNDF(11);
   gaus241->GetXaxis()->SetLabelFont(42);
   gaus241->GetXaxis()->SetLabelOffset(0.007);
   gaus241->GetXaxis()->SetLabelSize(0.05);
   gaus241->GetXaxis()->SetTitleSize(0.06);
   gaus241->GetXaxis()->SetTitleOffset(0.9);
   gaus241->GetXaxis()->SetTitleFont(42);
   gaus241->GetYaxis()->SetLabelFont(42);
   gaus241->GetYaxis()->SetLabelOffset(0.007);
   gaus241->GetYaxis()->SetLabelSize(0.05);
   gaus241->GetYaxis()->SetTitleSize(0.06);
   gaus241->GetYaxis()->SetTitleOffset(1.1);
   gaus241->GetYaxis()->SetTitleFont(42);
   gaus241->SetParameter(0,0.06309501);
   gaus241->SetParError(0,0.000457335);
   gaus241->SetParLimits(0,0,0);
   gaus241->SetParameter(1,90.83951);
   gaus241->SetParError(1,0.01748118);
   gaus241->SetParLimits(1,0,0);
   gaus241->SetParameter(2,2.027967);
   gaus241->SetParError(2,0.02865232);
   gaus241->SetParLimits(2,0,12.29121);
   gaus241->SetParent(temp_10__263);
   temp_10__263->GetListOfFunctions()->Add(gaus241);

   ci = TColor::GetColor("#006600");
   temp_10__263->SetLineColor(ci);
   temp_10__263->SetLineStyle(0);
   temp_10__263->SetLineWidth(2);

   ci = TColor::GetColor("#006600");
   temp_10__263->SetMarkerColor(ci);
   temp_10__263->SetMarkerStyle(0);
   temp_10__263->SetMarkerSize(0.8);
   temp_10__263->GetXaxis()->SetTitle("Di-#mu mass [GeV]");
   temp_10__263->GetXaxis()->SetRange(13,24);
   temp_10__263->GetXaxis()->SetNdivisions(505);
   temp_10__263->GetXaxis()->SetLabelFont(42);
   temp_10__263->GetXaxis()->SetLabelOffset(0.007);
   temp_10__263->GetXaxis()->SetLabelSize(0.05);
   temp_10__263->GetXaxis()->SetTitleSize(0.06);
   temp_10__263->GetXaxis()->SetTitleOffset(0.98);
   temp_10__263->GetXaxis()->SetTitleFont(42);
   temp_10__263->GetYaxis()->SetTitle("a.u.");
   temp_10__263->GetYaxis()->SetLabelFont(42);
   temp_10__263->GetYaxis()->SetLabelOffset(0.007);
   temp_10__263->GetYaxis()->SetLabelSize(0.05);
   temp_10__263->GetYaxis()->SetTitleSize(0.06);
   temp_10__263->GetYaxis()->SetTitleOffset(1.5);
   temp_10__263->GetYaxis()->SetTitleFont(42);
   temp_10__263->GetZaxis()->SetLabelFont(42);
   temp_10__263->GetZaxis()->SetLabelOffset(0.007);
   temp_10__263->GetZaxis()->SetLabelSize(0.05);
   temp_10__263->GetZaxis()->SetTitleSize(0.06);
   temp_10__263->GetZaxis()->SetTitleOffset(1);
   temp_10__263->GetZaxis()->SetTitleFont(42);
   temp_10__263->Draw("same");
   
   TH1D *temp_10__264 = new TH1D("temp_10__264","glb sta p_{T} Pull",30,85,95);
   temp_10__264->SetBinContent(4,0.01280009);
   temp_10__264->SetBinContent(5,0.01463671);
   temp_10__264->SetBinContent(6,0.01649206);
   temp_10__264->SetBinContent(7,0.0191158);
   temp_10__264->SetBinContent(8,0.02198317);
   temp_10__264->SetBinContent(9,0.02509417);
   temp_10__264->SetBinContent(10,0.0283551);
   temp_10__264->SetBinContent(11,0.03305909);
   temp_10__264->SetBinContent(12,0.03913117);
   temp_10__264->SetBinContent(13,0.04437864);
   temp_10__264->SetBinContent(14,0.05033827);
   temp_10__264->SetBinContent(15,0.05389906);
   temp_10__264->SetBinContent(16,0.05912779);
   temp_10__264->SetBinContent(17,0.06446897);
   temp_10__264->SetBinContent(18,0.0645252);
   temp_10__264->SetBinContent(19,0.06128301);
   temp_10__264->SetBinContent(20,0.05987743);
   temp_10__264->SetBinContent(21,0.05567945);
   temp_10__264->SetBinContent(22,0.05148147);
   temp_10__264->SetBinContent(23,0.04492213);
   temp_10__264->SetBinContent(24,0.03866264);
   temp_10__264->SetBinContent(25,0.03478326);
   temp_10__264->SetBinContent(26,0.02846755);
   temp_10__264->SetBinContent(27,0.02601248);
   temp_10__264->SetBinContent(28,0.01997789);
   temp_10__264->SetBinContent(29,0.01789764);
   temp_10__264->SetBinContent(30,0.01354973);
   temp_10__264->SetBinContent(31,0.03384621);
   temp_10__264->SetBinError(4,0.0004897818);
   temp_10__264->SetBinError(5,0.0005237425);
   temp_10__264->SetBinError(6,0.0005559473);
   temp_10__264->SetBinError(7,0.0005985389);
   temp_10__264->SetBinError(8,0.0006418615);
   temp_10__264->SetBinError(9,0.0006857765);
   temp_10__264->SetBinError(10,0.0007289736);
   temp_10__264->SetBinError(11,0.0007871212);
   temp_10__264->SetBinError(12,0.0008563624);
   temp_10__264->SetBinError(13,0.0009119755);
   temp_10__264->SetBinError(14,0.000971282);
   temp_10__264->SetBinError(15,0.001005048);
   temp_10__264->SetBinError(16,0.001052669);
   temp_10__264->SetBinError(17,0.001099187);
   temp_10__264->SetBinError(18,0.001099666);
   temp_10__264->SetBinError(19,0.001071683);
   temp_10__264->SetBinError(20,0.001059321);
   temp_10__264->SetBinError(21,0.001021512);
   temp_10__264->SetBinError(22,0.0009822491);
   temp_10__264->SetBinError(23,0.0009175428);
   temp_10__264->SetBinError(24,0.0008512202);
   temp_10__264->SetBinError(25,0.0008073862);
   temp_10__264->SetBinError(26,0.0007304176);
   temp_10__264->SetBinError(27,0.0006982116);
   temp_10__264->SetBinError(28,0.0006118866);
   temp_10__264->SetBinError(29,0.0005791539);
   temp_10__264->SetBinError(30,0.0005039199);
   temp_10__264->SetBinError(31,0.0007964366);
   temp_10__264->SetMaximum(0.07);
   temp_10__264->SetEntries(53359);
   temp_10__264->SetStats(0);
   
   TF1 *gaus242 = new TF1("gaus","gaus",88.46168,92.93241, TF1::EAddToList::kNo);
   gaus242->SetFillColor(19);
   gaus242->SetFillStyle(0);
   gaus242->SetMarkerStyle(20);

   ci = TColor::GetColor("#006600");
   gaus242->SetLineColor(ci);
   gaus242->SetLineWidth(2);
   gaus242->SetChisquare(12.51612);
   gaus242->SetNDF(11);
   gaus242->GetXaxis()->SetLabelFont(42);
   gaus242->GetXaxis()->SetLabelOffset(0.007);
   gaus242->GetXaxis()->SetLabelSize(0.05);
   gaus242->GetXaxis()->SetTitleSize(0.06);
   gaus242->GetXaxis()->SetTitleOffset(0.9);
   gaus242->GetXaxis()->SetTitleFont(42);
   gaus242->GetYaxis()->SetLabelFont(42);
   gaus242->GetYaxis()->SetLabelOffset(0.007);
   gaus242->GetYaxis()->SetLabelSize(0.05);
   gaus242->GetYaxis()->SetTitleSize(0.06);
   gaus242->GetYaxis()->SetTitleOffset(1.1);
   gaus242->GetYaxis()->SetTitleFont(42);
   gaus242->SetParameter(0,0.06309501);
   gaus242->SetParError(0,0.000457335);
   gaus242->SetParLimits(0,0,0);
   gaus242->SetParameter(1,90.83951);
   gaus242->SetParError(1,0.01748118);
   gaus242->SetParLimits(1,0,0);
   gaus242->SetParameter(2,2.027967);
   gaus242->SetParError(2,0.02865232);
   gaus242->SetParLimits(2,0,12.29121);
   gaus242->SetParent(temp_10__264);
   temp_10__264->GetListOfFunctions()->Add(gaus242);

   ci = TColor::GetColor("#006600");
   temp_10__264->SetLineColor(ci);
   temp_10__264->SetLineStyle(0);
   temp_10__264->SetLineWidth(2);

   ci = TColor::GetColor("#006600");
   temp_10__264->SetMarkerColor(ci);
   temp_10__264->SetMarkerStyle(0);
   temp_10__264->SetMarkerSize(0.8);
   temp_10__264->GetXaxis()->SetTitle("Di-#mu mass [GeV]");
   temp_10__264->GetXaxis()->SetRange(13,24);
   temp_10__264->GetXaxis()->SetNdivisions(505);
   temp_10__264->GetXaxis()->SetLabelFont(42);
   temp_10__264->GetXaxis()->SetLabelOffset(0.007);
   temp_10__264->GetXaxis()->SetLabelSize(0.05);
   temp_10__264->GetXaxis()->SetTitleSize(0.06);
   temp_10__264->GetXaxis()->SetTitleOffset(0.98);
   temp_10__264->GetXaxis()->SetTitleFont(42);
   temp_10__264->GetYaxis()->SetTitle("a.u.");
   temp_10__264->GetYaxis()->SetLabelFont(42);
   temp_10__264->GetYaxis()->SetLabelOffset(0.007);
   temp_10__264->GetYaxis()->SetLabelSize(0.05);
   temp_10__264->GetYaxis()->SetTitleSize(0.06);
   temp_10__264->GetYaxis()->SetTitleOffset(1.5);
   temp_10__264->GetYaxis()->SetTitleFont(42);
   temp_10__264->GetZaxis()->SetLabelFont(42);
   temp_10__264->GetZaxis()->SetLabelOffset(0.007);
   temp_10__264->GetZaxis()->SetLabelSize(0.05);
   temp_10__264->GetZaxis()->SetTitleSize(0.06);
   temp_10__264->GetZaxis()->SetTitleOffset(1);
   temp_10__264->GetZaxis()->SetTitleFont(42);
   temp_10__264->Draw("hist same");
   
   TLegend *leg = new TLegend(0.6,0.8,0.9,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.03);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("temp_0","2016 Startup Geom.","lep");

   ci = TColor::GetColor("#3333ff");
   entry->SetLineColor(ci);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#3333ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(62);
   entry=leg->AddEntry("temp_1","2016 Early Geom.","lep");

   ci = TColor::GetColor("#ff3333");
   entry->SetLineColor(ci);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff3333");
   entry->SetMarkerColor(ci);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(62);
   entry=leg->AddEntry("temp_10","2016 Legacy Geom.","lep");

   ci = TColor::GetColor("#006600");
   entry->SetLineColor(ci);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#006600");
   entry->SetMarkerColor(ci);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(62);
   leg->Draw();
   TLatex *   tex = new TLatex(0.96,0.936,"       5.44 fb^{-1}  (13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.905,"");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(52);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.96,"CMS");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(61);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.29,0.96,"Preliminary");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(52);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.23,0.3,"-2.4 < #eta_{#mu^{+}} < -0.9");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.24,0.24,"0.8 < #phi_{#mu^{+}} < 1.2");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
