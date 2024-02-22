#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(239)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(324)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->remove(324)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*b;
std::cout << "Line no:" << 10 << " " << (b->insert(50)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(33)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->remove(50)) << std::endl;
std::cout << "Line no:" << 13 << " " << (b->remove(33)) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(53)) << std::endl;
std::cout << "Line no:" << 15 << " " << (b->insert(486)) << std::endl;
std::cout << "Line no:" << 16 << " " << (b->insert(329)) << std::endl;
std::cout << "Line no:" << 17 << " " << (b->insert(318)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 19 << " " << ((a->insert(318))==false) << std::endl;
std::cout << "Line no:" << 20 << " " << ((b->insert(329))==false) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->remove(486)) << std::endl;
*b=*a;
std::cout << "Line no:" << 23 << " " << (b->remove(329)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->insert(236)) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->remove(53)) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->remove(318)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 28 << " " << (a->remove(329)) << std::endl;
std::cout << "Line no:" << 29 << " " << ((b->insert(318))==false) << std::endl;
std::cout << "Line no:" << 30 << " " << (b->insert(21)) << std::endl;
std::cout << "Line no:" << 31 << " " << (b->insert(67)) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->insert(241)) << std::endl;
*b=*b;
std::cout << "Line no:" << 34 << " " << (b->remove(21)) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->insert(185)) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->insert(360)) << std::endl;
std::cout << "Line no:" << 37 << " " << (b->insert(272)) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->remove(241)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 40 << " " << (a->insert(266)) << std::endl;
std::cout << "Line no:" << 41 << " " << (b->remove(272)) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->remove(266)) << std::endl;
std::cout << "Line no:" << 43 << " " << (b->insert(196)) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->insert(112)) << std::endl;
std::cout << "Line no:" << 45 << " " << ((a->remove(397))==false) << std::endl;
std::cout << "Line no:" << 46 << " " << ((b->insert(67))==false) << std::endl;
std::cout << "Line no:" << 47 << " " << (b->insert(241)) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->remove(236)) << std::endl;
std::cout << "Line no:" << 49 << " " << (a->remove(360)) << std::endl;
*b=*b;
std::cout << "Line no:" << 51 << " " << (b->insert(400)) << std::endl;
std::cout << "Line no:" << 52 << " " << (a->insert(453)) << std::endl;
std::cout << "Line no:" << 53 << " " << (a->remove(185)) << std::endl;
std::cout << "Line no:" << 54 << " " << (a->insert(77)) << std::endl;
try{std::cout <<"Line no:" << 55 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getFloor(112) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getCeiling(112) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getNext(112) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->get(112) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 62 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 63 << " " << ((a->insert(77))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 65 << " " << (b->insert(442)) << std::endl;
std::cout << "Line no:" << 66 << " " << (b->insert(357)) << std::endl;
std::cout << "Line no:" << 67 << " " << ((b->insert(196))==false) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 70 << " " << ((a->remove(251))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 72 << " " << ((b->remove(249))==false) << std::endl;
*b=*b;
std::cout << "Line no:" << 74 << " " << (a->insert(307)) << std::endl;
std::cout << "Line no:" << 75 << " " << (b->remove(196)) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->insert(114)) << std::endl;
std::cout << "Line no:" << 77 << " " << ((a->insert(307))==false) << std::endl;
std::cout << "Line no:" << 78 << " " << (a->remove(453)) << std::endl;
std::cout << "Line no:" << 79 << " " << (a->remove(307)) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->remove(114)) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->insert(120)) << std::endl;
std::cout << "Line no:" << 82 << " " << (b->remove(241)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 84 << " " << (a->insert(472)) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->remove(472)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 87 << " " << (b->remove(67)) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->remove(400)) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->insert(447)) << std::endl;
std::cout << "Line no:" << 90 << " " << (b->insert(253)) << std::endl;
std::cout << "Line no:" << 91 << " " << (b->remove(318)) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->remove(112)) << std::endl;
std::cout << "Line no:" << 93 << " " << (b->remove(120)) << std::endl;
std::cout << "Line no:" << 94 << " " << (a->insert(34)) << std::endl;
std::cout << "Line no:" << 95 << " " << (a->insert(333)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 97 << " " << (b->insert(450)) << std::endl;
std::cout << "Line no:" << 98 << " " << (a->insert(121)) << std::endl;
std::cout << "Line no:" << 99 << " " << (a->insert(216)) << std::endl;
std::cout << "Line no:" << 100 << " " << (b->remove(442)) << std::endl;
std::cout << "Line no:" << 101 << " " << (a->insert(393)) << std::endl;
std::cout << "Line no:" << 102 << " " << (b->insert(217)) << std::endl;
std::cout << "Line no:" << 103 << " " << (a->insert(465)) << std::endl;
a->printPretty();
*a=*b;
std::cout << "Line no:" << 106 << " " << (b->remove(217)) << std::endl;
std::cout << "Line no:" << 107 << " " << (a->insert(492)) << std::endl;
std::cout << "Line no:" << 108 << " " << (a->remove(217)) << std::endl;
std::cout << "Line no:" << 109 << " " << ((a->remove(148))==false) << std::endl;
std::cout << "Line no:" << 110 << " " << ((b->insert(253))==false) << std::endl;
std::cout << "Line no:" << 111 << " " << (b->insert(84)) << std::endl;
std::cout << "Line no:" << 112 << " " << (b->remove(253)) << std::endl;
std::cout << "Line no:" << 113 << " " << (b->insert(250)) << std::endl;
try{std::cout <<"Line no:" << 114 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getFloor(253) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getCeiling(253) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getNext(253) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->get(253) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 120 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 121 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 122 << " " << (b->insert(448)) << std::endl;
std::cout << "Line no:" << 123 << " " << ((a->insert(53))==false) << std::endl;
*a=*a;
std::cout << "Line no:" << 125 << " " << (b->insert(407)) << std::endl;
std::cout << "Line no:" << 126 << " " << (b->remove(84)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 128 << " " << (a->insert(354)) << std::endl;
std::cout << "Line no:" << 129 << " " << ((b->insert(53))==false) << std::endl;
std::cout << "Line no:" << 130 << " " << (a->insert(330)) << std::endl;
std::cout << "Line no:" << 131 << " " << ((a->remove(265))==false) << std::endl;
std::cout << "Line no:" << 132 << " " << (b->remove(407)) << std::endl;
std::cout << "Line no:" << 133 << " " << (b->insert(461)) << std::endl;
std::cout << "Line no:" << 134 << " " << (b->insert(340)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 136 << " " << (b->remove(250)) << std::endl;
std::cout << "Line no:" << 137 << " " << ((b->remove(130))==false) << std::endl;
std::cout << "Line no:" << 138 << " " << ((a->remove(381))==false) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 141 << " " << ((b->insert(450))==false) << std::endl;
std::cout << "Line no:" << 142 << " " << (a->remove(330)) << std::endl;
std::cout << "Line no:" << 143 << " " << ((b->insert(53))==false) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->remove(357)) << std::endl;
std::cout << "Line no:" << 145 << " " << ((b->remove(439))==false) << std::endl;
std::cout << "Line no:" << 146 << " " << (b->insert(474)) << std::endl;
std::cout << "Line no:" << 147 << " " << ((a->insert(53))==false) << std::endl;
std::cout << "Line no:" << 148 << " " << (b->insert(67)) << std::endl;
std::cout << "Line no:" << 149 << " " << (a->remove(354)) << std::endl;
std::cout << "Line no:" << 150 << " " << (b->remove(67)) << std::endl;
std::cout << "Line no:" << 151 << " " << (a->insert(194)) << std::endl;
std::cout << "Line no:" << 152 << " " << (b->insert(477)) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->remove(474)) << std::endl;
std::cout << "Line no:" << 154 << " " << ((b->insert(340))==false) << std::endl;
std::cout << "Line no:" << 155 << " " << (a->insert(143)) << std::endl;
std::cout << "Line no:" << 156 << " " << (a->remove(492)) << std::endl;
std::cout << "Line no:" << 157 << " " << (a->insert(231)) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->remove(461)) << std::endl;
std::cout << "Line no:" << 159 << " " << (b->remove(477)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 161 << " " << (a->insert(130)) << std::endl;
*b=*a;
std::cout << "Line no:" << 163 << " " << ((b->insert(194))==false) << std::endl;
std::cout << "Line no:" << 164 << " " << (b->insert(389)) << std::endl;
std::cout << "Line no:" << 165 << " " << (a->remove(194)) << std::endl;
std::cout << "Line no:" << 166 << " " << (b->insert(458)) << std::endl;
std::cout << "Line no:" << 167 << " " << (a->insert(101)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 169 << " " << ((a->insert(53))==false) << std::endl;
std::cout << "Line no:" << 170 << " " << (a->insert(401)) << std::endl;
std::cout << "Line no:" << 171 << " " << (a->insert(356)) << std::endl;
try{std::cout <<"Line no:" << 172 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getFloor(253) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getCeiling(253) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getNext(253) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->get(253) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 179 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
a->printPretty();
std::cout << "Line no:" << 181 << " " << (b->insert(466)) << std::endl;
std::cout << "Line no:" << 182 << " " << (b->remove(389)) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->remove(130)) << std::endl;
std::cout << "Line no:" << 184 << " " << (a->insert(100)) << std::endl;
std::cout << "Line no:" << 185 << " " << (a->remove(253)) << std::endl;
std::cout << "Line no:" << 186 << " " << ((a->insert(357))==false) << std::endl;
std::cout << "Line no:" << 187 << " " << (a->insert(25)) << std::endl;
std::cout << "Line no:" << 188 << " " << ((b->insert(357))==false) << std::endl;
std::cout << "Line no:" << 189 << " " << (a->remove(357)) << std::endl;
std::cout << "Line no:" << 190 << " " << (a->insert(31)) << std::endl;
std::cout << "Line no:" << 191 << " " << (b->insert(108)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 193 << " " << (b->insert(34)) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->insert(29)) << std::endl;
std::cout << "Line no:" << 195 << " " << (a->insert(498)) << std::endl;
std::cout << "Line no:" << 196 << " " << (a->insert(350)) << std::endl;
std::cout << "Line no:" << 197 << " " << ((b->remove(12))==false) << std::endl;
std::cout << "Line no:" << 198 << " " << (b->insert(382)) << std::endl;
std::cout << "Line no:" << 199 << " " << (a->insert(228)) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->remove(25)) << std::endl;
std::cout << "Line no:" << 201 << " " << (a->insert(253)) << std::endl;
std::cout << "Line no:" << 202 << " " << (a->insert(145)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 204 << " " << (a->remove(145)) << std::endl;
std::cout << "Line no:" << 205 << " " << ((b->insert(194))==false) << std::endl;
std::cout << "Line no:" << 206 << " " << (b->insert(190)) << std::endl;
std::cout << "Line no:" << 207 << " " << (b->insert(295)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 209 << " " << (b->insert(226)) << std::endl;
*b=*b;
std::cout << "Line no:" << 211 << " " << (a->insert(132)) << std::endl;
std::cout << "Line no:" << 212 << " " << (a->insert(59)) << std::endl;
std::cout << "Line no:" << 213 << " " << ((b->insert(231))==false) << std::endl;
std::cout << "Line no:" << 214 << " " << ((a->insert(100))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 216 << " " << (b->insert(149)) << std::endl;
std::cout << "Line no:" << 217 << " " << (a->insert(103)) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->insert(82)) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->remove(350)) << std::endl;
std::cout << "Line no:" << 220 << " " << (b->remove(231)) << std::endl;
std::cout << "Line no:" << 221 << " " << (b->remove(382)) << std::endl;
std::cout << "Line no:" << 222 << " " << (b->insert(332)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 224 << " " << (a->insert(63)) << std::endl;
std::cout << "Line no:" << 225 << " " << (b->insert(481)) << std::endl;
std::cout << "Line no:" << 226 << " " << (b->insert(120)) << std::endl;
std::cout << "Line no:" << 227 << " " << (a->remove(401)) << std::endl;
std::cout << "Line no:" << 228 << " " << (a->insert(461)) << std::endl;
std::cout << "Line no:" << 229 << " " << ((a->insert(228))==false) << std::endl;
try{std::cout <<"Line no:" << 230 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getFloor(450) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getCeiling(450) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getNext(450) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->get(450) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 237 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 238 << " " << (b->remove(194)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
