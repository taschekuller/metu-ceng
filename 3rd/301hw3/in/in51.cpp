#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << ((a->remove(436))==false) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(17)) << std::endl;
std::cout << "Line no:" << 7 << " " << ((a->insert(17))==false) << std::endl;
std::cout << "Line no:" << 8 << " " << ((a->remove(291))==false) << std::endl;
std::cout << "Line no:" << 9 << " " << ((a->remove(332))==false) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(497)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(161)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(42)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->insert(341)) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(223)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->remove(223)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*b;
*a=*a;
std::cout << "Line no:" << 19 << " " << (b->insert(112)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(82)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 22 << " " << (a->insert(320)) << std::endl;
std::cout << "Line no:" << 23 << " " << ((b->insert(42))==false) << std::endl;
std::cout << "Line no:" << 24 << " " << ((b->insert(497))==false) << std::endl;
std::cout << "Line no:" << 25 << " " << (b->remove(161)) << std::endl;
std::cout << "Line no:" << 26 << " " << ((a->insert(42))==false) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->remove(497)) << std::endl;
std::cout << "Line no:" << 28 << " " << ((b->insert(341))==false) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 31 << " " << (b->insert(486)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 33 << " " << (b->insert(61)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 35 << " " << (a->insert(77)) << std::endl;
std::cout << "Line no:" << 36 << " " << ((b->insert(42))==false) << std::endl;
std::cout << "Line no:" << 37 << " " << (b->insert(417)) << std::endl;
std::cout << "Line no:" << 38 << " " << (b->insert(428)) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->remove(77)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 41 << " " << (b->remove(428)) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->insert(162)) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->remove(161)) << std::endl;
std::cout << "Line no:" << 44 << " " << ((a->insert(42))==false) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->insert(354)) << std::endl;
std::cout << "Line no:" << 46 << " " << (b->insert(208)) << std::endl;
std::cout << "Line no:" << 47 << " " << (b->insert(224)) << std::endl;
std::cout << "Line no:" << 48 << " " << (b->insert(325)) << std::endl;
std::cout << "Line no:" << 49 << " " << (b->insert(497)) << std::endl;
std::cout << "Line no:" << 50 << " " << (b->remove(417)) << std::endl;
std::cout << "Line no:" << 51 << " " << ((b->insert(486))==false) << std::endl;
try{std::cout <<"Line no:" << 52 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getFloor(82) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getCeiling(82) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getNext(82) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->get(82) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 60 << " " << (b->insert(167)) << std::endl;
std::cout << "Line no:" << 61 << " " << ((a->insert(341))==false) << std::endl;
std::cout << "Line no:" << 62 << " " << ((a->remove(25))==false) << std::endl;
std::cout << "Line no:" << 63 << " " << (b->remove(167)) << std::endl;
std::cout << "Line no:" << 64 << " " << ((b->insert(61))==false) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->insert(435)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->remove(162)) << std::endl;
std::cout << "Line no:" << 67 << " " << ((b->remove(314))==false) << std::endl;
std::cout << "Line no:" << 68 << " " << ((a->insert(42))==false) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->insert(150)) << std::endl;
std::cout << "Line no:" << 70 << " " << (a->insert(3)) << std::endl;
std::cout << "Line no:" << 71 << " " << ((a->insert(354))==false) << std::endl;
std::cout << "Line no:" << 72 << " " << (b->insert(273)) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->insert(378)) << std::endl;
std::cout << "Line no:" << 74 << " " << ((b->insert(61))==false) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->insert(190)) << std::endl;
std::cout << "Line no:" << 76 << " " << ((b->insert(273))==false) << std::endl;
std::cout << "Line no:" << 77 << " " << ((a->insert(435))==false) << std::endl;
std::cout << "Line no:" << 78 << " " << (b->insert(52)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 80 << " " << (b->remove(17)) << std::endl;
std::cout << "Line no:" << 81 << " " << ((a->insert(190))==false) << std::endl;
std::cout << "Line no:" << 82 << " " << (b->insert(17)) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->insert(41)) << std::endl;
std::cout << "Line no:" << 84 << " " << (b->insert(279)) << std::endl;
std::cout << "Line no:" << 85 << " " << ((a->insert(435))==false) << std::endl;
std::cout << "Line no:" << 86 << " " << (b->remove(41)) << std::endl;
std::cout << "Line no:" << 87 << " " << ((b->remove(109))==false) << std::endl;
std::cout << "Line no:" << 88 << " " << (a->insert(321)) << std::endl;
std::cout << "Line no:" << 89 << " " << (b->insert(402)) << std::endl;
std::cout << "Line no:" << 90 << " " << (b->remove(224)) << std::endl;
std::cout << "Line no:" << 91 << " " << (b->insert(343)) << std::endl;
std::cout << "Line no:" << 92 << " " << ((a->remove(306))==false) << std::endl;
std::cout << "Line no:" << 93 << " " << ((b->remove(307))==false) << std::endl;
std::cout << "Line no:" << 94 << " " << ((a->insert(378))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 96 << " " << (b->remove(273)) << std::endl;
std::cout << "Line no:" << 97 << " " << (b->remove(61)) << std::endl;
std::cout << "Line no:" << 98 << " " << (a->insert(290)) << std::endl;
std::cout << "Line no:" << 99 << " " << (a->insert(58)) << std::endl;
std::cout << "Line no:" << 100 << " " << (b->insert(98)) << std::endl;
std::cout << "Line no:" << 101 << " " << ((a->insert(354))==false) << std::endl;
std::cout << "Line no:" << 102 << " " << (b->insert(35)) << std::endl;
std::cout << "Line no:" << 103 << " " << (b->remove(17)) << std::endl;
std::cout << "Line no:" << 104 << " " << (b->insert(483)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 106 << " " << (a->insert(103)) << std::endl;
std::cout << "Line no:" << 107 << " " << (b->insert(306)) << std::endl;
std::cout << "Line no:" << 108 << " " << ((b->remove(457))==false) << std::endl;
std::cout << "Line no:" << 109 << " " << (b->insert(256)) << std::endl;
try{std::cout <<"Line no:" << 110 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 111 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getFloor(17) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getCeiling(17) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getNext(17) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->get(17) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 118 << " " << (a->remove(82)) << std::endl;
std::cout << "Line no:" << 119 << " " << ((b->remove(496))==false) << std::endl;
std::cout << "Line no:" << 120 << " " << ((b->insert(42))==false) << std::endl;
std::cout << "Line no:" << 121 << " " << (b->insert(112)) << std::endl;
std::cout << "Line no:" << 122 << " " << (b->insert(30)) << std::endl;
std::cout << "Line no:" << 123 << " " << ((b->remove(393))==false) << std::endl;
std::cout << "Line no:" << 124 << " " << (a->insert(115)) << std::endl;
std::cout << "Line no:" << 125 << " " << ((b->remove(219))==false) << std::endl;
std::cout << "Line no:" << 126 << " " << (a->remove(435)) << std::endl;
std::cout << "Line no:" << 127 << " " << (a->insert(28)) << std::endl;
std::cout << "Line no:" << 128 << " " << (a->insert(143)) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->insert(267)) << std::endl;
std::cout << "Line no:" << 130 << " " << ((b->insert(325))==false) << std::endl;
std::cout << "Line no:" << 131 << " " << (b->insert(374)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 133 << " " << (a->remove(28)) << std::endl;
std::cout << "Line no:" << 134 << " " << (b->insert(472)) << std::endl;
std::cout << "Line no:" << 135 << " " << (b->insert(157)) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->insert(194)) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->insert(177)) << std::endl;
*a=*a;
std::cout << "Line no:" << 139 << " " << (b->insert(110)) << std::endl;
std::cout << "Line no:" << 140 << " " << (a->insert(374)) << std::endl;
std::cout << "Line no:" << 141 << " " << ((a->remove(69))==false) << std::endl;
std::cout << "Line no:" << 142 << " " << (b->insert(121)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 144 << " " << (b->insert(14)) << std::endl;
std::cout << "Line no:" << 145 << " " << (b->remove(306)) << std::endl;
std::cout << "Line no:" << 146 << " " << ((a->insert(378))==false) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->remove(290)) << std::endl;
std::cout << "Line no:" << 148 << " " << (b->insert(208)) << std::endl;
std::cout << "Line no:" << 149 << " " << (a->insert(345)) << std::endl;
std::cout << "Line no:" << 150 << " " << (a->insert(486)) << std::endl;
std::cout << "Line no:" << 151 << " " << (b->remove(402)) << std::endl;
std::cout << "Line no:" << 152 << " " << ((b->remove(245))==false) << std::endl;
std::cout << "Line no:" << 153 << " " << (a->insert(105)) << std::endl;
std::cout << "Line no:" << 154 << " " << (a->insert(98)) << std::endl;
std::cout << "Line no:" << 155 << " " << (a->insert(356)) << std::endl;
std::cout << "Line no:" << 156 << " " << (a->remove(143)) << std::endl;
std::cout << "Line no:" << 157 << " " << (a->remove(354)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 159 << " " << (b->insert(36)) << std::endl;
std::cout << "Line no:" << 160 << " " << ((b->remove(346))==false) << std::endl;
std::cout << "Line no:" << 161 << " " << (a->insert(409)) << std::endl;
std::cout << "Line no:" << 162 << " " << (a->insert(369)) << std::endl;
std::cout << "Line no:" << 163 << " " << (a->insert(88)) << std::endl;
std::cout << "Line no:" << 164 << " " << (a->insert(32)) << std::endl;
*b=*a;
std::cout << "Line no:" << 166 << " " << (a->insert(55)) << std::endl;
std::cout << "Line no:" << 167 << " " << (b->remove(341)) << std::endl;
try{std::cout <<"Line no:" << 168 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 169 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getFloor(345) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getCeiling(345) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getNext(345) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->get(345) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 176 << " " << (a->insert(419)) << std::endl;
std::cout << "Line no:" << 177 << " " << (b->insert(86)) << std::endl;
std::cout << "Line no:" << 178 << " " << (b->insert(201)) << std::endl;
std::cout << "Line no:" << 179 << " " << (b->insert(483)) << std::endl;
std::cout << "Line no:" << 180 << " " << ((b->insert(356))==false) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 183 << " " << ((b->insert(177))==false) << std::endl;
std::cout << "Line no:" << 184 << " " << ((b->remove(146))==false) << std::endl;
std::cout << "Line no:" << 185 << " " << (b->insert(350)) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->insert(74)) << std::endl;
std::cout << "Line no:" << 187 << " " << (a->remove(98)) << std::endl;
std::cout << "Line no:" << 188 << " " << (b->insert(282)) << std::endl;
std::cout << "Line no:" << 189 << " " << (b->insert(2)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 191 << " " << (a->insert(399)) << std::endl;
std::cout << "Line no:" << 192 << " " << (b->insert(407)) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->remove(88)) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->remove(74)) << std::endl;
std::cout << "Line no:" << 195 << " " << (b->insert(194)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 197 << " " << (b->remove(2)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 200 << " " << (a->remove(190)) << std::endl;
std::cout << "Line no:" << 201 << " " << (b->insert(56)) << std::endl;
std::cout << "Line no:" << 202 << " " << (a->remove(267)) << std::endl;
std::cout << "Line no:" << 203 << " " << (b->insert(217)) << std::endl;
std::cout << "Line no:" << 204 << " " << (a->insert(330)) << std::endl;
std::cout << "Line no:" << 205 << " " << (b->remove(32)) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->insert(110)) << std::endl;
std::cout << "Line no:" << 207 << " " << ((a->insert(110))==false) << std::endl;
std::cout << "Line no:" << 208 << " " << (b->insert(410)) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->remove(483)) << std::endl;
std::cout << "Line no:" << 210 << " " << (a->insert(432)) << std::endl;
std::cout << "Line no:" << 211 << " " << (b->insert(460)) << std::endl;
std::cout << "Line no:" << 212 << " " << ((b->remove(241))==false) << std::endl;
std::cout << "Line no:" << 213 << " " << (a->insert(135)) << std::endl;
std::cout << "Line no:" << 214 << " " << (b->insert(363)) << std::endl;
std::cout << "Line no:" << 215 << " " << (a->insert(298)) << std::endl;
std::cout << "Line no:" << 216 << " " << (b->insert(72)) << std::endl;
std::cout << "Line no:" << 217 << " " << (a->insert(60)) << std::endl;
std::cout << "Line no:" << 218 << " " << ((b->remove(187))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 220 << " " << ((a->insert(115))==false) << std::endl;
std::cout << "Line no:" << 221 << " " << (b->insert(118)) << std::endl;
std::cout << "Line no:" << 222 << " " << (b->insert(211)) << std::endl;
std::cout << "Line no:" << 223 << " " << (b->insert(371)) << std::endl;
std::cout << "Line no:" << 224 << " " << (b->insert(447)) << std::endl;
std::cout << "Line no:" << 225 << " " << ((b->insert(345))==false) << std::endl;
try{std::cout <<"Line no:" << 226 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 227 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getFloor(321) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getCeiling(321) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getNext(321) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->get(321) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 234 << " " << ((a->remove(219))==false) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
