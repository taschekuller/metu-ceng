#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(488)) << std::endl;
std::cout << "Line no:" << 6 << " " << ((a->remove(357))==false) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(180)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->insert(3)) << std::endl;
std::cout << "Line no:" << 9 << " " << ((a->remove(420))==false) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(419)) << std::endl;
std::cout << "Line no:" << 11 << " " << ((a->insert(3))==false) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(112)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->insert(72)) << std::endl;
std::cout << "Line no:" << 14 << " " << ((a->remove(309))==false) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(388)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(418)) << std::endl;
std::cout << "Line no:" << 17 << " " << ((a->insert(3))==false) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->insert(395)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(338)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->remove(72)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->insert(24)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->remove(395)) << std::endl;
std::cout << "Line no:" << 23 << " " << ((a->insert(112))==false) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->insert(170)) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->remove(419)) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->insert(140)) << std::endl;
std::cout << "Line no:" << 27 << " " << ((a->insert(170))==false) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->insert(14)) << std::endl;
std::cout << "Line no:" << 29 << " " << ((a->insert(180))==false) << std::endl;
std::cout << "Line no:" << 30 << " " << ((a->remove(166))==false) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->insert(385)) << std::endl;
std::cout << "Line no:" << 32 << " " << ((a->remove(466))==false) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*b;
std::cout << "Line no:" << 35 << " " << (a->insert(20)) << std::endl;
std::cout << "Line no:" << 36 << " " << (b->remove(20)) << std::endl;
std::cout << "Line no:" << 37 << " " << (b->insert(214)) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->insert(92)) << std::endl;
std::cout << "Line no:" << 39 << " " << ((a->remove(45))==false) << std::endl;
*a=*a;
std::cout << "Line no:" << 41 << " " << (b->insert(256)) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->remove(92)) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->insert(260)) << std::endl;
std::cout << "Line no:" << 44 << " " << (b->insert(343)) << std::endl;
std::cout << "Line no:" << 45 << " " << ((b->remove(9))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 47 << " " << (b->remove(214)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 49 << " " << ((a->insert(214))==false) << std::endl;
std::cout << "Line no:" << 50 << " " << (b->remove(92)) << std::endl;
std::cout << "Line no:" << 51 << " " << (b->insert(168)) << std::endl;
std::cout << "Line no:" << 52 << " " << (a->insert(485)) << std::endl;
std::cout << "Line no:" << 53 << " " << ((a->remove(117))==false) << std::endl;
try{std::cout <<"Line no:" << 54 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getFloor(260) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getCeiling(260) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getNext(260) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->get(260) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 62 << " " << (a->insert(273)) << std::endl;
std::cout << "Line no:" << 63 << " " << (a->remove(214)) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->insert(83)) << std::endl;
std::cout << "Line no:" << 65 << " " << (b->insert(127)) << std::endl;
std::cout << "Line no:" << 66 << " " << (b->remove(343)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->insert(322)) << std::endl;
std::cout << "Line no:" << 68 << " " << (b->insert(83)) << std::endl;
std::cout << "Line no:" << 69 << " " << ((b->insert(168))==false) << std::endl;
std::cout << "Line no:" << 70 << " " << (a->insert(158)) << std::endl;
std::cout << "Line no:" << 71 << " " << (a->insert(357)) << std::endl;
std::cout << "Line no:" << 72 << " " << ((a->remove(230))==false) << std::endl;
std::cout << "Line no:" << 73 << " " << (b->insert(346)) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->insert(86)) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->insert(324)) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->insert(191)) << std::endl;
std::cout << "Line no:" << 77 << " " << (b->insert(258)) << std::endl;
std::cout << "Line no:" << 78 << " " << ((a->remove(157))==false) << std::endl;
std::cout << "Line no:" << 79 << " " << (a->insert(307)) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->remove(191)) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->remove(260)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 83 << " " << (a->insert(465)) << std::endl;
std::cout << "Line no:" << 84 << " " << ((a->insert(465))==false) << std::endl;
std::cout << "Line no:" << 85 << " " << ((a->insert(322))==false) << std::endl;
std::cout << "Line no:" << 86 << " " << (a->remove(273)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 88 << " " << ((a->remove(260))==false) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->remove(357)) << std::endl;
std::cout << "Line no:" << 90 << " " << (b->insert(39)) << std::endl;
std::cout << "Line no:" << 91 << " " << ((a->remove(28))==false) << std::endl;
std::cout << "Line no:" << 92 << " " << (b->remove(258)) << std::endl;
std::cout << "Line no:" << 93 << " " << (b->insert(406)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 95 << " " << ((b->insert(39))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 97 << " " << (a->insert(390)) << std::endl;
std::cout << "Line no:" << 98 << " " << ((b->remove(238))==false) << std::endl;
std::cout << "Line no:" << 99 << " " << (b->insert(324)) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->insert(127)) << std::endl;
std::cout << "Line no:" << 101 << " " << (b->remove(406)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 103 << " " << (b->insert(290)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 105 << " " << (a->insert(408)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 107 << " " << ((a->insert(485))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 109 << " " << (a->insert(170)) << std::endl;
std::cout << "Line no:" << 110 << " " << (b->insert(347)) << std::endl;
std::cout << "Line no:" << 111 << " " << (a->insert(482)) << std::endl;
try{std::cout <<"Line no:" << 112 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getFloor(482) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getCeiling(482) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getNext(482) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->get(482) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 120 << " " << (b->insert(440)) << std::endl;
std::cout << "Line no:" << 121 << " " << (b->remove(347)) << std::endl;
std::cout << "Line no:" << 122 << " " << ((a->insert(307))==false) << std::endl;
std::cout << "Line no:" << 123 << " " << (b->insert(44)) << std::endl;
std::cout << "Line no:" << 124 << " " << (a->insert(362)) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->insert(373)) << std::endl;
std::cout << "Line no:" << 126 << " " << (b->remove(39)) << std::endl;
std::cout << "Line no:" << 127 << " " << ((a->insert(408))==false) << std::endl;
std::cout << "Line no:" << 128 << " " << ((a->remove(351))==false) << std::endl;
std::cout << "Line no:" << 129 << " " << (b->remove(127)) << std::endl;
std::cout << "Line no:" << 130 << " " << (a->remove(390)) << std::endl;
std::cout << "Line no:" << 131 << " " << (b->insert(231)) << std::endl;
std::cout << "Line no:" << 132 << " " << (b->insert(259)) << std::endl;
std::cout << "Line no:" << 133 << " " << (b->insert(332)) << std::endl;
std::cout << "Line no:" << 134 << " " << (b->remove(168)) << std::endl;
std::cout << "Line no:" << 135 << " " << (b->insert(124)) << std::endl;
std::cout << "Line no:" << 136 << " " << ((b->remove(465))==false) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->remove(465)) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->insert(277)) << std::endl;
std::cout << "Line no:" << 139 << " " << (b->insert(375)) << std::endl;
std::cout << "Line no:" << 140 << " " << ((b->remove(419))==false) << std::endl;
std::cout << "Line no:" << 141 << " " << (b->insert(416)) << std::endl;
std::cout << "Line no:" << 142 << " " << (a->remove(86)) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->remove(440)) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->insert(346)) << std::endl;
std::cout << "Line no:" << 145 << " " << (a->remove(127)) << std::endl;
std::cout << "Line no:" << 146 << " " << (a->remove(307)) << std::endl;
std::cout << "Line no:" << 147 << " " << (b->insert(56)) << std::endl;
std::cout << "Line no:" << 148 << " " << ((b->insert(231))==false) << std::endl;
std::cout << "Line no:" << 149 << " " << (b->insert(160)) << std::endl;
std::cout << "Line no:" << 150 << " " << (b->remove(259)) << std::endl;
std::cout << "Line no:" << 151 << " " << (a->insert(302)) << std::endl;
std::cout << "Line no:" << 152 << " " << (a->remove(302)) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->insert(351)) << std::endl;
std::cout << "Line no:" << 154 << " " << (a->insert(2)) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->insert(22)) << std::endl;
std::cout << "Line no:" << 156 << " " << (a->remove(373)) << std::endl;
std::cout << "Line no:" << 157 << " " << (a->insert(431)) << std::endl;
std::cout << "Line no:" << 158 << " " << (a->remove(83)) << std::endl;
std::cout << "Line no:" << 159 << " " << ((a->remove(37))==false) << std::endl;
std::cout << "Line no:" << 160 << " " << (a->insert(183)) << std::endl;
std::cout << "Line no:" << 161 << " " << ((a->remove(395))==false) << std::endl;
std::cout << "Line no:" << 162 << " " << ((b->remove(17))==false) << std::endl;
std::cout << "Line no:" << 163 << " " << ((a->remove(233))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 165 << " " << (a->insert(200)) << std::endl;
std::cout << "Line no:" << 166 << " " << ((a->remove(126))==false) << std::endl;
std::cout << "Line no:" << 167 << " " << (b->remove(124)) << std::endl;
std::cout << "Line no:" << 168 << " " << (a->insert(434)) << std::endl;
std::cout << "Line no:" << 169 << " " << (a->insert(217)) << std::endl;
try{std::cout <<"Line no:" << 170 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getFloor(485) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getCeiling(485) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getNext(485) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->get(485) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 178 << " " << (a->remove(217)) << std::endl;
std::cout << "Line no:" << 179 << " " << ((b->insert(332))==false) << std::endl;
std::cout << "Line no:" << 180 << " " << ((a->remove(16))==false) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->remove(322)) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->insert(69)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 184 << " " << (b->insert(471)) << std::endl;
std::cout << "Line no:" << 185 << " " << ((a->remove(118))==false) << std::endl;
a->printPretty();
*b=*b;
std::cout << "Line no:" << 188 << " " << (b->insert(478)) << std::endl;
std::cout << "Line no:" << 189 << " " << (b->insert(378)) << std::endl;
std::cout << "Line no:" << 190 << " " << ((a->remove(486))==false) << std::endl;
std::cout << "Line no:" << 191 << " " << (b->insert(395)) << std::endl;
std::cout << "Line no:" << 192 << " " << (a->insert(274)) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->insert(25)) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->insert(485)) << std::endl;
std::cout << "Line no:" << 195 << " " << (a->insert(174)) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->insert(347)) << std::endl;
std::cout << "Line no:" << 197 << " " << (a->insert(423)) << std::endl;
std::cout << "Line no:" << 198 << " " << (a->insert(309)) << std::endl;
std::cout << "Line no:" << 199 << " " << (b->insert(268)) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->insert(416)) << std::endl;
std::cout << "Line no:" << 201 << " " << (a->insert(338)) << std::endl;
std::cout << "Line no:" << 202 << " " << ((b->remove(38))==false) << std::endl;
std::cout << "Line no:" << 203 << " " << (b->insert(83)) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->remove(83)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 206 << " " << ((a->remove(291))==false) << std::endl;
std::cout << "Line no:" << 207 << " " << (a->remove(338)) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->insert(276)) << std::endl;
std::cout << "Line no:" << 209 << " " << ((a->remove(70))==false) << std::endl;
std::cout << "Line no:" << 210 << " " << (a->insert(154)) << std::endl;
std::cout << "Line no:" << 211 << " " << ((b->remove(156))==false) << std::endl;
std::cout << "Line no:" << 212 << " " << ((b->insert(268))==false) << std::endl;
std::cout << "Line no:" << 213 << " " << (b->insert(195)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 216 << " " << (a->insert(56)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 218 << " " << (a->insert(347)) << std::endl;
std::cout << "Line no:" << 219 << " " << ((b->remove(449))==false) << std::endl;
std::cout << "Line no:" << 220 << " " << ((a->remove(60))==false) << std::endl;
std::cout << "Line no:" << 221 << " " << (b->insert(394)) << std::endl;
std::cout << "Line no:" << 222 << " " << (a->insert(479)) << std::endl;
std::cout << "Line no:" << 223 << " " << (a->insert(220)) << std::endl;
std::cout << "Line no:" << 224 << " " << (a->remove(170)) << std::endl;
std::cout << "Line no:" << 225 << " " << (a->insert(267)) << std::endl;
std::cout << "Line no:" << 226 << " " << (b->remove(160)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 228 << " " << ((a->insert(485))==false) << std::endl;
try{std::cout <<"Line no:" << 229 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getFloor(267) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getCeiling(267) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getNext(267) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->get(267) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 237 << " " << (a->remove(485)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
