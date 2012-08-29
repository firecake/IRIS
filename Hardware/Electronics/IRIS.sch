<?xml version="1.0" encoding="utf-8"?>
<!DOCTYPE eagle SYSTEM "eagle.dtd">
<eagle version="6.1">
<drawing>
<settings>
<setting alwaysvectorfont="no"/>
<setting verticaltext="up"/>
</settings>
<grid distance="0.1" unitdist="inch" unit="inch" style="lines" multiple="1" display="no" altdistance="0.01" altunitdist="inch" altunit="inch"/>
<layers>
<layer number="1" name="Top" color="4" fill="1" visible="no" active="no"/>
<layer number="2" name="Route2" color="1" fill="3" visible="no" active="no"/>
<layer number="3" name="Route3" color="4" fill="3" visible="no" active="no"/>
<layer number="4" name="Route4" color="1" fill="4" visible="no" active="no"/>
<layer number="5" name="Route5" color="4" fill="4" visible="no" active="no"/>
<layer number="6" name="Route6" color="1" fill="8" visible="no" active="no"/>
<layer number="7" name="Route7" color="4" fill="8" visible="no" active="no"/>
<layer number="8" name="Route8" color="1" fill="2" visible="no" active="no"/>
<layer number="9" name="Route9" color="4" fill="2" visible="no" active="no"/>
<layer number="10" name="Route10" color="1" fill="7" visible="no" active="no"/>
<layer number="11" name="Route11" color="4" fill="7" visible="no" active="no"/>
<layer number="12" name="Route12" color="1" fill="5" visible="no" active="no"/>
<layer number="13" name="Route13" color="4" fill="5" visible="no" active="no"/>
<layer number="14" name="Route14" color="1" fill="6" visible="no" active="no"/>
<layer number="15" name="Route15" color="4" fill="6" visible="no" active="no"/>
<layer number="16" name="Bottom" color="1" fill="1" visible="no" active="no"/>
<layer number="17" name="Pads" color="2" fill="1" visible="no" active="no"/>
<layer number="18" name="Vias" color="2" fill="1" visible="no" active="no"/>
<layer number="19" name="Unrouted" color="6" fill="1" visible="no" active="no"/>
<layer number="20" name="Dimension" color="15" fill="1" visible="no" active="no"/>
<layer number="21" name="tPlace" color="7" fill="1" visible="no" active="no"/>
<layer number="22" name="bPlace" color="7" fill="1" visible="no" active="no"/>
<layer number="23" name="tOrigins" color="15" fill="1" visible="no" active="no"/>
<layer number="24" name="bOrigins" color="15" fill="1" visible="no" active="no"/>
<layer number="25" name="tNames" color="7" fill="1" visible="no" active="no"/>
<layer number="26" name="bNames" color="7" fill="1" visible="no" active="no"/>
<layer number="27" name="tValues" color="7" fill="1" visible="no" active="no"/>
<layer number="28" name="bValues" color="7" fill="1" visible="no" active="no"/>
<layer number="29" name="tStop" color="7" fill="3" visible="no" active="no"/>
<layer number="30" name="bStop" color="7" fill="6" visible="no" active="no"/>
<layer number="31" name="tCream" color="7" fill="4" visible="no" active="no"/>
<layer number="32" name="bCream" color="7" fill="5" visible="no" active="no"/>
<layer number="33" name="tFinish" color="6" fill="3" visible="no" active="no"/>
<layer number="34" name="bFinish" color="6" fill="6" visible="no" active="no"/>
<layer number="35" name="tGlue" color="7" fill="4" visible="no" active="no"/>
<layer number="36" name="bGlue" color="7" fill="5" visible="no" active="no"/>
<layer number="37" name="tTest" color="7" fill="1" visible="no" active="no"/>
<layer number="38" name="bTest" color="7" fill="1" visible="no" active="no"/>
<layer number="39" name="tKeepout" color="4" fill="11" visible="no" active="no"/>
<layer number="40" name="bKeepout" color="1" fill="11" visible="no" active="no"/>
<layer number="41" name="tRestrict" color="4" fill="10" visible="no" active="no"/>
<layer number="42" name="bRestrict" color="1" fill="10" visible="no" active="no"/>
<layer number="43" name="vRestrict" color="2" fill="10" visible="no" active="no"/>
<layer number="44" name="Drills" color="7" fill="1" visible="no" active="no"/>
<layer number="45" name="Holes" color="7" fill="1" visible="no" active="no"/>
<layer number="46" name="Milling" color="3" fill="1" visible="no" active="no"/>
<layer number="47" name="Measures" color="7" fill="1" visible="no" active="no"/>
<layer number="48" name="Document" color="7" fill="1" visible="no" active="no"/>
<layer number="49" name="Reference" color="7" fill="1" visible="no" active="no"/>
<layer number="51" name="tDocu" color="7" fill="1" visible="no" active="no"/>
<layer number="52" name="bDocu" color="7" fill="1" visible="no" active="no"/>
<layer number="91" name="Nets" color="2" fill="1" visible="yes" active="yes"/>
<layer number="92" name="Busses" color="1" fill="1" visible="yes" active="yes"/>
<layer number="93" name="Pins" color="2" fill="1" visible="no" active="yes"/>
<layer number="94" name="Symbols" color="4" fill="1" visible="yes" active="yes"/>
<layer number="95" name="Names" color="7" fill="1" visible="yes" active="yes"/>
<layer number="96" name="Values" color="7" fill="1" visible="yes" active="yes"/>
<layer number="97" name="Info" color="7" fill="1" visible="yes" active="yes"/>
<layer number="98" name="Guide" color="6" fill="1" visible="yes" active="yes"/>
</layers>
<schematic xreflabel="%F%N/%S.%C%R" xrefpart="/%S.%C%R">
<libraries>
<library name="IRIS">
<packages>
<package name="TQFP64">
<description>&lt;B&gt;Thin Plasic Quad Flat Package&lt;/B&gt;&lt;p&gt;
Updated from atml.lbr 17.01.2005 alf@cadsoft.de</description>
<smd name="P$1" x="-5.5" y="3.75" dx="0.22" dy="1.2" layer="1" rot="R90"/>
<smd name="P$2" x="-5.5" y="3.25" dx="0.22" dy="1.2" layer="1" rot="R90"/>
<smd name="P$3" x="-5.5" y="2.75" dx="0.22" dy="1.2" layer="1" rot="R90"/>
<smd name="P$4" x="-5.5" y="2.25" dx="0.22" dy="1.2" layer="1" rot="R90"/>
<smd name="P$5" x="-5.5" y="1.75" dx="0.22" dy="1.2" layer="1" rot="R90"/>
<smd name="P$6" x="-5.5" y="1.25" dx="0.22" dy="1.2" layer="1" rot="R90"/>
<smd name="P$7" x="-5.5" y="0.75" dx="0.22" dy="1.2" layer="1" rot="R90"/>
<smd name="P$8" x="-5.5" y="0.25" dx="0.22" dy="1.2" layer="1" rot="R90"/>
<smd name="P$9" x="-5.5" y="-0.25" dx="0.22" dy="1.2" layer="1" rot="R90"/>
<smd name="P$10" x="-5.5" y="-0.75" dx="0.22" dy="1.2" layer="1" rot="R90"/>
<smd name="P$11" x="-5.5" y="-1.25" dx="0.22" dy="1.2" layer="1" rot="R90"/>
<smd name="P$12" x="-5.5" y="-1.75" dx="0.22" dy="1.2" layer="1" rot="R90"/>
<smd name="P$13" x="-5.5" y="-2.25" dx="0.22" dy="1.2" layer="1" rot="R90"/>
<smd name="P$14" x="-5.5" y="-2.75" dx="0.22" dy="1.2" layer="1" rot="R90"/>
<smd name="P$15" x="-5.5" y="-3.25" dx="0.22" dy="1.2" layer="1" rot="R90"/>
<smd name="P$16" x="-5.5" y="-3.75" dx="0.22" dy="1.2" layer="1" rot="R90"/>
<smd name="P$17" x="-3.75" y="-5.5" dx="0.22" dy="1.2" layer="1" rot="R180"/>
<smd name="P$18" x="-3.25" y="-5.5" dx="0.22" dy="1.2" layer="1" rot="R180"/>
<smd name="P$19" x="-2.75" y="-5.5" dx="0.22" dy="1.2" layer="1" rot="R180"/>
<smd name="P$20" x="-2.25" y="-5.5" dx="0.22" dy="1.2" layer="1" rot="R180"/>
<smd name="P$21" x="-1.75" y="-5.5" dx="0.22" dy="1.2" layer="1" rot="R180"/>
<smd name="P$22" x="-1.25" y="-5.5" dx="0.22" dy="1.2" layer="1" rot="R180"/>
<smd name="P$23" x="-0.75" y="-5.5" dx="0.22" dy="1.2" layer="1" rot="R180"/>
<smd name="P$24" x="-0.25" y="-5.5" dx="0.22" dy="1.2" layer="1" rot="R180"/>
<smd name="P$25" x="0.25" y="-5.5" dx="0.22" dy="1.2" layer="1" rot="R180"/>
<smd name="P$26" x="0.75" y="-5.5" dx="0.22" dy="1.2" layer="1" rot="R180"/>
<smd name="P$27" x="1.25" y="-5.5" dx="0.22" dy="1.2" layer="1" rot="R180"/>
<smd name="P$28" x="1.75" y="-5.5" dx="0.22" dy="1.2" layer="1" rot="R180"/>
<smd name="P$29" x="2.25" y="-5.5" dx="0.22" dy="1.2" layer="1" rot="R180"/>
<smd name="P$30" x="2.75" y="-5.5" dx="0.22" dy="1.2" layer="1" rot="R180"/>
<smd name="P$31" x="3.25" y="-5.5" dx="0.22" dy="1.2" layer="1" rot="R180"/>
<smd name="P$32" x="3.75" y="-5.5" dx="0.22" dy="1.2" layer="1" rot="R180"/>
<smd name="P$33" x="5.5" y="-3.75" dx="0.22" dy="1.2" layer="1" rot="R270"/>
<smd name="P$34" x="5.5" y="-3.25" dx="0.22" dy="1.2" layer="1" rot="R270"/>
<smd name="P$35" x="5.5" y="-2.75" dx="0.22" dy="1.2" layer="1" rot="R270"/>
<smd name="P$36" x="5.5" y="-2.25" dx="0.22" dy="1.2" layer="1" rot="R270"/>
<smd name="P$37" x="5.5" y="-1.75" dx="0.22" dy="1.2" layer="1" rot="R270"/>
<smd name="P$38" x="5.5" y="-1.25" dx="0.22" dy="1.2" layer="1" rot="R270"/>
<smd name="P$39" x="5.5" y="-0.75" dx="0.22" dy="1.2" layer="1" rot="R270"/>
<smd name="P$40" x="5.5" y="-0.25" dx="0.22" dy="1.2" layer="1" rot="R270"/>
<smd name="P$41" x="5.5" y="0.25" dx="0.22" dy="1.2" layer="1" rot="R270"/>
<smd name="P$42" x="5.5" y="0.75" dx="0.22" dy="1.2" layer="1" rot="R270"/>
<smd name="P$43" x="5.5" y="1.25" dx="0.22" dy="1.2" layer="1" rot="R270"/>
<smd name="P$44" x="5.5" y="1.75" dx="0.22" dy="1.2" layer="1" rot="R270"/>
<smd name="P$45" x="5.5" y="2.25" dx="0.22" dy="1.2" layer="1" rot="R270"/>
<smd name="P$46" x="5.5" y="2.75" dx="0.22" dy="1.2" layer="1" rot="R270"/>
<smd name="P$47" x="5.5" y="3.25" dx="0.22" dy="1.2" layer="1" rot="R270"/>
<smd name="P$48" x="5.5" y="3.75" dx="0.22" dy="1.2" layer="1" rot="R270"/>
<smd name="P$49" x="3.75" y="5.5" dx="0.22" dy="1.2" layer="1"/>
<smd name="P$50" x="3.25" y="5.5" dx="0.22" dy="1.2" layer="1"/>
<smd name="P$51" x="2.75" y="5.5" dx="0.22" dy="1.2" layer="1"/>
<smd name="P$52" x="2.25" y="5.5" dx="0.22" dy="1.2" layer="1"/>
<smd name="P$53" x="1.75" y="5.5" dx="0.22" dy="1.2" layer="1"/>
<smd name="P$54" x="1.25" y="5.5" dx="0.22" dy="1.2" layer="1"/>
<smd name="P$55" x="0.75" y="5.5" dx="0.22" dy="1.2" layer="1"/>
<smd name="P$56" x="0.25" y="5.5" dx="0.22" dy="1.2" layer="1"/>
<smd name="P$57" x="-0.25" y="5.5" dx="0.22" dy="1.2" layer="1"/>
<smd name="P$58" x="-0.75" y="5.5" dx="0.22" dy="1.2" layer="1"/>
<smd name="P$59" x="-1.25" y="5.5" dx="0.22" dy="1.2" layer="1"/>
<smd name="P$60" x="-1.75" y="5.5" dx="0.22" dy="1.2" layer="1"/>
<smd name="P$61" x="-2.25" y="5.5" dx="0.22" dy="1.2" layer="1"/>
<smd name="P$62" x="-2.75" y="5.5" dx="0.22" dy="1.2" layer="1"/>
<smd name="P$63" x="-3.25" y="5.5" dx="0.22" dy="1.2" layer="1"/>
<smd name="P$64" x="-3.75" y="5.5" dx="0.22" dy="1.2" layer="1"/>
<wire x1="-5" y1="4.25" x2="-5" y2="-5" width="0.127" layer="21"/>
<wire x1="-5" y1="-5" x2="5" y2="-5" width="0.127" layer="21"/>
<wire x1="5" y1="-5" x2="5" y2="5" width="0.127" layer="21"/>
<wire x1="5" y1="5" x2="-4.25" y2="5" width="0.127" layer="21"/>
<wire x1="-4.25" y1="5" x2="-5" y2="4.25" width="0.127" layer="21"/>
<text x="-1.5" y="-1.25" size="0.6096" layer="27">&gt;VALUE</text>
<text x="-1.5" y="0.5" size="0.6096" layer="25">&gt;NAME</text>
</package>
<package name="TCD1304AP">
<pad name="P$1" x="-12.7" y="-5.08" drill="0.6"/>
<pad name="P$2" x="-10.16" y="-5.08" drill="0.6"/>
<pad name="P$3" x="-7.62" y="-5.08" drill="0.6"/>
<pad name="P$4" x="-5.08" y="-5.08" drill="0.6"/>
<pad name="P$5" x="-2.54" y="-5.08" drill="0.6"/>
<pad name="P$6" x="0" y="-5.08" drill="0.6"/>
<pad name="P$7" x="2.54" y="-5.08" drill="0.6"/>
<pad name="P$8" x="5.08" y="-5.08" drill="0.6"/>
<pad name="P$9" x="7.62" y="-5.08" drill="0.6"/>
<pad name="P$10" x="10.16" y="-5.08" drill="0.6"/>
<pad name="P$11" x="12.7" y="-5.08" drill="0.6"/>
<pad name="P$12" x="12.7" y="5.08" drill="0.6"/>
<pad name="P$13" x="10.16" y="5.08" drill="0.6"/>
<pad name="P$14" x="7.62" y="5.08" drill="0.6"/>
<pad name="P$15" x="5.08" y="5.08" drill="0.6"/>
<pad name="P$16" x="2.54" y="5.08" drill="0.6"/>
<pad name="P$17" x="0" y="5.08" drill="0.6"/>
<pad name="P$18" x="-2.54" y="5.08" drill="0.6"/>
<pad name="P$19" x="-5.08" y="5.08" drill="0.6"/>
<pad name="P$20" x="-7.62" y="5.08" drill="0.6"/>
<pad name="P$21" x="-10.16" y="5.08" drill="0.6"/>
<pad name="P$22" x="-12.7" y="5.08" drill="0.6"/>
<wire x1="-20.32" y1="5.08" x2="20.32" y2="5.08" width="0.127" layer="21"/>
<wire x1="20.32" y1="5.08" x2="20.32" y2="-5.08" width="0.127" layer="21"/>
<wire x1="20.32" y1="-5.08" x2="-20.32" y2="-5.08" width="0.127" layer="21"/>
<wire x1="-20.32" y1="-5.08" x2="-20.32" y2="-1.27" width="0.127" layer="21"/>
<wire x1="-20.32" y1="-1.27" x2="-20.32" y2="1.27" width="0.127" layer="21"/>
<wire x1="-20.32" y1="1.27" x2="-20.32" y2="5.08" width="0.127" layer="21"/>
<wire x1="-20.32" y1="1.27" x2="-20.32" y2="-1.27" width="0.127" layer="21" curve="-180"/>
<wire x1="-17.78" y1="3.81" x2="17.78" y2="3.81" width="0.127" layer="21"/>
<wire x1="17.78" y1="3.81" x2="17.78" y2="-3.81" width="0.127" layer="21"/>
<wire x1="17.78" y1="-3.81" x2="-17.78" y2="-3.81" width="0.127" layer="21"/>
<wire x1="-17.78" y1="-3.81" x2="-17.78" y2="3.81" width="0.127" layer="21"/>
<wire x1="-16.51" y1="0.635" x2="16.51" y2="0.635" width="0.127" layer="21"/>
<wire x1="16.51" y1="0.635" x2="16.51" y2="-0.635" width="0.127" layer="21"/>
<wire x1="16.51" y1="-0.635" x2="-16.51" y2="-0.635" width="0.127" layer="21"/>
<wire x1="-16.51" y1="-0.635" x2="-16.51" y2="0.635" width="0.127" layer="21"/>
</package>
</packages>
<symbols>
<symbol name="AT32UC3C">
<pin name="PA00" x="-33.02" y="17.78" visible="pin" length="middle"/>
<pin name="PA01" x="-33.02" y="15.24" visible="pin" length="middle"/>
<pin name="PA02" x="-33.02" y="12.7" visible="pin" length="middle"/>
<pin name="PA03" x="-33.02" y="10.16" visible="pin" length="middle"/>
<pin name="VDDIO1" x="5.08" y="30.48" visible="pin" length="middle" rot="R270"/>
<pin name="GNDIO1" x="-5.08" y="-73.66" visible="pin" length="middle" rot="R90"/>
<pin name="PA04" x="-33.02" y="7.62" visible="pin" length="middle"/>
<pin name="PA05" x="-33.02" y="5.08" visible="pin" length="middle"/>
<pin name="PA06" x="-33.02" y="2.54" visible="pin" length="middle"/>
<pin name="PA07" x="-33.02" y="0" visible="pin" length="middle"/>
<pin name="PA08" x="-33.02" y="-2.54" visible="pin" length="middle"/>
<pin name="PA09" x="-33.02" y="-5.08" visible="pin" length="middle"/>
<pin name="PA16" x="-33.02" y="-7.62" visible="pin" length="middle"/>
<pin name="ADCREFP" x="-33.02" y="-60.96" visible="pin" length="middle"/>
<pin name="ADCREFN" x="-33.02" y="-63.5" visible="pin" length="middle"/>
<pin name="PA19" x="-33.02" y="-10.16" visible="pin" length="middle"/>
<pin name="GNDANA" x="2.54" y="-73.66" visible="pin" length="middle" rot="R90"/>
<pin name="VDDANA" x="7.62" y="30.48" visible="pin" length="middle" rot="R270"/>
<pin name="PA20" x="-33.02" y="-12.7" visible="pin" length="middle"/>
<pin name="PA21" x="-33.02" y="-15.24" visible="pin" length="middle"/>
<pin name="PA22" x="-33.02" y="-17.78" visible="pin" length="middle"/>
<pin name="PA23" x="-33.02" y="-20.32" visible="pin" length="middle"/>
<pin name="VBUS" x="35.56" y="-55.88" visible="pin" length="middle" rot="R180"/>
<pin name="DM" x="35.56" y="-58.42" visible="pin" length="middle" rot="R180"/>
<pin name="DP" x="35.56" y="-60.96" visible="pin" length="middle" rot="R180"/>
<pin name="GNDPLL" x="7.62" y="-73.66" visible="pin" length="middle" rot="R90"/>
<pin name="VDDIN_5" x="-2.54" y="30.48" visible="pin" length="middle" rot="R270"/>
<pin name="VDDIN_33" x="-5.08" y="30.48" visible="pin" length="middle" rot="R270"/>
<pin name="VDDCORE" x="-7.62" y="30.48" visible="pin" length="middle" rot="R270"/>
<pin name="GNDCORE" x="5.08" y="-73.66" visible="pin" length="middle" rot="R90"/>
<pin name="PB30" x="-33.02" y="-33.02" visible="pin" length="middle"/>
<pin name="PB31" x="-33.02" y="-35.56" visible="pin" length="middle"/>
<pin name="PC02" x="35.56" y="17.78" visible="pin" length="middle" rot="R180"/>
<pin name="PC03" x="35.56" y="15.24" visible="pin" length="middle" rot="R180"/>
<pin name="VDDIO2" x="2.54" y="30.48" visible="pin" length="middle" rot="R270"/>
<pin name="GNDIO2" x="-2.54" y="-73.66" visible="pin" length="middle" rot="R90"/>
<pin name="PC04" x="35.56" y="12.7" visible="pin" length="middle" rot="R180"/>
<pin name="PC05" x="35.56" y="10.16" visible="pin" length="middle" rot="R180"/>
<pin name="PC15" x="35.56" y="7.62" visible="pin" length="middle" rot="R180"/>
<pin name="PC16" x="35.56" y="5.08" visible="pin" length="middle" rot="R180"/>
<pin name="PC17" x="35.56" y="2.54" visible="pin" length="middle" rot="R180"/>
<pin name="PC18" x="35.56" y="0" visible="pin" length="middle" rot="R180"/>
<pin name="PC19" x="35.56" y="-2.54" visible="pin" length="middle" rot="R180"/>
<pin name="PC20" x="35.56" y="-5.08" visible="pin" length="middle" rot="R180"/>
<pin name="PC21" x="35.56" y="-7.62" visible="pin" length="middle" rot="R180"/>
<pin name="PC22" x="35.56" y="-10.16" visible="pin" length="middle" rot="R180"/>
<pin name="PD00" x="35.56" y="-17.78" visible="pin" length="middle" rot="R180"/>
<pin name="PD01" x="35.56" y="-20.32" visible="pin" length="middle" rot="R180"/>
<pin name="PD02" x="35.56" y="-22.86" visible="pin" length="middle" rot="R180"/>
<pin name="PD03" x="35.56" y="-25.4" visible="pin" length="middle" rot="R180"/>
<pin name="VDDIO3" x="0" y="30.48" visible="pin" length="middle" rot="R270"/>
<pin name="GNDIO3" x="0" y="-73.66" visible="pin" length="middle" rot="R90"/>
<pin name="PD11" x="35.56" y="-27.94" visible="pin" length="middle" rot="R180"/>
<pin name="PD12" x="35.56" y="-30.48" visible="pin" length="middle" rot="R180"/>
<pin name="PD13" x="35.56" y="-33.02" visible="pin" length="middle" rot="R180"/>
<pin name="PD14" x="35.56" y="-35.56" visible="pin" length="middle" rot="R180"/>
<pin name="PD21" x="35.56" y="-38.1" visible="pin" length="middle" rot="R180"/>
<pin name="PD27" x="35.56" y="-40.64" visible="pin" length="middle" rot="R180"/>
<pin name="PD28" x="35.56" y="-43.18" visible="pin" length="middle" rot="R180"/>
<pin name="PD29" x="35.56" y="-45.72" visible="pin" length="middle" rot="R180"/>
<pin name="PD30" x="35.56" y="-48.26" visible="pin" length="middle" rot="R180"/>
<pin name="PB00" x="-33.02" y="-27.94" visible="pin" length="middle"/>
<pin name="PB01" x="-33.02" y="-30.48" visible="pin" length="middle"/>
<pin name="RESET_N" x="35.56" y="22.86" visible="pin" length="middle" rot="R180"/>
<wire x1="-27.94" y1="25.4" x2="30.48" y2="25.4" width="0.254" layer="94"/>
<wire x1="30.48" y1="25.4" x2="30.48" y2="-68.58" width="0.254" layer="94"/>
<wire x1="30.48" y1="-68.58" x2="-27.94" y2="-68.58" width="0.254" layer="94"/>
<wire x1="-27.94" y1="-68.58" x2="-27.94" y2="25.4" width="0.254" layer="94"/>
<text x="-27.94" y="25.4" size="1.778" layer="94">&gt;NAME</text>
<text x="-2.54" y="-17.78" size="1.778" layer="94">&gt;VALUE</text>
</symbol>
<symbol name="TCD1304AP">
<pin name="VDD" x="-10.16" y="7.62" visible="pin" length="middle"/>
<pin name="VAD" x="-10.16" y="5.08" visible="pin" length="middle"/>
<pin name="ICG" x="-10.16" y="2.54" visible="pin" length="middle"/>
<pin name="OM" x="-10.16" y="0" visible="pin" length="middle"/>
<pin name="SH" x="-10.16" y="-2.54" visible="pin" length="middle"/>
<pin name="SS" x="-10.16" y="-5.08" visible="pin" length="middle"/>
<pin name="OS" x="-10.16" y="-7.62" visible="pin" length="middle"/>
<wire x1="-5.08" y1="10.16" x2="-5.08" y2="-10.16" width="0.254" layer="94"/>
<wire x1="-5.08" y1="-10.16" x2="5.08" y2="-10.16" width="0.254" layer="94"/>
<wire x1="5.08" y1="-10.16" x2="5.08" y2="10.16" width="0.254" layer="94"/>
<wire x1="5.08" y1="10.16" x2="-5.08" y2="10.16" width="0.254" layer="94"/>
<text x="-5.08" y="10.16" size="1.27" layer="94">&gt;NAME</text>
<text x="-5.08" y="-12.7" size="1.27" layer="94">&gt;VALUE</text>
</symbol>
</symbols>
<devicesets>
<deviceset name="AT32UC3C">
<gates>
<gate name="G$1" symbol="AT32UC3C" x="0" y="2.54"/>
</gates>
<devices>
<device name="" package="TQFP64">
<connects>
<connect gate="G$1" pin="ADCREFN" pad="P$15"/>
<connect gate="G$1" pin="ADCREFP" pad="P$14"/>
<connect gate="G$1" pin="DM" pad="P$24"/>
<connect gate="G$1" pin="DP" pad="P$25"/>
<connect gate="G$1" pin="GNDANA" pad="P$17"/>
<connect gate="G$1" pin="GNDCORE" pad="P$30"/>
<connect gate="G$1" pin="GNDIO1" pad="P$6"/>
<connect gate="G$1" pin="GNDIO2" pad="P$36"/>
<connect gate="G$1" pin="GNDIO3" pad="P$52"/>
<connect gate="G$1" pin="GNDPLL" pad="P$26"/>
<connect gate="G$1" pin="PA00" pad="P$1"/>
<connect gate="G$1" pin="PA01" pad="P$2"/>
<connect gate="G$1" pin="PA02" pad="P$3"/>
<connect gate="G$1" pin="PA03" pad="P$4"/>
<connect gate="G$1" pin="PA04" pad="P$7"/>
<connect gate="G$1" pin="PA05" pad="P$8"/>
<connect gate="G$1" pin="PA06" pad="P$9"/>
<connect gate="G$1" pin="PA07" pad="P$10"/>
<connect gate="G$1" pin="PA08" pad="P$11"/>
<connect gate="G$1" pin="PA09" pad="P$12"/>
<connect gate="G$1" pin="PA16" pad="P$13"/>
<connect gate="G$1" pin="PA19" pad="P$16"/>
<connect gate="G$1" pin="PA20" pad="P$19"/>
<connect gate="G$1" pin="PA21" pad="P$20"/>
<connect gate="G$1" pin="PA22" pad="P$21"/>
<connect gate="G$1" pin="PA23" pad="P$22"/>
<connect gate="G$1" pin="PB00" pad="P$62"/>
<connect gate="G$1" pin="PB01" pad="P$63"/>
<connect gate="G$1" pin="PB30" pad="P$31"/>
<connect gate="G$1" pin="PB31" pad="P$32"/>
<connect gate="G$1" pin="PC02" pad="P$33"/>
<connect gate="G$1" pin="PC03" pad="P$34"/>
<connect gate="G$1" pin="PC04" pad="P$37"/>
<connect gate="G$1" pin="PC05" pad="P$38"/>
<connect gate="G$1" pin="PC15" pad="P$39"/>
<connect gate="G$1" pin="PC16" pad="P$40"/>
<connect gate="G$1" pin="PC17" pad="P$41"/>
<connect gate="G$1" pin="PC18" pad="P$42"/>
<connect gate="G$1" pin="PC19" pad="P$43"/>
<connect gate="G$1" pin="PC20" pad="P$44"/>
<connect gate="G$1" pin="PC21" pad="P$45"/>
<connect gate="G$1" pin="PC22" pad="P$46"/>
<connect gate="G$1" pin="PD00" pad="P$47"/>
<connect gate="G$1" pin="PD01" pad="P$48"/>
<connect gate="G$1" pin="PD02" pad="P$49"/>
<connect gate="G$1" pin="PD03" pad="P$50"/>
<connect gate="G$1" pin="PD11" pad="P$53"/>
<connect gate="G$1" pin="PD12" pad="P$54"/>
<connect gate="G$1" pin="PD13" pad="P$55"/>
<connect gate="G$1" pin="PD14" pad="P$56"/>
<connect gate="G$1" pin="PD21" pad="P$57"/>
<connect gate="G$1" pin="PD27" pad="P$58"/>
<connect gate="G$1" pin="PD28" pad="P$59"/>
<connect gate="G$1" pin="PD29" pad="P$60"/>
<connect gate="G$1" pin="PD30" pad="P$61"/>
<connect gate="G$1" pin="RESET_N" pad="P$64"/>
<connect gate="G$1" pin="VBUS" pad="P$23"/>
<connect gate="G$1" pin="VDDANA" pad="P$18"/>
<connect gate="G$1" pin="VDDCORE" pad="P$29"/>
<connect gate="G$1" pin="VDDIN_33" pad="P$28"/>
<connect gate="G$1" pin="VDDIN_5" pad="P$27"/>
<connect gate="G$1" pin="VDDIO1" pad="P$5"/>
<connect gate="G$1" pin="VDDIO2" pad="P$35"/>
<connect gate="G$1" pin="VDDIO3" pad="P$51"/>
</connects>
<technologies>
<technology name=""/>
</technologies>
</device>
</devices>
</deviceset>
<deviceset name="TCD1304AP">
<gates>
<gate name="G$1" symbol="TCD1304AP" x="0" y="0"/>
</gates>
<devices>
<device name="" package="TCD1304AP">
<connects>
<connect gate="G$1" pin="ICG" pad="P$3"/>
<connect gate="G$1" pin="OM" pad="P$4"/>
<connect gate="G$1" pin="OS" pad="P$21"/>
<connect gate="G$1" pin="SH" pad="P$5"/>
<connect gate="G$1" pin="SS" pad="P$22"/>
<connect gate="G$1" pin="VAD" pad="P$2"/>
<connect gate="G$1" pin="VDD" pad="P$1"/>
</connects>
<technologies>
<technology name=""/>
</technologies>
</device>
</devices>
</deviceset>
</devicesets>
</library>
<library name="con-cypressindustries">
<description>&lt;b&gt;Connectors from Cypress Industries&lt;/b&gt;&lt;p&gt;
www.cypressindustries.com&lt;br&gt;
&lt;author&gt;Created by librarian@cadsoft.de&lt;/author&gt;</description>
<packages>
<package name="32005-201">
<description>&lt;b&gt;MINI USB-B R/A SMT W/ REAR&lt;/b&gt;&lt;p&gt;
Source: http://www.cypressindustries.com/pdf/32005-201.pdf</description>
<wire x1="-5.9182" y1="3.8416" x2="-3.6879" y2="3.8416" width="0.1016" layer="51"/>
<wire x1="-3.6879" y1="3.8416" x2="-3.6879" y2="4.8799" width="0.1016" layer="51"/>
<wire x1="-3.6879" y1="4.8799" x2="-3.3245" y2="4.8799" width="0.1016" layer="51"/>
<wire x1="-3.3245" y1="4.8799" x2="-3.3245" y2="4.4646" width="0.1016" layer="51"/>
<wire x1="-3.3245" y1="4.4646" x2="-2.7015" y2="4.4646" width="0.1016" layer="51"/>
<wire x1="-2.7015" y1="4.4646" x2="-2.7015" y2="4.8799" width="0.1016" layer="51"/>
<wire x1="-2.7015" y1="4.8799" x2="-2.3093" y2="4.8799" width="0.1016" layer="51"/>
<wire x1="-2.3093" y1="4.8799" x2="-2.3093" y2="3.8416" width="0.1016" layer="51"/>
<wire x1="-1.5825" y1="3.8416" x2="0.7266" y2="3.8416" width="0.1016" layer="21"/>
<wire x1="2.8032" y1="3.8416" x2="0.7266" y2="3.8416" width="0.1016" layer="51"/>
<wire x1="0.7266" y1="3.8416" x2="0.519" y2="4.0492" width="0.1016" layer="21" curve="-90"/>
<wire x1="0.519" y1="4.0492" x2="0.519" y2="4.205" width="0.1016" layer="21"/>
<wire x1="0.519" y1="4.205" x2="2.907" y2="4.205" width="0.1016" layer="51"/>
<wire x1="2.907" y1="4.205" x2="3.4781" y2="3.6339" width="0.1016" layer="51" curve="-90"/>
<wire x1="-5.9182" y1="-3.8415" x2="-5.9182" y2="-3.8414" width="0.1016" layer="21"/>
<wire x1="-5.9182" y1="-3.8414" x2="-5.9182" y2="3.8416" width="0.1016" layer="21"/>
<wire x1="-1.8171" y1="2.9591" x2="-4.5685" y2="2.7514" width="0.1016" layer="21"/>
<wire x1="-4.5685" y1="2.7514" x2="-4.828" y2="2.5438" width="0.1016" layer="21" curve="68.629849"/>
<wire x1="-4.828" y1="2.5438" x2="-4.828" y2="1.9727" width="0.1016" layer="21" curve="34.099487"/>
<wire x1="-4.828" y1="1.9727" x2="-4.5685" y2="1.7651" width="0.1016" layer="21" curve="68.629849"/>
<wire x1="-4.5685" y1="1.7651" x2="-1.8171" y2="1.5055" width="0.1016" layer="21"/>
<wire x1="-1.8171" y1="1.5055" x2="-1.8171" y2="1.7132" width="0.1016" layer="21"/>
<wire x1="-1.8171" y1="1.7132" x2="-4.2051" y2="1.9727" width="0.1016" layer="21"/>
<wire x1="-4.2051" y1="1.9727" x2="-4.2051" y2="2.4919" width="0.1016" layer="21"/>
<wire x1="-4.2051" y1="2.4919" x2="-1.8171" y2="2.7514" width="0.1016" layer="21"/>
<wire x1="-1.8171" y1="2.7514" x2="-1.8171" y2="2.9591" width="0.1016" layer="21"/>
<wire x1="2.8032" y1="3.8416" x2="3.0627" y2="3.5821" width="0.1016" layer="51" curve="-90"/>
<wire x1="3.0627" y1="3.5821" x2="3.0627" y2="3.011" width="0.1016" layer="51"/>
<wire x1="3.0627" y1="3.011" x2="3.4261" y2="3.011" width="0.1016" layer="21"/>
<wire x1="1.713" y1="4.2569" x2="1.713" y2="4.8799" width="0.1016" layer="51"/>
<wire x1="1.713" y1="4.8799" x2="2.1283" y2="4.8799" width="0.1016" layer="51"/>
<wire x1="2.1283" y1="4.8799" x2="2.1283" y2="4.4646" width="0.1016" layer="51"/>
<wire x1="2.1283" y1="4.4646" x2="2.6474" y2="4.4646" width="0.1016" layer="51"/>
<wire x1="2.6474" y1="4.4646" x2="2.6474" y2="4.8799" width="0.1016" layer="51"/>
<wire x1="2.6474" y1="4.8799" x2="3.0627" y2="4.8799" width="0.1016" layer="51"/>
<wire x1="3.0627" y1="4.8799" x2="3.0627" y2="4.2569" width="0.1016" layer="51"/>
<wire x1="0.5709" y1="1.7651" x2="0.5709" y2="-1.765" width="0.1016" layer="21"/>
<wire x1="1.0381" y1="-1.8169" x2="1.0381" y2="1.817" width="0.1016" layer="21"/>
<wire x1="1.0381" y1="1.817" x2="0.8305" y2="2.0246" width="0.1016" layer="21" curve="90.055225"/>
<wire x1="0.8305" y1="2.0246" x2="0.8304" y2="2.0246" width="0.1016" layer="21"/>
<wire x1="0.8304" y1="2.0246" x2="0.5709" y2="1.7651" width="0.1016" layer="21" curve="89.955858"/>
<wire x1="1.5573" y1="-2.0246" x2="3.4261" y2="-2.0246" width="0.1016" layer="21"/>
<wire x1="3.0627" y1="-1.9726" x2="3.0627" y2="1.9727" width="0.1016" layer="51"/>
<wire x1="-4.5684" y1="1.2459" x2="-0.5192" y2="1.0383" width="0.1016" layer="21"/>
<wire x1="-0.5192" y1="1.0383" x2="-0.3116" y2="0.8306" width="0.1016" layer="21" curve="-83.771817"/>
<wire x1="-4.5685" y1="1.2459" x2="-4.7761" y2="1.0383" width="0.1016" layer="21" curve="90"/>
<wire x1="-4.7761" y1="1.0383" x2="-4.7761" y2="1.0382" width="0.1016" layer="21"/>
<wire x1="-4.7761" y1="1.0382" x2="-4.5685" y2="0.8306" width="0.1016" layer="21" curve="90"/>
<wire x1="-4.5685" y1="0.8306" x2="-1.1422" y2="0.623" width="0.1016" layer="21"/>
<wire x1="-5.9182" y1="-3.8414" x2="-3.6879" y2="-3.8414" width="0.1016" layer="51"/>
<wire x1="-3.6879" y1="-3.8414" x2="-3.6879" y2="-4.8797" width="0.1016" layer="51"/>
<wire x1="-3.6879" y1="-4.8797" x2="-3.3245" y2="-4.8797" width="0.1016" layer="51"/>
<wire x1="-3.3245" y1="-4.8797" x2="-3.3245" y2="-4.4644" width="0.1016" layer="51"/>
<wire x1="-3.3245" y1="-4.4644" x2="-2.7015" y2="-4.4644" width="0.1016" layer="51"/>
<wire x1="-2.7015" y1="-4.4644" x2="-2.7015" y2="-4.8797" width="0.1016" layer="51"/>
<wire x1="-2.7015" y1="-4.8797" x2="-2.3093" y2="-4.8797" width="0.1016" layer="51"/>
<wire x1="-2.3093" y1="-4.8797" x2="-2.3093" y2="-3.8414" width="0.1016" layer="51"/>
<wire x1="-2.3093" y1="-3.8414" x2="2.8032" y2="-3.8414" width="0.1016" layer="51"/>
<wire x1="0.7266" y1="-3.8414" x2="0.519" y2="-4.049" width="0.1016" layer="21" curve="90"/>
<wire x1="0.519" y1="-4.049" x2="0.519" y2="-4.2048" width="0.1016" layer="21"/>
<wire x1="0.519" y1="-4.2048" x2="2.907" y2="-4.2048" width="0.1016" layer="51"/>
<wire x1="2.907" y1="-4.2048" x2="3.4781" y2="-3.6337" width="0.1016" layer="51" curve="90.020069"/>
<wire x1="-1.8171" y1="-2.9589" x2="-4.5685" y2="-2.7512" width="0.1016" layer="21"/>
<wire x1="-4.5685" y1="-2.7512" x2="-4.828" y2="-2.5436" width="0.1016" layer="21" curve="-68.629849"/>
<wire x1="-4.828" y1="-2.5436" x2="-4.828" y2="-1.9725" width="0.1016" layer="21" curve="-34.099487"/>
<wire x1="-4.828" y1="-1.9725" x2="-4.5685" y2="-1.7649" width="0.1016" layer="21" curve="-68.629849"/>
<wire x1="-4.5685" y1="-1.7649" x2="-1.8171" y2="-1.5053" width="0.1016" layer="21"/>
<wire x1="-1.8171" y1="-1.5053" x2="-1.8171" y2="-1.713" width="0.1016" layer="21"/>
<wire x1="-1.8171" y1="-1.713" x2="-4.2051" y2="-1.9725" width="0.1016" layer="21"/>
<wire x1="-4.2051" y1="-1.9725" x2="-4.2051" y2="-2.4917" width="0.1016" layer="21"/>
<wire x1="-4.2051" y1="-2.4917" x2="-1.8171" y2="-2.7512" width="0.1016" layer="21"/>
<wire x1="-1.8171" y1="-2.7512" x2="-1.8171" y2="-2.9589" width="0.1016" layer="21"/>
<wire x1="2.8032" y1="-3.8414" x2="3.0627" y2="-3.5819" width="0.1016" layer="51" curve="90.044176"/>
<wire x1="3.0627" y1="-3.5819" x2="3.0627" y2="-3.0108" width="0.1016" layer="51"/>
<wire x1="3.0627" y1="-3.0108" x2="3.4261" y2="-3.0108" width="0.1016" layer="21"/>
<wire x1="1.713" y1="-4.2567" x2="1.713" y2="-4.8797" width="0.1016" layer="51"/>
<wire x1="1.713" y1="-4.8797" x2="2.1283" y2="-4.8797" width="0.1016" layer="51"/>
<wire x1="2.1283" y1="-4.8797" x2="2.1283" y2="-4.4644" width="0.1016" layer="51"/>
<wire x1="2.1283" y1="-4.4644" x2="2.6474" y2="-4.4644" width="0.1016" layer="51"/>
<wire x1="2.6474" y1="-4.4644" x2="2.6474" y2="-4.8797" width="0.1016" layer="51"/>
<wire x1="2.6474" y1="-4.8797" x2="3.0627" y2="-4.8797" width="0.1016" layer="51"/>
<wire x1="3.0627" y1="-4.8797" x2="3.0627" y2="-4.2567" width="0.1016" layer="51"/>
<wire x1="1.0381" y1="-1.8168" x2="0.8305" y2="-2.0244" width="0.1016" layer="21" curve="-90.055225"/>
<wire x1="0.8304" y1="-2.0244" x2="0.5709" y2="-1.7649" width="0.1016" layer="21" curve="-89.867677"/>
<wire x1="1.5573" y1="-1.9725" x2="1.5573" y2="2.0248" width="0.1016" layer="51"/>
<wire x1="1.5573" y1="2.0248" x2="3.4261" y2="2.0248" width="0.1016" layer="21"/>
<wire x1="-4.5684" y1="-1.2457" x2="-0.5192" y2="-1.0381" width="0.1016" layer="21"/>
<wire x1="-0.5192" y1="-1.0381" x2="-0.3116" y2="-0.8304" width="0.1016" layer="21" curve="83.722654"/>
<wire x1="-0.3116" y1="-0.8304" x2="-0.3116" y2="0.8307" width="0.1016" layer="21"/>
<wire x1="-4.5685" y1="-1.2457" x2="-4.7761" y2="-1.0381" width="0.1016" layer="21" curve="-90"/>
<wire x1="-4.7761" y1="-1.038" x2="-4.5685" y2="-0.8304" width="0.1016" layer="21" curve="-90"/>
<wire x1="-4.5685" y1="-0.8304" x2="-1.1422" y2="-0.6228" width="0.1016" layer="21"/>
<wire x1="-1.1422" y1="-0.6228" x2="-1.1422" y2="0.6232" width="0.1016" layer="21"/>
<wire x1="-1.5826" y1="-3.8414" x2="0.7267" y2="-3.8415" width="0.1016" layer="21"/>
<wire x1="-5.9182" y1="-3.8414" x2="-4.4146" y2="-3.8414" width="0.1016" layer="21"/>
<wire x1="-5.9182" y1="3.8416" x2="-4.4147" y2="3.8415" width="0.1016" layer="21"/>
<wire x1="-2.3093" y1="3.8416" x2="0.7265" y2="3.8415" width="0.1016" layer="51"/>
<wire x1="3.4781" y1="-2.0245" x2="3.4781" y2="-3.0109" width="0.1016" layer="21"/>
<wire x1="3.4781" y1="3.634" x2="3.478" y2="-3.0109" width="0.1016" layer="51"/>
<wire x1="3.4782" y1="3.011" x2="3.4782" y2="2.0246" width="0.1016" layer="21"/>
<smd name="M1" x="-3" y="-4.45" dx="2.5" dy="2" layer="1"/>
<smd name="M2" x="-3" y="4.45" dx="2.5" dy="2" layer="1"/>
<smd name="M4" x="2.9" y="-4.45" dx="3.3" dy="2" layer="1"/>
<smd name="M3" x="2.9" y="4.45" dx="3.3" dy="2" layer="1"/>
<smd name="1" x="3" y="1.6" dx="3.1" dy="0.5" layer="1"/>
<smd name="2" x="3" y="0.8" dx="3.1" dy="0.5" layer="1"/>
<smd name="3" x="3" y="0" dx="3.1" dy="0.5" layer="1"/>
<smd name="4" x="3" y="-0.8" dx="3.1" dy="0.5" layer="1"/>
<smd name="5" x="3" y="-1.6" dx="3.1" dy="0.5" layer="1"/>
<text x="-4.445" y="5.715" size="1.27" layer="25">&gt;NAME</text>
<text x="-4.445" y="-6.985" size="1.27" layer="27">&gt;VALUE</text>
<hole x="0" y="2.2" drill="0.9"/>
<hole x="0" y="-2.2" drill="0.9"/>
</package>
<package name="32005-301">
<description>&lt;b&gt;MINI USB-B R/A SMT W/O REAR&lt;/b&gt;&lt;p&gt;
Source: http://www.cypressindustries.com/pdf/32005-301.pdf</description>
<wire x1="-5.9228" y1="3.8473" x2="3.1598" y2="3.8473" width="0.1016" layer="51"/>
<wire x1="2.9404" y1="3.7967" x2="2.9404" y2="2.5986" width="0.1016" layer="51"/>
<wire x1="2.9404" y1="2.5986" x2="1.8098" y2="2.5986" width="0.1016" layer="21"/>
<wire x1="1.8098" y1="3.7798" x2="1.8098" y2="-3.8473" width="0.1016" layer="51"/>
<wire x1="3.1597" y1="-3.8473" x2="-5.9228" y2="-3.8473" width="0.1016" layer="51"/>
<wire x1="-5.9228" y1="-3.8473" x2="-5.9228" y2="3.8473" width="0.1016" layer="21"/>
<wire x1="2.9573" y1="-3.8217" x2="2.9573" y2="-2.6998" width="0.1016" layer="51"/>
<wire x1="2.9573" y1="-2.6998" x2="1.8098" y2="-2.6998" width="0.1016" layer="21"/>
<wire x1="-5.9182" y1="3.8416" x2="-3.6879" y2="3.8416" width="0.1016" layer="51"/>
<wire x1="-3.6879" y1="3.8416" x2="-3.6879" y2="4.8799" width="0.1016" layer="51"/>
<wire x1="-3.6879" y1="4.8799" x2="-3.3245" y2="4.8799" width="0.1016" layer="51"/>
<wire x1="-3.3245" y1="4.8799" x2="-3.3245" y2="4.4646" width="0.1016" layer="51"/>
<wire x1="-3.3245" y1="4.4646" x2="-2.7015" y2="4.4646" width="0.1016" layer="51"/>
<wire x1="-2.7015" y1="4.4646" x2="-2.7015" y2="4.8799" width="0.1016" layer="51"/>
<wire x1="-2.7015" y1="4.8799" x2="-2.3093" y2="4.8799" width="0.1016" layer="51"/>
<wire x1="-2.3093" y1="4.8799" x2="-2.3093" y2="3.8416" width="0.1016" layer="51"/>
<wire x1="-5.9182" y1="-3.8415" x2="-5.9182" y2="-3.8414" width="0.1016" layer="21"/>
<wire x1="-5.9182" y1="-3.8414" x2="-5.9182" y2="3.8416" width="0.1016" layer="21"/>
<wire x1="-1.8171" y1="2.9591" x2="-4.5685" y2="2.7514" width="0.1016" layer="21"/>
<wire x1="-4.5685" y1="2.7514" x2="-4.828" y2="2.5438" width="0.1016" layer="21" curve="68.629849"/>
<wire x1="-4.828" y1="2.5438" x2="-4.828" y2="1.9727" width="0.1016" layer="21" curve="34.099487"/>
<wire x1="-4.828" y1="1.9727" x2="-4.5685" y2="1.7651" width="0.1016" layer="21" curve="68.629849"/>
<wire x1="-4.5685" y1="1.7651" x2="-1.8171" y2="1.5055" width="0.1016" layer="21"/>
<wire x1="-1.8171" y1="1.5055" x2="-1.8171" y2="1.7132" width="0.1016" layer="21"/>
<wire x1="-1.8171" y1="1.7132" x2="-4.2051" y2="1.9727" width="0.1016" layer="21"/>
<wire x1="-4.2051" y1="1.9727" x2="-4.2051" y2="2.4919" width="0.1016" layer="21"/>
<wire x1="-4.2051" y1="2.4919" x2="-1.8171" y2="2.7514" width="0.1016" layer="21"/>
<wire x1="-1.8171" y1="2.7514" x2="-1.8171" y2="2.9591" width="0.1016" layer="21"/>
<wire x1="1.713" y1="3.8856" x2="1.713" y2="4.8799" width="0.1016" layer="51"/>
<wire x1="1.713" y1="4.8799" x2="2.1283" y2="4.8799" width="0.1016" layer="51"/>
<wire x1="2.1283" y1="4.8799" x2="2.1283" y2="4.4646" width="0.1016" layer="51"/>
<wire x1="2.1283" y1="4.4646" x2="2.6474" y2="4.4646" width="0.1016" layer="51"/>
<wire x1="2.6474" y1="4.4646" x2="2.6474" y2="4.8799" width="0.1016" layer="51"/>
<wire x1="2.6474" y1="4.8799" x2="3.1639" y2="4.8799" width="0.1016" layer="51"/>
<wire x1="3.1639" y1="4.8799" x2="3.1639" y2="3.8519" width="0.1016" layer="51"/>
<wire x1="-4.5684" y1="1.2459" x2="-0.5192" y2="1.0383" width="0.1016" layer="21"/>
<wire x1="-0.5192" y1="1.0383" x2="-0.3116" y2="0.8306" width="0.1016" layer="21" curve="-83.771817"/>
<wire x1="-4.5685" y1="1.2459" x2="-4.7761" y2="1.0383" width="0.1016" layer="21" curve="90"/>
<wire x1="-4.7761" y1="1.0383" x2="-4.7761" y2="1.0382" width="0.1016" layer="21"/>
<wire x1="-4.7761" y1="1.0382" x2="-4.5685" y2="0.8306" width="0.1016" layer="21" curve="90"/>
<wire x1="-4.5685" y1="0.8306" x2="-1.1422" y2="0.623" width="0.1016" layer="21"/>
<wire x1="-5.9182" y1="-3.8414" x2="-3.6879" y2="-3.8414" width="0.1016" layer="51"/>
<wire x1="-3.6879" y1="-3.8414" x2="-3.6879" y2="-4.8797" width="0.1016" layer="51"/>
<wire x1="-3.6879" y1="-4.8797" x2="-3.3245" y2="-4.8797" width="0.1016" layer="51"/>
<wire x1="-3.3245" y1="-4.8797" x2="-3.3245" y2="-4.4644" width="0.1016" layer="51"/>
<wire x1="-3.3245" y1="-4.4644" x2="-2.7015" y2="-4.4644" width="0.1016" layer="51"/>
<wire x1="-2.7015" y1="-4.4644" x2="-2.7015" y2="-4.8797" width="0.1016" layer="51"/>
<wire x1="-2.7015" y1="-4.8797" x2="-2.3093" y2="-4.8797" width="0.1016" layer="51"/>
<wire x1="-2.3093" y1="-4.8797" x2="-2.3093" y2="-3.8414" width="0.1016" layer="51"/>
<wire x1="-1.8171" y1="-2.9589" x2="-4.5685" y2="-2.7512" width="0.1016" layer="21"/>
<wire x1="-4.5685" y1="-2.7512" x2="-4.828" y2="-2.5436" width="0.1016" layer="21" curve="-68.629849"/>
<wire x1="-4.828" y1="-2.5436" x2="-4.828" y2="-1.9725" width="0.1016" layer="21" curve="-34.099487"/>
<wire x1="-4.828" y1="-1.9725" x2="-4.5685" y2="-1.7649" width="0.1016" layer="21" curve="-68.629849"/>
<wire x1="-4.5685" y1="-1.7649" x2="-1.8171" y2="-1.5053" width="0.1016" layer="21"/>
<wire x1="-1.8171" y1="-1.5053" x2="-1.8171" y2="-1.713" width="0.1016" layer="21"/>
<wire x1="-1.8171" y1="-1.713" x2="-4.2051" y2="-1.9725" width="0.1016" layer="21"/>
<wire x1="-4.2051" y1="-1.9725" x2="-4.2051" y2="-2.4917" width="0.1016" layer="21"/>
<wire x1="-4.2051" y1="-2.4917" x2="-1.8171" y2="-2.7512" width="0.1016" layer="21"/>
<wire x1="-1.8171" y1="-2.7512" x2="-1.8171" y2="-2.9589" width="0.1016" layer="21"/>
<wire x1="1.713" y1="-3.8855" x2="1.713" y2="-4.8797" width="0.1016" layer="51"/>
<wire x1="1.713" y1="-4.8797" x2="2.1283" y2="-4.8797" width="0.1016" layer="51"/>
<wire x1="2.1283" y1="-4.8797" x2="2.1283" y2="-4.4644" width="0.1016" layer="51"/>
<wire x1="2.1283" y1="-4.4644" x2="2.6474" y2="-4.4644" width="0.1016" layer="51"/>
<wire x1="2.6474" y1="-4.4644" x2="2.6474" y2="-4.8797" width="0.1016" layer="51"/>
<wire x1="2.6474" y1="-4.8797" x2="3.1627" y2="-4.8797" width="0.1016" layer="51"/>
<wire x1="3.1627" y1="-4.8797" x2="3.1627" y2="-3.8518" width="0.1016" layer="51"/>
<wire x1="-4.5684" y1="-1.2457" x2="-0.5192" y2="-1.0381" width="0.1016" layer="21"/>
<wire x1="-0.5192" y1="-1.0381" x2="-0.3116" y2="-0.8304" width="0.1016" layer="21" curve="83.722654"/>
<wire x1="-0.3116" y1="-0.8304" x2="-0.3116" y2="0.8307" width="0.1016" layer="21"/>
<wire x1="-4.5685" y1="-1.2457" x2="-4.7761" y2="-1.0381" width="0.1016" layer="21" curve="-90"/>
<wire x1="-4.7761" y1="-1.038" x2="-4.5685" y2="-0.8304" width="0.1016" layer="21" curve="-90"/>
<wire x1="-4.5685" y1="-0.8304" x2="-1.1422" y2="-0.6228" width="0.1016" layer="21"/>
<wire x1="-1.1422" y1="-0.6228" x2="-1.1422" y2="0.6232" width="0.1016" layer="21"/>
<wire x1="-5.9182" y1="-3.8414" x2="-4.4146" y2="-3.8414" width="0.1016" layer="21"/>
<wire x1="-5.9182" y1="3.8416" x2="-4.4147" y2="3.8415" width="0.1016" layer="21"/>
<wire x1="1.0842" y1="-3.8472" x2="-1.6031" y2="-3.8472" width="0.1016" layer="21"/>
<wire x1="-1.5523" y1="3.8472" x2="0.9831" y2="3.8473" width="0.1016" layer="21"/>
<wire x1="2.9404" y1="3.3243" x2="2.9404" y2="2.5986" width="0.1016" layer="21"/>
<wire x1="1.8098" y1="2.5986" x2="1.8099" y2="3.3243" width="0.1016" layer="21"/>
<wire x1="1.8098" y1="-2.6999" x2="1.8098" y2="-3.3242" width="0.1016" layer="21"/>
<wire x1="2.9573" y1="-3.3324" x2="2.9573" y2="-2.6998" width="0.1016" layer="21"/>
<smd name="M1" x="-3" y="-4.45" dx="2.5" dy="2" layer="1"/>
<smd name="M2" x="-3" y="4.45" dx="2.5" dy="2" layer="1"/>
<smd name="M4" x="2.9" y="-4.45" dx="3.3" dy="2" layer="1"/>
<smd name="M3" x="2.9" y="4.45" dx="3.3" dy="2" layer="1"/>
<smd name="1" x="3" y="1.6" dx="3.1" dy="0.5" layer="1"/>
<smd name="2" x="3" y="0.8" dx="3.1" dy="0.5" layer="1"/>
<smd name="3" x="3" y="0" dx="3.1" dy="0.5" layer="1"/>
<smd name="4" x="3" y="-0.8" dx="3.1" dy="0.5" layer="1"/>
<smd name="5" x="3" y="-1.6" dx="3.1" dy="0.5" layer="1"/>
<text x="-4.445" y="5.715" size="1.27" layer="25">&gt;NAME</text>
<text x="-4.445" y="-6.985" size="1.27" layer="27">&gt;VALUE</text>
<hole x="0" y="2.2" drill="0.9"/>
<hole x="0" y="-2.2" drill="0.9"/>
</package>
</packages>
<symbols>
<symbol name="MINI-USB-5">
<wire x1="-2.54" y1="6.35" x2="-2.54" y2="-6.35" width="0.254" layer="94"/>
<wire x1="-2.54" y1="-6.35" x2="-1.27" y2="-7.62" width="0.254" layer="94" curve="90"/>
<wire x1="-1.27" y1="-7.62" x2="0" y2="-7.62" width="0.254" layer="94"/>
<wire x1="0" y1="-7.62" x2="1.016" y2="-8.128" width="0.254" layer="94" curve="-53.130102"/>
<wire x1="1.016" y1="-8.128" x2="2.54" y2="-8.89" width="0.254" layer="94" curve="53.130102"/>
<wire x1="2.54" y1="-8.89" x2="5.08" y2="-8.89" width="0.254" layer="94"/>
<wire x1="5.08" y1="-8.89" x2="6.35" y2="-7.62" width="0.254" layer="94" curve="90"/>
<wire x1="6.35" y1="-7.62" x2="6.35" y2="7.62" width="0.254" layer="94"/>
<wire x1="-2.54" y1="6.35" x2="-1.27" y2="7.62" width="0.254" layer="94" curve="-90"/>
<wire x1="-1.27" y1="7.62" x2="0" y2="7.62" width="0.254" layer="94"/>
<wire x1="0" y1="7.62" x2="1.016" y2="8.128" width="0.254" layer="94" curve="53.130102"/>
<wire x1="1.016" y1="8.128" x2="2.54" y2="8.89" width="0.254" layer="94" curve="-53.130102"/>
<wire x1="2.54" y1="8.89" x2="5.08" y2="8.89" width="0.254" layer="94"/>
<wire x1="5.08" y1="8.89" x2="6.35" y2="7.62" width="0.254" layer="94" curve="-90"/>
<wire x1="0" y1="5.08" x2="0" y2="-5.08" width="0.254" layer="94"/>
<wire x1="0" y1="-5.08" x2="1.27" y2="-6.35" width="0.254" layer="94"/>
<wire x1="1.27" y1="-6.35" x2="3.81" y2="-6.35" width="0.254" layer="94"/>
<wire x1="3.81" y1="-6.35" x2="3.81" y2="6.35" width="0.254" layer="94"/>
<wire x1="3.81" y1="6.35" x2="1.27" y2="6.35" width="0.254" layer="94"/>
<wire x1="1.27" y1="6.35" x2="0" y2="5.08" width="0.254" layer="94"/>
<text x="-2.54" y="11.43" size="1.778" layer="95" font="vector">&gt;NAME</text>
<text x="10.16" y="-7.62" size="1.778" layer="96" font="vector" rot="R90">&gt;VALUE</text>
<pin name="1" x="-5.08" y="5.08" visible="pin" direction="pas"/>
<pin name="2" x="-5.08" y="2.54" visible="pin" direction="pas"/>
<pin name="3" x="-5.08" y="0" visible="pin" direction="pas"/>
<pin name="4" x="-5.08" y="-2.54" visible="pin" direction="pas"/>
<pin name="5" x="-5.08" y="-5.08" visible="pin" direction="pas"/>
</symbol>
</symbols>
<devicesets>
<deviceset name="MINI-USB-" prefix="X">
<description>&lt;b&gt;MINI USB-B Conector&lt;/b&gt;&lt;p&gt;
Source: www.cypressindustries.com</description>
<gates>
<gate name="G$1" symbol="MINI-USB-5" x="0" y="0"/>
</gates>
<devices>
<device name="32005-201" package="32005-201">
<connects>
<connect gate="G$1" pin="1" pad="1"/>
<connect gate="G$1" pin="2" pad="2"/>
<connect gate="G$1" pin="3" pad="3"/>
<connect gate="G$1" pin="4" pad="4"/>
<connect gate="G$1" pin="5" pad="5"/>
</connects>
<technologies>
<technology name="">
<attribute name="MF" value="" constant="no"/>
<attribute name="MPN" value="" constant="no"/>
<attribute name="OC_FARNELL" value="unknown" constant="no"/>
<attribute name="OC_NEWARK" value="unknown" constant="no"/>
</technology>
</technologies>
</device>
<device name="32005-301" package="32005-301">
<connects>
<connect gate="G$1" pin="1" pad="1"/>
<connect gate="G$1" pin="2" pad="2"/>
<connect gate="G$1" pin="3" pad="3"/>
<connect gate="G$1" pin="4" pad="4"/>
<connect gate="G$1" pin="5" pad="5"/>
</connects>
<technologies>
<technology name="">
<attribute name="MF" value="" constant="no"/>
<attribute name="MPN" value="" constant="no"/>
<attribute name="OC_FARNELL" value="unknown" constant="no"/>
<attribute name="OC_NEWARK" value="unknown" constant="no"/>
</technology>
</technologies>
</device>
</devices>
</deviceset>
</devicesets>
</library>
<library name="supply2">
<description>&lt;b&gt;Supply Symbols&lt;/b&gt;&lt;p&gt;
GND, VCC, 0V, +5V, -5V, etc.&lt;p&gt;
Please keep in mind, that these devices are necessary for the
automatic wiring of the supply signals.&lt;p&gt;
The pin name defined in the symbol is identical to the net which is to be wired automatically.&lt;p&gt;
In this library the device names are the same as the pin names of the symbols, therefore the correct signal names appear next to the supply symbols in the schematic.&lt;p&gt;
&lt;author&gt;Created by librarian@cadsoft.de&lt;/author&gt;</description>
<packages>
</packages>
<symbols>
<symbol name="GND">
<wire x1="-1.27" y1="0" x2="1.27" y2="0" width="0.254" layer="94"/>
<wire x1="1.27" y1="0" x2="0" y2="-1.27" width="0.254" layer="94"/>
<wire x1="0" y1="-1.27" x2="-1.27" y2="0" width="0.254" layer="94"/>
<text x="-1.905" y="-3.175" size="1.778" layer="96">&gt;VALUE</text>
<pin name="GND" x="0" y="2.54" visible="off" length="short" direction="sup" rot="R270"/>
</symbol>
</symbols>
<devicesets>
<deviceset name="GND" prefix="SUPPLY">
<description>&lt;b&gt;SUPPLY SYMBOL&lt;/b&gt;</description>
<gates>
<gate name="GND" symbol="GND" x="0" y="0"/>
</gates>
<devices>
<device name="">
<technologies>
<technology name=""/>
</technologies>
</device>
</devices>
</deviceset>
</devicesets>
</library>
<library name="supply1">
<description>&lt;b&gt;Supply Symbols&lt;/b&gt;&lt;p&gt;
 GND, VCC, 0V, +5V, -5V, etc.&lt;p&gt;
 Please keep in mind, that these devices are necessary for the
 automatic wiring of the supply signals.&lt;p&gt;
 The pin name defined in the symbol is identical to the net which is to be wired automatically.&lt;p&gt;
 In this library the device names are the same as the pin names of the symbols, therefore the correct signal names appear next to the supply symbols in the schematic.&lt;p&gt;
 &lt;author&gt;Created by librarian@cadsoft.de&lt;/author&gt;</description>
