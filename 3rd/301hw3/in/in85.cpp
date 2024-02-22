#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(275)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 7 << " " << (a->remove(275)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->insert(497)) << std::endl;
std::cout << "Line no:" << 9 << " " << ((a->insert(497))==false) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->remove(497)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(499)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 13 << " " << ((a->remove(161))==false) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(399)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(285)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(225)) << std::endl;
std::cout << "Line no:" << 17 << " " << ((a->remove(291))==false) << std::endl;
std::cout << "Line no:" << 18 << " " << ((a->insert(499))==false) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(136)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->remove(225)) << std::endl;
std::cout << "Line no:" << 21 << " " << ((a->insert(285))==false) << std::endl;
std::cout << "Line no:" << 22 << " " << ((a->insert(136))==false) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->insert(266)) << std::endl;
std::cout << "Line no:" << 24 << " " << ((a->remove(63))==false) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->insert(52)) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->remove(52)) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->insert(299)) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->remove(136)) << std::endl;
std::cout << "Line no:" << 29 << " " << ((a->remove(381))==false) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->insert(9)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->insert(285)) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->remove(499)) << std::endl;
std::cout << "Line no:" << 33 << " " << ((a->insert(399))==false) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 36 << " " << (a->insert(416)) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->remove(9)) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->insert(198)) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->insert(430)) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->insert(396)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 42 << " " << ((a->remove(402))==false) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->insert(478)) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->insert(327)) << std::endl;
std::cout << "Line no:" << 45 << " " << ((a->remove(297))==false) << std::endl;
std::cout << "Line no:" << 46 << " " << (a->remove(285)) << std::endl;
std::cout << "Line no:" << 47 << " " << (a->insert(242)) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->remove(266)) << std::endl;
std::cout << "Line no:" << 49 << " " << (a->insert(244)) << std::endl;
std::cout << "Line no:" << 50 << " " << (a->insert(322)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 52 << " " << (a->insert(467)) << std::endl;
std::cout << "Line no:" << 53 << " " << (a->remove(299)) << std::endl;
try{std::cout <<"Line no:" << 54 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getFloor(478) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getCeiling(478) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getNext(478) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->get(478) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 62 << " " << (a->remove(467)) << std::endl;
std::cout << "Line no:" << 63 << " " << (a->insert(362)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 65 << " " << (a->insert(171)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->insert(399)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->insert(28)) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->insert(393)) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->insert(54)) << std::endl;
std::cout << "Line no:" << 70 << " " << (a->insert(44)) << std::endl;
std::cout << "Line no:" << 71 << " " << (a->insert(86)) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->insert(186)) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->remove(285)) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->insert(175)) << std::endl;
a->printPretty();
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
std::cout << "Line no:" << 78 << " " << (a->remove(198)) << std::endl;
std::cout << "Line no:" << 79 << " " << (a->remove(396)) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->remove(242)) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->insert(461)) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->insert(176)) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->insert(179)) << std::endl;
std::cout << "Line no:" << 84 << " " << (a->remove(175)) << std::endl;
std::cout << "Line no:" << 85 << " " << ((b->remove(4))==false) << std::endl;
std::cout << "Line no:" << 86 << " " << (b->insert(282)) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->remove(393)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 89 << " " << (b->insert(387)) << std::endl;
std::cout << "Line no:" << 90 << " " << (a->insert(305)) << std::endl;
std::cout << "Line no:" << 91 << " " << (b->insert(169)) << std::endl;
std::cout << "Line no:" << 92 << " " << (b->insert(22)) << std::endl;
std::cout << "Line no:" << 93 << " " << ((a->insert(327))==false) << std::endl;
std::cout << "Line no:" << 94 << " " << (a->remove(327)) << std::endl;
std::cout << "Line no:" << 95 << " " << (a->insert(34)) << std::endl;
std::cout << "Line no:" << 96 << " " << (a->insert(444)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 98 << " " << (a->insert(137)) << std::endl;
std::cout << "Line no:" << 99 << " " << ((b->insert(322))==false) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->insert(402)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 102 << " " << (b->remove(171)) << std::endl;
std::cout << "Line no:" << 103 << " " << ((a->insert(179))==false) << std::endl;
std::cout << "Line no:" << 104 << " " << (b->insert(33)) << std::endl;
std::cout << "Line no:" << 105 << " " << (a->insert(405)) << std::endl;
std::cout << "Line no:" << 106 << " " << ((b->insert(186))==false) << std::endl;
std::cout << "Line no:" << 107 << " " << (a->insert(395)) << std::endl;
std::cout << "Line no:" << 108 << " " << ((b->insert(305))==false) << std::endl;
std::cout << "Line no:" << 109 << " " << ((a->insert(395))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 111 << " " << (a->insert(484)) << std::endl;
b->printPretty();
try{std::cout <<"Line no:" << 113 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getFloor(405) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getCeiling(405) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getNext(405) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->get(405) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 120 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 121 << " " << (b->insert(432)) << std::endl;
std::cout << "Line no:" << 122 << " " << (a->remove(387)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 124 << " " << (a->remove(305)) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->remove(176)) << std::endl;
std::cout << "Line no:" << 126 << " " << (a->insert(171)) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->insert(134)) << std::endl;
std::cout << "Line no:" << 128 << " " << (a->insert(276)) << std::endl;
std::cout << "Line no:" << 129 << " " << (b->remove(134)) << std::endl;
std::cout << "Line no:" << 130 << " " << (a->insert(313)) << std::endl;
std::cout << "Line no:" << 131 << " " << (a->insert(15)) << std::endl;
std::cout << "Line no:" << 132 << " " << (b->insert(424)) << std::endl;
std::cout << "Line no:" << 133 << " " << (a->remove(461)) << std::endl;
std::cout << "Line no:" << 134 << " " << (b->insert(486)) << std::endl;
std::cout << "Line no:" << 135 << " " << ((a->insert(22))==false) << std::endl;
std::cout << "Line no:" << 136 << " " << (b->remove(424)) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->insert(355)) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->insert(230)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 140 << " " << (b->insert(274)) << std::endl;
std::cout << "Line no:" << 141 << " " << (b->insert(189)) << std::endl;
std::cout << "Line no:" << 142 << " " << (b->insert(115)) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->remove(22)) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->insert(101)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 146 << " " << (a->insert(420)) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->insert(64)) << std::endl;
std::cout << "Line no:" << 148 << " " << (a->insert(463)) << std::endl;
*b=*a;
std::cout << "Line no:" << 150 << " " << (a->remove(402)) << std::endl;
std::cout << "Line no:" << 151 << " " << (a->insert(375)) << std::endl;
std::cout << "Line no:" << 152 << " " << (b->remove(444)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 154 << " " << (b->insert(148)) << std::endl;
std::cout << "Line no:" << 155 << " " << (a->insert(479)) << std::endl;
std::cout << "Line no:" << 156 << " " << (b->insert(172)) << std::endl;
std::cout << "Line no:" << 157 << " " << ((a->remove(180))==false) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->remove(416)) << std::endl;
std::cout << "Line no:" << 159 << " " << ((b->remove(425))==false) << std::endl;
std::cout << "Line no:" << 160 << " " << (a->remove(395)) << std::endl;
std::cout << "Line no:" << 161 << " " << ((a->remove(385))==false) << std::endl;
std::cout << "Line no:" << 162 << " " << (a->insert(265)) << std::endl;
std::cout << "Line no:" << 163 << " " << (a->insert(352)) << std::endl;
std::cout << "Line no:" << 164 << " " << (b->insert(172)) << std::endl;
std::cout << "Line no:" << 165 << " " << (a->insert(133)) << std::endl;
std::cout << "Line no:" << 166 << " " << (a->remove(133)) << std::endl;
std::cout << "Line no:" << 167 << " " << ((a->remove(164))==false) << std::endl;
std::cout << "Line no:" << 168 << " " << ((a->remove(443))==false) << std::endl;
std::cout << "Line no:" << 169 << " " << ((a->remove(295))==false) << std::endl;
std::cout << "Line no:" << 170 << " " << (a->insert(340)) << std::endl;
try{std::cout <<"Line no:" << 171 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getFloor(399) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getCeiling(399) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getNext(399) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->get(399) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
a->printPretty();
std::cout << "Line no:" << 180 << " " << (b->insert(323)) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->remove(405)) << std::endl;
std::cout << "Line no:" << 182 << " " << (b->insert(417)) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->remove(230)) << std::endl;
std::cout << "Line no:" << 184 << " " << (a->insert(92)) << std::endl;
std::cout << "Line no:" << 185 << " " << (b->insert(392)) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->remove(34)) << std::endl;
std::cout << "Line no:" << 187 << " " << (b->insert(84)) << std::endl;
std::cout << "Line no:" << 188 << " " << (b->insert(84)) << std::endl;
std::cout << "Line no:" << 189 << " " << (a->insert(97)) << std::endl;
std::cout << "Line no:" << 190 << " " << (a->insert(450)) << std::endl;
std::cout << "Line no:" << 191 << " " << ((b->remove(364))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 193 << " " << (b->remove(148)) << std::endl;
std::cout << "Line no:" << 194 << " " << ((b->insert(84))==false) << std::endl;
std::cout << "Line no:" << 195 << " " << (b->remove(282)) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->insert(143)) << std::endl;
*b=*b;
std::cout << "Line no:" << 198 << " " << ((a->insert(171))==false) << std::endl;
std::cout << "Line no:" << 199 << " " << ((b->remove(158))==false) << std::endl;
std::cout << "Line no:" << 200 << " " << ((a->remove(291))==false) << std::endl;
std::cout << "Line no:" << 201 << " " << ((b->insert(392))==false) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->insert(15)) << std::endl;
std::cout << "Line no:" << 203 << " " << (a->insert(418)) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->remove(402)) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->remove(86)) << std::endl;
std::cout << "Line no:" << 206 << " " << (b->insert(28)) << std::endl;
std::cout << "Line no:" << 207 << " " << (a->insert(84)) << std::endl;
*a=*b;
std::cout << "Line no:" << 209 << " " << (a->insert(230)) << std::endl;
std::cout << "Line no:" << 210 << " " << (a->remove(420)) << std::endl;
std::cout << "Line no:" << 211 << " " << ((a->insert(323))==false) << std::endl;
std::cout << "Line no:" << 212 << " " << (a->remove(86)) << std::endl;
std::cout << "Line no:" << 213 << " " << (b->remove(179)) << std::endl;
*b=*b;
std::cout << "Line no:" << 215 << " " << (a->remove(355)) << std::endl;
std::cout << "Line no:" << 216 << " " << ((b->remove(410))==false) << std::endl;
std::cout << "Line no:" << 217 << " " << (a->remove(430)) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->insert(81)) << std::endl;
std::cout << "Line no:" << 219 << " " << ((b->insert(137))==false) << std::endl;
*b=*a;
b->printPretty();
std::cout << "Line no:" << 222 << " " << (a->insert(252)) << std::endl;
std::cout << "Line no:" << 223 << " " << (a->remove(252)) << std::endl;
std::cout << "Line no:" << 224 << " " << ((a->insert(399))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 226 << " " << (b->insert(206)) << std::endl;
std::cout << "Line no:" << 227 << " " << (a->remove(484)) << std::endl;
std::cout << "Line no:" << 228 << " " << (a->insert(390)) << std::endl;
a->printPretty();
try{std::cout <<"Line no:" << 230 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getFloor(189) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getCeiling(189) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getNext(189) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->get(189) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 237 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 238 << " " << ((b->remove(51))==false) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
