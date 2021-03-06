void glb_sta_eta_v_ptRes_gaus_sigma()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Jul 18 02:12:48 2020) by ROOT version 6.18/04
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",1,1,600,576);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   Canvas_1->SetHighLightColor(2);
   Canvas_1->Range(-3.663158,-0.001316456,2.652632,0.008810127);
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
   
   TH1F *glb_sta_eta_v_ptRes_0_sigma__304 = new TH1F("glb_sta_eta_v_ptRes_0_sigma__304","",16,-2.4,2.4);
   glb_sta_eta_v_ptRes_0_sigma__304->SetBinContent(1,0.01686);
   glb_sta_eta_v_ptRes_0_sigma__304->SetBinContent(2,0.007064564);
   glb_sta_eta_v_ptRes_0_sigma__304->SetBinContent(3,0.00659979);
   glb_sta_eta_v_ptRes_0_sigma__304->SetBinContent(4,0.008580444);
   glb_sta_eta_v_ptRes_0_sigma__304->SetBinContent(5,0.003583326);
   glb_sta_eta_v_ptRes_0_sigma__304->SetBinContent(6,0.002315782);
   glb_sta_eta_v_ptRes_0_sigma__304->SetBinContent(7,0.001981339);
   glb_sta_eta_v_ptRes_0_sigma__304->SetBinContent(8,0.002093639);
   glb_sta_eta_v_ptRes_0_sigma__304->SetBinContent(9,0.002050117);
   glb_sta_eta_v_ptRes_0_sigma__304->SetBinContent(10,0.002012716);
   glb_sta_eta_v_ptRes_0_sigma__304->SetBinContent(11,0.002118235);
   glb_sta_eta_v_ptRes_0_sigma__304->SetBinContent(12,0.00294013);
   glb_sta_eta_v_ptRes_0_sigma__304->SetBinContent(13,0.005979407);
   glb_sta_eta_v_ptRes_0_sigma__304->SetBinContent(14,0.009933272);
   glb_sta_eta_v_ptRes_0_sigma__304->SetBinContent(15,0.03444493);
   glb_sta_eta_v_ptRes_0_sigma__304->SetBinContent(16,0.03445273);
   glb_sta_eta_v_ptRes_0_sigma__304->SetBinError(1,0.002315471);
   glb_sta_eta_v_ptRes_0_sigma__304->SetBinError(2,0.0001184899);
   glb_sta_eta_v_ptRes_0_sigma__304->SetBinError(3,8.7615e-05);
   glb_sta_eta_v_ptRes_0_sigma__304->SetBinError(4,0.0001840098);
   glb_sta_eta_v_ptRes_0_sigma__304->SetBinError(5,1.528037e-05);
   glb_sta_eta_v_ptRes_0_sigma__304->SetBinError(6,8.19138e-06);
   glb_sta_eta_v_ptRes_0_sigma__304->SetBinError(7,7.177791e-06);
   glb_sta_eta_v_ptRes_0_sigma__304->SetBinError(8,5.863658e-06);
   glb_sta_eta_v_ptRes_0_sigma__304->SetBinError(9,5.436506e-06);
   glb_sta_eta_v_ptRes_0_sigma__304->SetBinError(10,5.233003e-06);
   glb_sta_eta_v_ptRes_0_sigma__304->SetBinError(11,6.139566e-06);
   glb_sta_eta_v_ptRes_0_sigma__304->SetBinError(12,1.006039e-05);
   glb_sta_eta_v_ptRes_0_sigma__304->SetBinError(13,4.862158e-05);
   glb_sta_eta_v_ptRes_0_sigma__304->SetBinError(14,0.0002366553);
   glb_sta_eta_v_ptRes_0_sigma__304->SetBinError(15,0.03398266);
   glb_sta_eta_v_ptRes_0_sigma__304->SetBinError(16,0.01885514);
   glb_sta_eta_v_ptRes_0_sigma__304->SetMinimum(0);
   glb_sta_eta_v_ptRes_0_sigma__304->SetMaximum(0.008);
   glb_sta_eta_v_ptRes_0_sigma__304->SetEntries(16);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3333ff");
   glb_sta_eta_v_ptRes_0_sigma__304->SetLineColor(ci);
   glb_sta_eta_v_ptRes_0_sigma__304->SetLineStyle(0);

   ci = TColor::GetColor("#3333ff");
   glb_sta_eta_v_ptRes_0_sigma__304->SetMarkerColor(ci);
   glb_sta_eta_v_ptRes_0_sigma__304->SetMarkerStyle(8);
   glb_sta_eta_v_ptRes_0_sigma__304->SetMarkerSize(0.8);
   glb_sta_eta_v_ptRes_0_sigma__304->GetXaxis()->SetTitle("#eta");
   glb_sta_eta_v_ptRes_0_sigma__304->GetXaxis()->SetLabelFont(42);
   glb_sta_eta_v_ptRes_0_sigma__304->GetXaxis()->SetLabelOffset(0.007);
   glb_sta_eta_v_ptRes_0_sigma__304->GetXaxis()->SetLabelSize(0.05);
   glb_sta_eta_v_ptRes_0_sigma__304->GetXaxis()->SetTitleSize(0.06);
   glb_sta_eta_v_ptRes_0_sigma__304->GetXaxis()->SetTitleOffset(0.9);
   glb_sta_eta_v_ptRes_0_sigma__304->GetXaxis()->SetTitleFont(42);
   glb_sta_eta_v_ptRes_0_sigma__304->GetYaxis()->SetTitle("#sigma(q/p_{T STA} - q/p_{T GLB}) [1/GeV]");
   glb_sta_eta_v_ptRes_0_sigma__304->GetYaxis()->SetLabelFont(42);
   glb_sta_eta_v_ptRes_0_sigma__304->GetYaxis()->SetLabelOffset(0.007);
   glb_sta_eta_v_ptRes_0_sigma__304->GetYaxis()->SetLabelSize(0.05);
   glb_sta_eta_v_ptRes_0_sigma__304->GetYaxis()->SetTitleSize(0.06);
   glb_sta_eta_v_ptRes_0_sigma__304->GetYaxis()->SetTitleOffset(1.6);
   glb_sta_eta_v_ptRes_0_sigma__304->GetYaxis()->SetTitleFont(42);
   glb_sta_eta_v_ptRes_0_sigma__304->GetZaxis()->SetLabelFont(42);
   glb_sta_eta_v_ptRes_0_sigma__304->GetZaxis()->SetLabelOffset(0.007);
   glb_sta_eta_v_ptRes_0_sigma__304->GetZaxis()->SetLabelSize(0.05);
   glb_sta_eta_v_ptRes_0_sigma__304->GetZaxis()->SetTitleSize(0.06);
   glb_sta_eta_v_ptRes_0_sigma__304->GetZaxis()->SetTitleOffset(1);
   glb_sta_eta_v_ptRes_0_sigma__304->GetZaxis()->SetTitleFont(42);
   glb_sta_eta_v_ptRes_0_sigma__304->Draw("");
   
   TH1F *glb_sta_eta_v_ptRes_1_sigma__305 = new TH1F("glb_sta_eta_v_ptRes_1_sigma__305","",16,-2.4,2.4);
   glb_sta_eta_v_ptRes_1_sigma__305->SetBinContent(1,0.005868803);
   glb_sta_eta_v_ptRes_1_sigma__305->SetBinContent(2,0.004070998);
   glb_sta_eta_v_ptRes_1_sigma__305->SetBinContent(3,0.003157296);
   glb_sta_eta_v_ptRes_1_sigma__305->SetBinContent(4,0.003355915);
   glb_sta_eta_v_ptRes_1_sigma__305->SetBinContent(5,0.003192418);
   glb_sta_eta_v_ptRes_1_sigma__305->SetBinContent(6,0.00233844);
   glb_sta_eta_v_ptRes_1_sigma__305->SetBinContent(7,0.001990109);
   glb_sta_eta_v_ptRes_1_sigma__305->SetBinContent(8,0.00208084);
   glb_sta_eta_v_ptRes_1_sigma__305->SetBinContent(9,0.002028779);
   glb_sta_eta_v_ptRes_1_sigma__305->SetBinContent(10,0.001974995);
   glb_sta_eta_v_ptRes_1_sigma__305->SetBinContent(11,0.002116865);
   glb_sta_eta_v_ptRes_1_sigma__305->SetBinContent(12,0.002797636);
   glb_sta_eta_v_ptRes_1_sigma__305->SetBinContent(13,0.003506639);
   glb_sta_eta_v_ptRes_1_sigma__305->SetBinContent(14,0.003147227);
   glb_sta_eta_v_ptRes_1_sigma__305->SetBinContent(15,0.003699718);
   glb_sta_eta_v_ptRes_1_sigma__305->SetBinContent(16,0.005256127);
   glb_sta_eta_v_ptRes_1_sigma__305->SetBinError(1,9.171692e-05);
   glb_sta_eta_v_ptRes_1_sigma__305->SetBinError(2,2.116726e-05);
   glb_sta_eta_v_ptRes_1_sigma__305->SetBinError(3,1.373543e-05);
   glb_sta_eta_v_ptRes_1_sigma__305->SetBinError(4,1.529634e-05);
   glb_sta_eta_v_ptRes_1_sigma__305->SetBinError(5,1.286527e-05);
   glb_sta_eta_v_ptRes_1_sigma__305->SetBinError(6,8.360103e-06);
   glb_sta_eta_v_ptRes_1_sigma__305->SetBinError(7,4.892071e-06);
   glb_sta_eta_v_ptRes_1_sigma__305->SetBinError(8,5.725007e-06);
   glb_sta_eta_v_ptRes_1_sigma__305->SetBinError(9,5.260947e-06);
   glb_sta_eta_v_ptRes_1_sigma__305->SetBinError(10,4.919977e-06);
   glb_sta_eta_v_ptRes_1_sigma__305->SetBinError(11,6.099959e-06);
   glb_sta_eta_v_ptRes_1_sigma__305->SetBinError(12,1.113837e-05);
   glb_sta_eta_v_ptRes_1_sigma__305->SetBinError(13,1.786927e-05);
   glb_sta_eta_v_ptRes_1_sigma__305->SetBinError(14,1.316082e-05);
   glb_sta_eta_v_ptRes_1_sigma__305->SetBinError(15,1.882934e-05);
   glb_sta_eta_v_ptRes_1_sigma__305->SetBinError(16,5.388688e-05);
   glb_sta_eta_v_ptRes_1_sigma__305->SetMinimum(0);
   glb_sta_eta_v_ptRes_1_sigma__305->SetMaximum(0.008);
   glb_sta_eta_v_ptRes_1_sigma__305->SetEntries(16);

   ci = TColor::GetColor("#ff3333");
   glb_sta_eta_v_ptRes_1_sigma__305->SetLineColor(ci);
   glb_sta_eta_v_ptRes_1_sigma__305->SetLineStyle(0);

   ci = TColor::GetColor("#ff3333");
   glb_sta_eta_v_ptRes_1_sigma__305->SetMarkerColor(ci);
   glb_sta_eta_v_ptRes_1_sigma__305->SetMarkerStyle(8);
   glb_sta_eta_v_ptRes_1_sigma__305->SetMarkerSize(0.8);
   glb_sta_eta_v_ptRes_1_sigma__305->GetXaxis()->SetTitle("#eta");
   glb_sta_eta_v_ptRes_1_sigma__305->GetXaxis()->SetLabelFont(42);
   glb_sta_eta_v_ptRes_1_sigma__305->GetXaxis()->SetLabelOffset(0.007);
   glb_sta_eta_v_ptRes_1_sigma__305->GetXaxis()->SetLabelSize(0.05);
   glb_sta_eta_v_ptRes_1_sigma__305->GetXaxis()->SetTitleSize(0.06);
   glb_sta_eta_v_ptRes_1_sigma__305->GetXaxis()->SetTitleOffset(0.9);
   glb_sta_eta_v_ptRes_1_sigma__305->GetXaxis()->SetTitleFont(42);
   glb_sta_eta_v_ptRes_1_sigma__305->GetYaxis()->SetTitle("#sigma(q/p_{T STA} - q/p_{T GLB}) [1/GeV]");
   glb_sta_eta_v_ptRes_1_sigma__305->GetYaxis()->SetLabelFont(42);
   glb_sta_eta_v_ptRes_1_sigma__305->GetYaxis()->SetLabelOffset(0.007);
   glb_sta_eta_v_ptRes_1_sigma__305->GetYaxis()->SetLabelSize(0.05);
   glb_sta_eta_v_ptRes_1_sigma__305->GetYaxis()->SetTitleSize(0.06);
   glb_sta_eta_v_ptRes_1_sigma__305->GetYaxis()->SetTitleOffset(1.6);
   glb_sta_eta_v_ptRes_1_sigma__305->GetYaxis()->SetTitleFont(42);
   glb_sta_eta_v_ptRes_1_sigma__305->GetZaxis()->SetLabelFont(42);
   glb_sta_eta_v_ptRes_1_sigma__305->GetZaxis()->SetLabelOffset(0.007);
   glb_sta_eta_v_ptRes_1_sigma__305->GetZaxis()->SetLabelSize(0.05);
   glb_sta_eta_v_ptRes_1_sigma__305->GetZaxis()->SetTitleSize(0.06);
   glb_sta_eta_v_ptRes_1_sigma__305->GetZaxis()->SetTitleOffset(1);
   glb_sta_eta_v_ptRes_1_sigma__305->GetZaxis()->SetTitleFont(42);
   glb_sta_eta_v_ptRes_1_sigma__305->Draw("same");
   
   TH1F *glb_sta_eta_v_ptRes_2_sigma__306 = new TH1F("glb_sta_eta_v_ptRes_2_sigma__306","",16,-2.4,2.4);
   glb_sta_eta_v_ptRes_2_sigma__306->SetBinContent(1,0.005810674);
   glb_sta_eta_v_ptRes_2_sigma__306->SetBinContent(2,0.003992864);
   glb_sta_eta_v_ptRes_2_sigma__306->SetBinContent(3,0.00303375);
   glb_sta_eta_v_ptRes_2_sigma__306->SetBinContent(4,0.003097911);
   glb_sta_eta_v_ptRes_2_sigma__306->SetBinContent(5,0.002941821);
   glb_sta_eta_v_ptRes_2_sigma__306->SetBinContent(6,0.002298651);
   glb_sta_eta_v_ptRes_2_sigma__306->SetBinContent(7,0.002013122);
   glb_sta_eta_v_ptRes_2_sigma__306->SetBinContent(8,0.002022442);
   glb_sta_eta_v_ptRes_2_sigma__306->SetBinContent(9,0.001951217);
   glb_sta_eta_v_ptRes_2_sigma__306->SetBinContent(10,0.002008736);
   glb_sta_eta_v_ptRes_2_sigma__306->SetBinContent(11,0.00210843);
   glb_sta_eta_v_ptRes_2_sigma__306->SetBinContent(12,0.002714396);
   glb_sta_eta_v_ptRes_2_sigma__306->SetBinContent(13,0.003262489);
   glb_sta_eta_v_ptRes_2_sigma__306->SetBinContent(14,0.002992219);
   glb_sta_eta_v_ptRes_2_sigma__306->SetBinContent(15,0.003547942);
   glb_sta_eta_v_ptRes_2_sigma__306->SetBinContent(16,0.005193149);
   glb_sta_eta_v_ptRes_2_sigma__306->SetBinError(1,8.870126e-05);
   glb_sta_eta_v_ptRes_2_sigma__306->SetBinError(2,1.972466e-05);
   glb_sta_eta_v_ptRes_2_sigma__306->SetBinError(3,1.217453e-05);
   glb_sta_eta_v_ptRes_2_sigma__306->SetBinError(4,1.192288e-05);
   glb_sta_eta_v_ptRes_2_sigma__306->SetBinError(5,9.982224e-06);
   glb_sta_eta_v_ptRes_2_sigma__306->SetBinError(6,7.923605e-06);
   glb_sta_eta_v_ptRes_2_sigma__306->SetBinError(7,7.476279e-06);
   glb_sta_eta_v_ptRes_2_sigma__306->SetBinError(8,7.818319e-06);
   glb_sta_eta_v_ptRes_2_sigma__306->SetBinError(9,6.968509e-06);
   glb_sta_eta_v_ptRes_2_sigma__306->SetBinError(10,5.210061e-06);
   glb_sta_eta_v_ptRes_2_sigma__306->SetBinError(11,6.033009e-06);
   glb_sta_eta_v_ptRes_2_sigma__306->SetBinError(12,1.006784e-05);
   glb_sta_eta_v_ptRes_2_sigma__306->SetBinError(13,1.422478e-05);
   glb_sta_eta_v_ptRes_2_sigma__306->SetBinError(14,1.126904e-05);
   glb_sta_eta_v_ptRes_2_sigma__306->SetBinError(15,2.146976e-05);
   glb_sta_eta_v_ptRes_2_sigma__306->SetBinError(16,5.177256e-05);
   glb_sta_eta_v_ptRes_2_sigma__306->SetMinimum(0);
   glb_sta_eta_v_ptRes_2_sigma__306->SetMaximum(0.008);
   glb_sta_eta_v_ptRes_2_sigma__306->SetEntries(16);

   ci = TColor::GetColor("#006600");
   glb_sta_eta_v_ptRes_2_sigma__306->SetLineColor(ci);
   glb_sta_eta_v_ptRes_2_sigma__306->SetLineStyle(0);

   ci = TColor::GetColor("#006600");
   glb_sta_eta_v_ptRes_2_sigma__306->SetMarkerColor(ci);
   glb_sta_eta_v_ptRes_2_sigma__306->SetMarkerStyle(8);
   glb_sta_eta_v_ptRes_2_sigma__306->SetMarkerSize(0.8);
   glb_sta_eta_v_ptRes_2_sigma__306->GetXaxis()->SetTitle("#eta");
   glb_sta_eta_v_ptRes_2_sigma__306->GetXaxis()->SetLabelFont(42);
   glb_sta_eta_v_ptRes_2_sigma__306->GetXaxis()->SetLabelOffset(0.007);
   glb_sta_eta_v_ptRes_2_sigma__306->GetXaxis()->SetLabelSize(0.05);
   glb_sta_eta_v_ptRes_2_sigma__306->GetXaxis()->SetTitleSize(0.06);
   glb_sta_eta_v_ptRes_2_sigma__306->GetXaxis()->SetTitleOffset(0.9);
   glb_sta_eta_v_ptRes_2_sigma__306->GetXaxis()->SetTitleFont(42);
   glb_sta_eta_v_ptRes_2_sigma__306->GetYaxis()->SetTitle("#sigma(q/p_{T STA} - q/p_{T GLB}) [1/GeV]");
   glb_sta_eta_v_ptRes_2_sigma__306->GetYaxis()->SetLabelFont(42);
   glb_sta_eta_v_ptRes_2_sigma__306->GetYaxis()->SetLabelOffset(0.007);
   glb_sta_eta_v_ptRes_2_sigma__306->GetYaxis()->SetLabelSize(0.05);
   glb_sta_eta_v_ptRes_2_sigma__306->GetYaxis()->SetTitleSize(0.06);
   glb_sta_eta_v_ptRes_2_sigma__306->GetYaxis()->SetTitleOffset(1.6);
   glb_sta_eta_v_ptRes_2_sigma__306->GetYaxis()->SetTitleFont(42);
   glb_sta_eta_v_ptRes_2_sigma__306->GetZaxis()->SetLabelFont(42);
   glb_sta_eta_v_ptRes_2_sigma__306->GetZaxis()->SetLabelOffset(0.007);
   glb_sta_eta_v_ptRes_2_sigma__306->GetZaxis()->SetLabelSize(0.05);
   glb_sta_eta_v_ptRes_2_sigma__306->GetZaxis()->SetTitleSize(0.06);
   glb_sta_eta_v_ptRes_2_sigma__306->GetZaxis()->SetTitleOffset(1);
   glb_sta_eta_v_ptRes_2_sigma__306->GetZaxis()->SetTitleFont(42);
   glb_sta_eta_v_ptRes_2_sigma__306->Draw("same");
   
   TLegend *leg = new TLegend(0.6,0.78,0.93,0.88,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.03);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("glb_sta_eta_v_ptRes_0_sigma","2016 Startup Geom.","lep");

   ci = TColor::GetColor("#3333ff");
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#3333ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(62);
   entry=leg->AddEntry("glb_sta_eta_v_ptRes_1_sigma","2016 Early Geom.","lep");

   ci = TColor::GetColor("#ff3333");
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff3333");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(0.8);
   entry->SetTextFont(62);
   entry=leg->AddEntry("glb_sta_eta_v_ptRes_2_sigma","2016 Legacy Geom.","lep");

   ci = TColor::GetColor("#006600");
   entry->SetLineColor(ci);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#006600");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
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
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
