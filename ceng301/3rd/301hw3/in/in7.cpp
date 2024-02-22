#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(500)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->remove(500)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(169)) << std::endl;
std::cout << "Line no:" << 8 << " " << ((a->remove(106))==false) << std::endl;
std::cout << "Line no:" << 9 << " " << ((a->insert(169))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 11 << " " << (a->insert(492)) << std::endl;
std::cout << "Line no:" << 12 << " " << ((a->insert(169))==false) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*b;
b->printPretty();
std::cout << "Line no:" << 16 << " " << (b->insert(210)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->remove(210)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 19 << " " << (b->insert(378)) << std::endl;
std::cout << "Line no:" << 20 << " " << ((b->insert(378))==false) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->insert(313)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->insert(122)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->remove(122)) << std::endl;
std::cout << "Line no:" << 24 << " " << ((a->insert(378))==false) << std::endl;
std::cout << "Line no:" << 25 << " " << ((a->insert(313))==false) << std::endl;
std::cout << "Line no:" << 26 << " " << ((a->remove(234))==false) << std::endl;
std::cout << "Line no:" << 27 << " " << ((b->remove(465))==false) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->insert(432)) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->insert(206)) << std::endl;
std::cout << "Line no:" << 30 << " " << ((b->insert(432))==false) << std::endl;
std::cout << "Line no:" << 31 << " " << ((a->insert(378))==false) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->insert(210)) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->remove(313)) << std::endl;
std::cout << "Line no:" << 34 << " " << ((a->insert(378))==false) << std::endl;
std::cout << "Line no:" << 35 << " " << (b->insert(124)) << std::endl;
std::cout << "Line no:" << 36 << " " << (b->insert(130)) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->insert(349)) << std::endl;
std::cout << "Line no:" << 38 << " " << (b->insert(168)) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->remove(210)) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->insert(102)) << std::endl;
std::cout << "Line no:" << 41 << " " << (b->remove(432)) << std::endl;
std::cout << "Line no:" << 42 << " " << (b->insert(313)) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->insert(206)) << std::endl;
std::cout << "Line no:" << 44 << " " << ((a->remove(423))==false) << std::endl;
std::cout << "Line no:" << 45 << " " << (b->insert(469)) << std::endl;
std::cout << "Line no:" << 46 << " " << (a->insert(13)) << std::endl;
std::cout << "Line no:" << 47 << " " << ((a->remove(423))==false) << std::endl;
std::cout << "Line no:" << 48 << " " << (b->insert(219)) << std::endl;
std::cout << "Line no:" << 49 << " " << (a->remove(124)) << std::endl;
std::cout << "Line no:" << 50 << " " << (b->remove(102)) << std::endl;
std::cout << "Line no:" << 51 << " " << (b->remove(469)) << std::endl;
std::cout << "Line no:" << 52 << " " << (a->remove(313)) << std::endl;
try{std::cout <<"Line no:" << 53 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getFloor(130) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getCeiling(130) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getNext(130) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->get(130) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 61 << " " << ((b->insert(206))==false) << std::endl;
std::cout << "Line no:" << 62 << " " << (a->remove(168)) << std::endl;
std::cout << "Line no:" << 63 << " " << (b->insert(94)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 65 << " " << ((a->remove(87))==false) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->insert(209)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->insert(32)) << std::endl;
std::cout << "Line no:" << 68 << " " << (b->remove(378)) << std::endl;
std::cout << "Line no:" << 69 << " " << ((a->insert(32))==false) << std::endl;
std::cout << "Line no:" << 70 << " " << (b->insert(355)) << std::endl;
std::cout << "Line no:" << 71 << " " << (a->insert(304)) << std::endl;
std::cout << "Line no:" << 72 << " " << (b->insert(372)) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->insert(40)) << std::endl;
std::cout << "Line no:" << 74 << " " << (b->insert(187)) << std::endl;
std::cout << "Line no:" << 75 << " " << (b->insert(75)) << std::endl;
std::cout << "Line no:" << 76 << " " << (b->remove(219)) << std::endl;
std::cout << "Line no:" << 77 << " " << ((b->insert(13))==false) << std::endl;
std::cout << "Line no:" << 78 << " " << (b->insert(93)) << std::endl;
std::cout << "Line no:" << 79 << " " << (b->remove(206)) << std::endl;
std::cout << "Line no:" << 80 << " " << (b->insert(247)) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->insert(272)) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->insert(474)) << std::endl;
std::cout << "Line no:" << 83 << " " << (a->insert(348)) << std::endl;
std::cout << "Line no:" << 84 << " " << (a->insert(104)) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->insert(285)) << std::endl;
std::cout << "Line no:" << 86 << " " << ((a->insert(75))==false) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->remove(104)) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->insert(168)) << std::endl;
std::cout << "Line no:" << 89 << " " << (b->insert(409)) << std::endl;
std::cout << "Line no:" << 90 << " " << (a->insert(313)) << std::endl;
std::cout << "Line no:" << 91 << " " << (a->insert(143)) << std::endl;
std::cout << "Line no:" << 92 << " " << (b->remove(32)) << std::endl;
std::cout << "Line no:" << 93 << " " << ((a->insert(372))==false) << std::endl;
std::cout << "Line no:" << 94 << " " << (b->remove(272)) << std::endl;
std::cout << "Line no:" << 95 << " " << ((a->insert(348))==false) << std::endl;
std::cout << "Line no:" << 96 << " " << (a->remove(143)) << std::endl;
std::cout << "Line no:" << 97 << " " << (b->insert(145)) << std::endl;
std::cout << "Line no:" << 98 << " " << (a->remove(304)) << std::endl;
std::cout << "Line no:" << 99 << " " << (a->remove(168)) << std::endl;
std::cout << "Line no:" << 100 << " " << (b->insert(313)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 102 << " " << (b->insert(109)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 104 << " " << (b->insert(436)) << std::endl;
std::cout << "Line no:" << 105 << " " << (b->insert(349)) << std::endl;
std::cout << "Line no:" << 106 << " " << (b->insert(436)) << std::endl;
std::cout << "Line no:" << 107 << " " << (a->remove(313)) << std::endl;
std::cout << "Line no:" << 108 << " " << (b->remove(436)) << std::endl;
std::cout << "Line no:" << 109 << " " << (b->remove(348)) << std::endl;
std::cout << "Line no:" << 110 << " " << (b->remove(436)) << std::endl;
try{std::cout <<"Line no:" << 111 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getFloor(474) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getCeiling(474) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getNext(474) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->get(474) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 119 << " " << ((b->remove(105))==false) << std::endl;
std::cout << "Line no:" << 120 << " " << ((a->insert(409))==false) << std::endl;
std::cout << "Line no:" << 121 << " " << ((b->insert(145))==false) << std::endl;
std::cout << "Line no:" << 122 << " " << (a->insert(381)) << std::endl;
std::cout << "Line no:" << 123 << " " << (b->insert(419)) << std::endl;
std::cout << "Line no:" << 124 << " " << (b->insert(317)) << std::endl;
std::cout << "Line no:" << 125 << " " << (b->remove(247)) << std::endl;
std::cout << "Line no:" << 126 << " " << (a->insert(199)) << std::endl;
std::cout << "Line no:" << 127 << " " << (a->remove(474)) << std::endl;
std::cout << "Line no:" << 128 << " " << ((a->insert(94))==false) << std::endl;
std::cout << "Line no:" << 129 << " " << ((a->insert(13))==false) << std::endl;
std::cout << "Line no:" << 130 << " " << ((b->insert(419))==false) << std::endl;
std::cout << "Line no:" << 131 << " " << (a->remove(109)) << std::endl;
std::cout << "Line no:" << 132 << " " << ((a->remove(73))==false) << std::endl;
std::cout << "Line no:" << 133 << " " << (a->insert(265)) << std::endl;
std::cout << "Line no:" << 134 << " " << (a->insert(4)) << std::endl;
std::cout << "Line no:" << 135 << " " << (b->remove(93)) << std::endl;
std::cout << "Line no:" << 136 << " " << (b->remove(94)) << std::endl;
std::cout << "Line no:" << 137 << " " << (b->insert(308)) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->insert(99)) << std::endl;
std::cout << "Line no:" << 139 << " " << (b->remove(99)) << std::endl;
std::cout << "Line no:" << 140 << " " << (a->remove(419)) << std::endl;
std::cout << "Line no:" << 141 << " " << (a->remove(308)) << std::endl;
std::cout << "Line no:" << 142 << " " << (a->insert(416)) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->insert(10)) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->insert(462)) << std::endl;
std::cout << "Line no:" << 145 << " " << (b->remove(10)) << std::endl;
std::cout << "Line no:" << 146 << " " << ((b->insert(416))==false) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->insert(57)) << std::endl;
std::cout << "Line no:" << 148 << " " << (b->remove(75)) << std::endl;
std::cout << "Line no:" << 149 << " " << (b->insert(414)) << std::endl;
std::cout << "Line no:" << 150 << " " << ((a->insert(209))==false) << std::endl;
std::cout << "Line no:" << 151 << " " << (b->insert(17)) << std::endl;
std::cout << "Line no:" << 152 << " " << ((a->remove(167))==false) << std::endl;
std::cout << "Line no:" << 153 << " " << (a->remove(355)) << std::endl;
std::cout << "Line no:" << 154 << " " << ((b->insert(13))==false) << std::endl;
std::cout << "Line no:" << 155 << " " << (a->insert(10)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 157 << " " << (b->remove(414)) << std::endl;
std::cout << "Line no:" << 158 << " " << ((b->insert(209))==false) << std::endl;
std::cout << "Line no:" << 159 << " " << (a->remove(17)) << std::endl;
std::cout << "Line no:" << 160 << " " << (a->insert(299)) << std::endl;
*a=*b;
std::cout << "Line no:" << 162 << " " << (a->insert(486)) << std::endl;
std::cout << "Line no:" << 163 << " " << ((b->remove(476))==false) << std::endl;
std::cout << "Line no:" << 164 << " " << ((b->insert(285))==false) << std::endl;
std::cout << "Line no:" << 165 << " " << (a->remove(206)) << std::endl;
std::cout << "Line no:" << 166 << " " << (a->insert(457)) << std::endl;
std::cout << "Line no:" << 167 << " " << (b->insert(358)) << std::endl;
b->printPretty();
try{std::cout <<"Line no:" << 169 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getFloor(486) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getCeiling(486) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getNext(486) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->get(486) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 177 << " " << (b->insert(12)) << std::endl;
std::cout << "Line no:" << 178 << " " << (b->remove(299)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 180 << " " << (a->insert(414)) << std::endl;
*b=*a;
a->printPretty();
std::cout << "Line no:" << 183 << " " << (b->insert(92)) << std::endl;
std::cout << "Line no:" << 184 << " " << (b->remove(265)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 186 << " " << (a->insert(85)) << std::endl;
std::cout << "Line no:" << 187 << " " << (b->insert(297)) << std::endl;
std::cout << "Line no:" << 188 << " " << (b->insert(298)) << std::endl;
std::cout << "Line no:" << 189 << " " << (a->insert(400)) << std::endl;
b->printPretty();
*b=*a;
std::cout << "Line no:" << 192 << " " << (a->remove(130)) << std::endl;
std::cout << "Line no:" << 193 << " " << (b->remove(400)) << std::endl;
std::cout << "Line no:" << 194 << " " << (b->remove(299)) << std::endl;
std::cout << "Line no:" << 195 << " " << (a->insert(319)) << std::endl;
*a=*b;
std::cout << "Line no:" << 197 << " " << ((b->insert(462))==false) << std::endl;
*a=*a;
std::cout << "Line no:" << 199 << " " << (a->remove(130)) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->insert(254)) << std::endl;
std::cout << "Line no:" << 201 << " " << ((b->insert(199))==false) << std::endl;
std::cout << "Line no:" << 202 << " " << (a->remove(199)) << std::endl;
std::cout << "Line no:" << 203 << " " << ((a->remove(64))==false) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->remove(57)) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->insert(52)) << std::endl;
std::cout << "Line no:" << 206 << " " << (b->insert(441)) << std::endl;
std::cout << "Line no:" << 207 << " " << (b->insert(467)) << std::endl;
std::cout << "Line no:" << 208 << " " << (b->remove(40)) << std::endl;
std::cout << "Line no:" << 209 << " " << (a->remove(13)) << std::endl;
*a=*b;
std::cout << "Line no:" << 211 << " " << (b->insert(174)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 213 << " " << (b->insert(431)) << std::endl;
std::cout << "Line no:" << 214 << " " << (a->insert(405)) << std::endl;
std::cout << "Line no:" << 215 << " " << (a->insert(101)) << std::endl;
std::cout << "Line no:" << 216 << " " << ((b->insert(349))==false) << std::endl;
std::cout << "Line no:" << 217 << " " << (a->insert(95)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 219 << " " << (a->remove(381)) << std::endl;
std::cout << "Line no:" << 220 << " " << (b->insert(474)) << std::endl;
std::cout << "Line no:" << 221 << " " << ((b->insert(409))==false) << std::endl;
std::cout << "Line no:" << 222 << " " << (b->insert(392)) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 225 << " " << (a->insert(259)) << std::endl;
a->printPretty();
b->printPretty();
try{std::cout <<"Line no:" << 228 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getFloor(441) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getCeiling(441) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getNext(441) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->get(441) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 236 << " " << ((a->insert(416))==false) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
