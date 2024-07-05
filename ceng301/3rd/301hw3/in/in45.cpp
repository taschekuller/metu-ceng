#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(303)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(7)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->remove(303)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->remove(7)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(479)) << std::endl;
std::cout << "Line no:" << 10 << " " << ((a->insert(479))==false) << std::endl;
std::cout << "Line no:" << 11 << " " << ((a->insert(479))==false) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(93)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->insert(259)) << std::endl;
std::cout << "Line no:" << 14 << " " << ((a->insert(259))==false) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(334)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(175)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->remove(259)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->insert(312)) << std::endl;
std::cout << "Line no:" << 19 << " " << ((a->remove(17))==false) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(352)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->insert(265)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->remove(93)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*a;
std::cout << "Line no:" << 25 << " " << ((a->insert(479))==false) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->remove(334)) << std::endl;
*b=*b;
std::cout << "Line no:" << 28 << " " << (b->insert(102)) << std::endl;
*b=*a;
std::cout << "Line no:" << 30 << " " << (b->insert(341)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->insert(473)) << std::endl;
std::cout << "Line no:" << 32 << " " << (b->insert(271)) << std::endl;
std::cout << "Line no:" << 33 << " " << (b->insert(150)) << std::endl;
std::cout << "Line no:" << 34 << " " << ((a->insert(312))==false) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->remove(352)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 37 << " " << (b->insert(50)) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->insert(418)) << std::endl;
std::cout << "Line no:" << 39 << " " << (b->insert(404)) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->remove(265)) << std::endl;
std::cout << "Line no:" << 41 << " " << (b->insert(486)) << std::endl;
std::cout << "Line no:" << 42 << " " << (b->insert(378)) << std::endl;
std::cout << "Line no:" << 43 << " " << ((a->insert(479))==false) << std::endl;
std::cout << "Line no:" << 44 << " " << (b->remove(341)) << std::endl;
std::cout << "Line no:" << 45 << " " << ((b->remove(317))==false) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 48 << " " << (b->remove(352)) << std::endl;
std::cout << "Line no:" << 49 << " " << (a->insert(139)) << std::endl;
std::cout << "Line no:" << 50 << " " << (a->insert(124)) << std::endl;
std::cout << "Line no:" << 51 << " " << ((a->insert(479))==false) << std::endl;
std::cout << "Line no:" << 52 << " " << ((a->insert(473))==false) << std::endl;
try{std::cout <<"Line no:" << 53 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getFloor(175) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getCeiling(175) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getNext(175) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->get(175) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
b->printPretty();
std::cout << "Line no:" << 62 << " " << (a->insert(343)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 64 << " " << ((a->remove(104))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 66 << " " << (b->remove(175)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->remove(124)) << std::endl;
std::cout << "Line no:" << 68 << " " << (b->insert(287)) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->insert(363)) << std::endl;
std::cout << "Line no:" << 70 << " " << (a->insert(118)) << std::endl;
std::cout << "Line no:" << 71 << " " << ((a->remove(372))==false) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->insert(417)) << std::endl;
std::cout << "Line no:" << 73 << " " << (b->insert(127)) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->insert(93)) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->remove(363)) << std::endl;
std::cout << "Line no:" << 76 << " " << (b->remove(50)) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->remove(418)) << std::endl;
std::cout << "Line no:" << 78 << " " << ((a->insert(118))==false) << std::endl;
std::cout << "Line no:" << 79 << " " << ((a->insert(93))==false) << std::endl;
std::cout << "Line no:" << 80 << " " << ((b->insert(479))==false) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->insert(143)) << std::endl;
std::cout << "Line no:" << 82 << " " << (b->insert(430)) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->remove(150)) << std::endl;
std::cout << "Line no:" << 84 << " " << (a->remove(417)) << std::endl;
std::cout << "Line no:" << 85 << " " << (b->remove(479)) << std::endl;
std::cout << "Line no:" << 86 << " " << (a->insert(171)) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->insert(287)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 89 << " " << (b->remove(265)) << std::endl;
std::cout << "Line no:" << 90 << " " << (a->insert(323)) << std::endl;
std::cout << "Line no:" << 91 << " " << ((b->remove(163))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 93 << " " << (a->insert(388)) << std::endl;
std::cout << "Line no:" << 94 << " " << (a->insert(205)) << std::endl;
std::cout << "Line no:" << 95 << " " << (a->remove(175)) << std::endl;
std::cout << "Line no:" << 96 << " " << (b->remove(312)) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->remove(312)) << std::endl;
std::cout << "Line no:" << 98 << " " << (a->insert(322)) << std::endl;
std::cout << "Line no:" << 99 << " " << (a->insert(279)) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->remove(205)) << std::endl;
std::cout << "Line no:" << 101 << " " << (a->remove(118)) << std::endl;
std::cout << "Line no:" << 102 << " " << (a->remove(139)) << std::endl;
std::cout << "Line no:" << 103 << " " << (b->insert(248)) << std::endl;
std::cout << "Line no:" << 104 << " " << (a->insert(51)) << std::endl;
std::cout << "Line no:" << 105 << " " << (b->remove(287)) << std::endl;
std::cout << "Line no:" << 106 << " " << (a->insert(5)) << std::endl;
std::cout << "Line no:" << 107 << " " << (b->insert(429)) << std::endl;
std::cout << "Line no:" << 108 << " " << (a->insert(243)) << std::endl;
*b=*b;
std::cout << "Line no:" << 110 << " " << (b->insert(265)) << std::endl;
try{std::cout <<"Line no:" << 111 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getFloor(171) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getCeiling(171) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getNext(171) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->get(171) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 119 << " " << (b->remove(287)) << std::endl;
std::cout << "Line no:" << 120 << " " << (b->insert(274)) << std::endl;
std::cout << "Line no:" << 121 << " " << (a->insert(162)) << std::endl;
std::cout << "Line no:" << 122 << " " << ((b->insert(265))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 124 << " " << (a->insert(283)) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->insert(220)) << std::endl;
std::cout << "Line no:" << 126 << " " << (a->remove(473)) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->remove(274)) << std::endl;
std::cout << "Line no:" << 128 << " " << (a->remove(343)) << std::endl;
std::cout << "Line no:" << 129 << " " << (b->remove(378)) << std::endl;
std::cout << "Line no:" << 130 << " " << (a->insert(192)) << std::endl;
std::cout << "Line no:" << 131 << " " << ((b->remove(223))==false) << std::endl;
std::cout << "Line no:" << 132 << " " << (b->insert(346)) << std::endl;
std::cout << "Line no:" << 133 << " " << ((b->remove(451))==false) << std::endl;
std::cout << "Line no:" << 134 << " " << (b->insert(216)) << std::endl;
std::cout << "Line no:" << 135 << " " << ((b->insert(248))==false) << std::endl;
std::cout << "Line no:" << 136 << " " << (b->insert(410)) << std::endl;
std::cout << "Line no:" << 137 << " " << (b->remove(216)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 139 << " " << (a->insert(291)) << std::endl;
std::cout << "Line no:" << 140 << " " << ((a->insert(93))==false) << std::endl;
std::cout << "Line no:" << 141 << " " << ((a->insert(5))==false) << std::endl;
std::cout << "Line no:" << 142 << " " << (a->remove(51)) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->insert(241)) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->insert(96)) << std::endl;
std::cout << "Line no:" << 145 << " " << (b->insert(210)) << std::endl;
std::cout << "Line no:" << 146 << " " << ((a->insert(171))==false) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->insert(163)) << std::endl;
std::cout << "Line no:" << 148 << " " << (b->remove(210)) << std::endl;
std::cout << "Line no:" << 149 << " " << (a->insert(392)) << std::endl;
*a=*a;
std::cout << "Line no:" << 151 << " " << (a->insert(307)) << std::endl;
std::cout << "Line no:" << 152 << " " << ((b->remove(480))==false) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->insert(106)) << std::endl;
std::cout << "Line no:" << 154 << " " << ((b->insert(486))==false) << std::endl;
std::cout << "Line no:" << 155 << " " << (a->insert(111)) << std::endl;
std::cout << "Line no:" << 156 << " " << (b->remove(486)) << std::endl;
std::cout << "Line no:" << 157 << " " << (b->insert(65)) << std::endl;
std::cout << "Line no:" << 158 << " " << ((b->insert(410))==false) << std::endl;
std::cout << "Line no:" << 159 << " " << (b->insert(441)) << std::endl;
std::cout << "Line no:" << 160 << " " << (a->remove(392)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 162 << " " << (a->insert(376)) << std::endl;
std::cout << "Line no:" << 163 << " " << ((b->insert(96))==false) << std::endl;
std::cout << "Line no:" << 164 << " " << (b->insert(225)) << std::endl;
std::cout << "Line no:" << 165 << " " << (a->remove(5)) << std::endl;
std::cout << "Line no:" << 166 << " " << (a->insert(408)) << std::endl;
std::cout << "Line no:" << 167 << " " << (a->insert(292)) << std::endl;
std::cout << "Line no:" << 168 << " " << ((a->insert(323))==false) << std::endl;
try{std::cout <<"Line no:" << 169 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getFloor(279) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getCeiling(279) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getNext(279) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->get(279) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 177 << " " << ((a->remove(207))==false) << std::endl;
std::cout << "Line no:" << 178 << " " << ((a->insert(291))==false) << std::endl;
std::cout << "Line no:" << 179 << " " << (b->insert(329)) << std::endl;
std::cout << "Line no:" << 180 << " " << ((b->insert(430))==false) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->insert(465)) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->insert(164)) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->remove(192)) << std::endl;
std::cout << "Line no:" << 184 << " " << (b->remove(65)) << std::endl;
std::cout << "Line no:" << 185 << " " << (b->remove(225)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 187 << " " << ((a->insert(279))==false) << std::endl;
std::cout << "Line no:" << 188 << " " << ((a->insert(376))==false) << std::endl;
std::cout << "Line no:" << 189 << " " << (a->insert(69)) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->insert(96)) << std::endl;
std::cout << "Line no:" << 191 << " " << ((b->remove(368))==false) << std::endl;
std::cout << "Line no:" << 192 << " " << ((b->insert(346))==false) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->insert(41)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 195 << " " << (b->insert(494)) << std::endl;
std::cout << "Line no:" << 196 << " " << (a->remove(479)) << std::endl;
std::cout << "Line no:" << 197 << " " << (b->insert(70)) << std::endl;
std::cout << "Line no:" << 198 << " " << (a->insert(321)) << std::endl;
std::cout << "Line no:" << 199 << " " << (a->insert(261)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 201 << " " << (a->insert(500)) << std::endl;
std::cout << "Line no:" << 202 << " " << (a->remove(69)) << std::endl;
std::cout << "Line no:" << 203 << " " << ((a->insert(322))==false) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->insert(478)) << std::endl;
std::cout << "Line no:" << 205 << " " << ((a->remove(237))==false) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->insert(11)) << std::endl;
std::cout << "Line no:" << 207 << " " << ((a->insert(388))==false) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->insert(43)) << std::endl;
std::cout << "Line no:" << 209 << " " << (a->insert(495)) << std::endl;
std::cout << "Line no:" << 210 << " " << ((b->remove(469))==false) << std::endl;
std::cout << "Line no:" << 211 << " " << (b->remove(127)) << std::endl;
std::cout << "Line no:" << 212 << " " << ((a->insert(220))==false) << std::endl;
std::cout << "Line no:" << 213 << " " << ((b->insert(96))==false) << std::endl;
std::cout << "Line no:" << 214 << " " << (a->insert(63)) << std::endl;
std::cout << "Line no:" << 215 << " " << (b->insert(39)) << std::endl;
std::cout << "Line no:" << 216 << " " << (a->insert(395)) << std::endl;
*a=*b;
std::cout << "Line no:" << 218 << " " << ((b->insert(404))==false) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->insert(281)) << std::endl;
std::cout << "Line no:" << 220 << " " << (a->insert(279)) << std::endl;
std::cout << "Line no:" << 221 << " " << ((b->insert(329))==false) << std::endl;
std::cout << "Line no:" << 222 << " " << (a->insert(55)) << std::endl;
std::cout << "Line no:" << 223 << " " << ((b->remove(391))==false) << std::endl;
std::cout << "Line no:" << 224 << " " << (b->remove(478)) << std::endl;
std::cout << "Line no:" << 225 << " " << (b->remove(39)) << std::endl;
std::cout << "Line no:" << 226 << " " << (a->insert(319)) << std::endl;
std::cout << "Line no:" << 227 << " " << (a->insert(180)) << std::endl;
try{std::cout <<"Line no:" << 228 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getFloor(279) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getCeiling(279) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getNext(279) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->get(279) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 236 << " " << (b->insert(179)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
