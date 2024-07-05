#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(278)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*a;
std::cout << "Line no:" << 8 << " " << (a->remove(278)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(152)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 11 << " " << (b->remove(152)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(58)) << std::endl;
std::cout << "Line no:" << 13 << " " << ((b->insert(58))==false) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(213)) << std::endl;
std::cout << "Line no:" << 15 << " " << (b->insert(342)) << std::endl;
std::cout << "Line no:" << 16 << " " << (b->insert(393)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(201)) << std::endl;
std::cout << "Line no:" << 18 << " " << (b->remove(342)) << std::endl;
std::cout << "Line no:" << 19 << " " << ((a->insert(201))==false) << std::endl;
std::cout << "Line no:" << 20 << " " << ((b->remove(499))==false) << std::endl;
std::cout << "Line no:" << 21 << " " << (b->insert(361)) << std::endl;
std::cout << "Line no:" << 22 << " " << ((a->remove(95))==false) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->remove(393)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->insert(463)) << std::endl;
std::cout << "Line no:" << 25 << " " << ((b->insert(361))==false) << std::endl;
std::cout << "Line no:" << 26 << " " << (b->insert(476)) << std::endl;
std::cout << "Line no:" << 27 << " " << (b->remove(58)) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->remove(463)) << std::endl;
std::cout << "Line no:" << 29 << " " << (b->insert(11)) << std::endl;
*b=*b;
std::cout << "Line no:" << 31 << " " << (b->insert(292)) << std::endl;
std::cout << "Line no:" << 32 << " " << ((b->insert(292))==false) << std::endl;
std::cout << "Line no:" << 33 << " " << (b->insert(215)) << std::endl;
std::cout << "Line no:" << 34 << " " << ((a->insert(11))==false) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->insert(482)) << std::endl;
std::cout << "Line no:" << 36 << " " << (b->insert(344)) << std::endl;
std::cout << "Line no:" << 37 << " " << (b->remove(292)) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->remove(213)) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->insert(38)) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->insert(109)) << std::endl;
std::cout << "Line no:" << 41 << " " << (b->insert(477)) << std::endl;
std::cout << "Line no:" << 42 << " " << ((a->remove(77))==false) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->insert(38)) << std::endl;
std::cout << "Line no:" << 44 << " " << (b->insert(385)) << std::endl;
std::cout << "Line no:" << 45 << " " << (b->insert(472)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 47 << " " << ((a->insert(476))==false) << std::endl;
*a=*a;
std::cout << "Line no:" << 49 << " " << (a->remove(38)) << std::endl;
std::cout << "Line no:" << 50 << " " << (b->insert(142)) << std::endl;
std::cout << "Line no:" << 51 << " " << (a->remove(361)) << std::endl;
std::cout << "Line no:" << 52 << " " << (a->insert(490)) << std::endl;
std::cout << "Line no:" << 53 << " " << ((a->insert(38))==false) << std::endl;
try{std::cout <<"Line no:" << 54 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getFloor(476) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getCeiling(476) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getNext(476) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->get(476) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 62 << " " << (b->remove(477)) << std::endl;
std::cout << "Line no:" << 63 << " " << ((b->insert(11))==false) << std::endl;
std::cout << "Line no:" << 64 << " " << (b->insert(166)) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->insert(355)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->insert(451)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->insert(277)) << std::endl;
std::cout << "Line no:" << 68 << " " << ((b->insert(215))==false) << std::endl;
std::cout << "Line no:" << 69 << " " << (b->remove(11)) << std::endl;
std::cout << "Line no:" << 70 << " " << (b->insert(444)) << std::endl;
std::cout << "Line no:" << 71 << " " << (a->insert(146)) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->insert(207)) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->insert(179)) << std::endl;
std::cout << "Line no:" << 74 << " " << (b->remove(344)) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->remove(482)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 77 << " " << (b->insert(31)) << std::endl;
std::cout << "Line no:" << 78 << " " << (a->insert(472)) << std::endl;
std::cout << "Line no:" << 79 << " " << ((a->insert(38))==false) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->remove(38)) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->insert(345)) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->insert(244)) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->insert(327)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 86 << " " << (b->remove(142)) << std::endl;
std::cout << "Line no:" << 87 << " " << (a->remove(476)) << std::endl;
std::cout << "Line no:" << 88 << " " << (a->insert(244)) << std::endl;
std::cout << "Line no:" << 89 << " " << (b->insert(359)) << std::endl;
std::cout << "Line no:" << 90 << " " << (a->insert(30)) << std::endl;
std::cout << "Line no:" << 91 << " " << (a->insert(314)) << std::endl;
std::cout << "Line no:" << 92 << " " << ((a->insert(146))==false) << std::endl;
std::cout << "Line no:" << 93 << " " << (b->insert(280)) << std::endl;
std::cout << "Line no:" << 94 << " " << (b->insert(426)) << std::endl;
std::cout << "Line no:" << 95 << " " << (a->remove(244)) << std::endl;
*a=*a;
std::cout << "Line no:" << 97 << " " << (a->remove(314)) << std::endl;
std::cout << "Line no:" << 98 << " " << ((a->insert(345))==false) << std::endl;
std::cout << "Line no:" << 99 << " " << (b->insert(22)) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->remove(244)) << std::endl;
std::cout << "Line no:" << 101 << " " << (b->insert(392)) << std::endl;
std::cout << "Line no:" << 102 << " " << (b->insert(30)) << std::endl;
std::cout << "Line no:" << 103 << " " << (a->remove(472)) << std::endl;
std::cout << "Line no:" << 104 << " " << (a->insert(481)) << std::endl;
std::cout << "Line no:" << 105 << " " << (b->insert(232)) << std::endl;
std::cout << "Line no:" << 106 << " " << ((a->insert(109))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 108 << " " << (a->insert(221)) << std::endl;
std::cout << "Line no:" << 109 << " " << (a->remove(490)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 111 << " " << (b->insert(450)) << std::endl;
try{std::cout <<"Line no:" << 112 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getFloor(179) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getCeiling(179) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getNext(179) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->get(179) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 120 << " " << (a->remove(179)) << std::endl;
std::cout << "Line no:" << 121 << " " << (b->remove(213)) << std::endl;
std::cout << "Line no:" << 122 << " " << (b->insert(473)) << std::endl;
std::cout << "Line no:" << 123 << " " << (b->remove(392)) << std::endl;
std::cout << "Line no:" << 124 << " " << (b->remove(22)) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->insert(436)) << std::endl;
std::cout << "Line no:" << 126 << " " << ((b->remove(422))==false) << std::endl;
std::cout << "Line no:" << 127 << " " << (a->insert(25)) << std::endl;
std::cout << "Line no:" << 128 << " " << ((a->remove(305))==false) << std::endl;
std::cout << "Line no:" << 129 << " " << ((a->remove(484))==false) << std::endl;
std::cout << "Line no:" << 130 << " " << ((b->remove(73))==false) << std::endl;
std::cout << "Line no:" << 131 << " " << ((b->remove(456))==false) << std::endl;
std::cout << "Line no:" << 132 << " " << ((b->insert(327))==false) << std::endl;
std::cout << "Line no:" << 133 << " " << (a->insert(196)) << std::endl;
std::cout << "Line no:" << 134 << " " << (b->insert(7)) << std::endl;
std::cout << "Line no:" << 135 << " " << (a->remove(207)) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->insert(157)) << std::endl;
std::cout << "Line no:" << 137 << " " << ((a->insert(345))==false) << std::endl;
std::cout << "Line no:" << 138 << " " << ((a->insert(201))==false) << std::endl;
std::cout << "Line no:" << 139 << " " << ((a->insert(481))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 141 << " " << ((a->remove(166))==false) << std::endl;
std::cout << "Line no:" << 142 << " " << ((b->remove(436))==false) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->insert(498)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 145 << " " << (a->insert(390)) << std::endl;
std::cout << "Line no:" << 146 << " " << ((b->insert(361))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 148 << " " << (a->remove(196)) << std::endl;
std::cout << "Line no:" << 149 << " " << (a->insert(350)) << std::endl;
std::cout << "Line no:" << 150 << " " << ((a->insert(345))==false) << std::endl;
std::cout << "Line no:" << 151 << " " << (b->remove(472)) << std::endl;
std::cout << "Line no:" << 152 << " " << (b->insert(446)) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->remove(166)) << std::endl;
std::cout << "Line no:" << 154 << " " << (b->insert(488)) << std::endl;
std::cout << "Line no:" << 155 << " " << (a->remove(277)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 157 << " " << (a->remove(350)) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->remove(359)) << std::endl;
std::cout << "Line no:" << 159 << " " << (b->remove(444)) << std::endl;
std::cout << "Line no:" << 160 << " " << (a->insert(37)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 162 << " " << (b->insert(187)) << std::endl;
std::cout << "Line no:" << 163 << " " << (b->insert(372)) << std::endl;
std::cout << "Line no:" << 164 << " " << (b->insert(449)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 166 << " " << (b->insert(263)) << std::endl;
std::cout << "Line no:" << 167 << " " << (b->insert(386)) << std::endl;
std::cout << "Line no:" << 168 << " " << ((b->insert(215))==false) << std::endl;
std::cout << "Line no:" << 169 << " " << (a->insert(160)) << std::endl;
try{std::cout <<"Line no:" << 170 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getFloor(221) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getCeiling(221) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getNext(221) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->get(221) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 178 << " " << ((b->remove(329))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 180 << " " << ((a->insert(157))==false) << std::endl;
std::cout << "Line no:" << 181 << " " << ((b->insert(449))==false) << std::endl;
std::cout << "Line no:" << 182 << " " << (b->insert(16)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 184 << " " << ((a->remove(181))==false) << std::endl;
std::cout << "Line no:" << 185 << " " << (a->remove(436)) << std::endl;
std::cout << "Line no:" << 186 << " " << (b->insert(34)) << std::endl;
std::cout << "Line no:" << 187 << " " << (a->remove(345)) << std::endl;
std::cout << "Line no:" << 188 << " " << (a->insert(476)) << std::endl;
*a=*a;
a->printPretty();
std::cout << "Line no:" << 191 << " " << (a->insert(421)) << std::endl;
std::cout << "Line no:" << 192 << " " << (a->remove(25)) << std::endl;
std::cout << "Line no:" << 193 << " " << (b->insert(432)) << std::endl;
*b=*a;
std::cout << "Line no:" << 195 << " " << (a->remove(421)) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->insert(91)) << std::endl;
std::cout << "Line no:" << 197 << " " << ((a->insert(221))==false) << std::endl;
std::cout << "Line no:" << 198 << " " << ((b->insert(476))==false) << std::endl;
std::cout << "Line no:" << 199 << " " << (b->insert(362)) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->insert(191)) << std::endl;
std::cout << "Line no:" << 201 << " " << (a->remove(146)) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->insert(354)) << std::endl;
std::cout << "Line no:" << 203 << " " << (a->insert(282)) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->remove(109)) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->insert(329)) << std::endl;
std::cout << "Line no:" << 206 << " " << (b->remove(354)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 208 << " " << ((b->insert(157))==false) << std::endl;
std::cout << "Line no:" << 209 << " " << (a->remove(451)) << std::endl;
std::cout << "Line no:" << 210 << " " << ((b->insert(201))==false) << std::endl;
std::cout << "Line no:" << 211 << " " << ((a->insert(329))==false) << std::endl;
std::cout << "Line no:" << 212 << " " << ((b->remove(186))==false) << std::endl;
std::cout << "Line no:" << 213 << " " << (a->remove(157)) << std::endl;
std::cout << "Line no:" << 214 << " " << ((a->insert(221))==false) << std::endl;
std::cout << "Line no:" << 215 << " " << ((a->remove(368))==false) << std::endl;
std::cout << "Line no:" << 216 << " " << ((b->remove(474))==false) << std::endl;
std::cout << "Line no:" << 217 << " " << (b->remove(451)) << std::endl;
std::cout << "Line no:" << 218 << " " << (a->insert(21)) << std::endl;
*a=*b;
std::cout << "Line no:" << 220 << " " << (a->insert(485)) << std::endl;
std::cout << "Line no:" << 221 << " " << (a->insert(337)) << std::endl;
std::cout << "Line no:" << 222 << " " << (b->insert(389)) << std::endl;
std::cout << "Line no:" << 223 << " " << (a->insert(486)) << std::endl;
std::cout << "Line no:" << 224 << " " << (b->remove(37)) << std::endl;
std::cout << "Line no:" << 225 << " " << (b->insert(195)) << std::endl;
std::cout << "Line no:" << 226 << " " << (a->insert(120)) << std::endl;
std::cout << "Line no:" << 227 << " " << ((b->insert(481))==false) << std::endl;
std::cout << "Line no:" << 228 << " " << (a->insert(336)) << std::endl;
try{std::cout <<"Line no:" << 229 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getFloor(355) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getCeiling(355) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getNext(355) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->get(355) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 237 << " " << (b->remove(221)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
