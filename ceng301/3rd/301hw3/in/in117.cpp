#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(178)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->remove(178)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 9 << " " << (a->insert(257)) << std::endl;
std::cout << "Line no:" << 10 << " " << ((a->remove(92))==false) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->remove(257)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(57)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->insert(403)) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->remove(403)) << std::endl;
std::cout << "Line no:" << 15 << " " << ((a->insert(57))==false) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->remove(57)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(125)) << std::endl;
std::cout << "Line no:" << 18 << " " << ((a->insert(125))==false) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->remove(125)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(294)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->insert(143)) << std::endl;
std::cout << "Line no:" << 22 << " " << ((a->insert(294))==false) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->remove(294)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->insert(491)) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->insert(119)) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->remove(119)) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->remove(143)) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->remove(491)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 30 << " " << (a->insert(349)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->remove(349)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 33 << " " << (a->insert(324)) << std::endl;
std::cout << "Line no:" << 34 << " " << ((a->insert(324))==false) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->insert(308)) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->insert(216)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
std::cout << "Line no:" << 39 << " " << (a->insert(109)) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->remove(216)) << std::endl;
std::cout << "Line no:" << 41 << " " << (b->insert(195)) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->insert(376)) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->remove(324)) << std::endl;
std::cout << "Line no:" << 44 << " " << ((b->insert(195))==false) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->remove(308)) << std::endl;
std::cout << "Line no:" << 46 << " " << (a->insert(45)) << std::endl;
std::cout << "Line no:" << 47 << " " << (a->insert(332)) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->insert(138)) << std::endl;
try{std::cout <<"Line no:" << 49 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 50 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 51 << " " << a->getFloor(332) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 52 << " " << a->getCeiling(332) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getNext(332) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->get(332) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 57 << " " << (a->insert(291)) << std::endl;
std::cout << "Line no:" << 58 << " " << (a->remove(291)) << std::endl;
std::cout << "Line no:" << 59 << " " << (a->insert(291)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 61 << " " << (a->insert(177)) << std::endl;
std::cout << "Line no:" << 62 << " " << ((b->remove(274))==false) << std::endl;
std::cout << "Line no:" << 63 << " " << ((a->remove(244))==false) << std::endl;
std::cout << "Line no:" << 64 << " " << ((a->remove(499))==false) << std::endl;
std::cout << "Line no:" << 65 << " " << ((a->insert(45))==false) << std::endl;
std::cout << "Line no:" << 66 << " " << (b->remove(195)) << std::endl;
std::cout << "Line no:" << 67 << " " << (b->insert(37)) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->remove(376)) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->insert(130)) << std::endl;
std::cout << "Line no:" << 70 << " " << (b->insert(21)) << std::endl;
std::cout << "Line no:" << 71 << " " << (b->remove(37)) << std::endl;
std::cout << "Line no:" << 72 << " " << ((b->insert(21))==false) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->insert(344)) << std::endl;
std::cout << "Line no:" << 74 << " " << (b->remove(21)) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->remove(177)) << std::endl;
std::cout << "Line no:" << 76 << " " << (b->insert(91)) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->insert(401)) << std::endl;
std::cout << "Line no:" << 78 << " " << ((a->insert(401))==false) << std::endl;
std::cout << "Line no:" << 79 << " " << (b->insert(283)) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->remove(344)) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->remove(283)) << std::endl;
std::cout << "Line no:" << 82 << " " << ((a->insert(291))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 84 << " " << (a->insert(178)) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->insert(456)) << std::endl;
std::cout << "Line no:" << 86 << " " << (b->insert(453)) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->insert(224)) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->insert(328)) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->insert(119)) << std::endl;
std::cout << "Line no:" << 90 << " " << (b->insert(129)) << std::endl;
std::cout << "Line no:" << 91 << " " << (a->insert(290)) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->remove(45)) << std::endl;
std::cout << "Line no:" << 93 << " " << (b->remove(129)) << std::endl;
std::cout << "Line no:" << 94 << " " << (a->remove(109)) << std::endl;
std::cout << "Line no:" << 95 << " " << (a->insert(487)) << std::endl;
std::cout << "Line no:" << 96 << " " << ((a->remove(59))==false) << std::endl;
std::cout << "Line no:" << 97 << " " << ((a->insert(119))==false) << std::endl;
std::cout << "Line no:" << 98 << " " << (b->remove(224)) << std::endl;
std::cout << "Line no:" << 99 << " " << (b->insert(365)) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->remove(401)) << std::endl;
std::cout << "Line no:" << 101 << " " << ((b->insert(453))==false) << std::endl;
std::cout << "Line no:" << 102 << " " << (b->insert(498)) << std::endl;
std::cout << "Line no:" << 103 << " " << ((b->insert(328))==false) << std::endl;
std::cout << "Line no:" << 104 << " " << (a->insert(134)) << std::endl;
std::cout << "Line no:" << 105 << " " << ((a->insert(290))==false) << std::endl;
std::cout << "Line no:" << 106 << " " << (b->remove(498)) << std::endl;
try{std::cout <<"Line no:" << 107 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 108 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 109 << " " << a->getFloor(290) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 110 << " " << a->getCeiling(290) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 111 << " " << a->getNext(290) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->get(290) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 115 << " " << (a->insert(226)) << std::endl;
*b=*b;
std::cout << "Line no:" << 117 << " " << (a->insert(308)) << std::endl;
std::cout << "Line no:" << 118 << " " << ((b->insert(453))==false) << std::endl;
std::cout << "Line no:" << 119 << " " << ((b->insert(365))==false) << std::endl;
std::cout << "Line no:" << 120 << " " << ((a->remove(118))==false) << std::endl;
std::cout << "Line no:" << 121 << " " << (a->remove(332)) << std::endl;
std::cout << "Line no:" << 122 << " " << ((b->remove(399))==false) << std::endl;
std::cout << "Line no:" << 123 << " " << (a->insert(360)) << std::endl;
std::cout << "Line no:" << 124 << " " << (b->remove(453)) << std::endl;
std::cout << "Line no:" << 125 << " " << (b->insert(73)) << std::endl;
*b=*b;
std::cout << "Line no:" << 127 << " " << (b->insert(157)) << std::endl;
std::cout << "Line no:" << 128 << " " << ((b->insert(73))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 130 << " " << (b->remove(157)) << std::endl;
std::cout << "Line no:" << 131 << " " << (b->remove(73)) << std::endl;
std::cout << "Line no:" << 132 << " " << (a->insert(4)) << std::endl;
*b=*b;
std::cout << "Line no:" << 134 << " " << ((a->insert(308))==false) << std::endl;
std::cout << "Line no:" << 135 << " " << ((b->insert(328))==false) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->remove(487)) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->remove(178)) << std::endl;
std::cout << "Line no:" << 138 << " " << (a->remove(130)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 140 << " " << (b->insert(212)) << std::endl;
std::cout << "Line no:" << 141 << " " << (a->remove(290)) << std::endl;
std::cout << "Line no:" << 142 << " " << (a->insert(133)) << std::endl;
std::cout << "Line no:" << 143 << " " << ((a->insert(119))==false) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->remove(4)) << std::endl;
std::cout << "Line no:" << 145 << " " << (b->insert(194)) << std::endl;
std::cout << "Line no:" << 146 << " " << (a->remove(308)) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->insert(342)) << std::endl;
std::cout << "Line no:" << 148 << " " << ((a->insert(226))==false) << std::endl;
std::cout << "Line no:" << 149 << " " << (b->remove(194)) << std::endl;
std::cout << "Line no:" << 150 << " " << (a->remove(134)) << std::endl;
std::cout << "Line no:" << 151 << " " << (b->insert(296)) << std::endl;
std::cout << "Line no:" << 152 << " " << (a->remove(138)) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->insert(496)) << std::endl;
std::cout << "Line no:" << 154 << " " << ((a->insert(360))==false) << std::endl;
std::cout << "Line no:" << 155 << " " << (a->insert(138)) << std::endl;
std::cout << "Line no:" << 156 << " " << (b->insert(2)) << std::endl;
std::cout << "Line no:" << 157 << " " << (b->insert(178)) << std::endl;
std::cout << "Line no:" << 158 << " " << (a->insert(357)) << std::endl;
std::cout << "Line no:" << 159 << " " << ((b->remove(77))==false) << std::endl;
std::cout << "Line no:" << 160 << " " << (a->remove(133)) << std::endl;
std::cout << "Line no:" << 161 << " " << (a->insert(401)) << std::endl;
std::cout << "Line no:" << 162 << " " << (a->insert(245)) << std::endl;
std::cout << "Line no:" << 163 << " " << (a->insert(348)) << std::endl;
std::cout << "Line no:" << 164 << " " << (b->insert(406)) << std::endl;
std::cout << "Line no:" << 165 << " " << (a->remove(245)) << std::endl;
try{std::cout <<"Line no:" << 166 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 167 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 168 << " " << a->getFloor(138) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 169 << " " << a->getCeiling(138) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getNext(138) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->get(138) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 174 << " " << ((b->remove(133))==false) << std::endl;
*a=*b;
std::cout << "Line no:" << 176 << " " << ((b->remove(494))==false) << std::endl;
std::cout << "Line no:" << 177 << " " << (a->remove(2)) << std::endl;
std::cout << "Line no:" << 178 << " " << (b->remove(365)) << std::endl;
std::cout << "Line no:" << 179 << " " << (b->remove(328)) << std::endl;
std::cout << "Line no:" << 180 << " " << (a->remove(496)) << std::endl;
std::cout << "Line no:" << 181 << " " << ((b->remove(378))==false) << std::endl;
std::cout << "Line no:" << 182 << " " << (b->insert(329)) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->remove(406)) << std::endl;
std::cout << "Line no:" << 184 << " " << ((b->insert(329))==false) << std::endl;
std::cout << "Line no:" << 185 << " " << (b->insert(72)) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->remove(365)) << std::endl;
std::cout << "Line no:" << 187 << " " << (b->insert(333)) << std::endl;
std::cout << "Line no:" << 188 << " " << (a->remove(91)) << std::endl;
std::cout << "Line no:" << 189 << " " << (b->insert(414)) << std::endl;
std::cout << "Line no:" << 190 << " " << ((a->insert(212))==false) << std::endl;
std::cout << "Line no:" << 191 << " " << (a->insert(403)) << std::endl;
std::cout << "Line no:" << 192 << " " << (b->insert(434)) << std::endl;
std::cout << "Line no:" << 193 << " " << ((b->insert(333))==false) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->remove(403)) << std::endl;
std::cout << "Line no:" << 195 << " " << ((b->remove(404))==false) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 198 << " " << (a->insert(314)) << std::endl;
std::cout << "Line no:" << 199 << " " << (a->remove(178)) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->insert(259)) << std::endl;
std::cout << "Line no:" << 201 << " " << (b->insert(77)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 203 << " " << (b->insert(223)) << std::endl;
std::cout << "Line no:" << 204 << " " << ((b->insert(91))==false) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->insert(65)) << std::endl;
std::cout << "Line no:" << 206 << " " << ((a->insert(212))==false) << std::endl;
std::cout << "Line no:" << 207 << " " << ((b->insert(212))==false) << std::endl;
std::cout << "Line no:" << 208 << " " << ((b->insert(434))==false) << std::endl;
std::cout << "Line no:" << 209 << " " << (a->insert(265)) << std::endl;
std::cout << "Line no:" << 210 << " " << (a->insert(211)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 212 << " " << (b->insert(48)) << std::endl;
std::cout << "Line no:" << 213 << " " << (a->remove(296)) << std::endl;
std::cout << "Line no:" << 214 << " " << ((b->remove(248))==false) << std::endl;
std::cout << "Line no:" << 215 << " " << ((b->remove(122))==false) << std::endl;
std::cout << "Line no:" << 216 << " " << (a->remove(65)) << std::endl;
std::cout << "Line no:" << 217 << " " << (b->insert(119)) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->insert(364)) << std::endl;
std::cout << "Line no:" << 219 << " " << (b->insert(108)) << std::endl;
std::cout << "Line no:" << 220 << " " << (a->remove(211)) << std::endl;
*b=*b;
a->printPretty();
std::cout << "Line no:" << 223 << " " << (a->insert(161)) << std::endl;
try{std::cout <<"Line no:" << 224 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 225 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 226 << " " << a->getFloor(328) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 227 << " " << a->getCeiling(328) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getNext(328) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->get(328) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 232 << " " << (b->insert(444)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
