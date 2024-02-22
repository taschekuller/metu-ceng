#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(62)) << std::endl;
std::cout << "Line no:" << 6 << " " << ((a->insert(62))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 8 << " " << (a->insert(57)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(33)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->remove(57)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(498)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(59)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->remove(498)) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(3)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(175)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(381)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(210)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->insert(349)) << std::endl;
std::cout << "Line no:" << 19 << " " << ((a->remove(208))==false) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(78)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->remove(62)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 23 << " " << ((a->insert(33))==false) << std::endl;
std::cout << "Line no:" << 24 << " " << ((a->remove(450))==false) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->insert(440)) << std::endl;
std::cout << "Line no:" << 26 << " " << ((a->insert(59))==false) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->insert(146)) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->insert(127)) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->insert(80)) << std::endl;
std::cout << "Line no:" << 30 << " " << ((a->insert(78))==false) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->remove(3)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 33 << " " << ((a->insert(33))==false) << std::endl;
std::cout << "Line no:" << 34 << " " << (a->insert(148)) << std::endl;
std::cout << "Line no:" << 35 << " " << ((a->remove(45))==false) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->insert(351)) << std::endl;
std::cout << "Line no:" << 37 << " " << ((a->remove(413))==false) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->insert(223)) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->remove(146)) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->insert(36)) << std::endl;
std::cout << "Line no:" << 41 << " " << (a->insert(491)) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->remove(80)) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->insert(166)) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->insert(89)) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->insert(54)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 47 << " " << (a->insert(166)) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->remove(127)) << std::endl;
std::cout << "Line no:" << 49 << " " << (a->insert(443)) << std::endl;
std::cout << "Line no:" << 50 << " " << (a->insert(150)) << std::endl;
std::cout << "Line no:" << 51 << " " << (a->remove(166)) << std::endl;
std::cout << "Line no:" << 52 << " " << (a->insert(65)) << std::endl;
try{std::cout <<"Line no:" << 53 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getFloor(59) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getCeiling(59) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getNext(59) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->get(59) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 61 << " " << (a->remove(54)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 63 << " " << ((a->remove(361))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 65 << " " << (a->insert(23)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->remove(150)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->remove(349)) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->remove(443)) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->insert(370)) << std::endl;
std::cout << "Line no:" << 70 << " " << ((a->remove(207))==false) << std::endl;
std::cout << "Line no:" << 71 << " " << (a->remove(36)) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->insert(401)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*b;
std::cout << "Line no:" << 75 << " " << (a->insert(278)) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->insert(399)) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->remove(351)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 79 << " " << (a->remove(65)) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->remove(23)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 82 << " " << (a->insert(163)) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->insert(39)) << std::endl;
std::cout << "Line no:" << 84 << " " << (a->remove(381)) << std::endl;
std::cout << "Line no:" << 85 << " " << ((b->insert(39))==false) << std::endl;
std::cout << "Line no:" << 86 << " " << ((a->insert(33))==false) << std::endl;
std::cout << "Line no:" << 87 << " " << ((a->insert(175))==false) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->insert(22)) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->remove(223)) << std::endl;
std::cout << "Line no:" << 90 << " " << (a->insert(225)) << std::endl;
std::cout << "Line no:" << 91 << " " << (a->insert(155)) << std::endl;
std::cout << "Line no:" << 92 << " " << (b->insert(160)) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->insert(151)) << std::endl;
std::cout << "Line no:" << 94 << " " << ((a->insert(59))==false) << std::endl;
std::cout << "Line no:" << 95 << " " << (b->insert(500)) << std::endl;
std::cout << "Line no:" << 96 << " " << (a->insert(469)) << std::endl;
*b=*a;
std::cout << "Line no:" << 98 << " " << (a->insert(41)) << std::endl;
std::cout << "Line no:" << 99 << " " << (b->remove(225)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 101 << " " << ((b->insert(491))==false) << std::endl;
std::cout << "Line no:" << 102 << " " << ((a->remove(374))==false) << std::endl;
std::cout << "Line no:" << 103 << " " << (a->remove(210)) << std::endl;
std::cout << "Line no:" << 104 << " " << (a->insert(469)) << std::endl;
std::cout << "Line no:" << 105 << " " << (b->insert(439)) << std::endl;
std::cout << "Line no:" << 106 << " " << (b->remove(33)) << std::endl;
std::cout << "Line no:" << 107 << " " << (b->insert(242)) << std::endl;
std::cout << "Line no:" << 108 << " " << ((b->insert(439))==false) << std::endl;
try{std::cout <<"Line no:" << 109 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 110 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 111 << " " << a->getFloor(399) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getCeiling(399) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getNext(399) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->get(399) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
b->printPretty();
std::cout << "Line no:" << 118 << " " << ((b->remove(345))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 120 << " " << (b->insert(261)) << std::endl;
std::cout << "Line no:" << 121 << " " << ((b->insert(278))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 123 << " " << (a->remove(469)) << std::endl;
std::cout << "Line no:" << 124 << " " << ((a->insert(278))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 126 << " " << (b->insert(214)) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->insert(174)) << std::endl;
std::cout << "Line no:" << 128 << " " << ((b->insert(491))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 130 << " " << (b->insert(269)) << std::endl;
std::cout << "Line no:" << 131 << " " << ((b->insert(261))==false) << std::endl;
std::cout << "Line no:" << 132 << " " << (a->insert(170)) << std::endl;
std::cout << "Line no:" << 133 << " " << (a->remove(278)) << std::endl;
std::cout << "Line no:" << 134 << " " << (b->insert(272)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 136 << " " << (a->insert(125)) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->insert(472)) << std::endl;
std::cout << "Line no:" << 138 << " " << (a->insert(116)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 140 << " " << (a->remove(125)) << std::endl;
std::cout << "Line no:" << 141 << " " << (b->insert(52)) << std::endl;
std::cout << "Line no:" << 142 << " " << (a->insert(367)) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->remove(175)) << std::endl;
std::cout << "Line no:" << 144 << " " << ((a->insert(399))==false) << std::endl;
std::cout << "Line no:" << 145 << " " << (b->insert(381)) << std::endl;
std::cout << "Line no:" << 146 << " " << (a->insert(498)) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->insert(217)) << std::endl;
std::cout << "Line no:" << 148 << " " << ((b->insert(166))==false) << std::endl;
std::cout << "Line no:" << 149 << " " << (b->insert(209)) << std::endl;
std::cout << "Line no:" << 150 << " " << (a->remove(225)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 152 << " " << (a->insert(399)) << std::endl;
std::cout << "Line no:" << 153 << " " << ((a->insert(469))==false) << std::endl;
std::cout << "Line no:" << 154 << " " << ((b->insert(439))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 156 << " " << (a->remove(41)) << std::endl;
std::cout << "Line no:" << 157 << " " << ((b->insert(174))==false) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->insert(201)) << std::endl;
std::cout << "Line no:" << 159 << " " << (a->remove(399)) << std::endl;
std::cout << "Line no:" << 160 << " " << (b->insert(123)) << std::endl;
*b=*a;
std::cout << "Line no:" << 162 << " " << (a->insert(2)) << std::endl;
std::cout << "Line no:" << 163 << " " << (a->insert(332)) << std::endl;
std::cout << "Line no:" << 164 << " " << (b->insert(126)) << std::endl;
std::cout << "Line no:" << 165 << " " << (a->remove(440)) << std::endl;
std::cout << "Line no:" << 166 << " " << (a->insert(371)) << std::endl;
try{std::cout <<"Line no:" << 167 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 168 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 169 << " " << a->getFloor(399) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getCeiling(399) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getNext(399) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->get(399) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 175 << " " << (b->insert(27)) << std::endl;
std::cout << "Line no:" << 176 << " " << (b->remove(155)) << std::endl;
std::cout << "Line no:" << 177 << " " << (a->insert(11)) << std::endl;
std::cout << "Line no:" << 178 << " " << (a->remove(33)) << std::endl;
std::cout << "Line no:" << 179 << " " << ((b->insert(126))==false) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 182 << " " << (b->insert(54)) << std::endl;
std::cout << "Line no:" << 183 << " " << (b->insert(296)) << std::endl;
std::cout << "Line no:" << 184 << " " << (a->remove(170)) << std::endl;
std::cout << "Line no:" << 185 << " " << (a->insert(205)) << std::endl;
std::cout << "Line no:" << 186 << " " << (b->insert(63)) << std::endl;
std::cout << "Line no:" << 187 << " " << ((a->remove(467))==false) << std::endl;
std::cout << "Line no:" << 188 << " " << (b->insert(438)) << std::endl;
std::cout << "Line no:" << 189 << " " << (b->remove(401)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 192 << " " << ((a->remove(435))==false) << std::endl;
std::cout << "Line no:" << 193 << " " << ((b->insert(399))==false) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->insert(309)) << std::endl;
std::cout << "Line no:" << 195 << " " << ((a->remove(468))==false) << std::endl;
std::cout << "Line no:" << 196 << " " << (a->remove(371)) << std::endl;
*b=*b;
std::cout << "Line no:" << 198 << " " << (a->remove(309)) << std::endl;
std::cout << "Line no:" << 199 << " " << ((a->insert(2))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 201 << " " << (b->insert(244)) << std::endl;
std::cout << "Line no:" << 202 << " " << (a->insert(151)) << std::endl;
std::cout << "Line no:" << 203 << " " << (b->insert(238)) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->insert(210)) << std::endl;
std::cout << "Line no:" << 205 << " " << ((a->insert(163))==false) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->insert(399)) << std::endl;
std::cout << "Line no:" << 207 << " " << (b->insert(356)) << std::endl;
std::cout << "Line no:" << 208 << " " << (b->insert(274)) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->insert(478)) << std::endl;
std::cout << "Line no:" << 210 << " " << (a->insert(317)) << std::endl;
std::cout << "Line no:" << 211 << " " << ((b->insert(217))==false) << std::endl;
std::cout << "Line no:" << 212 << " " << (b->remove(151)) << std::endl;
std::cout << "Line no:" << 213 << " " << ((a->insert(155))==false) << std::endl;
std::cout << "Line no:" << 214 << " " << (a->insert(315)) << std::endl;
std::cout << "Line no:" << 215 << " " << ((a->remove(100))==false) << std::endl;
std::cout << "Line no:" << 216 << " " << (a->remove(155)) << std::endl;
std::cout << "Line no:" << 217 << " " << (b->insert(392)) << std::endl;
std::cout << "Line no:" << 218 << " " << ((a->remove(323))==false) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->insert(480)) << std::endl;
std::cout << "Line no:" << 220 << " " << ((b->insert(296))==false) << std::endl;
std::cout << "Line no:" << 221 << " " << (b->insert(112)) << std::endl;
std::cout << "Line no:" << 222 << " " << ((b->insert(296))==false) << std::endl;
std::cout << "Line no:" << 223 << " " << (b->insert(370)) << std::endl;
std::cout << "Line no:" << 224 << " " << (b->insert(470)) << std::endl;
b->printPretty();
try{std::cout <<"Line no:" << 226 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 227 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getFloor(89) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getCeiling(89) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getNext(89) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->get(89) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 234 << " " << (b->insert(393)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
