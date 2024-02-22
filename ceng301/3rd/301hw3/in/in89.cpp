#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(168)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(417)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 9 << " " << ((a->insert(168))==false) << std::endl;
std::cout << "Line no:" << 10 << " " << ((a->remove(309))==false) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(427)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(231)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->insert(475)) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(166)) << std::endl;
std::cout << "Line no:" << 15 << " " << ((a->insert(475))==false) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(302)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(193)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 19 << " " << ((a->insert(302))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 21 << " " << ((a->insert(193))==false) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->insert(334)) << std::endl;
std::cout << "Line no:" << 23 << " " << ((a->insert(302))==false) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->insert(318)) << std::endl;
std::cout << "Line no:" << 25 << " " << ((a->insert(475))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 27 << " " << (a->insert(363)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 29 << " " << (a->insert(92)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 32 << " " << (a->insert(272)) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->insert(165)) << std::endl;
std::cout << "Line no:" << 34 << " " << (a->remove(475)) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->insert(389)) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->insert(130)) << std::endl;
std::cout << "Line no:" << 37 << " " << ((a->insert(417))==false) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->insert(203)) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->insert(167)) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->insert(42)) << std::endl;
std::cout << "Line no:" << 41 << " " << ((a->remove(471))==false) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->insert(97)) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->insert(479)) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->insert(163)) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->remove(272)) << std::endl;
std::cout << "Line no:" << 46 << " " << (a->insert(273)) << std::endl;
std::cout << "Line no:" << 47 << " " << (a->insert(94)) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->insert(456)) << std::endl;
std::cout << "Line no:" << 49 << " " << (a->insert(379)) << std::endl;
std::cout << "Line no:" << 50 << " " << (a->insert(441)) << std::endl;
std::cout << "Line no:" << 51 << " " << (a->insert(175)) << std::endl;
std::cout << "Line no:" << 52 << " " << (a->remove(334)) << std::endl;
std::cout << "Line no:" << 53 << " " << (a->insert(256)) << std::endl;
try{std::cout <<"Line no:" << 54 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getFloor(130) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getCeiling(130) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getNext(130) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->get(130) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 62 << " " << (a->insert(286)) << std::endl;
std::cout << "Line no:" << 63 << " " << (a->insert(173)) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->insert(76)) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->insert(11)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->insert(368)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->insert(413)) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->insert(414)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*b;
std::cout << "Line no:" << 71 << " " << ((a->insert(165))==false) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->insert(204)) << std::endl;
std::cout << "Line no:" << 73 << " " << (b->insert(158)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 75 << " " << (a->remove(168)) << std::endl;
std::cout << "Line no:" << 76 << " " << (b->insert(314)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 78 << " " << (b->insert(51)) << std::endl;
std::cout << "Line no:" << 79 << " " << (b->remove(158)) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->insert(452)) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->insert(486)) << std::endl;
std::cout << "Line no:" << 82 << " " << (b->insert(196)) << std::endl;
std::cout << "Line no:" << 83 << " " << ((b->remove(485))==false) << std::endl;
std::cout << "Line no:" << 84 << " " << (b->insert(226)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 86 << " " << (a->insert(147)) << std::endl;
std::cout << "Line no:" << 87 << " " << (a->remove(273)) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->remove(51)) << std::endl;
std::cout << "Line no:" << 89 << " " << (b->insert(60)) << std::endl;
std::cout << "Line no:" << 90 << " " << (b->remove(196)) << std::endl;
std::cout << "Line no:" << 91 << " " << (a->remove(413)) << std::endl;
std::cout << "Line no:" << 92 << " " << (b->insert(207)) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->insert(141)) << std::endl;
std::cout << "Line no:" << 94 << " " << (b->remove(226)) << std::endl;
std::cout << "Line no:" << 95 << " " << (a->insert(89)) << std::endl;
std::cout << "Line no:" << 96 << " " << (a->remove(141)) << std::endl;
std::cout << "Line no:" << 97 << " " << ((b->insert(207))==false) << std::endl;
std::cout << "Line no:" << 98 << " " << ((a->remove(428))==false) << std::endl;
std::cout << "Line no:" << 99 << " " << (a->remove(167)) << std::endl;
std::cout << "Line no:" << 100 << " " << ((a->insert(302))==false) << std::endl;
std::cout << "Line no:" << 101 << " " << (b->remove(60)) << std::endl;
std::cout << "Line no:" << 102 << " " << (a->insert(280)) << std::endl;
std::cout << "Line no:" << 103 << " " << ((a->insert(389))==false) << std::endl;
std::cout << "Line no:" << 104 << " " << (a->insert(247)) << std::endl;
std::cout << "Line no:" << 105 << " " << (b->remove(314)) << std::endl;
std::cout << "Line no:" << 106 << " " << (b->insert(115)) << std::endl;
std::cout << "Line no:" << 107 << " " << ((a->insert(302))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 109 << " " << (b->insert(425)) << std::endl;
std::cout << "Line no:" << 110 << " " << (a->remove(175)) << std::endl;
std::cout << "Line no:" << 111 << " " << (a->remove(76)) << std::endl;
std::cout << "Line no:" << 112 << " " << (b->remove(115)) << std::endl;
try{std::cout <<"Line no:" << 113 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getFloor(417) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getCeiling(417) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getNext(417) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->get(417) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 120 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 121 << " " << (a->remove(452)) << std::endl;
std::cout << "Line no:" << 122 << " " << ((a->insert(193))==false) << std::endl;
std::cout << "Line no:" << 123 << " " << ((b->insert(425))==false) << std::endl;
std::cout << "Line no:" << 124 << " " << ((a->insert(166))==false) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->insert(238)) << std::endl;
std::cout << "Line no:" << 126 << " " << (b->remove(425)) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->insert(414)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 129 << " " << (b->insert(349)) << std::endl;
std::cout << "Line no:" << 130 << " " << (b->insert(223)) << std::endl;
std::cout << "Line no:" << 131 << " " << (a->remove(193)) << std::endl;
std::cout << "Line no:" << 132 << " " << (a->insert(178)) << std::endl;
std::cout << "Line no:" << 133 << " " << ((b->insert(414))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 135 << " " << (a->insert(207)) << std::endl;
std::cout << "Line no:" << 136 << " " << ((a->remove(13))==false) << std::endl;
std::cout << "Line no:" << 137 << " " << (b->insert(483)) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->insert(438)) << std::endl;
std::cout << "Line no:" << 139 << " " << (b->insert(111)) << std::endl;
std::cout << "Line no:" << 140 << " " << ((a->remove(272))==false) << std::endl;
std::cout << "Line no:" << 141 << " " << ((a->insert(92))==false) << std::endl;
std::cout << "Line no:" << 142 << " " << (b->remove(111)) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->remove(441)) << std::endl;
std::cout << "Line no:" << 144 << " " << ((b->insert(483))==false) << std::endl;
std::cout << "Line no:" << 145 << " " << ((b->insert(223))==false) << std::endl;
std::cout << "Line no:" << 146 << " " << (a->remove(247)) << std::endl;
std::cout << "Line no:" << 147 << " " << ((b->insert(483))==false) << std::endl;
std::cout << "Line no:" << 148 << " " << (a->insert(95)) << std::endl;
*b=*a;
std::cout << "Line no:" << 150 << " " << ((b->insert(427))==false) << std::endl;
std::cout << "Line no:" << 151 << " " << (a->remove(203)) << std::endl;
std::cout << "Line no:" << 152 << " " << (b->remove(486)) << std::endl;
std::cout << "Line no:" << 153 << " " << (a->remove(42)) << std::endl;
std::cout << "Line no:" << 154 << " " << (a->insert(425)) << std::endl;
std::cout << "Line no:" << 155 << " " << (a->insert(444)) << std::endl;
std::cout << "Line no:" << 156 << " " << (b->insert(282)) << std::endl;
std::cout << "Line no:" << 157 << " " << (a->remove(94)) << std::endl;
std::cout << "Line no:" << 158 << " " << ((a->insert(165))==false) << std::endl;
std::cout << "Line no:" << 159 << " " << (b->remove(97)) << std::endl;
std::cout << "Line no:" << 160 << " " << (a->remove(166)) << std::endl;
std::cout << "Line no:" << 161 << " " << (b->insert(391)) << std::endl;
std::cout << "Line no:" << 162 << " " << (a->insert(57)) << std::endl;
std::cout << "Line no:" << 163 << " " << (a->insert(351)) << std::endl;
std::cout << "Line no:" << 164 << " " << (a->insert(22)) << std::endl;
std::cout << "Line no:" << 165 << " " << (a->remove(456)) << std::endl;
std::cout << "Line no:" << 166 << " " << (b->insert(242)) << std::endl;
std::cout << "Line no:" << 167 << " " << (b->insert(162)) << std::endl;
std::cout << "Line no:" << 168 << " " << ((b->remove(78))==false) << std::endl;
std::cout << "Line no:" << 169 << " " << ((a->remove(123))==false) << std::endl;
std::cout << "Line no:" << 170 << " " << (a->insert(24)) << std::endl;
try{std::cout <<"Line no:" << 171 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getFloor(280) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getCeiling(280) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getNext(280) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->get(280) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 179 << " " << (a->remove(173)) << std::endl;
std::cout << "Line no:" << 180 << " " << (b->insert(306)) << std::endl;
std::cout << "Line no:" << 181 << " " << (b->remove(147)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 183 << " " << (b->remove(479)) << std::endl;
std::cout << "Line no:" << 184 << " " << ((a->insert(11))==false) << std::endl;
std::cout << "Line no:" << 185 << " " << (b->remove(417)) << std::endl;
std::cout << "Line no:" << 186 << " " << (b->insert(379)) << std::endl;
std::cout << "Line no:" << 187 << " " << ((b->insert(95))==false) << std::endl;
*a=*b;
std::cout << "Line no:" << 189 << " " << ((a->insert(166))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 191 << " " << (a->insert(315)) << std::endl;
*b=*b;
std::cout << "Line no:" << 193 << " " << (a->insert(120)) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->remove(391)) << std::endl;
std::cout << "Line no:" << 195 << " " << ((b->insert(391))==false) << std::endl;
std::cout << "Line no:" << 196 << " " << (a->insert(153)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 198 << " " << ((a->insert(231))==false) << std::endl;
std::cout << "Line no:" << 199 << " " << (a->insert(40)) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->remove(379)) << std::endl;
std::cout << "Line no:" << 201 << " " << (b->insert(126)) << std::endl;
std::cout << "Line no:" << 202 << " " << ((a->remove(9))==false) << std::endl;
std::cout << "Line no:" << 203 << " " << (b->insert(374)) << std::endl;
std::cout << "Line no:" << 204 << " " << (a->insert(116)) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->insert(434)) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->remove(42)) << std::endl;
std::cout << "Line no:" << 207 << " " << (a->remove(379)) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->insert(131)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 210 << " " << (a->insert(200)) << std::endl;
std::cout << "Line no:" << 211 << " " << ((a->remove(211))==false) << std::endl;
std::cout << "Line no:" << 212 << " " << (a->remove(11)) << std::endl;
std::cout << "Line no:" << 213 << " " << (b->insert(348)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 215 << " " << (a->insert(270)) << std::endl;
std::cout << "Line no:" << 216 << " " << (a->insert(448)) << std::endl;
std::cout << "Line no:" << 217 << " " << ((a->insert(363))==false) << std::endl;
std::cout << "Line no:" << 218 << " " << (a->insert(18)) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->remove(448)) << std::endl;
std::cout << "Line no:" << 220 << " " << (a->insert(237)) << std::endl;
std::cout << "Line no:" << 221 << " " << ((a->remove(121))==false) << std::endl;
std::cout << "Line no:" << 222 << " " << (a->remove(94)) << std::endl;
std::cout << "Line no:" << 223 << " " << (b->insert(172)) << std::endl;
std::cout << "Line no:" << 224 << " " << ((b->insert(318))==false) << std::endl;
std::cout << "Line no:" << 225 << " " << ((a->remove(371))==false) << std::endl;
*b=*b;
std::cout << "Line no:" << 227 << " " << (b->remove(286)) << std::endl;
std::cout << "Line no:" << 228 << " " << ((a->remove(343))==false) << std::endl;
std::cout << "Line no:" << 229 << " " << (a->insert(71)) << std::endl;
try{std::cout <<"Line no:" << 230 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getFloor(162) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getCeiling(162) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getNext(162) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->get(162) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 237 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 238 << " " << (a->remove(286)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
