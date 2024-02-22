#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(357)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->remove(357)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 8 << " " << ((a->remove(21))==false) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(23)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(455)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(73)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->remove(455)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->insert(497)) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->remove(73)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*b;
std::cout << "Line no:" << 17 << " " << ((a->remove(407))==false) << std::endl;
std::cout << "Line no:" << 18 << " " << ((b->remove(233))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 20 << " " << (b->insert(335)) << std::endl;
std::cout << "Line no:" << 21 << " " << ((a->insert(335))==false) << std::endl;
std::cout << "Line no:" << 22 << " " << ((b->insert(335))==false) << std::endl;
std::cout << "Line no:" << 23 << " " << ((a->insert(335))==false) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->insert(369)) << std::endl;
std::cout << "Line no:" << 25 << " " << (b->insert(243)) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->insert(224)) << std::endl;
std::cout << "Line no:" << 27 << " " << ((b->remove(376))==false) << std::endl;
std::cout << "Line no:" << 28 << " " << (b->insert(440)) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->remove(243)) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->insert(44)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->insert(264)) << std::endl;
*a=*b;
std::cout << "Line no:" << 33 << " " << (a->remove(264)) << std::endl;
std::cout << "Line no:" << 34 << " " << ((a->remove(399))==false) << std::endl;
std::cout << "Line no:" << 35 << " " << ((b->insert(335))==false) << std::endl;
std::cout << "Line no:" << 36 << " " << ((a->insert(369))==false) << std::endl;
std::cout << "Line no:" << 37 << " " << (b->insert(441)) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->insert(281)) << std::endl;
std::cout << "Line no:" << 39 << " " << (b->insert(150)) << std::endl;
std::cout << "Line no:" << 40 << " " << (b->insert(142)) << std::endl;
std::cout << "Line no:" << 41 << " " << ((b->insert(264))==false) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 44 << " " << (b->insert(374)) << std::endl;
std::cout << "Line no:" << 45 << " " << (b->remove(440)) << std::endl;
std::cout << "Line no:" << 46 << " " << (a->insert(450)) << std::endl;
std::cout << "Line no:" << 47 << " " << (a->insert(382)) << std::endl;
std::cout << "Line no:" << 48 << " " << (b->remove(264)) << std::endl;
std::cout << "Line no:" << 49 << " " << ((a->insert(382))==false) << std::endl;
std::cout << "Line no:" << 50 << " " << (b->insert(306)) << std::endl;
a->printPretty();
try{std::cout <<"Line no:" << 52 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getFloor(382) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getCeiling(382) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getNext(382) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->get(382) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 60 << " " << (a->remove(335)) << std::endl;
std::cout << "Line no:" << 61 << " " << (a->remove(224)) << std::endl;
std::cout << "Line no:" << 62 << " " << (b->insert(301)) << std::endl;
std::cout << "Line no:" << 63 << " " << ((a->insert(281))==false) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->remove(281)) << std::endl;
std::cout << "Line no:" << 65 << " " << (b->remove(374)) << std::endl;
std::cout << "Line no:" << 66 << " " << (b->remove(369)) << std::endl;
std::cout << "Line no:" << 67 << " " << ((b->remove(103))==false) << std::endl;
std::cout << "Line no:" << 68 << " " << ((a->insert(382))==false) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->insert(378)) << std::endl;
std::cout << "Line no:" << 70 << " " << (b->remove(224)) << std::endl;
std::cout << "Line no:" << 71 << " " << ((b->insert(306))==false) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->remove(382)) << std::endl;
std::cout << "Line no:" << 73 << " " << (b->remove(150)) << std::endl;
std::cout << "Line no:" << 74 << " " << ((b->remove(137))==false) << std::endl;
std::cout << "Line no:" << 75 << " " << ((a->insert(378))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 77 << " " << (a->insert(256)) << std::endl;
std::cout << "Line no:" << 78 << " " << ((b->insert(306))==false) << std::endl;
std::cout << "Line no:" << 79 << " " << (b->remove(142)) << std::endl;
std::cout << "Line no:" << 80 << " " << ((a->insert(44))==false) << std::endl;
std::cout << "Line no:" << 81 << " " << ((b->insert(335))==false) << std::endl;
std::cout << "Line no:" << 82 << " " << (b->remove(306)) << std::endl;
std::cout << "Line no:" << 83 << " " << (a->insert(363)) << std::endl;
std::cout << "Line no:" << 84 << " " << (b->remove(301)) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->insert(279)) << std::endl;
std::cout << "Line no:" << 86 << " " << (a->insert(446)) << std::endl;
std::cout << "Line no:" << 87 << " " << (a->remove(450)) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->remove(441)) << std::endl;
*b=*b;
std::cout << "Line no:" << 90 << " " << (a->insert(95)) << std::endl;
b->printPretty();
b->printPretty();
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 95 << " " << (b->remove(335)) << std::endl;
std::cout << "Line no:" << 96 << " " << (a->remove(446)) << std::endl;
std::cout << "Line no:" << 97 << " " << (b->insert(229)) << std::endl;
std::cout << "Line no:" << 98 << " " << (b->insert(323)) << std::endl;
std::cout << "Line no:" << 99 << " " << ((b->remove(69))==false) << std::endl;
std::cout << "Line no:" << 100 << " " << (b->insert(449)) << std::endl;
std::cout << "Line no:" << 101 << " " << ((a->insert(369))==false) << std::endl;
std::cout << "Line no:" << 102 << " " << (a->insert(151)) << std::endl;
std::cout << "Line no:" << 103 << " " << (a->insert(89)) << std::endl;
std::cout << "Line no:" << 104 << " " << (b->remove(323)) << std::endl;
*b=*b;
std::cout << "Line no:" << 106 << " " << (b->insert(111)) << std::endl;
std::cout << "Line no:" << 107 << " " << (b->insert(81)) << std::endl;
std::cout << "Line no:" << 108 << " " << ((a->remove(65))==false) << std::endl;
std::cout << "Line no:" << 109 << " " << ((b->remove(243))==false) << std::endl;
try{std::cout <<"Line no:" << 110 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 111 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getFloor(44) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getCeiling(44) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getNext(44) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->get(44) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 118 << " " << ((b->remove(369))==false) << std::endl;
std::cout << "Line no:" << 119 << " " << (a->remove(256)) << std::endl;
std::cout << "Line no:" << 120 << " " << (a->insert(131)) << std::endl;
std::cout << "Line no:" << 121 << " " << (b->insert(67)) << std::endl;
std::cout << "Line no:" << 122 << " " << (a->remove(378)) << std::endl;
std::cout << "Line no:" << 123 << " " << (b->insert(451)) << std::endl;
std::cout << "Line no:" << 124 << " " << (a->remove(369)) << std::endl;
std::cout << "Line no:" << 125 << " " << ((a->insert(131))==false) << std::endl;
std::cout << "Line no:" << 126 << " " << (b->insert(498)) << std::endl;
std::cout << "Line no:" << 127 << " " << ((a->insert(131))==false) << std::endl;
std::cout << "Line no:" << 128 << " " << (a->remove(279)) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->remove(89)) << std::endl;
std::cout << "Line no:" << 130 << " " << ((b->remove(438))==false) << std::endl;
std::cout << "Line no:" << 131 << " " << ((b->insert(449))==false) << std::endl;
std::cout << "Line no:" << 132 << " " << ((b->insert(111))==false) << std::endl;
std::cout << "Line no:" << 133 << " " << ((b->insert(498))==false) << std::endl;
std::cout << "Line no:" << 134 << " " << (b->remove(67)) << std::endl;
std::cout << "Line no:" << 135 << " " << (b->remove(81)) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->insert(377)) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->remove(440)) << std::endl;
std::cout << "Line no:" << 138 << " " << (a->insert(425)) << std::endl;
std::cout << "Line no:" << 139 << " " << ((b->remove(127))==false) << std::endl;
std::cout << "Line no:" << 140 << " " << (a->insert(77)) << std::endl;
std::cout << "Line no:" << 141 << " " << (b->insert(334)) << std::endl;
std::cout << "Line no:" << 142 << " " << (a->insert(171)) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->insert(307)) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->remove(363)) << std::endl;
std::cout << "Line no:" << 145 << " " << (a->insert(480)) << std::endl;
std::cout << "Line no:" << 146 << " " << (a->insert(297)) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->remove(377)) << std::endl;
std::cout << "Line no:" << 148 << " " << (b->remove(334)) << std::endl;
std::cout << "Line no:" << 149 << " " << ((a->remove(386))==false) << std::endl;
std::cout << "Line no:" << 150 << " " << ((a->remove(185))==false) << std::endl;
std::cout << "Line no:" << 151 << " " << (a->remove(151)) << std::endl;
std::cout << "Line no:" << 152 << " " << ((b->insert(229))==false) << std::endl;
std::cout << "Line no:" << 153 << " " << ((a->remove(66))==false) << std::endl;
std::cout << "Line no:" << 154 << " " << ((b->insert(229))==false) << std::endl;
std::cout << "Line no:" << 155 << " " << ((a->insert(171))==false) << std::endl;
std::cout << "Line no:" << 156 << " " << (a->insert(489)) << std::endl;
std::cout << "Line no:" << 157 << " " << ((b->insert(451))==false) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->remove(111)) << std::endl;
std::cout << "Line no:" << 159 << " " << (b->insert(187)) << std::endl;
std::cout << "Line no:" << 160 << " " << (b->insert(123)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 162 << " " << (b->insert(473)) << std::endl;
std::cout << "Line no:" << 163 << " " << ((a->insert(425))==false) << std::endl;
std::cout << "Line no:" << 164 << " " << (a->insert(329)) << std::endl;
std::cout << "Line no:" << 165 << " " << (b->remove(449)) << std::endl;
std::cout << "Line no:" << 166 << " " << (b->insert(59)) << std::endl;
a->printPretty();
try{std::cout <<"Line no:" << 168 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 169 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getFloor(77) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getCeiling(77) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getNext(77) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->get(77) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 176 << " " << (b->remove(451)) << std::endl;
std::cout << "Line no:" << 177 << " " << (b->remove(123)) << std::endl;
std::cout << "Line no:" << 178 << " " << (a->remove(297)) << std::endl;
std::cout << "Line no:" << 179 << " " << ((b->insert(229))==false) << std::endl;
std::cout << "Line no:" << 180 << " " << (a->remove(44)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 182 << " " << ((b->insert(229))==false) << std::endl;
std::cout << "Line no:" << 183 << " " << ((a->remove(481))==false) << std::endl;
std::cout << "Line no:" << 184 << " " << (b->insert(459)) << std::endl;
std::cout << "Line no:" << 185 << " " << (a->insert(445)) << std::endl;
std::cout << "Line no:" << 186 << " " << ((b->insert(459))==false) << std::endl;
std::cout << "Line no:" << 187 << " " << (b->insert(304)) << std::endl;
std::cout << "Line no:" << 188 << " " << ((a->insert(480))==false) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 191 << " " << (b->remove(498)) << std::endl;
std::cout << "Line no:" << 192 << " " << (a->remove(425)) << std::endl;
std::cout << "Line no:" << 193 << " " << (b->remove(307)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 195 << " " << ((a->remove(111))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 197 << " " << ((a->remove(74))==false) << std::endl;
std::cout << "Line no:" << 198 << " " << (b->insert(262)) << std::endl;
std::cout << "Line no:" << 199 << " " << ((b->insert(229))==false) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->remove(445)) << std::endl;
std::cout << "Line no:" << 201 << " " << (b->insert(40)) << std::endl;
std::cout << "Line no:" << 202 << " " << ((a->insert(329))==false) << std::endl;
std::cout << "Line no:" << 203 << " " << ((b->insert(229))==false) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->insert(292)) << std::endl;
std::cout << "Line no:" << 205 << " " << (b->insert(93)) << std::endl;
std::cout << "Line no:" << 206 << " " << ((b->insert(292))==false) << std::endl;
std::cout << "Line no:" << 207 << " " << (b->remove(229)) << std::endl;
std::cout << "Line no:" << 208 << " " << (b->insert(95)) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->insert(370)) << std::endl;
*a=*b;
std::cout << "Line no:" << 211 << " " << (a->insert(418)) << std::endl;
std::cout << "Line no:" << 212 << " " << (b->insert(153)) << std::endl;
std::cout << "Line no:" << 213 << " " << (b->insert(32)) << std::endl;
std::cout << "Line no:" << 214 << " " << (a->remove(95)) << std::endl;
std::cout << "Line no:" << 215 << " " << ((a->insert(292))==false) << std::endl;
std::cout << "Line no:" << 216 << " " << (a->remove(40)) << std::endl;
std::cout << "Line no:" << 217 << " " << ((b->insert(153))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 219 << " " << ((a->remove(75))==false) << std::endl;
std::cout << "Line no:" << 220 << " " << (b->remove(473)) << std::endl;
std::cout << "Line no:" << 221 << " " << ((a->insert(292))==false) << std::endl;
std::cout << "Line no:" << 222 << " " << (b->insert(267)) << std::endl;
std::cout << "Line no:" << 223 << " " << (b->insert(327)) << std::endl;
std::cout << "Line no:" << 224 << " " << (b->insert(147)) << std::endl;
std::cout << "Line no:" << 225 << " " << ((b->insert(93))==false) << std::endl;
try{std::cout <<"Line no:" << 226 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 227 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getFloor(473) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getCeiling(473) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getNext(473) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->get(473) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 234 << " " << (a->insert(369)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
