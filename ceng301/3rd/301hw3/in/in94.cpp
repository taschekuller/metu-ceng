#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(329)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->remove(329)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(271)) << std::endl;
std::cout << "Line no:" << 8 << " " << ((a->remove(104))==false) << std::endl;
std::cout << "Line no:" << 9 << " " << ((a->insert(271))==false) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(305)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(402)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->remove(305)) << std::endl;
std::cout << "Line no:" << 13 << " " << ((a->remove(67))==false) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(381)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->remove(381)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
std::cout << "Line no:" << 18 << " " << ((a->remove(499))==false) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(152)) << std::endl;
std::cout << "Line no:" << 20 << " " << (b->insert(360)) << std::endl;
std::cout << "Line no:" << 21 << " " << ((a->insert(402))==false) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->remove(402)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->remove(152)) << std::endl;
std::cout << "Line no:" << 24 << " " << (b->insert(165)) << std::endl;
b->printPretty();
*b=*b;
std::cout << "Line no:" << 27 << " " << (a->remove(360)) << std::endl;
std::cout << "Line no:" << 28 << " " << ((b->insert(271))==false) << std::endl;
std::cout << "Line no:" << 29 << " " << ((b->insert(165))==false) << std::endl;
std::cout << "Line no:" << 30 << " " << ((b->remove(189))==false) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->insert(444)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 33 << " " << (b->insert(452)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 35 << " " << (b->insert(373)) << std::endl;
std::cout << "Line no:" << 36 << " " << ((a->remove(343))==false) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->insert(182)) << std::endl;
std::cout << "Line no:" << 38 << " " << ((b->insert(165))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 40 << " " << (b->insert(313)) << std::endl;
std::cout << "Line no:" << 41 << " " << (b->remove(165)) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->remove(444)) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->insert(159)) << std::endl;
std::cout << "Line no:" << 44 << " " << ((b->remove(92))==false) << std::endl;
std::cout << "Line no:" << 45 << " " << ((a->insert(159))==false) << std::endl;
*a=*a;
std::cout << "Line no:" << 47 << " " << ((b->remove(36))==false) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->insert(384)) << std::endl;
std::cout << "Line no:" << 49 << " " << ((b->remove(66))==false) << std::endl;
*b=*a;
a->printPretty();
std::cout << "Line no:" << 52 << " " << (a->insert(400)) << std::endl;
std::cout << "Line no:" << 53 << " " << (b->insert(130)) << std::endl;
std::cout << "Line no:" << 54 << " " << ((b->insert(159))==false) << std::endl;
std::cout << "Line no:" << 55 << " " << (b->remove(165)) << std::endl;
try{std::cout <<"Line no:" << 56 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getFloor(165) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getCeiling(165) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getNext(165) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->get(165) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 62 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 63 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 64 << " " << (b->remove(130)) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->remove(400)) << std::endl;
std::cout << "Line no:" << 66 << " " << ((a->insert(165))==false) << std::endl;
std::cout << "Line no:" << 67 << " " << ((b->remove(57))==false) << std::endl;
std::cout << "Line no:" << 68 << " " << (b->insert(173)) << std::endl;
std::cout << "Line no:" << 69 << " " << ((b->insert(182))==false) << std::endl;
std::cout << "Line no:" << 70 << " " << ((a->remove(201))==false) << std::endl;
std::cout << "Line no:" << 71 << " " << ((a->insert(165))==false) << std::endl;
std::cout << "Line no:" << 72 << " " << (b->remove(159)) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->insert(249)) << std::endl;
std::cout << "Line no:" << 74 << " " << (b->insert(298)) << std::endl;
std::cout << "Line no:" << 75 << " " << ((b->insert(298))==false) << std::endl;
std::cout << "Line no:" << 76 << " " << ((a->insert(159))==false) << std::endl;
std::cout << "Line no:" << 77 << " " << (b->remove(298)) << std::endl;
std::cout << "Line no:" << 78 << " " << ((a->insert(384))==false) << std::endl;
std::cout << "Line no:" << 79 << " " << (b->insert(447)) << std::endl;
std::cout << "Line no:" << 80 << " " << (b->remove(173)) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->insert(141)) << std::endl;
std::cout << "Line no:" << 82 << " " << ((a->remove(292))==false) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->insert(143)) << std::endl;
std::cout << "Line no:" << 84 << " " << (a->insert(120)) << std::endl;
std::cout << "Line no:" << 85 << " " << (b->insert(392)) << std::endl;
std::cout << "Line no:" << 86 << " " << (b->insert(270)) << std::endl;
std::cout << "Line no:" << 87 << " " << (a->remove(249)) << std::endl;
std::cout << "Line no:" << 88 << " " << (a->remove(165)) << std::endl;
std::cout << "Line no:" << 89 << " " << (b->remove(270)) << std::endl;
std::cout << "Line no:" << 90 << " " << (a->insert(351)) << std::endl;
std::cout << "Line no:" << 91 << " " << (b->insert(7)) << std::endl;
std::cout << "Line no:" << 92 << " " << ((a->remove(64))==false) << std::endl;
std::cout << "Line no:" << 93 << " " << ((a->remove(359))==false) << std::endl;
std::cout << "Line no:" << 94 << " " << (b->remove(271)) << std::endl;
std::cout << "Line no:" << 95 << " " << (b->remove(447)) << std::endl;
std::cout << "Line no:" << 96 << " " << (a->insert(61)) << std::endl;
std::cout << "Line no:" << 97 << " " << ((a->remove(460))==false) << std::endl;
std::cout << "Line no:" << 98 << " " << (b->insert(277)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 100 << " " << (b->remove(392)) << std::endl;
std::cout << "Line no:" << 101 << " " << (b->insert(376)) << std::endl;
std::cout << "Line no:" << 102 << " " << (b->insert(5)) << std::endl;
std::cout << "Line no:" << 103 << " " << ((a->insert(159))==false) << std::endl;
std::cout << "Line no:" << 104 << " " << (b->remove(277)) << std::endl;
std::cout << "Line no:" << 105 << " " << ((a->insert(120))==false) << std::endl;
std::cout << "Line no:" << 106 << " " << (a->insert(479)) << std::endl;
std::cout << "Line no:" << 107 << " " << (a->remove(479)) << std::endl;
std::cout << "Line no:" << 108 << " " << (a->insert(94)) << std::endl;
std::cout << "Line no:" << 109 << " " << (a->insert(39)) << std::endl;
std::cout << "Line no:" << 110 << " " << (a->insert(45)) << std::endl;
std::cout << "Line no:" << 111 << " " << ((b->insert(143))==false) << std::endl;
std::cout << "Line no:" << 112 << " " << ((b->remove(89))==false) << std::endl;
std::cout << "Line no:" << 113 << " " << (b->remove(182)) << std::endl;
try{std::cout <<"Line no:" << 114 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getFloor(141) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getCeiling(141) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getNext(141) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->get(141) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 120 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 121 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 122 << " " << (b->insert(493)) << std::endl;
std::cout << "Line no:" << 123 << " " << (a->remove(141)) << std::endl;
std::cout << "Line no:" << 124 << " " << ((b->remove(15))==false) << std::endl;
std::cout << "Line no:" << 125 << " " << ((b->insert(384))==false) << std::endl;
std::cout << "Line no:" << 126 << " " << ((a->remove(329))==false) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->insert(231)) << std::endl;
std::cout << "Line no:" << 128 << " " << ((a->insert(61))==false) << std::endl;
std::cout << "Line no:" << 129 << " " << ((a->remove(135))==false) << std::endl;
std::cout << "Line no:" << 130 << " " << (a->remove(61)) << std::endl;
std::cout << "Line no:" << 131 << " " << (a->remove(94)) << std::endl;
std::cout << "Line no:" << 132 << " " << (b->remove(493)) << std::endl;
std::cout << "Line no:" << 133 << " " << (b->insert(345)) << std::endl;
std::cout << "Line no:" << 134 << " " << ((b->remove(83))==false) << std::endl;
std::cout << "Line no:" << 135 << " " << (a->insert(137)) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->insert(48)) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->remove(137)) << std::endl;
std::cout << "Line no:" << 138 << " " << ((a->remove(254))==false) << std::endl;
std::cout << "Line no:" << 139 << " " << (a->insert(59)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 141 << " " << (b->insert(50)) << std::endl;
std::cout << "Line no:" << 142 << " " << (a->insert(422)) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->insert(398)) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->insert(8)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 146 << " " << (b->insert(183)) << std::endl;
std::cout << "Line no:" << 147 << " " << ((a->remove(186))==false) << std::endl;
std::cout << "Line no:" << 148 << " " << ((b->remove(182))==false) << std::endl;
std::cout << "Line no:" << 149 << " " << (a->insert(437)) << std::endl;
std::cout << "Line no:" << 150 << " " << (b->remove(398)) << std::endl;
std::cout << "Line no:" << 151 << " " << (b->insert(459)) << std::endl;
std::cout << "Line no:" << 152 << " " << (b->remove(5)) << std::endl;
std::cout << "Line no:" << 153 << " " << (a->insert(206)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 155 << " " << ((a->remove(327))==false) << std::endl;
std::cout << "Line no:" << 156 << " " << (a->remove(39)) << std::endl;
std::cout << "Line no:" << 157 << " " << (a->insert(248)) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->remove(345)) << std::endl;
std::cout << "Line no:" << 159 << " " << ((b->remove(280))==false) << std::endl;
std::cout << "Line no:" << 160 << " " << (a->insert(95)) << std::endl;
std::cout << "Line no:" << 161 << " " << (a->remove(206)) << std::endl;
std::cout << "Line no:" << 162 << " " << (b->insert(175)) << std::endl;
std::cout << "Line no:" << 163 << " " << (b->remove(183)) << std::endl;
std::cout << "Line no:" << 164 << " " << (a->insert(26)) << std::endl;
std::cout << "Line no:" << 165 << " " << (a->insert(488)) << std::endl;
std::cout << "Line no:" << 166 << " " << (b->remove(7)) << std::endl;
std::cout << "Line no:" << 167 << " " << (b->remove(384)) << std::endl;
std::cout << "Line no:" << 168 << " " << ((a->insert(48))==false) << std::endl;
std::cout << "Line no:" << 169 << " " << (b->insert(80)) << std::endl;
std::cout << "Line no:" << 170 << " " << (a->insert(322)) << std::endl;
std::cout << "Line no:" << 171 << " " << ((a->insert(45))==false) << std::endl;
try{std::cout <<"Line no:" << 172 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getFloor(384) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getCeiling(384) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getNext(384) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->get(384) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 179 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 180 << " " << ((b->remove(363))==false) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 183 << " " << ((b->remove(454))==false) << std::endl;
std::cout << "Line no:" << 184 << " " << ((a->insert(351))==false) << std::endl;
std::cout << "Line no:" << 185 << " " << (b->insert(472)) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->remove(322)) << std::endl;
std::cout << "Line no:" << 187 << " " << (a->remove(95)) << std::endl;
std::cout << "Line no:" << 188 << " " << (b->insert(430)) << std::endl;
std::cout << "Line no:" << 189 << " " << ((a->remove(487))==false) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->remove(175)) << std::endl;
std::cout << "Line no:" << 191 << " " << ((b->insert(80))==false) << std::endl;
std::cout << "Line no:" << 192 << " " << (a->insert(147)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 194 << " " << (b->insert(328)) << std::endl;
std::cout << "Line no:" << 195 << " " << (b->insert(232)) << std::endl;
*b=*a;
std::cout << "Line no:" << 197 << " " << (b->remove(182)) << std::endl;
std::cout << "Line no:" << 198 << " " << (a->insert(230)) << std::endl;
std::cout << "Line no:" << 199 << " " << (b->insert(300)) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->remove(120)) << std::endl;
std::cout << "Line no:" << 201 << " " << (b->remove(384)) << std::endl;
std::cout << "Line no:" << 202 << " " << (a->insert(305)) << std::endl;
std::cout << "Line no:" << 203 << " " << (a->remove(59)) << std::endl;
std::cout << "Line no:" << 204 << " " << ((a->remove(357))==false) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 207 << " " << (b->insert(393)) << std::endl;
std::cout << "Line no:" << 208 << " " << (b->insert(353)) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->remove(488)) << std::endl;
std::cout << "Line no:" << 210 << " " << (b->remove(48)) << std::endl;
std::cout << "Line no:" << 211 << " " << (b->insert(274)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 214 << " " << (b->insert(440)) << std::endl;
*a=*a;
std::cout << "Line no:" << 216 << " " << ((b->remove(114))==false) << std::endl;
std::cout << "Line no:" << 217 << " " << (b->insert(159)) << std::endl;
std::cout << "Line no:" << 218 << " " << (a->insert(403)) << std::endl;
std::cout << "Line no:" << 219 << " " << (b->insert(213)) << std::endl;
a->printPretty();
b->printPretty();
*b=*b;
std::cout << "Line no:" << 223 << " " << (b->insert(500)) << std::endl;
std::cout << "Line no:" << 224 << " " << (a->remove(159)) << std::endl;
std::cout << "Line no:" << 225 << " " << ((b->insert(353))==false) << std::endl;
std::cout << "Line no:" << 226 << " " << (a->remove(230)) << std::endl;
std::cout << "Line no:" << 227 << " " << ((a->remove(287))==false) << std::endl;
std::cout << "Line no:" << 228 << " " << (a->insert(169)) << std::endl;
std::cout << "Line no:" << 229 << " " << (b->insert(124)) << std::endl;
try{std::cout <<"Line no:" << 230 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getFloor(437) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getCeiling(437) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getNext(437) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->get(437) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 237 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 238 << " " << (a->insert(45)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
