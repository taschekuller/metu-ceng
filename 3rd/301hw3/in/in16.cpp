#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
a->printPretty();
std::cout << "Line no:" << 6 << " " << (a->insert(429)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 8 << " " << (a->remove(429)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*b;
std::cout << "Line no:" << 11 << " " << (a->insert(180)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 14 << " " << (a->insert(44)) << std::endl;
std::cout << "Line no:" << 15 << " " << ((a->remove(103))==false) << std::endl;
std::cout << "Line no:" << 16 << " " << (b->insert(120)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(402)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 19 << " " << (b->remove(120)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 21 << " " << (b->insert(20)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->insert(246)) << std::endl;
std::cout << "Line no:" << 23 << " " << ((a->remove(169))==false) << std::endl;
std::cout << "Line no:" << 24 << " " << (b->remove(20)) << std::endl;
std::cout << "Line no:" << 25 << " " << (b->insert(40)) << std::endl;
std::cout << "Line no:" << 26 << " " << (b->remove(40)) << std::endl;
std::cout << "Line no:" << 27 << " " << (b->insert(75)) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->insert(115)) << std::endl;
std::cout << "Line no:" << 29 << " " << (b->remove(75)) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->insert(135)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->remove(180)) << std::endl;
std::cout << "Line no:" << 32 << " " << (b->insert(392)) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->insert(25)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 35 << " " << (b->insert(442)) << std::endl;
std::cout << "Line no:" << 36 << " " << (b->insert(240)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 38 << " " << (b->remove(392)) << std::endl;
std::cout << "Line no:" << 39 << " " << (b->insert(164)) << std::endl;
std::cout << "Line no:" << 40 << " " << (b->insert(455)) << std::endl;
std::cout << "Line no:" << 41 << " " << ((b->insert(442))==false) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->insert(131)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 44 << " " << (b->remove(455)) << std::endl;
std::cout << "Line no:" << 45 << " " << (b->remove(240)) << std::endl;
std::cout << "Line no:" << 46 << " " << ((a->insert(115))==false) << std::endl;
std::cout << "Line no:" << 47 << " " << (b->insert(359)) << std::endl;
a->printPretty();
try{std::cout <<"Line no:" << 49 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 50 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 51 << " " << a->getFloor(44) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 52 << " " << a->getCeiling(44) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getNext(44) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->get(44) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 57 << " " << ((a->insert(131))==false) << std::endl;
std::cout << "Line no:" << 58 << " " << ((a->remove(87))==false) << std::endl;
std::cout << "Line no:" << 59 << " " << ((a->remove(489))==false) << std::endl;
std::cout << "Line no:" << 60 << " " << (a->remove(44)) << std::endl;
a->printPretty();
*b=*b;
std::cout << "Line no:" << 63 << " " << (a->remove(25)) << std::endl;
*b=*b;
std::cout << "Line no:" << 65 << " " << (b->insert(72)) << std::endl;
*b=*b;
a->printPretty();
std::cout << "Line no:" << 68 << " " << (a->insert(308)) << std::endl;
std::cout << "Line no:" << 69 << " " << (b->insert(165)) << std::endl;
std::cout << "Line no:" << 70 << " " << (b->insert(187)) << std::endl;
*a=*b;
std::cout << "Line no:" << 72 << " " << (a->insert(457)) << std::endl;
std::cout << "Line no:" << 73 << " " << ((a->insert(165))==false) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->insert(357)) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->insert(23)) << std::endl;
std::cout << "Line no:" << 76 << " " << (b->insert(466)) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->insert(274)) << std::endl;
std::cout << "Line no:" << 78 << " " << (a->remove(274)) << std::endl;
std::cout << "Line no:" << 79 << " " << ((b->insert(187))==false) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->insert(158)) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->insert(433)) << std::endl;
std::cout << "Line no:" << 82 << " " << (b->insert(67)) << std::endl;
std::cout << "Line no:" << 83 << " " << ((a->remove(297))==false) << std::endl;
std::cout << "Line no:" << 84 << " " << (b->insert(483)) << std::endl;
std::cout << "Line no:" << 85 << " " << (b->remove(359)) << std::endl;
*a=*a;
std::cout << "Line no:" << 87 << " " << (a->insert(468)) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->remove(187)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 90 << " " << (b->remove(433)) << std::endl;
std::cout << "Line no:" << 91 << " " << ((b->insert(72))==false) << std::endl;
std::cout << "Line no:" << 92 << " " << (b->remove(164)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 94 << " " << (b->insert(84)) << std::endl;
std::cout << "Line no:" << 95 << " " << (a->insert(265)) << std::endl;
std::cout << "Line no:" << 96 << " " << ((a->insert(165))==false) << std::endl;
std::cout << "Line no:" << 97 << " " << (b->insert(191)) << std::endl;
std::cout << "Line no:" << 98 << " " << (a->insert(405)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 100 << " " << (b->remove(466)) << std::endl;
std::cout << "Line no:" << 101 << " " << (a->insert(120)) << std::endl;
std::cout << "Line no:" << 102 << " " << (a->insert(436)) << std::endl;
*a=*b;
std::cout << "Line no:" << 104 << " " << (b->remove(72)) << std::endl;
std::cout << "Line no:" << 105 << " " << (a->insert(410)) << std::endl;
std::cout << "Line no:" << 106 << " " << ((a->insert(67))==false) << std::endl;
try{std::cout <<"Line no:" << 107 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 108 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 109 << " " << a->getFloor(410) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 110 << " " << a->getCeiling(410) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 111 << " " << a->getNext(410) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->get(410) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 115 << " " << (b->remove(483)) << std::endl;
std::cout << "Line no:" << 116 << " " << (a->insert(48)) << std::endl;
std::cout << "Line no:" << 117 << " " << (a->insert(147)) << std::endl;
std::cout << "Line no:" << 118 << " " << (b->insert(134)) << std::endl;
std::cout << "Line no:" << 119 << " " << (b->insert(246)) << std::endl;
std::cout << "Line no:" << 120 << " " << (a->insert(316)) << std::endl;
std::cout << "Line no:" << 121 << " " << (b->insert(347)) << std::endl;
std::cout << "Line no:" << 122 << " " << (a->insert(462)) << std::endl;
std::cout << "Line no:" << 123 << " " << (a->insert(153)) << std::endl;
std::cout << "Line no:" << 124 << " " << (b->remove(246)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 126 << " " << (b->remove(191)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 128 << " " << (b->remove(347)) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->insert(115)) << std::endl;
std::cout << "Line no:" << 130 << " " << ((a->insert(483))==false) << std::endl;
std::cout << "Line no:" << 131 << " " << ((b->insert(165))==false) << std::endl;
std::cout << "Line no:" << 132 << " " << ((a->insert(84))==false) << std::endl;
std::cout << "Line no:" << 133 << " " << (a->remove(410)) << std::endl;
std::cout << "Line no:" << 134 << " " << (a->insert(274)) << std::endl;
b->printPretty();
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 138 << " " << (a->insert(322)) << std::endl;
std::cout << "Line no:" << 139 << " " << (a->insert(321)) << std::endl;
std::cout << "Line no:" << 140 << " " << (a->remove(191)) << std::endl;
std::cout << "Line no:" << 141 << " " << (b->remove(165)) << std::endl;
std::cout << "Line no:" << 142 << " " << ((b->insert(67))==false) << std::endl;
std::cout << "Line no:" << 143 << " " << ((a->remove(79))==false) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->insert(459)) << std::endl;
std::cout << "Line no:" << 145 << " " << (b->remove(84)) << std::endl;
std::cout << "Line no:" << 146 << " " << (a->remove(165)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 148 << " " << ((a->insert(147))==false) << std::endl;
std::cout << "Line no:" << 149 << " " << (b->insert(406)) << std::endl;
std::cout << "Line no:" << 150 << " " << (b->insert(18)) << std::endl;
std::cout << "Line no:" << 151 << " " << ((a->remove(77))==false) << std::endl;
std::cout << "Line no:" << 152 << " " << (b->insert(84)) << std::endl;
std::cout << "Line no:" << 153 << " " << (a->remove(115)) << std::endl;
std::cout << "Line no:" << 154 << " " << (b->remove(18)) << std::endl;
std::cout << "Line no:" << 155 << " " << (a->insert(325)) << std::endl;
std::cout << "Line no:" << 156 << " " << (a->insert(4)) << std::endl;
std::cout << "Line no:" << 157 << " " << (b->insert(283)) << std::endl;
std::cout << "Line no:" << 158 << " " << (a->insert(225)) << std::endl;
std::cout << "Line no:" << 159 << " " << (b->insert(48)) << std::endl;
std::cout << "Line no:" << 160 << " " << (b->insert(353)) << std::endl;
*a=*b;
std::cout << "Line no:" << 162 << " " << (a->insert(340)) << std::endl;
std::cout << "Line no:" << 163 << " " << (a->insert(93)) << std::endl;
std::cout << "Line no:" << 164 << " " << (a->remove(84)) << std::endl;
std::cout << "Line no:" << 165 << " " << (b->remove(84)) << std::endl;
try{std::cout <<"Line no:" << 166 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 167 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 168 << " " << a->getFloor(48) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 169 << " " << a->getCeiling(48) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getNext(48) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->get(48) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 174 << " " << (a->insert(431)) << std::endl;
std::cout << "Line no:" << 175 << " " << (b->remove(48)) << std::endl;
std::cout << "Line no:" << 176 << " " << (b->remove(459)) << std::endl;
std::cout << "Line no:" << 177 << " " << (b->insert(64)) << std::endl;
std::cout << "Line no:" << 178 << " " << (a->insert(311)) << std::endl;
std::cout << "Line no:" << 179 << " " << (a->remove(93)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 181 << " " << (a->remove(340)) << std::endl;
std::cout << "Line no:" << 182 << " " << (b->remove(283)) << std::endl;
std::cout << "Line no:" << 183 << " " << (b->insert(309)) << std::endl;
std::cout << "Line no:" << 184 << " " << (a->insert(396)) << std::endl;
std::cout << "Line no:" << 185 << " " << ((b->remove(395))==false) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 188 << " " << ((b->insert(406))==false) << std::endl;
std::cout << "Line no:" << 189 << " " << ((b->remove(121))==false) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->insert(44)) << std::endl;
std::cout << "Line no:" << 191 << " " << (b->insert(194)) << std::endl;
std::cout << "Line no:" << 192 << " " << ((b->insert(134))==false) << std::endl;
std::cout << "Line no:" << 193 << " " << ((b->insert(406))==false) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->remove(431)) << std::endl;
std::cout << "Line no:" << 195 << " " << (a->insert(159)) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->remove(406)) << std::endl;
std::cout << "Line no:" << 197 << " " << (a->insert(365)) << std::endl;
std::cout << "Line no:" << 198 << " " << (a->remove(396)) << std::endl;
std::cout << "Line no:" << 199 << " " << ((b->insert(67))==false) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->remove(406)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 203 << " " << (a->insert(50)) << std::endl;
std::cout << "Line no:" << 204 << " " << ((b->remove(441))==false) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->remove(365)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 207 << " " << ((a->insert(459))==false) << std::endl;
std::cout << "Line no:" << 208 << " " << ((b->insert(194))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 210 << " " << (b->insert(111)) << std::endl;
std::cout << "Line no:" << 211 << " " << ((b->insert(194))==false) << std::endl;
std::cout << "Line no:" << 212 << " " << ((a->remove(356))==false) << std::endl;
std::cout << "Line no:" << 213 << " " << ((b->remove(457))==false) << std::endl;
std::cout << "Line no:" << 214 << " " << (a->remove(311)) << std::endl;
std::cout << "Line no:" << 215 << " " << (a->insert(153)) << std::endl;
std::cout << "Line no:" << 216 << " " << (b->insert(416)) << std::endl;
a->printPretty();
*a=*a;
std::cout << "Line no:" << 219 << " " << (a->remove(153)) << std::endl;
std::cout << "Line no:" << 220 << " " << (b->remove(64)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 222 << " " << (a->insert(5)) << std::endl;
std::cout << "Line no:" << 223 << " " << (b->insert(41)) << std::endl;
try{std::cout <<"Line no:" << 224 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 225 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 226 << " " << a->getFloor(134) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 227 << " " << a->getCeiling(134) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getNext(134) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->get(134) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
a->printPretty();
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
