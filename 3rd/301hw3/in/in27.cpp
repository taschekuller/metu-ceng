#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
a->printPretty();
std::cout << "Line no:" << 6 << " " << ((a->remove(30))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 8 << " " << (a->insert(282)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(185)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->remove(185)) << std::endl;
std::cout << "Line no:" << 11 << " " << ((a->insert(282))==false) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(4)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->remove(4)) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->remove(282)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 16 << " " << (a->insert(288)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(434)) << std::endl;
std::cout << "Line no:" << 18 << " " << ((a->remove(278))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 20 << " " << ((a->insert(434))==false) << std::endl;
std::cout << "Line no:" << 21 << " " << ((a->insert(288))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 23 << " " << (a->insert(150)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->insert(432)) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->insert(481)) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->remove(434)) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->insert(450)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 29 << " " << ((a->remove(353))==false) << std::endl;
std::cout << "Line no:" << 30 << " " << ((a->remove(400))==false) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->insert(14)) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->remove(481)) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->insert(229)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 35 << " " << (a->remove(150)) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->remove(432)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 38 << " " << ((a->insert(229))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 40 << " " << ((a->insert(450))==false) << std::endl;
std::cout << "Line no:" << 41 << " " << (a->insert(310)) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->insert(23)) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->insert(371)) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->insert(120)) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->insert(4)) << std::endl;
std::cout << "Line no:" << 46 << " " << ((a->insert(371))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 48 << " " << (a->insert(75)) << std::endl;
try{std::cout <<"Line no:" << 49 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 50 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 51 << " " << a->getFloor(23) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 52 << " " << a->getCeiling(23) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getNext(23) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->get(23) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 57 << " " << (a->insert(96)) << std::endl;
std::cout << "Line no:" << 58 << " " << ((a->insert(75))==false) << std::endl;
std::cout << "Line no:" << 59 << " " << ((a->insert(288))==false) << std::endl;
std::cout << "Line no:" << 60 << " " << (a->remove(23)) << std::endl;
std::cout << "Line no:" << 61 << " " << ((a->remove(342))==false) << std::endl;
std::cout << "Line no:" << 62 << " " << (a->remove(310)) << std::endl;
std::cout << "Line no:" << 63 << " " << (a->insert(308)) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->insert(223)) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->insert(399)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->remove(229)) << std::endl;
std::cout << "Line no:" << 67 << " " << ((a->insert(308))==false) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
std::cout << "Line no:" << 70 << " " << ((b->remove(199))==false) << std::endl;
std::cout << "Line no:" << 71 << " " << (b->insert(206)) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->insert(489)) << std::endl;
*b=*b;
std::cout << "Line no:" << 74 << " " << (b->insert(138)) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->remove(489)) << std::endl;
std::cout << "Line no:" << 76 << " " << (b->remove(138)) << std::endl;
std::cout << "Line no:" << 77 << " " << (b->insert(117)) << std::endl;
std::cout << "Line no:" << 78 << " " << (a->remove(206)) << std::endl;
std::cout << "Line no:" << 79 << " " << ((b->insert(489))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 81 << " " << ((b->remove(367))==false) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->insert(414)) << std::endl;
std::cout << "Line no:" << 83 << " " << (a->insert(323)) << std::endl;
std::cout << "Line no:" << 84 << " " << ((b->remove(494))==false) << std::endl;
std::cout << "Line no:" << 85 << " " << ((a->remove(338))==false) << std::endl;
std::cout << "Line no:" << 86 << " " << (b->insert(97)) << std::endl;
std::cout << "Line no:" << 87 << " " << ((a->insert(414))==false) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->remove(206)) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->remove(414)) << std::endl;
std::cout << "Line no:" << 90 << " " << (b->insert(148)) << std::endl;
std::cout << "Line no:" << 91 << " " << ((b->insert(97))==false) << std::endl;
std::cout << "Line no:" << 92 << " " << (b->remove(489)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 94 << " " << (a->insert(446)) << std::endl;
std::cout << "Line no:" << 95 << " " << (a->insert(144)) << std::endl;
std::cout << "Line no:" << 96 << " " << (b->remove(117)) << std::endl;
std::cout << "Line no:" << 97 << " " << ((a->insert(323))==false) << std::endl;
std::cout << "Line no:" << 98 << " " << (b->insert(428)) << std::endl;
std::cout << "Line no:" << 99 << " " << ((a->insert(144))==false) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->remove(144)) << std::endl;
std::cout << "Line no:" << 101 << " " << ((b->insert(148))==false) << std::endl;
std::cout << "Line no:" << 102 << " " << (b->insert(474)) << std::endl;
std::cout << "Line no:" << 103 << " " << (b->remove(428)) << std::endl;
std::cout << "Line no:" << 104 << " " << ((a->insert(323))==false) << std::endl;
std::cout << "Line no:" << 105 << " " << ((b->insert(474))==false) << std::endl;
std::cout << "Line no:" << 106 << " " << (b->remove(97)) << std::endl;
std::cout << "Line no:" << 107 << " " << ((a->remove(110))==false) << std::endl;
try{std::cout <<"Line no:" << 108 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 109 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 110 << " " << a->getFloor(446) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 111 << " " << a->getCeiling(446) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getNext(446) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->get(446) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 116 << " " << ((b->remove(63))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 118 << " " << (a->remove(323)) << std::endl;
std::cout << "Line no:" << 119 << " " << (a->insert(211)) << std::endl;
std::cout << "Line no:" << 120 << " " << (b->remove(474)) << std::endl;
std::cout << "Line no:" << 121 << " " << (a->insert(385)) << std::endl;
std::cout << "Line no:" << 122 << " " << (b->insert(338)) << std::endl;
std::cout << "Line no:" << 123 << " " << ((b->insert(148))==false) << std::endl;
std::cout << "Line no:" << 124 << " " << (b->insert(458)) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->insert(402)) << std::endl;
std::cout << "Line no:" << 126 << " " << (a->insert(4)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 128 << " " << (b->insert(144)) << std::endl;
std::cout << "Line no:" << 129 << " " << ((a->remove(422))==false) << std::endl;
std::cout << "Line no:" << 130 << " " << ((a->insert(4))==false) << std::endl;
std::cout << "Line no:" << 131 << " " << ((b->remove(480))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 133 << " " << (b->remove(338)) << std::endl;
std::cout << "Line no:" << 134 << " " << ((b->insert(148))==false) << std::endl;
std::cout << "Line no:" << 135 << " " << (a->insert(498)) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->remove(446)) << std::endl;
std::cout << "Line no:" << 137 << " " << ((a->insert(402))==false) << std::endl;
std::cout << "Line no:" << 138 << " " << (a->remove(211)) << std::endl;
std::cout << "Line no:" << 139 << " " << (a->insert(478)) << std::endl;
std::cout << "Line no:" << 140 << " " << (b->insert(90)) << std::endl;
std::cout << "Line no:" << 141 << " " << ((b->insert(458))==false) << std::endl;
std::cout << "Line no:" << 142 << " " << (a->remove(385)) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->insert(164)) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->remove(4)) << std::endl;
std::cout << "Line no:" << 145 << " " << (b->insert(64)) << std::endl;
std::cout << "Line no:" << 146 << " " << (b->remove(64)) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->remove(164)) << std::endl;
std::cout << "Line no:" << 148 << " " << (b->remove(144)) << std::endl;
std::cout << "Line no:" << 149 << " " << (b->insert(42)) << std::endl;
std::cout << "Line no:" << 150 << " " << ((b->insert(90))==false) << std::endl;
std::cout << "Line no:" << 151 << " " << (a->remove(498)) << std::endl;
std::cout << "Line no:" << 152 << " " << (b->insert(89)) << std::endl;
std::cout << "Line no:" << 153 << " " << (a->insert(296)) << std::endl;
*a=*b;
std::cout << "Line no:" << 155 << " " << (b->remove(89)) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 158 << " " << ((b->remove(236))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 160 << " " << (b->insert(9)) << std::endl;
std::cout << "Line no:" << 161 << " " << (b->remove(148)) << std::endl;
std::cout << "Line no:" << 162 << " " << ((a->remove(278))==false) << std::endl;
std::cout << "Line no:" << 163 << " " << (a->insert(332)) << std::endl;
std::cout << "Line no:" << 164 << " " << (a->remove(89)) << std::endl;
a->printPretty();
try{std::cout <<"Line no:" << 166 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 167 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 168 << " " << a->getFloor(148) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 169 << " " << a->getCeiling(148) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getNext(148) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->get(148) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 174 << " " << (a->insert(475)) << std::endl;
std::cout << "Line no:" << 175 << " " << (a->remove(90)) << std::endl;
std::cout << "Line no:" << 176 << " " << (b->insert(190)) << std::endl;
std::cout << "Line no:" << 177 << " " << ((b->insert(90))==false) << std::endl;
std::cout << "Line no:" << 178 << " " << (b->remove(9)) << std::endl;
std::cout << "Line no:" << 179 << " " << (b->remove(42)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 181 << " " << (a->remove(42)) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->remove(148)) << std::endl;
std::cout << "Line no:" << 183 << " " << (b->remove(190)) << std::endl;
std::cout << "Line no:" << 184 << " " << (b->insert(280)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 186 << " " << ((b->remove(102))==false) << std::endl;
std::cout << "Line no:" << 187 << " " << (a->insert(481)) << std::endl;
std::cout << "Line no:" << 188 << " " << (b->remove(90)) << std::endl;
*a=*b;
std::cout << "Line no:" << 190 << " " << (a->insert(107)) << std::endl;
std::cout << "Line no:" << 191 << " " << (a->insert(462)) << std::endl;
std::cout << "Line no:" << 192 << " " << (b->insert(499)) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->remove(280)) << std::endl;
std::cout << "Line no:" << 194 << " " << (b->insert(335)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 197 << " " << (b->remove(335)) << std::endl;
std::cout << "Line no:" << 198 << " " << (b->insert(48)) << std::endl;
std::cout << "Line no:" << 199 << " " << ((a->insert(107))==false) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->insert(84)) << std::endl;
std::cout << "Line no:" << 201 << " " << (b->remove(499)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 203 << " " << (a->insert(175)) << std::endl;
std::cout << "Line no:" << 204 << " " << ((a->remove(194))==false) << std::endl;
std::cout << "Line no:" << 205 << " " << (b->insert(335)) << std::endl;
std::cout << "Line no:" << 206 << " " << (b->insert(95)) << std::endl;
std::cout << "Line no:" << 207 << " " << (b->remove(95)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 209 << " " << ((b->remove(435))==false) << std::endl;
std::cout << "Line no:" << 210 << " " << (a->remove(175)) << std::endl;
std::cout << "Line no:" << 211 << " " << ((b->remove(283))==false) << std::endl;
std::cout << "Line no:" << 212 << " " << ((a->remove(326))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 214 << " " << (a->insert(248)) << std::endl;
std::cout << "Line no:" << 215 << " " << (b->remove(280)) << std::endl;
std::cout << "Line no:" << 216 << " " << ((a->insert(84))==false) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 219 << " " << (b->insert(240)) << std::endl;
std::cout << "Line no:" << 220 << " " << (b->insert(249)) << std::endl;
std::cout << "Line no:" << 221 << " " << (a->insert(384)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 223 << " " << (a->remove(248)) << std::endl;
std::cout << "Line no:" << 224 << " " << (b->remove(458)) << std::endl;
try{std::cout <<"Line no:" << 225 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 226 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 227 << " " << a->getFloor(462) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getCeiling(462) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getNext(462) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->get(462) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 233 << " " << (b->remove(48)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
