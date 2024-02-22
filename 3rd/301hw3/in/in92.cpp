#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
a->printPretty();
std::cout << "Line no:" << 6 << " " << (a->insert(250)) << std::endl;
std::cout << "Line no:" << 7 << " " << ((a->insert(250))==false) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->remove(250)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(299)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(371)) << std::endl;
std::cout << "Line no:" << 11 << " " << ((a->insert(299))==false) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(53)) << std::endl;
std::cout << "Line no:" << 13 << " " << ((a->remove(114))==false) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->remove(299)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->remove(53)) << std::endl;
std::cout << "Line no:" << 16 << " " << ((a->remove(275))==false) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(81)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 19 << " " << (a->insert(254)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(456)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->insert(331)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 23 << " " << (a->insert(259)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
std::cout << "Line no:" << 26 << " " << (b->insert(461)) << std::endl;
*b=*a;
std::cout << "Line no:" << 28 << " " << (b->remove(456)) << std::endl;
std::cout << "Line no:" << 29 << " " << ((b->insert(371))==false) << std::endl;
std::cout << "Line no:" << 30 << " " << ((a->insert(456))==false) << std::endl;
std::cout << "Line no:" << 31 << " " << (b->remove(81)) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->insert(313)) << std::endl;
std::cout << "Line no:" << 33 << " " << ((b->insert(331))==false) << std::endl;
std::cout << "Line no:" << 34 << " " << (b->insert(32)) << std::endl;
std::cout << "Line no:" << 35 << " " << ((b->remove(276))==false) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->insert(273)) << std::endl;
std::cout << "Line no:" << 37 << " " << (b->remove(259)) << std::endl;
std::cout << "Line no:" << 38 << " " << ((a->insert(254))==false) << std::endl;
*a=*b;
std::cout << "Line no:" << 40 << " " << ((b->remove(386))==false) << std::endl;
std::cout << "Line no:" << 41 << " " << (a->remove(254)) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->insert(154)) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->insert(40)) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->insert(383)) << std::endl;
std::cout << "Line no:" << 45 << " " << (b->insert(155)) << std::endl;
std::cout << "Line no:" << 46 << " " << ((b->remove(341))==false) << std::endl;
std::cout << "Line no:" << 47 << " " << (a->remove(154)) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->insert(320)) << std::endl;
std::cout << "Line no:" << 49 << " " << (b->insert(92)) << std::endl;
std::cout << "Line no:" << 50 << " " << (a->remove(371)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 52 << " " << ((a->insert(331))==false) << std::endl;
std::cout << "Line no:" << 53 << " " << (a->insert(330)) << std::endl;
try{std::cout <<"Line no:" << 54 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getFloor(383) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getCeiling(383) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getNext(383) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->get(383) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 62 << " " << (b->insert(499)) << std::endl;
std::cout << "Line no:" << 63 << " " << ((b->insert(92))==false) << std::endl;
std::cout << "Line no:" << 64 << " " << (b->insert(421)) << std::endl;
std::cout << "Line no:" << 65 << " " << (b->remove(421)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->insert(434)) << std::endl;
std::cout << "Line no:" << 67 << " " << (b->remove(499)) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->insert(274)) << std::endl;
std::cout << "Line no:" << 69 << " " << ((a->insert(320))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 71 << " " << ((b->insert(371))==false) << std::endl;
std::cout << "Line no:" << 72 << " " << ((a->remove(499))==false) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->insert(155)) << std::endl;
std::cout << "Line no:" << 74 << " " << (b->remove(32)) << std::endl;
*a=*a;
std::cout << "Line no:" << 76 << " " << (b->insert(371)) << std::endl;
std::cout << "Line no:" << 77 << " " << ((a->insert(331))==false) << std::endl;
std::cout << "Line no:" << 78 << " " << (a->insert(329)) << std::endl;
std::cout << "Line no:" << 79 << " " << (a->insert(42)) << std::endl;
std::cout << "Line no:" << 80 << " " << (b->insert(266)) << std::endl;
std::cout << "Line no:" << 81 << " " << ((b->remove(227))==false) << std::endl;
std::cout << "Line no:" << 82 << " " << ((a->insert(383))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 84 << " " << ((b->remove(244))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 86 << " " << (a->insert(493)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 88 << " " << (a->insert(178)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 90 << " " << (b->insert(151)) << std::endl;
std::cout << "Line no:" << 91 << " " << (b->remove(254)) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->remove(40)) << std::endl;
std::cout << "Line no:" << 93 << " " << (b->insert(328)) << std::endl;
std::cout << "Line no:" << 94 << " " << (a->insert(429)) << std::endl;
a->printPretty();
*a=*b;
std::cout << "Line no:" << 97 << " " << (b->remove(155)) << std::endl;
std::cout << "Line no:" << 98 << " " << (b->insert(472)) << std::endl;
std::cout << "Line no:" << 99 << " " << (b->insert(413)) << std::endl;
std::cout << "Line no:" << 100 << " " << (b->insert(338)) << std::endl;
std::cout << "Line no:" << 101 << " " << (b->insert(428)) << std::endl;
std::cout << "Line no:" << 102 << " " << ((b->insert(266))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 104 << " " << (a->insert(187)) << std::endl;
std::cout << "Line no:" << 105 << " " << (b->insert(23)) << std::endl;
std::cout << "Line no:" << 106 << " " << (a->insert(213)) << std::endl;
std::cout << "Line no:" << 107 << " " << (b->remove(328)) << std::endl;
std::cout << "Line no:" << 108 << " " << (a->remove(331)) << std::endl;
std::cout << "Line no:" << 109 << " " << (b->insert(227)) << std::endl;
std::cout << "Line no:" << 110 << " " << (a->insert(308)) << std::endl;
std::cout << "Line no:" << 111 << " " << (b->remove(266)) << std::endl;
std::cout << "Line no:" << 112 << " " << ((b->insert(92))==false) << std::endl;
try{std::cout <<"Line no:" << 113 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getFloor(187) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getCeiling(187) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getNext(187) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->get(187) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 120 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 121 << " " << (a->insert(190)) << std::endl;
std::cout << "Line no:" << 122 << " " << (a->remove(155)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 124 << " " << (a->insert(412)) << std::endl;
std::cout << "Line no:" << 125 << " " << ((a->insert(92))==false) << std::endl;
std::cout << "Line no:" << 126 << " " << ((a->insert(461))==false) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->insert(215)) << std::endl;
std::cout << "Line no:" << 128 << " " << (a->remove(308)) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->remove(213)) << std::endl;
std::cout << "Line no:" << 130 << " " << (a->insert(436)) << std::endl;
std::cout << "Line no:" << 131 << " " << (a->remove(190)) << std::endl;
std::cout << "Line no:" << 132 << " " << (a->insert(331)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 134 << " " << (b->remove(338)) << std::endl;
std::cout << "Line no:" << 135 << " " << ((b->insert(23))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 137 << " " << (a->remove(371)) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->remove(371)) << std::endl;
std::cout << "Line no:" << 139 << " " << (b->insert(449)) << std::endl;
std::cout << "Line no:" << 140 << " " << (a->insert(333)) << std::endl;
std::cout << "Line no:" << 141 << " " << (b->insert(490)) << std::endl;
std::cout << "Line no:" << 142 << " " << (a->insert(313)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 144 << " " << (a->insert(296)) << std::endl;
std::cout << "Line no:" << 145 << " " << (a->remove(333)) << std::endl;
std::cout << "Line no:" << 146 << " " << (b->insert(19)) << std::endl;
std::cout << "Line no:" << 147 << " " << (b->remove(413)) << std::endl;
std::cout << "Line no:" << 148 << " " << (b->insert(409)) << std::endl;
std::cout << "Line no:" << 149 << " " << (a->insert(62)) << std::endl;
std::cout << "Line no:" << 150 << " " << (b->insert(292)) << std::endl;
std::cout << "Line no:" << 151 << " " << (b->insert(408)) << std::endl;
std::cout << "Line no:" << 152 << " " << (a->insert(398)) << std::endl;
std::cout << "Line no:" << 153 << " " << (a->remove(436)) << std::endl;
std::cout << "Line no:" << 154 << " " << (b->remove(428)) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->insert(259)) << std::endl;
std::cout << "Line no:" << 156 << " " << (b->insert(468)) << std::endl;
std::cout << "Line no:" << 157 << " " << (a->remove(296)) << std::endl;
std::cout << "Line no:" << 158 << " " << (a->remove(371)) << std::endl;
std::cout << "Line no:" << 159 << " " << (a->insert(15)) << std::endl;
std::cout << "Line no:" << 160 << " " << ((a->insert(187))==false) << std::endl;
std::cout << "Line no:" << 161 << " " << (b->insert(60)) << std::endl;
std::cout << "Line no:" << 162 << " " << (b->remove(490)) << std::endl;
std::cout << "Line no:" << 163 << " " << (a->insert(408)) << std::endl;
std::cout << "Line no:" << 164 << " " << (a->insert(209)) << std::endl;
std::cout << "Line no:" << 165 << " " << ((b->insert(215))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 167 << " " << (a->insert(278)) << std::endl;
std::cout << "Line no:" << 168 << " " << ((a->insert(408))==false) << std::endl;
std::cout << "Line no:" << 169 << " " << (a->remove(92)) << std::endl;
std::cout << "Line no:" << 170 << " " << (a->insert(471)) << std::endl;
try{std::cout <<"Line no:" << 171 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getFloor(209) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getCeiling(209) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getNext(209) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->get(209) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 179 << " " << (b->remove(409)) << std::endl;
std::cout << "Line no:" << 180 << " " << (b->remove(227)) << std::endl;
std::cout << "Line no:" << 181 << " " << ((b->insert(23))==false) << std::endl;
std::cout << "Line no:" << 182 << " " << (b->insert(362)) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->insert(15)) << std::endl;
std::cout << "Line no:" << 184 << " " << (a->insert(13)) << std::endl;
std::cout << "Line no:" << 185 << " " << (b->insert(4)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 187 << " " << ((b->insert(292))==false) << std::endl;
std::cout << "Line no:" << 188 << " " << ((a->insert(266))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 190 << " " << ((b->insert(472))==false) << std::endl;
std::cout << "Line no:" << 191 << " " << (b->insert(493)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 193 << " " << (a->remove(62)) << std::endl;
std::cout << "Line no:" << 194 << " " << (b->remove(493)) << std::endl;
std::cout << "Line no:" << 195 << " " << (a->remove(313)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 197 << " " << (b->insert(402)) << std::endl;
std::cout << "Line no:" << 198 << " " << (b->remove(449)) << std::endl;
std::cout << "Line no:" << 199 << " " << ((b->remove(81))==false) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->remove(371)) << std::endl;
std::cout << "Line no:" << 201 << " " << (b->insert(365)) << std::endl;
std::cout << "Line no:" << 202 << " " << ((a->remove(447))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 204 << " " << (b->remove(292)) << std::endl;
std::cout << "Line no:" << 205 << " " << ((a->insert(471))==false) << std::endl;
std::cout << "Line no:" << 206 << " " << (b->insert(24)) << std::endl;
std::cout << "Line no:" << 207 << " " << (b->insert(10)) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->remove(412)) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->remove(151)) << std::endl;
std::cout << "Line no:" << 210 << " " << (a->insert(172)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 212 << " " << (a->insert(333)) << std::endl;
std::cout << "Line no:" << 213 << " " << ((a->insert(151))==false) << std::endl;
std::cout << "Line no:" << 214 << " " << ((a->remove(424))==false) << std::endl;
std::cout << "Line no:" << 215 << " " << (b->insert(156)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 217 << " " << ((b->insert(19))==false) << std::endl;
std::cout << "Line no:" << 218 << " " << (a->insert(328)) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->insert(453)) << std::endl;
std::cout << "Line no:" << 220 << " " << (a->remove(266)) << std::endl;
std::cout << "Line no:" << 221 << " " << ((a->insert(333))==false) << std::endl;
std::cout << "Line no:" << 222 << " " << (a->insert(260)) << std::endl;
std::cout << "Line no:" << 223 << " " << (a->remove(471)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 225 << " " << (b->insert(118)) << std::endl;
std::cout << "Line no:" << 226 << " " << (a->insert(238)) << std::endl;
std::cout << "Line no:" << 227 << " " << (a->insert(325)) << std::endl;
b->printPretty();
try{std::cout <<"Line no:" << 229 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getFloor(461) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getCeiling(461) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getNext(461) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->get(461) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 237 << " " << ((b->insert(19))==false) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
