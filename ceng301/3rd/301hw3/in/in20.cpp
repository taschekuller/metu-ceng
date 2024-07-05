#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
a->printPretty();
std::cout << "Line no:" << 6 << " " << (a->insert(236)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(3)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->insert(19)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(176)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(413)) << std::endl;
std::cout << "Line no:" << 11 << " " << ((a->insert(3))==false) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(397)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->remove(3)) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(405)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(5)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(410)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(288)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->insert(357)) << std::endl;
std::cout << "Line no:" << 19 << " " << ((a->insert(19))==false) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->remove(5)) << std::endl;
std::cout << "Line no:" << 21 << " " << ((a->insert(410))==false) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->remove(410)) << std::endl;
std::cout << "Line no:" << 23 << " " << ((a->remove(94))==false) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->insert(5)) << std::endl;
std::cout << "Line no:" << 25 << " " << ((a->remove(111))==false) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->insert(59)) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->remove(288)) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->insert(28)) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->remove(405)) << std::endl;
std::cout << "Line no:" << 30 << " " << ((a->remove(128))==false) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->insert(393)) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->remove(413)) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->insert(110)) << std::endl;
std::cout << "Line no:" << 34 << " " << ((a->insert(19))==false) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->insert(19)) << std::endl;
std::cout << "Line no:" << 36 << " " << ((a->insert(397))==false) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->insert(377)) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->remove(59)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 40 << " " << (a->insert(443)) << std::endl;
std::cout << "Line no:" << 41 << " " << ((a->remove(428))==false) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->remove(176)) << std::endl;
std::cout << "Line no:" << 43 << " " << ((a->insert(393))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 45 << " " << (a->insert(140)) << std::endl;
std::cout << "Line no:" << 46 << " " << (a->insert(411)) << std::endl;
std::cout << "Line no:" << 47 << " " << (a->insert(44)) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->insert(114)) << std::endl;
std::cout << "Line no:" << 49 << " " << (a->insert(458)) << std::endl;
std::cout << "Line no:" << 50 << " " << (a->insert(36)) << std::endl;
std::cout << "Line no:" << 51 << " " << (a->insert(496)) << std::endl;
std::cout << "Line no:" << 52 << " " << (a->remove(397)) << std::endl;
a->printPretty();
try{std::cout <<"Line no:" << 54 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getFloor(110) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getCeiling(110) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getNext(110) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->get(110) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
a->printPretty();
std::cout << "Line no:" << 63 << " " << ((a->insert(19))==false) << std::endl;
std::cout << "Line no:" << 64 << " " << ((a->insert(393))==false) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->remove(357)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->remove(496)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->insert(366)) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->insert(177)) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->remove(458)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
*a=*b;
std::cout << "Line no:" << 73 << " " << (b->insert(351)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 76 << " " << (a->insert(262)) << std::endl;
std::cout << "Line no:" << 77 << " " << ((b->remove(320))==false) << std::endl;
std::cout << "Line no:" << 78 << " " << (b->insert(444)) << std::endl;
std::cout << "Line no:" << 79 << " " << (b->insert(82)) << std::endl;
std::cout << "Line no:" << 80 << " " << (b->insert(33)) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->insert(373)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 83 << " " << (b->insert(107)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 85 << " " << (b->insert(290)) << std::endl;
std::cout << "Line no:" << 86 << " " << (b->remove(82)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 88 << " " << (a->insert(334)) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->insert(100)) << std::endl;
std::cout << "Line no:" << 90 << " " << ((a->insert(334))==false) << std::endl;
std::cout << "Line no:" << 91 << " " << (a->insert(365)) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->insert(126)) << std::endl;
std::cout << "Line no:" << 93 << " " << ((a->remove(407))==false) << std::endl;
std::cout << "Line no:" << 94 << " " << ((b->remove(251))==false) << std::endl;
std::cout << "Line no:" << 95 << " " << (b->insert(441)) << std::endl;
std::cout << "Line no:" << 96 << " " << (a->remove(100)) << std::endl;
std::cout << "Line no:" << 97 << " " << (b->remove(351)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 99 << " " << ((b->insert(444))==false) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->insert(416)) << std::endl;
std::cout << "Line no:" << 101 << " " << (b->insert(34)) << std::endl;
std::cout << "Line no:" << 102 << " " << ((b->insert(290))==false) << std::endl;
std::cout << "Line no:" << 103 << " " << (a->insert(53)) << std::endl;
std::cout << "Line no:" << 104 << " " << (a->insert(378)) << std::endl;
std::cout << "Line no:" << 105 << " " << (a->insert(158)) << std::endl;
std::cout << "Line no:" << 106 << " " << (b->remove(34)) << std::endl;
*a=*a;
std::cout << "Line no:" << 108 << " " << ((b->insert(373))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 110 << " " << (a->insert(258)) << std::endl;
try{std::cout <<"Line no:" << 111 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getFloor(126) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getCeiling(126) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getNext(126) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->get(126) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 119 << " " << (a->remove(334)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 121 << " " << (b->insert(59)) << std::endl;
std::cout << "Line no:" << 122 << " " << (a->insert(273)) << std::endl;
std::cout << "Line no:" << 123 << " " << (a->insert(168)) << std::endl;
std::cout << "Line no:" << 124 << " " << (b->remove(373)) << std::endl;
std::cout << "Line no:" << 125 << " " << ((b->remove(492))==false) << std::endl;
std::cout << "Line no:" << 126 << " " << (a->insert(60)) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->insert(166)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 129 << " " << (b->remove(33)) << std::endl;
std::cout << "Line no:" << 130 << " " << ((a->insert(60))==false) << std::endl;
std::cout << "Line no:" << 131 << " " << (b->insert(300)) << std::endl;
*b=*a;
std::cout << "Line no:" << 133 << " " << (a->remove(365)) << std::endl;
*b=*a;
std::cout << "Line no:" << 135 << " " << (b->insert(58)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 137 << " " << (a->insert(395)) << std::endl;
std::cout << "Line no:" << 138 << " " << (a->remove(60)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 140 << " " << (b->insert(204)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 142 << " " << (b->insert(477)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 144 << " " << (b->remove(273)) << std::endl;
std::cout << "Line no:" << 145 << " " << ((a->remove(358))==false) << std::endl;
std::cout << "Line no:" << 146 << " " << (b->insert(322)) << std::endl;
std::cout << "Line no:" << 147 << " " << ((b->remove(431))==false) << std::endl;
std::cout << "Line no:" << 148 << " " << (a->insert(295)) << std::endl;
std::cout << "Line no:" << 149 << " " << (a->insert(414)) << std::endl;
std::cout << "Line no:" << 150 << " " << (b->insert(36)) << std::endl;
std::cout << "Line no:" << 151 << " " << ((b->insert(378))==false) << std::endl;
std::cout << "Line no:" << 152 << " " << (b->insert(1)) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->insert(96)) << std::endl;
std::cout << "Line no:" << 154 << " " << (a->insert(33)) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->insert(3)) << std::endl;
std::cout << "Line no:" << 156 << " " << (b->insert(81)) << std::endl;
std::cout << "Line no:" << 157 << " " << (b->remove(3)) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->remove(36)) << std::endl;
std::cout << "Line no:" << 159 << " " << (a->insert(40)) << std::endl;
std::cout << "Line no:" << 160 << " " << (b->remove(60)) << std::endl;
std::cout << "Line no:" << 161 << " " << (b->insert(151)) << std::endl;
std::cout << "Line no:" << 162 << " " << ((a->insert(262))==false) << std::endl;
*b=*a;
std::cout << "Line no:" << 164 << " " << ((a->remove(478))==false) << std::endl;
std::cout << "Line no:" << 165 << " " << ((b->remove(68))==false) << std::endl;
std::cout << "Line no:" << 166 << " " << (b->insert(335)) << std::endl;
std::cout << "Line no:" << 167 << " " << ((a->insert(33))==false) << std::endl;
std::cout << "Line no:" << 168 << " " << (a->insert(357)) << std::endl;
try{std::cout <<"Line no:" << 169 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getFloor(357) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getCeiling(357) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getNext(357) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->get(357) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 177 << " " << ((b->insert(414))==false) << std::endl;
std::cout << "Line no:" << 178 << " " << ((a->insert(414))==false) << std::endl;
std::cout << "Line no:" << 179 << " " << (a->insert(329)) << std::endl;
std::cout << "Line no:" << 180 << " " << (a->remove(262)) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->insert(163)) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->insert(111)) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->insert(488)) << std::endl;
std::cout << "Line no:" << 184 << " " << (a->remove(416)) << std::endl;
*b=*b;
std::cout << "Line no:" << 186 << " " << (a->insert(348)) << std::endl;
std::cout << "Line no:" << 187 << " " << (b->insert(378)) << std::endl;
std::cout << "Line no:" << 188 << " " << (b->insert(398)) << std::endl;
std::cout << "Line no:" << 189 << " " << (b->insert(63)) << std::endl;
std::cout << "Line no:" << 190 << " " << (a->insert(388)) << std::endl;
std::cout << "Line no:" << 191 << " " << (a->insert(294)) << std::endl;
std::cout << "Line no:" << 192 << " " << (a->remove(414)) << std::endl;
std::cout << "Line no:" << 193 << " " << ((b->insert(295))==false) << std::endl;
std::cout << "Line no:" << 194 << " " << ((a->insert(395))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 196 << " " << (a->remove(53)) << std::endl;
std::cout << "Line no:" << 197 << " " << ((b->insert(378))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 199 << " " << (b->remove(378)) << std::endl;
std::cout << "Line no:" << 200 << " " << ((b->insert(378))==false) << std::endl;
std::cout << "Line no:" << 201 << " " << ((a->insert(378))==false) << std::endl;
std::cout << "Line no:" << 202 << " " << ((b->insert(398))==false) << std::endl;
std::cout << "Line no:" << 203 << " " << (b->remove(414)) << std::endl;
*b=*a;
std::cout << "Line no:" << 205 << " " << (b->insert(132)) << std::endl;
std::cout << "Line no:" << 206 << " " << ((b->insert(357))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 208 << " " << ((b->remove(338))==false) << std::endl;
std::cout << "Line no:" << 209 << " " << (a->insert(322)) << std::endl;
std::cout << "Line no:" << 210 << " " << ((a->insert(322))==false) << std::endl;
std::cout << "Line no:" << 211 << " " << (b->insert(399)) << std::endl;
std::cout << "Line no:" << 212 << " " << (b->insert(79)) << std::endl;
std::cout << "Line no:" << 213 << " " << ((a->insert(158))==false) << std::endl;
std::cout << "Line no:" << 214 << " " << (b->remove(258)) << std::endl;
std::cout << "Line no:" << 215 << " " << (b->insert(116)) << std::endl;
*b=*a;
std::cout << "Line no:" << 217 << " " << (b->insert(59)) << std::endl;
*b=*a;
std::cout << "Line no:" << 219 << " " << (b->insert(47)) << std::endl;
std::cout << "Line no:" << 220 << " " << ((a->remove(317))==false) << std::endl;
std::cout << "Line no:" << 221 << " " << (b->insert(196)) << std::endl;
std::cout << "Line no:" << 222 << " " << (b->remove(488)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 224 << " " << (a->insert(198)) << std::endl;
std::cout << "Line no:" << 225 << " " << (a->insert(346)) << std::endl;
*a=*b;
try{std::cout <<"Line no:" << 227 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getFloor(158) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getCeiling(158) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getNext(158) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->get(158) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 235 << " " << ((a->insert(395))==false) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
