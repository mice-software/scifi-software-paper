#!/usr/bin/env python

import os
import sys
import ROOT

OUTPUT_DIRECTORY = "."
IN_FILE_NAME = "resolution_reqCluster_helix_complete_10MeVbins.root"

ROOT.gROOT.SetBatch( True )
ROOT.gStyle.SetLabelSize( 0.04, 'X' )
ROOT.gStyle.SetLabelSize( 0.04, 'Y' )
ROOT.gStyle.SetLabelSize( 0.04, 'Z' )
ROOT.gStyle.SetTitleXSize( 0.05 )
ROOT.gStyle.SetTitleYSize( 0.05 )
ROOT.gStyle.SetPadTopMargin( 0.08 )
ROOT.gStyle.SetPadBottomMargin( 0.13 )
ROOT.gStyle.SetPadLeftMargin( 0.13 )
ROOT.gStyle.SetPadRightMargin( 0.07 )
ROOT.gStyle.SetOptTitle(0)
ROOT.gStyle.SetOptStat(1110)
ROOT.gStyle.SetStatX(0.93)
ROOT.gStyle.SetStatY(0.92)
ROOT.gStyle.SetStatW(0.25)
ROOT.gStyle.SetStatH(0.20)

def main(infilename):
    """ Regenerate the plots for the scifi software paper """
    make_efficency_plots(infilename)

def make_efficency_plots(infilename):
    for tracker in [ 'upstream', 'downstream' ] :
        infile = ROOT.TFile(infilename)
        outfilename = os.path.join(OUTPUT_DIRECTORY, \
          "{0}_track_efficiency.pdf".format(tracker))
        canvas = ROOT.TCanvas("temp_canvas")
        graph = infile.Get('{0}/track_efficiency'.format(tracker))
        graph.Draw()
        canvas.SetRightMargin(0.13)
        ROOT.gPad.Update()
        graph.GetPaintedHistogram().GetXaxis().SetRangeUser(140.0, 250.0)
        graph.GetPaintedHistogram().GetYaxis().SetRangeUser(0.0, 100.0)
        graph.GetPaintedHistogram().GetZaxis().SetRangeUser(0.9, 1.0)
        graph.SetTitle(";p_{z}   [MeV/c];p_{t}   [MeV/c]")
        graph.SetDrawOption('colz')
        canvas.SaveAs(outfilename, 'pdf')

if __name__ == "__main__":
    args = sys.argv
    args.pop(0)
    main(IN_FILE_NAME)
