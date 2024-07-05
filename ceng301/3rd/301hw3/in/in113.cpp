#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(21)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->remove(21)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(447)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->remove(447)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(363)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(417)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->remove(417)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(94)) << std::endl;
std::cout << "Line no:" << 13 << " " << ((a->insert(94))==false) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->remove(94)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(132)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 17 << " " << (a->insert(246)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->insert(289)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->remove(289)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->remove(132)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->insert(18)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->insert(264)) << std::endl;
std::cout << "Line no:" << 23 << " " << ((a->insert(18))==false) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->remove(18)) << std::endl;
std::cout << "Line no:" << 25 << " " << ((a->remove(411))==false) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->insert(193)) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->insert(41)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 29 << " " << (a->remove(41)) << std::endl;
std::cout << "Line no:" << 30 << " " << ((a->insert(264))==false) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->insert(65)) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->insert(139)) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->remove(139)) << std::endl;
std::cout << "Line no:" << 34 << " " << ((a->insert(65))==false) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->insert(153)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*b;
std::cout << "Line no:" << 38 << " " << (a->remove(153)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 40 << " " << (b->insert(225)) << std::endl;
std::cout << "Line no:" << 41 << " " << (a->insert(80)) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->insert(226)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 44 << " " << (b->remove(225)) << std::endl;
std::cout << "Line no:" << 45 << " " << (b->insert(253)) << std::endl;
std::cout << "Line no:" << 46 << " " << (a->insert(345)) << std::endl;
std::cout << "Line no:" << 47 << " " << (a->insert(476)) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->insert(398)) << std::endl;
std::cout << "Line no:" << 49 << " " << (b->insert(96)) << std::endl;
std::cout << "Line no:" << 50 << " " << ((a->insert(264))==false) << std::endl;
std::cout << "Line no:" << 51 << " " << (b->insert(41)) << std::endl;
std::cout << "Line no:" << 52 << " " << (a->remove(226)) << std::endl;
try{std::cout <<"Line no:" << 53 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getFloor(80) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getCeiling(80) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getNext(80) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->get(80) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 61 << " " << (b->insert(282)) << std::endl;
std::cout << "Line no:" << 62 << " " << (a->insert(114)) << std::endl;
std::cout << "Line no:" << 63 << " " << (b->insert(489)) << std::endl;
std::cout << "Line no:" << 64 << " " << (b->remove(282)) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->remove(363)) << std::endl;
std::cout << "Line no:" << 66 << " " << (b->insert(46)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->remove(193)) << std::endl;
std::cout << "Line no:" << 68 << " " << (b->insert(28)) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->remove(264)) << std::endl;
std::cout << "Line no:" << 70 << " " << (a->insert(196)) << std::endl;
std::cout << "Line no:" << 71 << " " << (b->insert(230)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 73 << " " << (b->remove(230)) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->insert(315)) << std::endl;
std::cout << "Line no:" << 75 << " " << (b->insert(24)) << std::endl;
std::cout << "Line no:" << 76 << " " << ((a->insert(65))==false) << std::endl;
std::cout << "Line no:" << 77 << " " << ((b->remove(31))==false) << std::endl;
std::cout << "Line no:" << 78 << " " << (a->remove(114)) << std::endl;
std::cout << "Line no:" << 79 << " " << (b->insert(417)) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->insert(395)) << std::endl;
std::cout << "Line no:" << 81 << " " << ((b->remove(426))==false) << std::endl;
std::cout << "Line no:" << 82 << " " << (b->insert(279)) << std::endl;
std::cout << "Line no:" << 83 << " " << (a->insert(46)) << std::endl;
std::cout << "Line no:" << 84 << " " << (b->remove(96)) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->insert(470)) << std::endl;
std::cout << "Line no:" << 86 << " " << (b->remove(46)) << std::endl;
std::cout << "Line no:" << 87 << " " << (a->remove(395)) << std::endl;
std::cout << "Line no:" << 88 << " " << (a->remove(246)) << std::endl;
std::cout << "Line no:" << 89 << " " << (b->remove(417)) << std::endl;
std::cout << "Line no:" << 90 << " " << (a->remove(46)) << std::endl;
std::cout << "Line no:" << 91 << " " << ((a->remove(91))==false) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->remove(345)) << std::endl;
std::cout << "Line no:" << 93 << " " << (b->insert(490)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 95 << " " << (a->remove(196)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 97 << " " << ((a->remove(135))==false) << std::endl;
std::cout << "Line no:" << 98 << " " << ((b->insert(28))==false) << std::endl;
std::cout << "Line no:" << 99 << " " << (a->remove(398)) << std::endl;
std::cout << "Line no:" << 100 << " " << (b->remove(41)) << std::endl;
std::cout << "Line no:" << 101 << " " << (a->insert(465)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 103 << " " << (b->remove(253)) << std::endl;
std::cout << "Line no:" << 104 << " " << (a->remove(470)) << std::endl;
std::cout << "Line no:" << 105 << " " << ((a->insert(465))==false) << std::endl;
std::cout << "Line no:" << 106 << " " << (b->remove(24)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 108 << " " << (b->remove(279)) << std::endl;
std::cout << "Line no:" << 109 << " " << (a->insert(340)) << std::endl;
std::cout << "Line no:" << 110 << " " << (a->remove(465)) << std::endl;
try{std::cout <<"Line no:" << 111 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getFloor(65) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getCeiling(65) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getNext(65) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->get(65) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 119 << " " << ((a->insert(80))==false) << std::endl;
std::cout << "Line no:" << 120 << " " << (a->remove(476)) << std::endl;
std::cout << "Line no:" << 121 << " " << ((a->insert(65))==false) << std::endl;
std::cout << "Line no:" << 122 << " " << (b->remove(490)) << std::endl;
std::cout << "Line no:" << 123 << " " << (a->remove(80)) << std::endl;
std::cout << "Line no:" << 124 << " " << (b->remove(28)) << std::endl;
std::cout << "Line no:" << 125 << " " << (b->remove(489)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 127 << " " << (a->insert(221)) << std::endl;
std::cout << "Line no:" << 128 << " " << (b->insert(334)) << std::endl;
std::cout << "Line no:" << 129 << " " << (b->insert(436)) << std::endl;
std::cout << "Line no:" << 130 << " " << (a->insert(365)) << std::endl;
std::cout << "Line no:" << 131 << " " << ((a->insert(221))==false) << std::endl;
a->printPretty();
*a=*a;
std::cout << "Line no:" << 134 << " " << ((a->insert(65))==false) << std::endl;
std::cout << "Line no:" << 135 << " " << (b->insert(249)) << std::endl;
std::cout << "Line no:" << 136 << " " << ((a->remove(348))==false) << std::endl;
std::cout << "Line no:" << 137 << " " << (b->insert(264)) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->remove(264)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 140 << " " << (b->insert(366)) << std::endl;
std::cout << "Line no:" << 141 << " " << (a->remove(340)) << std::endl;
std::cout << "Line no:" << 142 << " " << ((b->remove(68))==false) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->insert(249)) << std::endl;
*a=*a;
std::cout << "Line no:" << 145 << " " << (b->remove(249)) << std::endl;
std::cout << "Line no:" << 146 << " " << (a->insert(222)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 148 << " " << (a->insert(46)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 150 << " " << (b->insert(43)) << std::endl;
std::cout << "Line no:" << 151 << " " << (a->insert(26)) << std::endl;
std::cout << "Line no:" << 152 << " " << (b->remove(366)) << std::endl;
std::cout << "Line no:" << 153 << " " << ((b->remove(21))==false) << std::endl;
std::cout << "Line no:" << 154 << " " << ((b->remove(222))==false) << std::endl;
std::cout << "Line no:" << 155 << " " << (a->insert(256)) << std::endl;
std::cout << "Line no:" << 156 << " " << (a->insert(234)) << std::endl;
std::cout << "Line no:" << 157 << " " << (b->remove(436)) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->remove(334)) << std::endl;
std::cout << "Line no:" << 159 << " " << (a->remove(221)) << std::endl;
std::cout << "Line no:" << 160 << " " << ((b->insert(43))==false) << std::endl;
std::cout << "Line no:" << 161 << " " << (a->remove(365)) << std::endl;
std::cout << "Line no:" << 162 << " " << (b->insert(261)) << std::endl;
std::cout << "Line no:" << 163 << " " << (a->insert(397)) << std::endl;
std::cout << "Line no:" << 164 << " " << (a->remove(397)) << std::endl;
std::cout << "Line no:" << 165 << " " << (a->remove(222)) << std::endl;
std::cout << "Line no:" << 166 << " " << (b->insert(22)) << std::endl;
std::cout << "Line no:" << 167 << " " << ((b->insert(43))==false) << std::endl;
std::cout << "Line no:" << 168 << " " << ((a->remove(98))==false) << std::endl;
try{std::cout <<"Line no:" << 169 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getFloor(256) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getCeiling(256) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getNext(256) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->get(256) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 177 << " " << (b->remove(43)) << std::endl;
std::cout << "Line no:" << 178 << " " << (a->insert(288)) << std::endl;
std::cout << "Line no:" << 179 << " " << (a->remove(315)) << std::endl;
std::cout << "Line no:" << 180 << " " << ((a->remove(292))==false) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->insert(439)) << std::endl;
std::cout << "Line no:" << 182 << " " << ((a->remove(196))==false) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->insert(219)) << std::endl;
std::cout << "Line no:" << 184 << " " << (b->insert(263)) << std::endl;
std::cout << "Line no:" << 185 << " " << (a->insert(232)) << std::endl;
std::cout << "Line no:" << 186 << " " << ((b->remove(379))==false) << std::endl;
std::cout << "Line no:" << 187 << " " << ((a->insert(256))==false) << std::endl;
std::cout << "Line no:" << 188 << " " << (a->insert(477)) << std::endl;
std::cout << "Line no:" << 189 << " " << ((a->remove(68))==false) << std::endl;
std::cout << "Line no:" << 190 << " " << (a->insert(363)) << std::endl;
std::cout << "Line no:" << 191 << " " << ((b->insert(261))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 193 << " " << (b->insert(232)) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->remove(477)) << std::endl;
std::cout << "Line no:" << 195 << " " << ((a->insert(363))==false) << std::endl;
std::cout << "Line no:" << 196 << " " << (a->remove(46)) << std::endl;
std::cout << "Line no:" << 197 << " " << (a->insert(349)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 199 << " " << (a->insert(386)) << std::endl;
std::cout << "Line no:" << 200 << " " << ((b->insert(232))==false) << std::endl;
std::cout << "Line no:" << 201 << " " << ((b->remove(14))==false) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->remove(232)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 204 << " " << (b->remove(263)) << std::endl;
std::cout << "Line no:" << 205 << " " << ((b->insert(22))==false) << std::endl;
std::cout << "Line no:" << 206 << " " << ((b->insert(22))==false) << std::endl;
std::cout << "Line no:" << 207 << " " << (a->insert(138)) << std::endl;
std::cout << "Line no:" << 208 << " " << ((a->remove(104))==false) << std::endl;
std::cout << "Line no:" << 209 << " " << (a->remove(349)) << std::endl;
std::cout << "Line no:" << 210 << " " << (a->insert(477)) << std::endl;
std::cout << "Line no:" << 211 << " " << ((b->insert(261))==false) << std::endl;
std::cout << "Line no:" << 212 << " " << (b->insert(322)) << std::endl;
std::cout << "Line no:" << 213 << " " << (a->remove(234)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 215 << " " << (a->insert(221)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 217 << " " << (b->insert(149)) << std::endl;
std::cout << "Line no:" << 218 << " " << ((a->remove(82))==false) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->insert(437)) << std::endl;
*a=*a;
a->printPretty();
std::cout << "Line no:" << 222 << " " << (a->insert(94)) << std::endl;
std::cout << "Line no:" << 223 << " " << (b->remove(322)) << std::endl;
std::cout << "Line no:" << 224 << " " << (b->remove(261)) << std::endl;
std::cout << "Line no:" << 225 << " " << (a->remove(437)) << std::endl;
std::cout << "Line no:" << 226 << " " << ((b->insert(22))==false) << std::endl;
try{std::cout <<"Line no:" << 227 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getFloor(386) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getCeiling(386) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getNext(386) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->get(386) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 235 << " " << (a->remove(288)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
