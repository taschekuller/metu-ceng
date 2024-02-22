#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(476)) << std::endl;
std::cout << "Line no:" << 6 << " " << ((a->insert(476))==false) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(44)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->remove(476)) << std::endl;
std::cout << "Line no:" << 9 << " " << ((a->remove(260))==false) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(457)) << std::endl;
std::cout << "Line no:" << 11 << " " << ((a->insert(44))==false) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(296)) << std::endl;
std::cout << "Line no:" << 13 << " " << ((a->insert(457))==false) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(464)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(51)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(381)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 18 << " " << (a->insert(193)) << std::endl;
std::cout << "Line no:" << 19 << " " << ((a->insert(457))==false) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(447)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->remove(51)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->insert(305)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->insert(443)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 25 << " " << (a->insert(13)) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->insert(462)) << std::endl;
std::cout << "Line no:" << 27 << " " << ((a->insert(296))==false) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->insert(60)) << std::endl;
std::cout << "Line no:" << 29 << " " << ((a->insert(447))==false) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->insert(132)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->insert(182)) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->remove(132)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 34 << " " << (a->insert(432)) << std::endl;
std::cout << "Line no:" << 35 << " " << ((a->remove(147))==false) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->remove(305)) << std::endl;
a->printPretty();
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*b;
std::cout << "Line no:" << 40 << " " << (a->insert(331)) << std::endl;
std::cout << "Line no:" << 41 << " " << (b->insert(432)) << std::endl;
std::cout << "Line no:" << 42 << " " << (b->insert(207)) << std::endl;
std::cout << "Line no:" << 43 << " " << ((b->insert(207))==false) << std::endl;
std::cout << "Line no:" << 44 << " " << ((a->insert(182))==false) << std::endl;
std::cout << "Line no:" << 45 << " " << (b->insert(143)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 47 << " " << (a->insert(63)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 49 << " " << (b->remove(432)) << std::endl;
std::cout << "Line no:" << 50 << " " << (a->remove(182)) << std::endl;
std::cout << "Line no:" << 51 << " " << (b->remove(143)) << std::endl;
std::cout << "Line no:" << 52 << " " << ((a->insert(447))==false) << std::endl;
std::cout << "Line no:" << 53 << " " << (b->insert(392)) << std::endl;
std::cout << "Line no:" << 54 << " " << (b->insert(77)) << std::endl;
try{std::cout <<"Line no:" << 55 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getFloor(60) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getCeiling(60) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getNext(60) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->get(60) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 62 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 63 << " " << (a->insert(284)) << std::endl;
std::cout << "Line no:" << 64 << " " << (b->remove(207)) << std::endl;
std::cout << "Line no:" << 65 << " " << (b->insert(276)) << std::endl;
std::cout << "Line no:" << 66 << " " << ((a->insert(464))==false) << std::endl;
std::cout << "Line no:" << 67 << " " << (b->remove(392)) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->insert(465)) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->remove(381)) << std::endl;
std::cout << "Line no:" << 70 << " " << (b->insert(151)) << std::endl;
std::cout << "Line no:" << 71 << " " << (a->remove(447)) << std::endl;
std::cout << "Line no:" << 72 << " " << ((a->remove(392))==false) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->remove(193)) << std::endl;
std::cout << "Line no:" << 74 << " " << (b->insert(215)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 76 << " " << (b->remove(151)) << std::endl;
std::cout << "Line no:" << 77 << " " << ((b->insert(77))==false) << std::endl;
std::cout << "Line no:" << 78 << " " << ((b->insert(276))==false) << std::endl;
std::cout << "Line no:" << 79 << " " << ((b->insert(215))==false) << std::endl;
std::cout << "Line no:" << 80 << " " << ((b->insert(77))==false) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->remove(77)) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->remove(13)) << std::endl;
std::cout << "Line no:" << 83 << " " << (a->insert(345)) << std::endl;
std::cout << "Line no:" << 84 << " " << (a->insert(258)) << std::endl;
std::cout << "Line no:" << 85 << " " << (b->insert(381)) << std::endl;
*a=*a;
std::cout << "Line no:" << 87 << " " << ((b->insert(215))==false) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->insert(392)) << std::endl;
std::cout << "Line no:" << 89 << " " << (b->remove(381)) << std::endl;
std::cout << "Line no:" << 90 << " " << ((a->insert(258))==false) << std::endl;
std::cout << "Line no:" << 91 << " " << ((b->insert(215))==false) << std::endl;
std::cout << "Line no:" << 92 << " " << (b->insert(26)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 94 << " " << (b->insert(16)) << std::endl;
std::cout << "Line no:" << 95 << " " << (a->remove(331)) << std::endl;
std::cout << "Line no:" << 96 << " " << (a->insert(229)) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->insert(237)) << std::endl;
*b=*a;
std::cout << "Line no:" << 99 << " " << (b->remove(296)) << std::endl;
std::cout << "Line no:" << 100 << " " << ((b->insert(345))==false) << std::endl;
std::cout << "Line no:" << 101 << " " << (a->insert(223)) << std::endl;
std::cout << "Line no:" << 102 << " " << (b->insert(220)) << std::endl;
std::cout << "Line no:" << 103 << " " << (b->remove(464)) << std::endl;
std::cout << "Line no:" << 104 << " " << ((a->insert(432))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 106 << " " << (b->insert(242)) << std::endl;
std::cout << "Line no:" << 107 << " " << (b->remove(345)) << std::endl;
std::cout << "Line no:" << 108 << " " << (b->insert(283)) << std::endl;
std::cout << "Line no:" << 109 << " " << (a->insert(127)) << std::endl;
std::cout << "Line no:" << 110 << " " << (a->insert(5)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 112 << " " << (a->insert(415)) << std::endl;
std::cout << "Line no:" << 113 << " " << ((a->remove(476))==false) << std::endl;
try{std::cout <<"Line no:" << 114 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getFloor(284) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getCeiling(284) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getNext(284) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->get(284) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 120 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 121 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 122 << " " << ((a->insert(5))==false) << std::endl;
std::cout << "Line no:" << 123 << " " << ((a->insert(237))==false) << std::endl;
std::cout << "Line no:" << 124 << " " << (a->insert(77)) << std::endl;
std::cout << "Line no:" << 125 << " " << (b->insert(18)) << std::endl;
std::cout << "Line no:" << 126 << " " << (b->insert(160)) << std::endl;
std::cout << "Line no:" << 127 << " " << (a->remove(284)) << std::endl;
std::cout << "Line no:" << 128 << " " << (b->insert(324)) << std::endl;
std::cout << "Line no:" << 129 << " " << (b->remove(283)) << std::endl;
std::cout << "Line no:" << 130 << " " << (b->remove(284)) << std::endl;
std::cout << "Line no:" << 131 << " " << (b->insert(88)) << std::endl;
std::cout << "Line no:" << 132 << " " << (a->insert(318)) << std::endl;
std::cout << "Line no:" << 133 << " " << (a->insert(127)) << std::endl;
std::cout << "Line no:" << 134 << " " << (b->insert(118)) << std::endl;
std::cout << "Line no:" << 135 << " " << (b->insert(486)) << std::endl;
std::cout << "Line no:" << 136 << " " << (b->remove(18)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 138 << " " << (b->insert(366)) << std::endl;
std::cout << "Line no:" << 139 << " " << (a->insert(393)) << std::endl;
std::cout << "Line no:" << 140 << " " << ((b->remove(7))==false) << std::endl;
std::cout << "Line no:" << 141 << " " << (a->insert(51)) << std::endl;
std::cout << "Line no:" << 142 << " " << ((b->insert(44))==false) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->remove(486)) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->remove(51)) << std::endl;
std::cout << "Line no:" << 145 << " " << (b->remove(220)) << std::endl;
std::cout << "Line no:" << 146 << " " << ((a->remove(437))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 148 << " " << (a->remove(432)) << std::endl;
std::cout << "Line no:" << 149 << " " << (b->insert(55)) << std::endl;
std::cout << "Line no:" << 150 << " " << (a->insert(248)) << std::endl;
std::cout << "Line no:" << 151 << " " << ((a->insert(462))==false) << std::endl;
*a=*b;
std::cout << "Line no:" << 153 << " " << ((a->remove(148))==false) << std::endl;
std::cout << "Line no:" << 154 << " " << (a->insert(425)) << std::endl;
std::cout << "Line no:" << 155 << " " << ((a->remove(226))==false) << std::endl;
std::cout << "Line no:" << 156 << " " << (a->insert(395)) << std::endl;
std::cout << "Line no:" << 157 << " " << ((b->remove(446))==false) << std::endl;
std::cout << "Line no:" << 158 << " " << (a->insert(447)) << std::endl;
std::cout << "Line no:" << 159 << " " << (b->insert(249)) << std::endl;
std::cout << "Line no:" << 160 << " " << (a->insert(240)) << std::endl;
std::cout << "Line no:" << 161 << " " << (b->insert(458)) << std::endl;
std::cout << "Line no:" << 162 << " " << ((a->insert(447))==false) << std::endl;
std::cout << "Line no:" << 163 << " " << ((b->insert(443))==false) << std::endl;
std::cout << "Line no:" << 164 << " " << ((b->insert(249))==false) << std::endl;
std::cout << "Line no:" << 165 << " " << ((a->insert(258))==false) << std::endl;
std::cout << "Line no:" << 166 << " " << (b->remove(432)) << std::endl;
std::cout << "Line no:" << 167 << " " << (a->remove(395)) << std::endl;
std::cout << "Line no:" << 168 << " " << (b->insert(158)) << std::endl;
std::cout << "Line no:" << 169 << " " << (b->insert(270)) << std::endl;
std::cout << "Line no:" << 170 << " " << (a->insert(251)) << std::endl;
std::cout << "Line no:" << 171 << " " << (b->insert(10)) << std::endl;
try{std::cout <<"Line no:" << 172 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getFloor(462) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getCeiling(462) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getNext(462) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->get(462) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 179 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 180 << " " << ((b->remove(73))==false) << std::endl;
std::cout << "Line no:" << 181 << " " << ((b->insert(457))==false) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->remove(462)) << std::endl;
std::cout << "Line no:" << 183 << " " << (b->insert(360)) << std::endl;
std::cout << "Line no:" << 184 << " " << (b->remove(324)) << std::endl;
std::cout << "Line no:" << 185 << " " << (b->insert(105)) << std::endl;
*a=*a;
std::cout << "Line no:" << 187 << " " << (a->insert(200)) << std::endl;
std::cout << "Line no:" << 188 << " " << (a->insert(332)) << std::endl;
std::cout << "Line no:" << 189 << " " << ((a->remove(170))==false) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->remove(443)) << std::endl;
std::cout << "Line no:" << 191 << " " << (b->remove(63)) << std::endl;
std::cout << "Line no:" << 192 << " " << (a->remove(324)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 194 << " " << (b->insert(110)) << std::endl;
std::cout << "Line no:" << 195 << " " << (b->insert(115)) << std::endl;
std::cout << "Line no:" << 196 << " " << ((b->insert(360))==false) << std::endl;
std::cout << "Line no:" << 197 << " " << (a->remove(425)) << std::endl;
std::cout << "Line no:" << 198 << " " << (b->insert(181)) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 201 << " " << (b->remove(258)) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->insert(156)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 204 << " " << (b->insert(405)) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->remove(447)) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->insert(66)) << std::endl;
std::cout << "Line no:" << 207 << " " << (a->insert(389)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 209 << " " << ((a->remove(259))==false) << std::endl;
std::cout << "Line no:" << 210 << " " << (b->insert(326)) << std::endl;
*a=*b;
std::cout << "Line no:" << 212 << " " << (a->insert(308)) << std::endl;
std::cout << "Line no:" << 213 << " " << (a->insert(236)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 215 << " " << (a->remove(158)) << std::endl;
std::cout << "Line no:" << 216 << " " << ((b->insert(10))==false) << std::endl;
std::cout << "Line no:" << 217 << " " << (b->insert(147)) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->remove(115)) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->remove(326)) << std::endl;
std::cout << "Line no:" << 220 << " " << (b->insert(24)) << std::endl;
std::cout << "Line no:" << 221 << " " << (b->remove(457)) << std::endl;
std::cout << "Line no:" << 222 << " " << (b->remove(229)) << std::endl;
std::cout << "Line no:" << 223 << " " << (b->insert(43)) << std::endl;
std::cout << "Line no:" << 224 << " " << (a->remove(458)) << std::endl;
std::cout << "Line no:" << 225 << " " << (a->remove(236)) << std::endl;
std::cout << "Line no:" << 226 << " " << ((a->insert(249))==false) << std::endl;
std::cout << "Line no:" << 227 << " " << (b->insert(84)) << std::endl;
std::cout << "Line no:" << 228 << " " << (a->remove(465)) << std::endl;
std::cout << "Line no:" << 229 << " " << ((b->remove(176))==false) << std::endl;
try{std::cout <<"Line no:" << 230 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getFloor(44) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getCeiling(44) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getNext(44) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->get(44) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 237 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 238 << " " << ((b->insert(43))==false) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
