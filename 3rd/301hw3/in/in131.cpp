#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
a->printPretty();
std::cout << "Line no:" << 6 << " " << (a->insert(382)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(167)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->insert(225)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->remove(382)) << std::endl;
std::cout << "Line no:" << 10 << " " << ((a->insert(225))==false) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->remove(167)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(91)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->insert(171)) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(239)) << std::endl;
std::cout << "Line no:" << 15 << " " << ((a->remove(242))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 17 << " " << (a->remove(171)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->insert(383)) << std::endl;
std::cout << "Line no:" << 19 << " " << ((a->insert(383))==false) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(211)) << std::endl;
std::cout << "Line no:" << 21 << " " << ((a->remove(384))==false) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->insert(229)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->insert(387)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->remove(387)) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->insert(255)) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->insert(272)) << std::endl;
std::cout << "Line no:" << 27 << " " << ((a->remove(61))==false) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->remove(229)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 30 << " " << (a->remove(91)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->insert(270)) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->remove(270)) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->insert(454)) << std::endl;
std::cout << "Line no:" << 34 << " " << (a->insert(431)) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->insert(459)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 37 << " " << ((a->remove(144))==false) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->remove(225)) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->insert(37)) << std::endl;
std::cout << "Line no:" << 40 << " " << ((a->insert(37))==false) << std::endl;
std::cout << "Line no:" << 41 << " " << (a->remove(211)) << std::endl;
std::cout << "Line no:" << 42 << " " << ((a->remove(149))==false) << std::endl;
std::cout << "Line no:" << 43 << " " << ((a->insert(383))==false) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->insert(295)) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->remove(454)) << std::endl;
std::cout << "Line no:" << 46 << " " << ((a->remove(469))==false) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*b;
std::cout << "Line no:" << 49 << " " << (a->remove(37)) << std::endl;
std::cout << "Line no:" << 50 << " " << ((b->insert(459))==false) << std::endl;
std::cout << "Line no:" << 51 << " " << ((b->remove(357))==false) << std::endl;
std::cout << "Line no:" << 52 << " " << (a->insert(300)) << std::endl;
std::cout << "Line no:" << 53 << " " << (a->insert(494)) << std::endl;
std::cout << "Line no:" << 54 << " " << (a->remove(494)) << std::endl;
try{std::cout <<"Line no:" << 55 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getFloor(239) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getCeiling(239) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getNext(239) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->get(239) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 62 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
b->printPretty();
std::cout << "Line no:" << 64 << " " << (a->insert(10)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 66 << " " << (b->insert(141)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->insert(68)) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->remove(272)) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->remove(68)) << std::endl;
std::cout << "Line no:" << 70 << " " << (a->insert(442)) << std::endl;
std::cout << "Line no:" << 71 << " " << (a->remove(239)) << std::endl;
std::cout << "Line no:" << 72 << " " << (b->remove(10)) << std::endl;
std::cout << "Line no:" << 73 << " " << ((a->remove(55))==false) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->insert(399)) << std::endl;
std::cout << "Line no:" << 75 << " " << (b->insert(11)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 77 << " " << (b->insert(107)) << std::endl;
std::cout << "Line no:" << 78 << " " << (b->insert(233)) << std::endl;
std::cout << "Line no:" << 79 << " " << (a->remove(431)) << std::endl;
std::cout << "Line no:" << 80 << " " << ((b->insert(141))==false) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->remove(255)) << std::endl;
*a=*b;
std::cout << "Line no:" << 83 << " " << (a->insert(470)) << std::endl;
std::cout << "Line no:" << 84 << " " << (a->insert(8)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 86 << " " << ((a->insert(459))==false) << std::endl;
std::cout << "Line no:" << 87 << " " << (a->insert(394)) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->remove(233)) << std::endl;
std::cout << "Line no:" << 89 << " " << (b->insert(41)) << std::endl;
std::cout << "Line no:" << 90 << " " << (b->remove(459)) << std::endl;
std::cout << "Line no:" << 91 << " " << (a->remove(141)) << std::endl;
std::cout << "Line no:" << 92 << " " << ((a->insert(394))==false) << std::endl;
std::cout << "Line no:" << 93 << " " << ((b->remove(385))==false) << std::endl;
std::cout << "Line no:" << 94 << " " << (a->insert(343)) << std::endl;
std::cout << "Line no:" << 95 << " " << (b->remove(141)) << std::endl;
std::cout << "Line no:" << 96 << " " << ((a->remove(157))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 98 << " " << ((b->remove(486))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 100 << " " << (b->remove(399)) << std::endl;
std::cout << "Line no:" << 101 << " " << (b->insert(453)) << std::endl;
std::cout << "Line no:" << 102 << " " << (b->insert(251)) << std::endl;
std::cout << "Line no:" << 103 << " " << (b->remove(442)) << std::endl;
std::cout << "Line no:" << 104 << " " << (a->insert(219)) << std::endl;
std::cout << "Line no:" << 105 << " " << (a->insert(235)) << std::endl;
std::cout << "Line no:" << 106 << " " << ((b->remove(139))==false) << std::endl;
std::cout << "Line no:" << 107 << " " << (b->remove(383)) << std::endl;
std::cout << "Line no:" << 108 << " " << (b->insert(490)) << std::endl;
std::cout << "Line no:" << 109 << " " << (b->insert(80)) << std::endl;
std::cout << "Line no:" << 110 << " " << (a->remove(235)) << std::endl;
std::cout << "Line no:" << 111 << " " << (a->remove(295)) << std::endl;
std::cout << "Line no:" << 112 << " " << (a->remove(11)) << std::endl;
try{std::cout <<"Line no:" << 113 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getFloor(442) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getCeiling(442) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getNext(442) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->get(442) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 120 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 121 << " " << (a->insert(244)) << std::endl;
std::cout << "Line no:" << 122 << " " << (b->remove(490)) << std::endl;
std::cout << "Line no:" << 123 << " " << (b->insert(277)) << std::endl;
std::cout << "Line no:" << 124 << " " << ((b->insert(41))==false) << std::endl;
*b=*b;
std::cout << "Line no:" << 126 << " " << (a->insert(113)) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->remove(251)) << std::endl;
std::cout << "Line no:" << 128 << " " << ((b->remove(190))==false) << std::endl;
std::cout << "Line no:" << 129 << " " << (b->remove(295)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 131 << " " << (b->remove(277)) << std::endl;
std::cout << "Line no:" << 132 << " " << (a->insert(248)) << std::endl;
std::cout << "Line no:" << 133 << " " << (a->insert(343)) << std::endl;
std::cout << "Line no:" << 134 << " " << ((b->remove(316))==false) << std::endl;
std::cout << "Line no:" << 135 << " " << ((b->insert(453))==false) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->insert(385)) << std::endl;
std::cout << "Line no:" << 137 << " " << ((a->insert(248))==false) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->remove(11)) << std::endl;
std::cout << "Line no:" << 139 << " " << ((a->remove(42))==false) << std::endl;
std::cout << "Line no:" << 140 << " " << (a->insert(90)) << std::endl;
std::cout << "Line no:" << 141 << " " << ((a->remove(280))==false) << std::endl;
std::cout << "Line no:" << 142 << " " << (b->insert(499)) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->remove(470)) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->insert(135)) << std::endl;
std::cout << "Line no:" << 145 << " " << (b->insert(103)) << std::endl;
std::cout << "Line no:" << 146 << " " << (a->insert(48)) << std::endl;
std::cout << "Line no:" << 147 << " " << (b->remove(80)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 149 << " " << ((a->remove(78))==false) << std::endl;
std::cout << "Line no:" << 150 << " " << (a->insert(29)) << std::endl;
std::cout << "Line no:" << 151 << " " << (b->insert(454)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 154 << " " << (a->remove(399)) << std::endl;
std::cout << "Line no:" << 155 << " " << (a->remove(343)) << std::endl;
std::cout << "Line no:" << 156 << " " << (b->insert(105)) << std::endl;
std::cout << "Line no:" << 157 << " " << (a->insert(392)) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->insert(368)) << std::endl;
std::cout << "Line no:" << 159 << " " << (a->remove(394)) << std::endl;
std::cout << "Line no:" << 160 << " " << (b->insert(145)) << std::endl;
std::cout << "Line no:" << 161 << " " << ((a->insert(219))==false) << std::endl;
std::cout << "Line no:" << 162 << " " << ((a->insert(383))==false) << std::endl;
std::cout << "Line no:" << 163 << " " << ((a->remove(374))==false) << std::endl;
std::cout << "Line no:" << 164 << " " << (a->remove(113)) << std::endl;
std::cout << "Line no:" << 165 << " " << (a->insert(289)) << std::endl;
std::cout << "Line no:" << 166 << " " << (a->remove(107)) << std::endl;
std::cout << "Line no:" << 167 << " " << (b->insert(381)) << std::endl;
std::cout << "Line no:" << 168 << " " << (a->remove(219)) << std::endl;
std::cout << "Line no:" << 169 << " " << ((a->insert(442))==false) << std::endl;
std::cout << "Line no:" << 170 << " " << (b->insert(420)) << std::endl;
try{std::cout <<"Line no:" << 171 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getFloor(300) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getCeiling(300) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getNext(300) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->get(300) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 179 << " " << ((b->insert(107))==false) << std::endl;
*a=*a;
std::cout << "Line no:" << 181 << " " << (a->insert(328)) << std::endl;
std::cout << "Line no:" << 182 << " " << (b->remove(368)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 184 << " " << (a->remove(244)) << std::endl;
std::cout << "Line no:" << 185 << " " << ((b->insert(300))==false) << std::endl;
std::cout << "Line no:" << 186 << " " << (b->remove(381)) << std::endl;
std::cout << "Line no:" << 187 << " " << (b->remove(103)) << std::endl;
std::cout << "Line no:" << 188 << " " << (a->remove(459)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 190 << " " << (b->insert(356)) << std::endl;
std::cout << "Line no:" << 191 << " " << (b->remove(499)) << std::endl;
std::cout << "Line no:" << 192 << " " << ((a->insert(248))==false) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 195 << " " << ((a->insert(442))==false) << std::endl;
std::cout << "Line no:" << 196 << " " << ((b->remove(378))==false) << std::endl;
*b=*b;
std::cout << "Line no:" << 198 << " " << (a->insert(63)) << std::endl;
std::cout << "Line no:" << 199 << " " << (a->insert(301)) << std::endl;
std::cout << "Line no:" << 200 << " " << ((b->insert(453))==false) << std::endl;
std::cout << "Line no:" << 201 << " " << ((a->insert(8))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 203 << " " << ((b->insert(454))==false) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->insert(472)) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->remove(135)) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->remove(392)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 208 << " " << (b->remove(300)) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->remove(454)) << std::endl;
std::cout << "Line no:" << 210 << " " << (a->remove(90)) << std::endl;
std::cout << "Line no:" << 211 << " " << (a->remove(328)) << std::endl;
std::cout << "Line no:" << 212 << " " << (a->remove(233)) << std::endl;
std::cout << "Line no:" << 213 << " " << ((b->remove(486))==false) << std::endl;
std::cout << "Line no:" << 214 << " " << (b->remove(356)) << std::endl;
std::cout << "Line no:" << 215 << " " << ((a->remove(220))==false) << std::endl;
std::cout << "Line no:" << 216 << " " << (a->insert(413)) << std::endl;
std::cout << "Line no:" << 217 << " " << (a->remove(300)) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->remove(145)) << std::endl;
std::cout << "Line no:" << 219 << " " << ((a->remove(458))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 221 << " " << (b->insert(430)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 223 << " " << ((a->insert(343))==false) << std::endl;
std::cout << "Line no:" << 224 << " " << (b->remove(105)) << std::endl;
std::cout << "Line no:" << 225 << " " << (a->insert(348)) << std::endl;
std::cout << "Line no:" << 226 << " " << (b->remove(453)) << std::endl;
std::cout << "Line no:" << 227 << " " << (b->insert(123)) << std::endl;
std::cout << "Line no:" << 228 << " " << (a->insert(278)) << std::endl;
std::cout << "Line no:" << 229 << " " << (b->remove(472)) << std::endl;
try{std::cout <<"Line no:" << 230 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getFloor(63) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getCeiling(63) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getNext(63) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->get(63) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 237 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
b->printPretty();
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
