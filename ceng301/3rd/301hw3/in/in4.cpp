#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*b;
std::cout << "Line no:" << 7 << " " << (a->insert(327)) << std::endl;
std::cout << "Line no:" << 8 << " " << (b->insert(17)) << std::endl;
std::cout << "Line no:" << 9 << " " << (b->remove(17)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(490)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 12 << " " << (a->remove(327)) << std::endl;
std::cout << "Line no:" << 13 << " " << (b->insert(119)) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(443)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(15)) << std::endl;
std::cout << "Line no:" << 16 << " " << (b->remove(119)) << std::endl;
std::cout << "Line no:" << 17 << " " << ((b->remove(219))==false) << std::endl;
std::cout << "Line no:" << 18 << " " << (b->insert(456)) << std::endl;
std::cout << "Line no:" << 19 << " " << ((b->insert(456))==false) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->remove(490)) << std::endl;
std::cout << "Line no:" << 21 << " " << ((b->remove(436))==false) << std::endl;
std::cout << "Line no:" << 22 << " " << (b->remove(456)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->remove(443)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->insert(240)) << std::endl;
std::cout << "Line no:" << 25 << " " << (b->insert(433)) << std::endl;
std::cout << "Line no:" << 26 << " " << (b->remove(433)) << std::endl;
std::cout << "Line no:" << 27 << " " << (b->insert(1)) << std::endl;
std::cout << "Line no:" << 28 << " " << (b->remove(1)) << std::endl;
std::cout << "Line no:" << 29 << " " << (b->insert(149)) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->insert(347)) << std::endl;
std::cout << "Line no:" << 31 << " " << (b->insert(64)) << std::endl;
std::cout << "Line no:" << 32 << " " << ((a->remove(397))==false) << std::endl;
std::cout << "Line no:" << 33 << " " << (b->insert(341)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 35 << " " << (b->insert(53)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 37 << " " << (b->remove(53)) << std::endl;
std::cout << "Line no:" << 38 << " " << ((b->remove(357))==false) << std::endl;
std::cout << "Line no:" << 39 << " " << (b->remove(341)) << std::endl;
std::cout << "Line no:" << 40 << " " << ((b->insert(64))==false) << std::endl;
std::cout << "Line no:" << 41 << " " << (b->insert(42)) << std::endl;
std::cout << "Line no:" << 42 << " " << (b->remove(64)) << std::endl;
std::cout << "Line no:" << 43 << " " << ((a->insert(240))==false) << std::endl;
std::cout << "Line no:" << 44 << " " << (b->remove(149)) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->remove(15)) << std::endl;
std::cout << "Line no:" << 46 << " " << (a->insert(43)) << std::endl;
try{std::cout <<"Line no:" << 47 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 48 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 49 << " " << a->getFloor(43) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 50 << " " << a->getCeiling(43) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 51 << " " << a->getNext(43) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 52 << " " << a->get(43) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 55 << " " << (b->remove(42)) << std::endl;
std::cout << "Line no:" << 56 << " " << (b->insert(28)) << std::endl;
std::cout << "Line no:" << 57 << " " << (b->insert(185)) << std::endl;
*a=*b;
a->printPretty();
std::cout << "Line no:" << 60 << " " << (b->insert(407)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 62 << " " << ((b->insert(185))==false) << std::endl;
a->printPretty();
*b=*a;
std::cout << "Line no:" << 65 << " " << (b->remove(28)) << std::endl;
std::cout << "Line no:" << 66 << " " << ((b->insert(185))==false) << std::endl;
std::cout << "Line no:" << 67 << " " << (b->insert(435)) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->insert(158)) << std::endl;
*b=*b;
std::cout << "Line no:" << 70 << " " << (a->insert(437)) << std::endl;
std::cout << "Line no:" << 71 << " " << ((a->insert(28))==false) << std::endl;
std::cout << "Line no:" << 72 << " " << (b->insert(254)) << std::endl;
std::cout << "Line no:" << 73 << " " << ((a->remove(389))==false) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->insert(53)) << std::endl;
std::cout << "Line no:" << 75 << " " << (b->insert(227)) << std::endl;
std::cout << "Line no:" << 76 << " " << (b->remove(435)) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->remove(185)) << std::endl;
std::cout << "Line no:" << 78 << " " << (b->remove(227)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 80 << " " << (b->insert(40)) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->insert(485)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 83 << " " << (b->insert(403)) << std::endl;
std::cout << "Line no:" << 84 << " " << (b->insert(383)) << std::endl;
std::cout << "Line no:" << 85 << " " << (b->insert(18)) << std::endl;
std::cout << "Line no:" << 86 << " " << (a->insert(467)) << std::endl;
std::cout << "Line no:" << 87 << " " << (a->remove(158)) << std::endl;
std::cout << "Line no:" << 88 << " " << ((b->insert(18))==false) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->insert(477)) << std::endl;
std::cout << "Line no:" << 90 << " " << (b->insert(174)) << std::endl;
std::cout << "Line no:" << 91 << " " << (b->insert(226)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 93 << " " << (a->remove(437)) << std::endl;
std::cout << "Line no:" << 94 << " " << (b->insert(222)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 96 << " " << ((a->insert(467))==false) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 99 << " " << ((a->remove(164))==false) << std::endl;
std::cout << "Line no:" << 100 << " " << (b->remove(185)) << std::endl;
std::cout << "Line no:" << 101 << " " << (b->insert(141)) << std::endl;
std::cout << "Line no:" << 102 << " " << (b->insert(62)) << std::endl;
std::cout << "Line no:" << 103 << " " << (a->insert(403)) << std::endl;
*a=*a;
try{std::cout <<"Line no:" << 105 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 106 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 107 << " " << a->getFloor(403) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 108 << " " << a->getCeiling(403) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 109 << " " << a->getNext(403) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 110 << " " << a->get(403) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 111 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 113 << " " << (b->remove(222)) << std::endl;
std::cout << "Line no:" << 114 << " " << (a->remove(28)) << std::endl;
std::cout << "Line no:" << 115 << " " << (a->remove(485)) << std::endl;
std::cout << "Line no:" << 116 << " " << (a->insert(429)) << std::endl;
std::cout << "Line no:" << 117 << " " << (a->insert(481)) << std::endl;
std::cout << "Line no:" << 118 << " " << (b->remove(226)) << std::endl;
std::cout << "Line no:" << 119 << " " << (b->insert(264)) << std::endl;
std::cout << "Line no:" << 120 << " " << (a->insert(263)) << std::endl;
std::cout << "Line no:" << 121 << " " << ((b->remove(80))==false) << std::endl;
std::cout << "Line no:" << 122 << " " << (b->insert(299)) << std::endl;
std::cout << "Line no:" << 123 << " " << (a->remove(429)) << std::endl;
std::cout << "Line no:" << 124 << " " << (b->remove(40)) << std::endl;
std::cout << "Line no:" << 125 << " " << (b->remove(18)) << std::endl;
std::cout << "Line no:" << 126 << " " << (a->remove(481)) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->remove(62)) << std::endl;
std::cout << "Line no:" << 128 << " " << (a->insert(141)) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->insert(387)) << std::endl;
std::cout << "Line no:" << 130 << " " << ((b->remove(73))==false) << std::endl;
std::cout << "Line no:" << 131 << " " << (a->insert(89)) << std::endl;
std::cout << "Line no:" << 132 << " " << (b->insert(357)) << std::endl;
std::cout << "Line no:" << 133 << " " << ((a->insert(263))==false) << std::endl;
std::cout << "Line no:" << 134 << " " << (b->remove(403)) << std::endl;
std::cout << "Line no:" << 135 << " " << ((a->insert(53))==false) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->remove(467)) << std::endl;
std::cout << "Line no:" << 137 << " " << ((a->insert(263))==false) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->remove(141)) << std::endl;
*a=*b;
std::cout << "Line no:" << 140 << " " << (b->remove(264)) << std::endl;
std::cout << "Line no:" << 141 << " " << (b->insert(208)) << std::endl;
std::cout << "Line no:" << 142 << " " << (b->insert(164)) << std::endl;
std::cout << "Line no:" << 143 << " " << ((a->insert(383))==false) << std::endl;
std::cout << "Line no:" << 144 << " " << ((a->insert(299))==false) << std::endl;
std::cout << "Line no:" << 145 << " " << (b->insert(430)) << std::endl;
std::cout << "Line no:" << 146 << " " << ((a->insert(254))==false) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->insert(374)) << std::endl;
std::cout << "Line no:" << 148 << " " << (a->insert(166)) << std::endl;
std::cout << "Line no:" << 149 << " " << ((b->insert(164))==false) << std::endl;
std::cout << "Line no:" << 150 << " " << (a->remove(374)) << std::endl;
std::cout << "Line no:" << 151 << " " << ((b->insert(164))==false) << std::endl;
std::cout << "Line no:" << 152 << " " << ((a->remove(203))==false) << std::endl;
std::cout << "Line no:" << 153 << " " << ((b->insert(174))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 155 << " " << ((a->remove(135))==false) << std::endl;
*b=*b;
std::cout << "Line no:" << 157 << " " << (b->insert(458)) << std::endl;
std::cout << "Line no:" << 158 << " " << (a->insert(171)) << std::endl;
std::cout << "Line no:" << 159 << " " << ((a->remove(310))==false) << std::endl;
std::cout << "Line no:" << 160 << " " << ((b->remove(135))==false) << std::endl;
std::cout << "Line no:" << 161 << " " << ((b->insert(357))==false) << std::endl;
std::cout << "Line no:" << 162 << " " << ((a->insert(299))==false) << std::endl;
try{std::cout <<"Line no:" << 163 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 164 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 165 << " " << a->getFloor(174) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 166 << " " << a->getCeiling(174) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 167 << " " << a->getNext(174) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 168 << " " << a->get(174) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 169 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 171 << " " << (a->remove(171)) << std::endl;
std::cout << "Line no:" << 172 << " " << ((b->insert(299))==false) << std::endl;
std::cout << "Line no:" << 173 << " " << (a->remove(357)) << std::endl;
std::cout << "Line no:" << 174 << " " << (b->insert(69)) << std::endl;
std::cout << "Line no:" << 175 << " " << (b->insert(184)) << std::endl;
std::cout << "Line no:" << 176 << " " << (b->insert(13)) << std::endl;
std::cout << "Line no:" << 177 << " " << ((b->remove(173))==false) << std::endl;
std::cout << "Line no:" << 178 << " " << (a->insert(98)) << std::endl;
std::cout << "Line no:" << 179 << " " << ((a->insert(98))==false) << std::endl;
std::cout << "Line no:" << 180 << " " << (a->remove(174)) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->insert(232)) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->insert(369)) << std::endl;
*a=*a;
std::cout << "Line no:" << 184 << " " << (b->insert(270)) << std::endl;
std::cout << "Line no:" << 185 << " " << ((a->insert(383))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 187 << " " << (a->remove(383)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 189 << " " << ((b->insert(13))==false) << std::endl;
std::cout << "Line no:" << 190 << " " << (a->insert(8)) << std::endl;
std::cout << "Line no:" << 191 << " " << (b->insert(417)) << std::endl;
std::cout << "Line no:" << 192 << " " << (b->insert(316)) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->insert(454)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 195 << " " << (b->insert(456)) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->remove(383)) << std::endl;
std::cout << "Line no:" << 197 << " " << (a->insert(464)) << std::endl;
b->printPretty();
b->printPretty();
*b=*a;
std::cout << "Line no:" << 201 << " " << (b->insert(229)) << std::endl;
std::cout << "Line no:" << 202 << " " << (a->remove(264)) << std::endl;
std::cout << "Line no:" << 203 << " " << (a->remove(254)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 205 << " " << (b->remove(229)) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->remove(98)) << std::endl;
std::cout << "Line no:" << 207 << " " << (a->insert(105)) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->remove(232)) << std::endl;
std::cout << "Line no:" << 209 << " " << ((a->insert(166))==false) << std::endl;
std::cout << "Line no:" << 210 << " " << ((b->remove(170))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 212 << " " << (b->remove(454)) << std::endl;
std::cout << "Line no:" << 213 << " " << (a->insert(331)) << std::endl;
std::cout << "Line no:" << 214 << " " << (a->insert(119)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 216 << " " << (a->insert(360)) << std::endl;
std::cout << "Line no:" << 217 << " " << (a->insert(372)) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->insert(107)) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->insert(306)) << std::endl;
std::cout << "Line no:" << 220 << " " << ((a->insert(360))==false) << std::endl;
std::cout << "Line no:" << 221 << " " << (b->insert(132)) << std::endl;
try{std::cout <<"Line no:" << 222 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 223 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 224 << " " << a->getFloor(369) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 225 << " " << a->getCeiling(369) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 226 << " " << a->getNext(369) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 227 << " " << a->get(369) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 230 << " " << (a->insert(3)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