<packages>
</packages>
<symbols>
<symbol name="VCC">
<wire x1="1.27" y1="-1.905" x2="0" y2="0" width="0.254" layer="94"/>
<wire x1="0" y1="0" x2="-1.27" y2="-1.905" width="0.254" layer="94"/>
<text x="-2.54" y="-2.54" size="1.778" layer="96" rot="R90">&gt;VALUE</text>
<pin name="VCC" x="0" y="-2.54" visible="off" length="short" direction="sup" rot="R90"/>
</symbol>
</symbols>
<devicesets>
<deviceset name="VCC" prefix="P+">
<description>&lt;b&gt;SUPPLY SYMBOL&lt;/b&gt;</description>
<gates>
<gate name="VCC" symbol="VCC" x="0" y="0"/>
</gates>
<devices>
<device name="">
<technologies>
<technology name=""/>
</technologies>
</device>
</devices>
</deviceset>
</devicesets>
</library>
<library name="jumper">
<description>&lt;b&gt;Jumpers&lt;/b&gt;&lt;p&gt;
&lt;author&gt;Created by librarian@cadsoft.de&lt;/author&gt;</description>
<packages>
<package name="JP1">
<description>&lt;b&gt;JUMPER&lt;/b&gt;</description>
<wire x1="-1.016" y1="0" x2="-1.27" y2="0.254" width="0.1524" layer="21"/>
<wire x1="-1.016" y1="0" x2="-1.27" y2="-0.254" width="0.1524" layer="21"/>
<wire x1="1.016" y1="0" x2="1.27" y2="0.254" width="0.1524" layer="21"/>
<wire x1="1.016" y1="0" x2="1.27" y2="-0.254" width="0.1524" layer="21"/>
<wire x1="1.27" y1="-0.254" x2="1.27" y2="-2.286" width="0.1524" layer="21"/>
<wire x1="1.016" y1="-2.54" x2="1.27" y2="-2.286" width="0.1524" layer="21"/>
<wire x1="1.27" y1="2.286" x2="1.016" y2="2.54" width="0.1524" layer="21"/>
<wire x1="1.27" y1="2.286" x2="1.27" y2="0.254" width="0.1524" layer="21"/>
<wire x1="1.016" y1="2.54" x2="-1.016" y2="2.54" width="0.1524" layer="21"/>
<wire x1="-1.27" y1="2.286" x2="-1.016" y2="2.54" width="0.1524" layer="21"/>
<wire x1="-1.27" y1="2.286" x2="-1.27" y2="0.254" width="0.1524" layer="21"/>
<wire x1="-1.27" y1="-0.254" x2="-1.27" y2="-2.286" width="0.1524" layer="21"/>
<wire x1="-1.016" y1="-2.54" x2="-1.27" y2="-2.286" width="0.1524" layer="21"/>
<wire x1="-1.016" y1="-2.54" x2="1.016" y2="-2.54" width="0.1524" layer="21"/>
<pad name="1" x="0" y="-1.27" drill="0.9144" shape="long"/>
<pad name="2" x="0" y="1.27" drill="0.9144" shape="long"/>
<text x="-1.651" y="-2.54" size="1.27" layer="25" ratio="10" rot="R90">&gt;NAME</text>
<text x="2.921" y="-2.54" size="1.27" layer="27" ratio="10" rot="R90">&gt;VALUE</text>
<rectangle x1="-0.3048" y1="0.9652" x2="0.3048" y2="1.5748" layer="51"/>
<rectangle x1="-0.3048" y1="-1.5748" x2="0.3048" y2="-0.9652" layer="51"/>
</package>
</packages>
<symbols>
<symbol name="JP2E">
<wire x1="0" y1="0" x2="0" y2="1.27" width="0.1524" layer="94"/>
<wire x1="0" y1="2.54" x2="0" y2="1.27" width="0.4064" layer="94"/>
<wire x1="2.54" y1="0" x2="2.54" y2="1.27" width="0.1524" layer="94"/>
<wire x1="2.54" y1="2.54" x2="2.54" y2="1.27" width="0.4064" layer="94"/>
<wire x1="-0.635" y1="0" x2="3.175" y2="0" width="0.4064" layer="94"/>
<wire x1="3.175" y1="0" x2="3.175" y2="0.635" width="0.4064" layer="94"/>
<wire x1="3.175" y1="0.635" x2="-0.635" y2="0.635" width="0.4064" layer="94"/>
<wire x1="-0.635" y1="0.635" x2="-0.635" y2="0" width="0.4064" layer="94"/>
<text x="-1.27" y="0" size="1.778" layer="95" rot="R90">&gt;NAME</text>
<text x="5.715" y="0" size="1.778" layer="96" rot="R90">&gt;VALUE</text>
<pin name="1" x="0" y="-2.54" visible="pad" length="short" direction="pas" rot="R90"/>
<pin name="2" x="2.54" y="-2.54" visible="pad" length="short" direction="pas" rot="R90"/>
</symbol>
</symbols>
<devicesets>
<deviceset name="JP1E" prefix="JP" uservalue="yes">
<description>&lt;b&gt;JUMPER&lt;/b&gt;</description>
<gates>
<gate name="A" symbol="JP2E" x="2.54" y="0"/>
</gates>
<devices>
<device name="" package="JP1">
<connects>
<connect gate="A" pin="1" pad="1"/>
<connect gate="A" pin="2" pad="2"/>
</connects>
<technologies>
<technology name=""/>
</technologies>
</device>
</devices>
</deviceset>
</devicesets>
</library>
</libraries>
<attributes>
</attributes>
<variantdefs>
</variantdefs>
<classes>
<class number="0" name="default" width="0" drill="0">
</class>
</classes>
<parts>
<part name="U1" library="IRIS" deviceset="AT32UC3C" device=""/>
<part name="U2" library="IRIS" deviceset="TCD1304AP" device=""/>
<part name="SUPPLY1" library="supply2" deviceset="GND" device=""/>
<part name="P+1" library="supply1" deviceset="VCC" device=""/>
<part name="X2" library="con-cypressindustries" deviceset="MINI-USB-" device="32005-201"/>
<part name="SUPPLY2" library="supply2" deviceset="GND" device=""/>
<part name="SUPPLY3" library="supply2" deviceset="GND" device=""/>
<part name="P+2" library="supply1" deviceset="VCC" device=""/>
<part name="JP1" library="jumper" deviceset="JP1E" device=""/>
</parts>
<sheets>
<sheet>
<plain>
</plain>
<instances>
<instance part="U1" gate="G$1" x="69.85" y="67.31"/>
<instance part="U2" gate="G$1" x="163.83" y="82.55"/>
<instance part="SUPPLY1" gate="GND" x="77.47" y="-12.7"/>
<instance part="P+1" gate="VCC" x="69.85" y="106.68"/>
<instance part="X2" gate="G$1" x="158.75" y="6.35"/>
<instance part="SUPPLY2" gate="GND" x="147.32" y="-3.81"/>
<instance part="SUPPLY3" gate="GND" x="149.86" y="69.85"/>
<instance part="P+2" gate="VCC" x="119.38" y="19.05"/>
<instance part="JP1" gate="A" x="7.62" y="77.47"/>
</instances>
<busses>
</busses>
<nets>
<net name="GND" class="0">
<segment>
<pinref part="U1" gate="G$1" pin="GNDPLL"/>
<pinref part="SUPPLY1" gate="GND" pin="GND"/>
<wire x1="77.47" y1="-6.35" x2="77.47" y2="-8.89" width="0.1524" layer="91"/>
<pinref part="U1" gate="G$1" pin="GNDIO1"/>
<wire x1="77.47" y1="-8.89" x2="77.47" y2="-10.16" width="0.1524" layer="91"/>
<wire x1="77.47" y1="-8.89" x2="74.93" y2="-8.89" width="0.1524" layer="91"/>
<wire x1="74.93" y1="-8.89" x2="72.39" y2="-8.89" width="0.1524" layer="91"/>
<wire x1="72.39" y1="-8.89" x2="69.85" y2="-8.89" width="0.1524" layer="91"/>
<wire x1="69.85" y1="-8.89" x2="67.31" y2="-8.89" width="0.1524" layer="91"/>
<wire x1="67.31" y1="-8.89" x2="64.77" y2="-8.89" width="0.1524" layer="91"/>
<wire x1="64.77" y1="-8.89" x2="64.77" y2="-6.35" width="0.1524" layer="91"/>
<pinref part="U1" gate="G$1" pin="GNDIO2"/>
<wire x1="67.31" y1="-6.35" x2="67.31" y2="-8.89" width="0.1524" layer="91"/>
<pinref part="U1" gate="G$1" pin="GNDIO3"/>
<wire x1="69.85" y1="-6.35" x2="69.85" y2="-8.89" width="0.1524" layer="91"/>
<pinref part="U1" gate="G$1" pin="GNDANA"/>
<wire x1="72.39" y1="-6.35" x2="72.39" y2="-8.89" width="0.1524" layer="91"/>
<pinref part="U1" gate="G$1" pin="GNDCORE"/>
<wire x1="74.93" y1="-6.35" x2="74.93" y2="-8.89" width="0.1524" layer="91"/>
<junction x="67.31" y="-8.89"/>
<junction x="69.85" y="-8.89"/>
<junction x="72.39" y="-8.89"/>
<junction x="74.93" y="-8.89"/>
<junction x="77.47" y="-8.89"/>
</segment>
<segment>
<pinref part="SUPPLY2" gate="GND" pin="GND"/>
<pinref part="X2" gate="G$1" pin="4"/>
<wire x1="147.32" y1="-1.27" x2="147.32" y2="1.27" width="0.1524" layer="91"/>
<wire x1="147.32" y1="1.27" x2="147.32" y2="3.81" width="0.1524" layer="91"/>
<wire x1="147.32" y1="3.81" x2="153.67" y2="3.81" width="0.1524" layer="91"/>
<pinref part="X2" gate="G$1" pin="5"/>
<wire x1="153.67" y1="1.27" x2="147.32" y2="1.27" width="0.1524" layer="91"/>
<junction x="147.32" y="1.27"/>
</segment>
<segment>
<pinref part="U2" gate="G$1" pin="SS"/>
<wire x1="153.67" y1="77.47" x2="149.86" y2="77.47" width="0.1524" layer="91"/>
<wire x1="149.86" y1="77.47" x2="149.86" y2="72.39" width="0.1524" layer="91"/>
<pinref part="SUPPLY3" gate="GND" pin="GND"/>
</segment>
</net>
<net name="VCC" class="0">
<segment>
<pinref part="U1" gate="G$1" pin="VDDANA"/>
<wire x1="67.31" y1="101.6" x2="69.85" y2="101.6" width="0.1524" layer="91"/>
<wire x1="69.85" y1="101.6" x2="72.39" y2="101.6" width="0.1524" layer="91"/>
<wire x1="72.39" y1="101.6" x2="74.93" y2="101.6" width="0.1524" layer="91"/>
<wire x1="74.93" y1="101.6" x2="77.47" y2="101.6" width="0.1524" layer="91"/>
<wire x1="77.47" y1="101.6" x2="77.47" y2="97.79" width="0.1524" layer="91"/>
<pinref part="U1" gate="G$1" pin="VDDIO1"/>
<wire x1="74.93" y1="97.79" x2="74.93" y2="101.6" width="0.1524" layer="91"/>
<pinref part="U1" gate="G$1" pin="VDDIO2"/>
<wire x1="72.39" y1="101.6" x2="72.39" y2="97.79" width="0.1524" layer="91"/>
<pinref part="U1" gate="G$1" pin="VDDIO3"/>
<wire x1="69.85" y1="97.79" x2="69.85" y2="101.6" width="0.1524" layer="91"/>
<pinref part="U1" gate="G$1" pin="VDDIN_5"/>
<wire x1="67.31" y1="97.79" x2="67.31" y2="101.6" width="0.1524" layer="91"/>
<junction x="69.85" y="101.6"/>
<junction x="72.39" y="101.6"/>
<junction x="74.93" y="101.6"/>
<pinref part="P+1" gate="VCC" pin="VCC"/>
<wire x1="69.85" y1="104.14" x2="69.85" y2="101.6" width="0.1524" layer="91"/>
</segment>
<segment>
<pinref part="U1" gate="G$1" pin="VBUS"/>
<pinref part="X2" gate="G$1" pin="1"/>
<wire x1="153.67" y1="11.43" x2="119.38" y2="11.43" width="0.1524" layer="91"/>
<wire x1="119.38" y1="11.43" x2="105.41" y2="11.43" width="0.1524" layer="91"/>
<wire x1="119.38" y1="11.43" x2="119.38" y2="16.51" width="0.1524" layer="91"/>
<pinref part="P+2" gate="VCC" pin="VCC"/>
<junction x="119.38" y="11.43"/>
</segment>
</net>
<net name="N$1" class="0">
<segment>
<pinref part="U1" gate="G$1" pin="DM"/>
<pinref part="X2" gate="G$1" pin="2"/>
<wire x1="153.67" y1="8.89" x2="105.41" y2="8.89" width="0.1524" layer="91"/>
</segment>
</net>
<net name="N$2" class="0">
<segment>
<pinref part="U1" gate="G$1" pin="DP"/>
<pinref part="X2" gate="G$1" pin="3"/>
<wire x1="153.67" y1="6.35" x2="105.41" y2="6.35" width="0.1524" layer="91"/>
</segment>
</net>
<net name="TCK" class="0">
<segment>
<pinref part="U1" gate="G$1" pin="PA00"/>
<wire x1="36.83" y1="85.09" x2="21.59" y2="85.09" width="0.1524" layer="91"/>
<label x="21.59" y="85.09" size="1.778" layer="95"/>
</segment>
</net>
<net name="TDI" class="0">
<segment>
<pinref part="U1" gate="G$1" pin="PA01"/>
<wire x1="36.83" y1="82.55" x2="21.59" y2="82.55" width="0.1524" layer="91"/>
<label x="21.59" y="82.55" size="1.778" layer="95"/>
</segment>
</net>
<net name="TDO" class="0">
<segment>
<pinref part="U1" gate="G$1" pin="PA02"/>
<wire x1="36.83" y1="80.01" x2="21.59" y2="80.01" width="0.1524" layer="91"/>
<label x="21.59" y="80.01" size="1.778" layer="95"/>
</segment>
</net>
<net name="TMS" class="0">
<segment>
<pinref part="U1" gate="G$1" pin="PA03"/>
<wire x1="36.83" y1="77.47" x2="21.59" y2="77.47" width="0.1524" layer="91"/>
<label x="21.59" y="77.47" size="1.778" layer="95"/>
</segment>
</net>
<net name="XIN0" class="0">
<segment>
<pinref part="U1" gate="G$1" pin="PB30"/>
<wire x1="36.83" y1="34.29" x2="20.32" y2="34.29" width="0.1524" layer="91"/>
<label x="20.32" y="34.29" size="1.778" layer="95"/>
</segment>
</net>
<net name="XOUT0" class="0">
<segment>
<pinref part="U1" gate="G$1" pin="PB31"/>
<wire x1="36.83" y1="31.75" x2="20.32" y2="31.75" width="0.1524" layer="91"/>
<label x="20.32" y="31.75" size="1.778" layer="95"/>
</segment>
</net>
<net name="ADCIN0" class="0">
<segment>
<pinref part="U1" gate="G$1" pin="PA04"/>
<wire x1="36.83" y1="74.93" x2="21.59" y2="74.93" width="0.1524" layer="91"/>
<label x="21.59" y="74.93" size="1.778" layer="95"/>
<pinref part="JP1" gate="A" pin="2"/>
<wire x1="10.16" y1="74.93" x2="21.59" y2="74.93" width="0.1524" layer="91"/>
</segment>
</net>
<net name="OS" class="0">
<segment>
<pinref part="U2" gate="G$1" pin="OS"/>
<wire x1="153.67" y1="74.93" x2="135.89" y2="74.93" width="0.1524" layer="91"/>
<label x="135.89" y="74.93" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="JP1" gate="A" pin="1"/>
<wire x1="7.62" y1="74.93" x2="-6.35" y2="74.93" width="0.1524" layer="91"/>
<label x="-6.35" y="74.93" size="1.778" layer="95"/>
</segment>
</net>
<net name="VDD" class="0">
<segment>
<pinref part="U2" gate="G$1" pin="VDD"/>
<wire x1="153.67" y1="90.17" x2="135.89" y2="90.17" width="0.1524" layer="91"/>
<label x="135.89" y="90.17" size="1.778" layer="95"/>
</segment>
</net>
<net name="VAD" class="0">
<segment>
<pinref part="U2" gate="G$1" pin="VAD"/>
<wire x1="153.67" y1="87.63" x2="135.89" y2="87.63" width="0.1524" layer="91"/>
<label x="135.89" y="87.63" size="1.778" layer="95"/>
</segment>
</net>
<net name="TC1B1" class="0">
<segment>
<pinref part="U1" gate="G$1" pin="PC03"/>
<wire x1="105.41" y1="82.55" x2="123.19" y2="82.55" width="0.1524" layer="91"/>
<label x="118.11" y="82.55" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U2" gate="G$1" pin="ICG"/>
<wire x1="153.67" y1="85.09" x2="135.89" y2="85.09" width="0.1524" layer="91"/>
<label x="135.89" y="85.09" size="1.778" layer="95"/>
</segment>
</net>
<net name="TC0B1" class="0">
<segment>
<pinref part="U1" gate="G$1" pin="PC04"/>
<wire x1="105.41" y1="80.01" x2="123.19" y2="80.01" width="0.1524" layer="91"/>
<label x="118.11" y="80.01" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U2" gate="G$1" pin="OM"/>
<wire x1="153.67" y1="82.55" x2="135.89" y2="82.55" width="0.1524" layer="91"/>
<label x="135.89" y="82.55" size="1.778" layer="95"/>
</segment>
</net>
<net name="TC0A2" class="0">
<segment>
<pinref part="U1" gate="G$1" pin="PC05"/>
<wire x1="105.41" y1="77.47" x2="123.19" y2="77.47" width="0.1524" layer="91"/>
<label x="118.11" y="77.47" size="1.778" layer="95"/>
</segment>
<segment>
<pinref part="U2" gate="G$1" pin="SH"/>
<wire x1="153.67" y1="80.01" x2="137.16" y2="80.01" width="0.1524" layer="91"/>
<wire x1="137.16" y1="80.01" x2="135.89" y2="80.01" width="0.1524" layer="91"/>
<wire x1="137.16" y1="80.01" x2="135.89" y2="80.01" width="0.1524" layer="91"/>
<label x="135.89" y="80.01" size="1.778" layer="95"/>
</segment>
</net>
</nets>
</sheet>
</sheets>
</schematic>
</drawing>
</eagle>
