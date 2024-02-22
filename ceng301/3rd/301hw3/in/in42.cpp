#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(204)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(146)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(364)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->insert(388)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->remove(204)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*a;
std::cout << "Line no:" << 12 << " " << (a->insert(345)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->insert(342)) << std::endl;
std::cout << "Line no:" << 14 << " " << (b->remove(345)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->remove(364)) << std::endl;
std::cout << "Line no:" << 16 << " " << (b->remove(342)) << std::endl;
std::cout << "Line no:" << 17 << " " << ((a->insert(146))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 19 << " " << (a->insert(116)) << std::endl;
std::cout << "Line no:" << 20 << " " << ((b->insert(116))==false) << std::endl;
std::cout << "Line no:" << 21 << " " << (b->insert(268)) << std::endl;
std::cout << "Line no:" << 22 << " " << ((b->insert(146))==false) << std::endl;
std::cout << "Line no:" << 23 << " " << (b->insert(341)) << std::endl;
std::cout << "Line no:" << 24 << " " << (b->insert(90)) << std::endl;
std::cout << "Line no:" << 25 << " " << ((b->remove(67))==false) << std::endl;
std::cout << "Line no:" << 26 << " " << (b->remove(116)) << std::endl;
std::cout << "Line no:" << 27 << " " << (b->insert(319)) << std::endl;
std::cout << "Line no:" << 28 << " " << (b->insert(234)) << std::endl;
std::cout << "Line no:" << 29 << " " << (b->remove(146)) << std::endl;
std::cout << "Line no:" << 30 << " " << (b->insert(465)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->remove(234)) << std::endl;
std::cout << "Line no:" << 32 << " " << (b->remove(465)) << std::endl;
std::cout << "Line no:" << 33 << " " << (b->insert(164)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 35 << " " << ((b->insert(388))==false) << std::endl;
std::cout << "Line no:" << 36 << " " << (b->insert(352)) << std::endl;
std::cout << "Line no:" << 37 << " " << (b->insert(170)) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->remove(319)) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->insert(39)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 41 << " " << (b->remove(268)) << std::endl;
std::cout << "Line no:" << 42 << " " << (b->insert(237)) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->insert(245)) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->insert(29)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 46 << " " << (b->insert(221)) << std::endl;
std::cout << "Line no:" << 47 << " " << (b->insert(318)) << std::endl;
std::cout << "Line no:" << 48 << " " << (b->insert(139)) << std::endl;
std::cout << "Line no:" << 49 << " " << ((a->insert(164))==false) << std::endl;
*a=*a;
std::cout << "Line no:" << 51 << " " << (a->insert(279)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 53 << " " << (b->remove(352)) << std::endl;
std::cout << "Line no:" << 54 << " " << (a->insert(42)) << std::endl;
std::cout << "Line no:" << 55 << " " << (a->remove(39)) << std::endl;
try{std::cout <<"Line no:" << 56 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getFloor(352) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getCeiling(352) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getNext(352) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->get(352) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 62 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 63 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 64 << " " << ((b->insert(318))==false) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->insert(8)) << std::endl;
std::cout << "Line no:" << 66 << " " << ((a->insert(237))==false) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->insert(15)) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->insert(372)) << std::endl;
std::cout << "Line no:" << 69 << " " << (b->insert(246)) << std::endl;
std::cout << "Line no:" << 70 << " " << ((a->insert(388))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 72 << " " << (a->insert(343)) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->insert(322)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 75 << " " << (a->insert(430)) << std::endl;
std::cout << "Line no:" << 76 << " " << ((a->insert(29))==false) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->insert(435)) << std::endl;
std::cout << "Line no:" << 78 << " " << ((b->insert(90))==false) << std::endl;
std::cout << "Line no:" << 79 << " " << (a->insert(159)) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->insert(226)) << std::endl;
std::cout << "Line no:" << 81 << " " << ((b->insert(318))==false) << std::endl;
std::cout << "Line no:" << 82 << " " << ((a->insert(435))==false) << std::endl;
std::cout << "Line no:" << 83 << " " << (a->insert(459)) << std::endl;
std::cout << "Line no:" << 84 << " " << (b->remove(245)) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->insert(105)) << std::endl;
std::cout << "Line no:" << 86 << " " << ((b->remove(95))==false) << std::endl;
std::cout << "Line no:" << 87 << " " << (a->insert(330)) << std::endl;
std::cout << "Line no:" << 88 << " " << ((b->insert(90))==false) << std::endl;
std::cout << "Line no:" << 89 << " " << (b->remove(39)) << std::endl;
std::cout << "Line no:" << 90 << " " << (a->insert(322)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 92 << " " << (b->remove(170)) << std::endl;
std::cout << "Line no:" << 93 << " " << (b->insert(492)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 95 << " " << (b->remove(492)) << std::endl;
std::cout << "Line no:" << 96 << " " << (a->insert(247)) << std::endl;
std::cout << "Line no:" << 97 << " " << ((b->insert(237))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 99 << " " << (a->insert(256)) << std::endl;
std::cout << "Line no:" << 100 << " " << (b->insert(394)) << std::endl;
std::cout << "Line no:" << 101 << " " << ((a->insert(164))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 103 << " " << (a->remove(343)) << std::endl;
std::cout << "Line no:" << 104 << " " << (b->insert(465)) << std::endl;
std::cout << "Line no:" << 105 << " " << (a->insert(191)) << std::endl;
std::cout << "Line no:" << 106 << " " << (a->remove(247)) << std::endl;
std::cout << "Line no:" << 107 << " " << (a->remove(159)) << std::endl;
*a=*b;
std::cout << "Line no:" << 109 << " " << (a->insert(41)) << std::endl;
std::cout << "Line no:" << 110 << " " << (a->remove(237)) << std::endl;
std::cout << "Line no:" << 111 << " " << (a->remove(41)) << std::endl;
std::cout << "Line no:" << 112 << " " << (b->insert(468)) << std::endl;
std::cout << "Line no:" << 113 << " " << (a->insert(122)) << std::endl;
try{std::cout <<"Line no:" << 114 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getFloor(246) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getCeiling(246) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getNext(246) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->get(246) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 120 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 121 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 122 << " " << (b->remove(388)) << std::endl;
std::cout << "Line no:" << 123 << " " << (b->insert(207)) << std::endl;
std::cout << "Line no:" << 124 << " " << (a->insert(122)) << std::endl;
std::cout << "Line no:" << 125 << " " << ((b->insert(139))==false) << std::endl;
std::cout << "Line no:" << 126 << " " << ((a->insert(139))==false) << std::endl;
std::cout << "Line no:" << 127 << " " << (a->insert(26)) << std::endl;
std::cout << "Line no:" << 128 << " " << (a->insert(275)) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->remove(318)) << std::endl;
std::cout << "Line no:" << 130 << " " << ((a->insert(221))==false) << std::endl;
std::cout << "Line no:" << 131 << " " << (b->remove(468)) << std::endl;
std::cout << "Line no:" << 132 << " " << (b->insert(326)) << std::endl;
std::cout << "Line no:" << 133 << " " << (b->insert(263)) << std::endl;
std::cout << "Line no:" << 134 << " " << (a->insert(443)) << std::endl;
std::cout << "Line no:" << 135 << " " << ((a->insert(443))==false) << std::endl;
std::cout << "Line no:" << 136 << " " << ((a->insert(26))==false) << std::endl;
std::cout << "Line no:" << 137 << " " << (b->remove(207)) << std::endl;
std::cout << "Line no:" << 138 << " " << (a->remove(341)) << std::endl;
std::cout << "Line no:" << 139 << " " << (b->insert(32)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 141 << " " << ((b->insert(139))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 143 << " " << (a->insert(49)) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->insert(174)) << std::endl;
std::cout << "Line no:" << 145 << " " << ((a->insert(388))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 147 << " " << (b->insert(136)) << std::endl;
std::cout << "Line no:" << 148 << " " << ((b->insert(29))==false) << std::endl;
std::cout << "Line no:" << 149 << " " << (b->remove(326)) << std::endl;
std::cout << "Line no:" << 150 << " " << (a->insert(257)) << std::endl;
std::cout << "Line no:" << 151 << " " << (b->insert(352)) << std::endl;
std::cout << "Line no:" << 152 << " " << ((a->insert(90))==false) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->insert(413)) << std::endl;
std::cout << "Line no:" << 154 << " " << (a->insert(129)) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->insert(495)) << std::endl;
std::cout << "Line no:" << 156 << " " << (a->insert(207)) << std::endl;
std::cout << "Line no:" << 157 << " " << (b->insert(247)) << std::endl;
std::cout << "Line no:" << 158 << " " << (a->insert(130)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 160 << " " << (b->insert(311)) << std::endl;
std::cout << "Line no:" << 161 << " " << ((b->insert(174))==false) << std::endl;
std::cout << "Line no:" << 162 << " " << (b->remove(352)) << std::endl;
std::cout << "Line no:" << 163 << " " << (a->remove(49)) << std::endl;
*b=*a;
std::cout << "Line no:" << 165 << " " << (a->insert(190)) << std::endl;
std::cout << "Line no:" << 166 << " " << ((a->insert(29))==false) << std::endl;
std::cout << "Line no:" << 167 << " " << ((b->insert(207))==false) << std::endl;
std::cout << "Line no:" << 168 << " " << (b->insert(253)) << std::endl;
std::cout << "Line no:" << 169 << " " << (b->insert(146)) << std::endl;
std::cout << "Line no:" << 170 << " " << (b->remove(207)) << std::endl;
std::cout << "Line no:" << 171 << " " << ((b->insert(388))==false) << std::endl;
try{std::cout <<"Line no:" << 172 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getFloor(394) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getCeiling(394) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getNext(394) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->get(394) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 179 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 180 << " " << (a->insert(232)) << std::endl;
std::cout << "Line no:" << 181 << " " << (b->insert(426)) << std::endl;
std::cout << "Line no:" << 182 << " " << ((a->remove(458))==false) << std::endl;
std::cout << "Line no:" << 183 << " " << (b->insert(396)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 185 << " " << ((b->insert(90))==false) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->insert(46)) << std::endl;
std::cout << "Line no:" << 187 << " " << ((a->remove(120))==false) << std::endl;
std::cout << "Line no:" << 188 << " " << (b->remove(394)) << std::endl;
std::cout << "Line no:" << 189 << " " << ((b->insert(90))==false) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->insert(161)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 192 << " " << (b->remove(396)) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->insert(324)) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->insert(54)) << std::endl;
std::cout << "Line no:" << 195 << " " << ((a->remove(318))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 197 << " " << (b->remove(161)) << std::endl;
std::cout << "Line no:" << 198 << " " << ((a->remove(293))==false) << std::endl;
std::cout << "Line no:" << 199 << " " << (a->insert(337)) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->insert(325)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 202 << " " << (a->insert(131)) << std::endl;
std::cout << "Line no:" << 203 << " " << (a->insert(392)) << std::endl;
std::cout << "Line no:" << 204 << " " << (a->insert(225)) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->insert(226)) << std::endl;
std::cout << "Line no:" << 206 << " " << (b->insert(314)) << std::endl;
std::cout << "Line no:" << 207 << " " << (b->insert(347)) << std::endl;
std::cout << "Line no:" << 208 << " " << (b->insert(453)) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->insert(371)) << std::endl;
std::cout << "Line no:" << 210 << " " << (a->insert(352)) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 213 << " " << (a->remove(190)) << std::endl;
std::cout << "Line no:" << 214 << " " << (a->insert(152)) << std::endl;
std::cout << "Line no:" << 215 << " " << (a->insert(310)) << std::endl;
*b=*a;
std::cout << "Line no:" << 217 << " " << (b->insert(149)) << std::endl;
std::cout << "Line no:" << 218 << " " << (a->insert(449)) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->insert(283)) << std::endl;
std::cout << "Line no:" << 220 << " " << ((b->insert(226))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 222 << " " << (a->insert(209)) << std::endl;
std::cout << "Line no:" << 223 << " " << (a->remove(232)) << std::endl;
std::cout << "Line no:" << 224 << " " << (a->remove(449)) << std::endl;
std::cout << "Line no:" << 225 << " " << (b->remove(394)) << std::endl;
std::cout << "Line no:" << 226 << " " << (b->insert(328)) << std::endl;
*a=*a;
std::cout << "Line no:" << 228 << " " << ((a->insert(139))==false) << std::endl;
std::cout << "Line no:" << 229 << " " << (b->insert(151)) << std::endl;
try{std::cout <<"Line no:" << 230 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getFloor(46) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getCeiling(46) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getNext(46) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->get(46) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 237 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 238 << " " << ((a->remove(269))==false) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
