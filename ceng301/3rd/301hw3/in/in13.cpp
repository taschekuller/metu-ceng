#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(285)) << std::endl;
std::cout << "Line no:" << 6 << " " << ((a->insert(285))==false) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(294)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->remove(294)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->remove(285)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 11 << " " << (a->insert(59)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->remove(59)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->insert(256)) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(198)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(14)) << std::endl;
std::cout << "Line no:" << 16 << " " << ((a->insert(256))==false) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(236)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->insert(464)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(352)) << std::endl;
std::cout << "Line no:" << 20 << " " << ((a->remove(129))==false) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->insert(173)) << std::endl;
std::cout << "Line no:" << 22 << " " << ((a->insert(236))==false) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->remove(464)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 25 << " " << (a->insert(151)) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->remove(256)) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->insert(42)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 29 << " " << (a->insert(10)) << std::endl;
std::cout << "Line no:" << 30 << " " << ((a->insert(352))==false) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->insert(271)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 33 << " " << ((a->insert(198))==false) << std::endl;
std::cout << "Line no:" << 34 << " " << (a->remove(10)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 37 << " " << (a->remove(352)) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->insert(86)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 40 << " " << ((a->remove(26))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 42 << " " << (a->insert(40)) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->insert(35)) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->remove(151)) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->insert(325)) << std::endl;
std::cout << "Line no:" << 46 << " " << (a->insert(228)) << std::endl;
std::cout << "Line no:" << 47 << " " << (a->insert(483)) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->insert(70)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 50 << " " << (a->insert(307)) << std::endl;
std::cout << "Line no:" << 51 << " " << ((a->insert(228))==false) << std::endl;
std::cout << "Line no:" << 52 << " " << ((a->insert(325))==false) << std::endl;
try{std::cout <<"Line no:" << 53 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getFloor(483) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getCeiling(483) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getNext(483) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->get(483) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 61 << " " << (a->insert(272)) << std::endl;
std::cout << "Line no:" << 62 << " " << (a->insert(148)) << std::endl;
std::cout << "Line no:" << 63 << " " << (a->insert(52)) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->insert(137)) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->remove(137)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->remove(40)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->insert(226)) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->insert(136)) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->insert(114)) << std::endl;
std::cout << "Line no:" << 70 << " " << (a->insert(170)) << std::endl;
std::cout << "Line no:" << 71 << " " << (a->insert(310)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 73 << " " << (a->remove(483)) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->remove(86)) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->insert(86)) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->insert(458)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 78 << " " << (a->insert(107)) << std::endl;
std::cout << "Line no:" << 79 << " " << (a->insert(186)) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->insert(239)) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->insert(116)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 83 << " " << (a->insert(442)) << std::endl;
std::cout << "Line no:" << 84 << " " << (a->insert(483)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 86 << " " << (a->remove(114)) << std::endl;
std::cout << "Line no:" << 87 << " " << (a->remove(186)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 89 << " " << (a->insert(224)) << std::endl;
std::cout << "Line no:" << 90 << " " << (a->insert(85)) << std::endl;
std::cout << "Line no:" << 91 << " " << (a->remove(239)) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->remove(136)) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->insert(426)) << std::endl;
std::cout << "Line no:" << 94 << " " << (a->remove(42)) << std::endl;
std::cout << "Line no:" << 95 << " " << (a->insert(345)) << std::endl;
std::cout << "Line no:" << 96 << " " << (a->insert(245)) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->remove(170)) << std::endl;
std::cout << "Line no:" << 98 << " " << (a->insert(198)) << std::endl;
std::cout << "Line no:" << 99 << " " << (a->remove(173)) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->insert(14)) << std::endl;
std::cout << "Line no:" << 101 << " " << ((a->insert(310))==false) << std::endl;
std::cout << "Line no:" << 102 << " " << ((a->remove(251))==false) << std::endl;
std::cout << "Line no:" << 103 << " " << (a->insert(108)) << std::endl;
std::cout << "Line no:" << 104 << " " << (a->insert(363)) << std::endl;
std::cout << "Line no:" << 105 << " " << (a->remove(271)) << std::endl;
std::cout << "Line no:" << 106 << " " << (a->remove(236)) << std::endl;
std::cout << "Line no:" << 107 << " " << (a->insert(36)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 109 << " " << (a->insert(115)) << std::endl;
std::cout << "Line no:" << 110 << " " << (a->insert(7)) << std::endl;
try{std::cout <<"Line no:" << 111 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getFloor(70) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getCeiling(70) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getNext(70) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->get(70) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 119 << " " << (a->insert(18)) << std::endl;
std::cout << "Line no:" << 120 << " " << (a->insert(100)) << std::endl;
std::cout << "Line no:" << 121 << " " << (a->remove(198)) << std::endl;
std::cout << "Line no:" << 122 << " " << (a->remove(108)) << std::endl;
std::cout << "Line no:" << 123 << " " << (a->insert(29)) << std::endl;
std::cout << "Line no:" << 124 << " " << (a->insert(433)) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->remove(307)) << std::endl;
std::cout << "Line no:" << 126 << " " << (a->remove(148)) << std::endl;
std::cout << "Line no:" << 127 << " " << (a->remove(245)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 129 << " " << (a->remove(325)) << std::endl;
std::cout << "Line no:" << 130 << " " << (a->remove(7)) << std::endl;
std::cout << "Line no:" << 131 << " " << (a->insert(198)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*b;
std::cout << "Line no:" << 134 << " " << (a->insert(371)) << std::endl;
std::cout << "Line no:" << 135 << " " << ((a->remove(479))==false) << std::endl;
std::cout << "Line no:" << 136 << " " << ((a->remove(282))==false) << std::endl;
std::cout << "Line no:" << 137 << " " << (b->insert(244)) << std::endl;
std::cout << "Line no:" << 138 << " " << ((a->insert(228))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 140 << " " << ((a->insert(272))==false) << std::endl;
std::cout << "Line no:" << 141 << " " << (a->insert(98)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 143 << " " << (a->insert(260)) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->insert(321)) << std::endl;
std::cout << "Line no:" << 145 << " " << ((b->insert(321))==false) << std::endl;
std::cout << "Line no:" << 146 << " " << (a->insert(416)) << std::endl;
std::cout << "Line no:" << 147 << " " << (b->insert(299)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 149 << " " << (a->insert(337)) << std::endl;
std::cout << "Line no:" << 150 << " " << (a->insert(46)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 152 << " " << (a->insert(463)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 154 << " " << (b->insert(225)) << std::endl;
std::cout << "Line no:" << 155 << " " << (a->remove(198)) << std::endl;
std::cout << "Line no:" << 156 << " " << ((b->remove(13))==false) << std::endl;
std::cout << "Line no:" << 157 << " " << (b->remove(299)) << std::endl;
std::cout << "Line no:" << 158 << " " << ((a->insert(310))==false) << std::endl;
std::cout << "Line no:" << 159 << " " << (a->insert(267)) << std::endl;
std::cout << "Line no:" << 160 << " " << (b->remove(321)) << std::endl;
std::cout << "Line no:" << 161 << " " << (a->remove(337)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 163 << " " << (b->insert(269)) << std::endl;
std::cout << "Line no:" << 164 << " " << (b->insert(240)) << std::endl;
std::cout << "Line no:" << 165 << " " << (b->insert(62)) << std::endl;
std::cout << "Line no:" << 166 << " " << (a->insert(118)) << std::endl;
std::cout << "Line no:" << 167 << " " << (b->insert(252)) << std::endl;
try{std::cout <<"Line no:" << 168 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 169 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getFloor(14) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getCeiling(14) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getNext(14) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->get(14) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 176 << " " << ((a->insert(35))==false) << std::endl;
std::cout << "Line no:" << 177 << " " << (a->insert(467)) << std::endl;
std::cout << "Line no:" << 178 << " " << ((a->remove(439))==false) << std::endl;
std::cout << "Line no:" << 179 << " " << (a->remove(36)) << std::endl;
std::cout << "Line no:" << 180 << " " << (b->remove(225)) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->remove(267)) << std::endl;
std::cout << "Line no:" << 182 << " " << ((b->insert(269))==false) << std::endl;
std::cout << "Line no:" << 183 << " " << ((b->insert(244))==false) << std::endl;
std::cout << "Line no:" << 184 << " " << (b->insert(405)) << std::endl;
std::cout << "Line no:" << 185 << " " << (b->insert(357)) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->remove(98)) << std::endl;
std::cout << "Line no:" << 187 << " " << (b->insert(202)) << std::endl;
std::cout << "Line no:" << 188 << " " << ((a->insert(14))==false) << std::endl;
std::cout << "Line no:" << 189 << " " << (a->insert(7)) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->insert(319)) << std::endl;
std::cout << "Line no:" << 191 << " " << (a->insert(36)) << std::endl;
std::cout << "Line no:" << 192 << " " << ((a->insert(224))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 194 << " " << (a->insert(189)) << std::endl;
std::cout << "Line no:" << 195 << " " << (b->insert(118)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 197 << " " << ((a->insert(433))==false) << std::endl;
std::cout << "Line no:" << 198 << " " << (b->insert(329)) << std::endl;
std::cout << "Line no:" << 199 << " " << (b->remove(357)) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->insert(142)) << std::endl;
std::cout << "Line no:" << 201 << " " << (b->remove(142)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 203 << " " << (a->remove(189)) << std::endl;
std::cout << "Line no:" << 204 << " " << (a->insert(363)) << std::endl;
*b=*a;
std::cout << "Line no:" << 206 << " " << (b->insert(497)) << std::endl;
std::cout << "Line no:" << 207 << " " << (b->remove(18)) << std::endl;
std::cout << "Line no:" << 208 << " " << (b->remove(363)) << std::endl;
std::cout << "Line no:" << 209 << " " << (a->insert(464)) << std::endl;
*b=*a;
a->printPretty();
std::cout << "Line no:" << 212 << " " << (a->insert(474)) << std::endl;
*b=*b;
std::cout << "Line no:" << 214 << " " << ((a->remove(437))==false) << std::endl;
std::cout << "Line no:" << 215 << " " << (a->insert(217)) << std::endl;
std::cout << "Line no:" << 216 << " " << ((b->insert(464))==false) << std::endl;
std::cout << "Line no:" << 217 << " " << (b->insert(120)) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->insert(280)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 220 << " " << (a->insert(247)) << std::endl;
std::cout << "Line no:" << 221 << " " << (a->insert(3)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 223 << " " << ((a->insert(260))==false) << std::endl;
std::cout << "Line no:" << 224 << " " << (b->remove(36)) << std::endl;
std::cout << "Line no:" << 225 << " " << (a->insert(352)) << std::endl;
a->printPretty();
try{std::cout <<"Line no:" << 227 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getFloor(433) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getCeiling(433) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getNext(433) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->get(433) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 235 << " " << ((b->insert(29))==false) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
