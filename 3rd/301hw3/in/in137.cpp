#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(415)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->remove(415)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(36)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->insert(185)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 10 << " " << (a->insert(471)) << std::endl;
std::cout << "Line no:" << 11 << " " << ((a->insert(471))==false) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(487)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->remove(471)) << std::endl;
std::cout << "Line no:" << 14 << " " << ((a->insert(185))==false) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(176)) << std::endl;
std::cout << "Line no:" << 16 << " " << ((a->remove(459))==false) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(231)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 19 << " " << (a->insert(222)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(295)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 22 << " " << (a->remove(176)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->remove(36)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->remove(231)) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->remove(487)) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->insert(471)) << std::endl;
std::cout << "Line no:" << 27 << " " << ((a->insert(222))==false) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->insert(352)) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->remove(222)) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->remove(471)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->insert(461)) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->insert(128)) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->remove(352)) << std::endl;
std::cout << "Line no:" << 34 << " " << (a->remove(295)) << std::endl;
std::cout << "Line no:" << 35 << " " << ((a->insert(185))==false) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*a;
std::cout << "Line no:" << 38 << " " << ((a->insert(128))==false) << std::endl;
std::cout << "Line no:" << 39 << " " << (b->remove(128)) << std::endl;
std::cout << "Line no:" << 40 << " " << ((a->insert(461))==false) << std::endl;
std::cout << "Line no:" << 41 << " " << (b->insert(465)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 43 << " " << (a->remove(465)) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->remove(461)) << std::endl;
std::cout << "Line no:" << 45 << " " << (b->remove(185)) << std::endl;
std::cout << "Line no:" << 46 << " " << (b->insert(313)) << std::endl;
std::cout << "Line no:" << 47 << " " << (a->remove(313)) << std::endl;
*a=*a;
std::cout << "Line no:" << 49 << " " << (b->insert(456)) << std::endl;
std::cout << "Line no:" << 50 << " " << (a->insert(88)) << std::endl;
std::cout << "Line no:" << 51 << " " << (b->remove(456)) << std::endl;
std::cout << "Line no:" << 52 << " " << (a->remove(88)) << std::endl;
std::cout << "Line no:" << 53 << " " << (a->insert(234)) << std::endl;
std::cout << "Line no:" << 54 << " " << ((b->remove(412))==false) << std::endl;
std::cout << "Line no:" << 55 << " " << ((b->remove(220))==false) << std::endl;
std::cout << "Line no:" << 56 << " " << (a->insert(134)) << std::endl;
std::cout << "Line no:" << 57 << " " << ((b->remove(361))==false) << std::endl;
std::cout << "Line no:" << 58 << " " << (a->remove(134)) << std::endl;
std::cout << "Line no:" << 59 << " " << (b->insert(251)) << std::endl;
std::cout << "Line no:" << 60 << " " << ((b->insert(251))==false) << std::endl;
std::cout << "Line no:" << 61 << " " << ((a->remove(336))==false) << std::endl;
std::cout << "Line no:" << 62 << " " << ((b->insert(251))==false) << std::endl;
std::cout << "Line no:" << 63 << " " << (b->insert(354)) << std::endl;
std::cout << "Line no:" << 64 << " " << (b->remove(354)) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->remove(234)) << std::endl;
std::cout << "Line no:" << 66 << " " << ((b->remove(141))==false) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->insert(72)) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->insert(366)) << std::endl;
std::cout << "Line no:" << 69 << " " << (b->insert(173)) << std::endl;
std::cout << "Line no:" << 70 << " " << (a->remove(72)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 72 << " " << ((a->insert(366))==false) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->remove(366)) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->insert(19)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 76 << " " << (a->insert(307)) << std::endl;
std::cout << "Line no:" << 77 << " " << ((b->remove(17))==false) << std::endl;
std::cout << "Line no:" << 78 << " " << (a->insert(249)) << std::endl;
std::cout << "Line no:" << 79 << " " << (a->remove(19)) << std::endl;
std::cout << "Line no:" << 80 << " " << (b->insert(160)) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->insert(462)) << std::endl;
std::cout << "Line no:" << 82 << " " << ((b->insert(160))==false) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->insert(329)) << std::endl;
std::cout << "Line no:" << 84 << " " << (a->insert(397)) << std::endl;
std::cout << "Line no:" << 85 << " " << (b->remove(160)) << std::endl;
std::cout << "Line no:" << 86 << " " << (a->insert(385)) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->insert(441)) << std::endl;
std::cout << "Line no:" << 88 << " " << ((a->insert(249))==false) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 91 << " " << (a->remove(385)) << std::endl;
std::cout << "Line no:" << 92 << " " << (b->remove(329)) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->insert(302)) << std::endl;
try{std::cout <<"Line no:" << 94 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 95 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 96 << " " << a->getFloor(397) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 97 << " " << a->getCeiling(397) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 98 << " " << a->getNext(397) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 99 << " " << a->get(397) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 100 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 101 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 102 << " " << (b->insert(134)) << std::endl;
std::cout << "Line no:" << 103 << " " << (a->remove(302)) << std::endl;
std::cout << "Line no:" << 104 << " " << (a->remove(249)) << std::endl;
std::cout << "Line no:" << 105 << " " << (b->insert(275)) << std::endl;
std::cout << "Line no:" << 106 << " " << (b->insert(55)) << std::endl;
std::cout << "Line no:" << 107 << " " << (a->insert(268)) << std::endl;
std::cout << "Line no:" << 108 << " " << (a->insert(305)) << std::endl;
std::cout << "Line no:" << 109 << " " << (a->insert(381)) << std::endl;
std::cout << "Line no:" << 110 << " " << ((b->remove(426))==false) << std::endl;
std::cout << "Line no:" << 111 << " " << (b->insert(468)) << std::endl;
std::cout << "Line no:" << 112 << " " << (a->remove(268)) << std::endl;
std::cout << "Line no:" << 113 << " " << (a->insert(46)) << std::endl;
std::cout << "Line no:" << 114 << " " << (b->remove(462)) << std::endl;
std::cout << "Line no:" << 115 << " " << (b->remove(441)) << std::endl;
std::cout << "Line no:" << 116 << " " << (a->insert(104)) << std::endl;
std::cout << "Line no:" << 117 << " " << (a->insert(185)) << std::endl;
std::cout << "Line no:" << 118 << " " << ((b->remove(114))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 120 << " " << (b->insert(347)) << std::endl;
std::cout << "Line no:" << 121 << " " << ((b->insert(251))==false) << std::endl;
std::cout << "Line no:" << 122 << " " << (b->remove(275)) << std::endl;
std::cout << "Line no:" << 123 << " " << (a->insert(455)) << std::endl;
std::cout << "Line no:" << 124 << " " << ((b->insert(134))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 126 << " " << (a->remove(185)) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->remove(173)) << std::endl;
std::cout << "Line no:" << 128 << " " << ((b->insert(134))==false) << std::endl;
*a=*a;
std::cout << "Line no:" << 130 << " " << (a->insert(499)) << std::endl;
std::cout << "Line no:" << 131 << " " << (b->insert(43)) << std::endl;
std::cout << "Line no:" << 132 << " " << (a->insert(348)) << std::endl;
std::cout << "Line no:" << 133 << " " << ((a->insert(455))==false) << std::endl;
std::cout << "Line no:" << 134 << " " << (a->insert(311)) << std::endl;
std::cout << "Line no:" << 135 << " " << (a->insert(207)) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->insert(428)) << std::endl;
std::cout << "Line no:" << 137 << " " << (b->insert(408)) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->insert(463)) << std::endl;
std::cout << "Line no:" << 139 << " " << (a->insert(157)) << std::endl;
std::cout << "Line no:" << 140 << " " << ((a->insert(307))==false) << std::endl;
std::cout << "Line no:" << 141 << " " << ((a->remove(380))==false) << std::endl;
std::cout << "Line no:" << 142 << " " << (a->insert(398)) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->insert(459)) << std::endl;
std::cout << "Line no:" << 144 << " " << ((a->remove(439))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 146 << " " << (a->insert(130)) << std::endl;
std::cout << "Line no:" << 147 << " " << ((a->remove(105))==false) << std::endl;
std::cout << "Line no:" << 148 << " " << ((b->insert(251))==false) << std::endl;
std::cout << "Line no:" << 149 << " " << (b->insert(185)) << std::endl;
std::cout << "Line no:" << 150 << " " << (b->remove(463)) << std::endl;
std::cout << "Line no:" << 151 << " " << (a->insert(461)) << std::endl;
try{std::cout <<"Line no:" << 152 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 153 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 154 << " " << a->getFloor(157) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 155 << " " << a->getCeiling(157) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 156 << " " << a->getNext(157) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 157 << " " << a->get(157) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 158 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 159 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 160 << " " << (a->insert(174)) << std::endl;
std::cout << "Line no:" << 161 << " " << (b->remove(468)) << std::endl;
std::cout << "Line no:" << 162 << " " << (b->insert(343)) << std::endl;
std::cout << "Line no:" << 163 << " " << (b->insert(342)) << std::endl;
std::cout << "Line no:" << 164 << " " << (a->remove(499)) << std::endl;
std::cout << "Line no:" << 165 << " " << (a->remove(305)) << std::endl;
std::cout << "Line no:" << 166 << " " << (b->remove(43)) << std::endl;
std::cout << "Line no:" << 167 << " " << (b->insert(390)) << std::endl;
std::cout << "Line no:" << 168 << " " << (b->remove(134)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 170 << " " << (a->insert(437)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 172 << " " << (b->insert(127)) << std::endl;
std::cout << "Line no:" << 173 << " " << (b->insert(117)) << std::endl;
std::cout << "Line no:" << 174 << " " << (b->insert(420)) << std::endl;
std::cout << "Line no:" << 175 << " " << ((a->remove(290))==false) << std::endl;
std::cout << "Line no:" << 176 << " " << (b->remove(117)) << std::endl;
std::cout << "Line no:" << 177 << " " << (b->remove(420)) << std::endl;
std::cout << "Line no:" << 178 << " " << ((b->insert(55))==false) << std::endl;
std::cout << "Line no:" << 179 << " " << (b->insert(67)) << std::endl;
std::cout << "Line no:" << 180 << " " << (a->insert(158)) << std::endl;
std::cout << "Line no:" << 181 << " " << (b->remove(185)) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->remove(307)) << std::endl;
std::cout << "Line no:" << 183 << " " << ((b->remove(469))==false) << std::endl;
std::cout << "Line no:" << 184 << " " << (b->insert(484)) << std::endl;
std::cout << "Line no:" << 185 << " " << (b->insert(434)) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->insert(382)) << std::endl;
std::cout << "Line no:" << 187 << " " << (b->remove(67)) << std::endl;
std::cout << "Line no:" << 188 << " " << (a->insert(425)) << std::endl;
std::cout << "Line no:" << 189 << " " << (b->insert(460)) << std::endl;
std::cout << "Line no:" << 190 << " " << ((a->insert(398))==false) << std::endl;
std::cout << "Line no:" << 191 << " " << (a->insert(398)) << std::endl;
std::cout << "Line no:" << 192 << " " << ((b->insert(127))==false) << std::endl;
std::cout << "Line no:" << 193 << " " << ((b->remove(448))==false) << std::endl;
std::cout << "Line no:" << 194 << " " << (b->remove(347)) << std::endl;
std::cout << "Line no:" << 195 << " " << ((a->insert(397))==false) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->remove(390)) << std::endl;
std::cout << "Line no:" << 197 << " " << (a->insert(350)) << std::endl;
std::cout << "Line no:" << 198 << " " << (b->insert(310)) << std::endl;
std::cout << "Line no:" << 199 << " " << (b->remove(251)) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->insert(300)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 202 << " " << (a->remove(455)) << std::endl;
std::cout << "Line no:" << 203 << " " << (b->remove(434)) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->remove(300)) << std::endl;
std::cout << "Line no:" << 205 << " " << ((b->remove(132))==false) << std::endl;
std::cout << "Line no:" << 206 << " " << ((b->insert(408))==false) << std::endl;
std::cout << "Line no:" << 207 << " " << ((b->insert(408))==false) << std::endl;
std::cout << "Line no:" << 208 << " " << (b->insert(396)) << std::endl;
*a=*b;
std::cout << "Line no:" << 210 << " " << (b->remove(127)) << std::endl;
try{std::cout <<"Line no:" << 211 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 212 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 213 << " " << a->getFloor(55) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 214 << " " << a->getCeiling(55) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 215 << " " << a->getNext(55) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 216 << " " << a->get(55) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 217 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 218 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
b->printPretty();
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
