#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(5)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(252)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(219)) << std::endl;
std::cout << "Line no:" << 8 << " " << ((a->insert(252))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 10 << " " << ((a->remove(396))==false) << std::endl;
std::cout << "Line no:" << 11 << " " << ((a->insert(5))==false) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->remove(219)) << std::endl;
std::cout << "Line no:" << 13 << " " << ((a->insert(252))==false) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(383)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(407)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->remove(407)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->remove(383)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->insert(26)) << std::endl;
std::cout << "Line no:" << 19 << " " << ((a->insert(5))==false) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(269)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->insert(250)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->insert(239)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->remove(252)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->insert(78)) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->insert(431)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 27 << " " << ((a->insert(5))==false) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->insert(84)) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->insert(301)) << std::endl;
std::cout << "Line no:" << 30 << " " << ((a->remove(115))==false) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->remove(431)) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->insert(105)) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->insert(221)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
std::cout << "Line no:" << 36 << " " << (b->remove(221)) << std::endl;
std::cout << "Line no:" << 37 << " " << ((a->remove(291))==false) << std::endl;
std::cout << "Line no:" << 38 << " " << (b->remove(78)) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->insert(126)) << std::endl;
std::cout << "Line no:" << 40 << " " << (b->remove(239)) << std::endl;
std::cout << "Line no:" << 41 << " " << (a->insert(434)) << std::endl;
std::cout << "Line no:" << 42 << " " << (b->remove(301)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 44 << " " << (a->insert(306)) << std::endl;
std::cout << "Line no:" << 45 << " " << (b->remove(105)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 47 << " " << (b->remove(269)) << std::endl;
std::cout << "Line no:" << 48 << " " << (b->insert(424)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 50 << " " << (a->insert(211)) << std::endl;
std::cout << "Line no:" << 51 << " " << (a->remove(250)) << std::endl;
std::cout << "Line no:" << 52 << " " << (a->insert(104)) << std::endl;
std::cout << "Line no:" << 53 << " " << ((b->insert(104))==false) << std::endl;
std::cout << "Line no:" << 54 << " " << (b->insert(479)) << std::endl;
try{std::cout <<"Line no:" << 55 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getFloor(84) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getCeiling(84) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getNext(84) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->get(84) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 62 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 63 << " " << (a->insert(303)) << std::endl;
std::cout << "Line no:" << 64 << " " << (b->remove(303)) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->insert(378)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->remove(126)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->remove(26)) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->remove(104)) << std::endl;
std::cout << "Line no:" << 69 << " " << (b->remove(5)) << std::endl;
std::cout << "Line no:" << 70 << " " << ((b->remove(363))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 72 << " " << (b->remove(84)) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->insert(365)) << std::endl;
std::cout << "Line no:" << 74 << " " << ((a->insert(306))==false) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->insert(99)) << std::endl;
std::cout << "Line no:" << 76 << " " << ((b->remove(297))==false) << std::endl;
std::cout << "Line no:" << 77 << " " << (b->insert(225)) << std::endl;
std::cout << "Line no:" << 78 << " " << (a->insert(180)) << std::endl;
std::cout << "Line no:" << 79 << " " << (b->remove(378)) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->insert(294)) << std::endl;
std::cout << "Line no:" << 81 << " " << ((b->remove(328))==false) << std::endl;
std::cout << "Line no:" << 82 << " " << ((a->insert(434))==false) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->remove(294)) << std::endl;
std::cout << "Line no:" << 84 << " " << (b->remove(424)) << std::endl;
std::cout << "Line no:" << 85 << " " << ((a->remove(419))==false) << std::endl;
std::cout << "Line no:" << 86 << " " << (b->remove(211)) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->insert(43)) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->insert(162)) << std::endl;
std::cout << "Line no:" << 89 << " " << (b->insert(81)) << std::endl;
std::cout << "Line no:" << 90 << " " << ((a->insert(180))==false) << std::endl;
std::cout << "Line no:" << 91 << " " << ((b->insert(434))==false) << std::endl;
std::cout << "Line no:" << 92 << " " << ((b->remove(178))==false) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->remove(434)) << std::endl;
std::cout << "Line no:" << 94 << " " << (b->remove(162)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 96 << " " << (b->insert(119)) << std::endl;
std::cout << "Line no:" << 97 << " " << ((b->remove(356))==false) << std::endl;
std::cout << "Line no:" << 98 << " " << ((b->insert(365))==false) << std::endl;
std::cout << "Line no:" << 99 << " " << (a->insert(226)) << std::endl;
std::cout << "Line no:" << 100 << " " << (b->insert(311)) << std::endl;
std::cout << "Line no:" << 101 << " " << (a->insert(255)) << std::endl;
std::cout << "Line no:" << 102 << " " << ((b->insert(365))==false) << std::endl;
std::cout << "Line no:" << 103 << " " << (a->insert(403)) << std::endl;
std::cout << "Line no:" << 104 << " " << (b->remove(479)) << std::endl;
std::cout << "Line no:" << 105 << " " << (a->remove(180)) << std::endl;
std::cout << "Line no:" << 106 << " " << (a->remove(225)) << std::endl;
std::cout << "Line no:" << 107 << " " << ((b->remove(28))==false) << std::endl;
std::cout << "Line no:" << 108 << " " << (a->insert(386)) << std::endl;
std::cout << "Line no:" << 109 << " " << (b->insert(399)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 111 << " " << ((a->insert(386))==false) << std::endl;
b->printPretty();
try{std::cout <<"Line no:" << 113 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getFloor(226) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getCeiling(226) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getNext(226) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->get(226) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 120 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 121 << " " << (b->insert(42)) << std::endl;
std::cout << "Line no:" << 122 << " " << (a->remove(99)) << std::endl;
std::cout << "Line no:" << 123 << " " << (b->remove(42)) << std::endl;
std::cout << "Line no:" << 124 << " " << (a->insert(255)) << std::endl;
std::cout << "Line no:" << 125 << " " << ((a->remove(168))==false) << std::endl;
std::cout << "Line no:" << 126 << " " << (a->remove(399)) << std::endl;
std::cout << "Line no:" << 127 << " " << ((a->insert(403))==false) << std::endl;
std::cout << "Line no:" << 128 << " " << (b->remove(81)) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->remove(226)) << std::endl;
std::cout << "Line no:" << 130 << " " << (a->remove(306)) << std::endl;
std::cout << "Line no:" << 131 << " " << (b->insert(144)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 133 << " " << (b->remove(43)) << std::endl;
std::cout << "Line no:" << 134 << " " << (b->insert(218)) << std::endl;
std::cout << "Line no:" << 135 << " " << (b->insert(267)) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->insert(43)) << std::endl;
std::cout << "Line no:" << 137 << " " << ((a->insert(218))==false) << std::endl;
std::cout << "Line no:" << 138 << " " << (a->insert(421)) << std::endl;
std::cout << "Line no:" << 139 << " " << ((a->insert(119))==false) << std::endl;
std::cout << "Line no:" << 140 << " " << (b->remove(386)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 142 << " " << (b->insert(200)) << std::endl;
std::cout << "Line no:" << 143 << " " << ((b->remove(175))==false) << std::endl;
*a=*b;
std::cout << "Line no:" << 145 << " " << (b->insert(401)) << std::endl;
std::cout << "Line no:" << 146 << " " << (b->remove(144)) << std::endl;
std::cout << "Line no:" << 147 << " " << ((b->remove(82))==false) << std::endl;
std::cout << "Line no:" << 148 << " " << (a->remove(403)) << std::endl;
std::cout << "Line no:" << 149 << " " << (b->insert(106)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 151 << " " << (b->remove(267)) << std::endl;
std::cout << "Line no:" << 152 << " " << ((b->remove(64))==false) << std::endl;
std::cout << "Line no:" << 153 << " " << (a->insert(15)) << std::endl;
std::cout << "Line no:" << 154 << " " << (b->remove(421)) << std::endl;
std::cout << "Line no:" << 155 << " " << ((a->remove(236))==false) << std::endl;
std::cout << "Line no:" << 156 << " " << (b->remove(106)) << std::endl;
std::cout << "Line no:" << 157 << " " << ((b->insert(119))==false) << std::endl;
std::cout << "Line no:" << 158 << " " << ((a->insert(218))==false) << std::endl;
std::cout << "Line no:" << 159 << " " << (a->remove(43)) << std::endl;
std::cout << "Line no:" << 160 << " " << (b->remove(401)) << std::endl;
std::cout << "Line no:" << 161 << " " << ((b->insert(311))==false) << std::endl;
std::cout << "Line no:" << 162 << " " << (a->remove(15)) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 165 << " " << ((b->insert(119))==false) << std::endl;
std::cout << "Line no:" << 166 << " " << ((b->insert(255))==false) << std::endl;
std::cout << "Line no:" << 167 << " " << (a->insert(354)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 169 << " " << (b->insert(284)) << std::endl;
std::cout << "Line no:" << 170 << " " << (b->insert(254)) << std::endl;
try{std::cout <<"Line no:" << 171 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getFloor(200) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getCeiling(200) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getNext(200) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->get(200) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 179 << " " << (b->remove(255)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 181 << " " << (a->insert(288)) << std::endl;
std::cout << "Line no:" << 182 << " " << (b->insert(393)) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->remove(144)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 185 << " " << ((a->insert(354))==false) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->remove(311)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 188 << " " << (b->insert(420)) << std::endl;
std::cout << "Line no:" << 189 << " " << ((b->insert(365))==false) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->insert(42)) << std::endl;
std::cout << "Line no:" << 191 << " " << (b->insert(268)) << std::endl;
std::cout << "Line no:" << 192 << " " << (b->insert(442)) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->remove(119)) << std::endl;
std::cout << "Line no:" << 194 << " " << (b->remove(420)) << std::endl;
std::cout << "Line no:" << 195 << " " << (b->insert(204)) << std::endl;
std::cout << "Line no:" << 196 << " " << (a->insert(213)) << std::endl;
std::cout << "Line no:" << 197 << " " << (a->insert(484)) << std::endl;
std::cout << "Line no:" << 198 << " " << (b->insert(90)) << std::endl;
std::cout << "Line no:" << 199 << " " << (a->insert(383)) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->remove(255)) << std::endl;
std::cout << "Line no:" << 201 << " " << ((b->insert(268))==false) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->insert(167)) << std::endl;
std::cout << "Line no:" << 203 << " " << ((b->insert(268))==false) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->remove(393)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 206 << " " << (a->remove(288)) << std::endl;
std::cout << "Line no:" << 207 << " " << (a->remove(484)) << std::endl;
std::cout << "Line no:" << 208 << " " << ((b->insert(119))==false) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->remove(204)) << std::endl;
std::cout << "Line no:" << 210 << " " << (a->insert(31)) << std::endl;
std::cout << "Line no:" << 211 << " " << (a->remove(31)) << std::endl;
std::cout << "Line no:" << 212 << " " << (a->insert(268)) << std::endl;
std::cout << "Line no:" << 213 << " " << (a->remove(267)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 215 << " " << (a->remove(255)) << std::endl;
std::cout << "Line no:" << 216 << " " << (b->insert(92)) << std::endl;
std::cout << "Line no:" << 217 << " " << (b->insert(263)) << std::endl;
std::cout << "Line no:" << 218 << " " << (a->remove(213)) << std::endl;
std::cout << "Line no:" << 219 << " " << (b->remove(255)) << std::endl;
std::cout << "Line no:" << 220 << " " << (b->insert(4)) << std::endl;
std::cout << "Line no:" << 221 << " " << (b->remove(167)) << std::endl;
std::cout << "Line no:" << 222 << " " << (a->insert(386)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 224 << " " << (a->remove(386)) << std::endl;
std::cout << "Line no:" << 225 << " " << ((a->insert(218))==false) << std::endl;
std::cout << "Line no:" << 226 << " " << (a->insert(218)) << std::endl;
std::cout << "Line no:" << 227 << " " << ((a->insert(268))==false) << std::endl;
std::cout << "Line no:" << 228 << " " << ((a->insert(200))==false) << std::endl;
try{std::cout <<"Line no:" << 229 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getFloor(383) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getCeiling(383) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getNext(383) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->get(383) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 237 << " " << (b->remove(200)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
