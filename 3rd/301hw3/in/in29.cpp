#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
a->printPretty();
std::cout << "Line no:" << 6 << " " << (a->insert(286)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(349)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->insert(49)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->insert(187)) << std::endl;
std::cout << "Line no:" << 10 << " " << ((a->remove(275))==false) << std::endl;
std::cout << "Line no:" << 11 << " " << ((a->insert(187))==false) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->remove(49)) << std::endl;
std::cout << "Line no:" << 13 << " " << ((a->remove(206))==false) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(179)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(350)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->remove(179)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(141)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->insert(115)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(484)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->remove(350)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->insert(44)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->insert(390)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->insert(15)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->insert(300)) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->insert(171)) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->insert(423)) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->remove(484)) << std::endl;
std::cout << "Line no:" << 28 << " " << ((a->remove(365))==false) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->insert(132)) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->remove(44)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->remove(423)) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->remove(132)) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->remove(15)) << std::endl;
std::cout << "Line no:" << 34 << " " << (a->remove(187)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 36 << " " << (a->insert(19)) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->insert(304)) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->insert(155)) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->insert(234)) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->insert(164)) << std::endl;
std::cout << "Line no:" << 41 << " " << ((a->insert(300))==false) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->insert(359)) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->insert(269)) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->insert(329)) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->remove(115)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 47 << " " << ((a->remove(383))==false) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->insert(247)) << std::endl;
std::cout << "Line no:" << 49 << " " << (a->insert(142)) << std::endl;
std::cout << "Line no:" << 50 << " " << (a->insert(323)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 52 << " " << ((a->remove(342))==false) << std::endl;
std::cout << "Line no:" << 53 << " " << (a->remove(171)) << std::endl;
try{std::cout <<"Line no:" << 54 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getFloor(234) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getCeiling(234) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getNext(234) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->get(234) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 62 << " " << (a->remove(300)) << std::endl;
std::cout << "Line no:" << 63 << " " << (a->insert(287)) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->insert(248)) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->remove(323)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->remove(19)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->remove(155)) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->insert(125)) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->insert(82)) << std::endl;
std::cout << "Line no:" << 70 << " " << ((a->insert(248))==false) << std::endl;
std::cout << "Line no:" << 71 << " " << (a->insert(189)) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->insert(150)) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->remove(390)) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->remove(248)) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->remove(349)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 77 << " " << (a->insert(344)) << std::endl;
std::cout << "Line no:" << 78 << " " << (a->remove(304)) << std::endl;
std::cout << "Line no:" << 79 << " " << (a->insert(347)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 81 << " " << (a->insert(467)) << std::endl;
std::cout << "Line no:" << 82 << " " << ((a->insert(142))==false) << std::endl;
std::cout << "Line no:" << 83 << " " << (a->insert(158)) << std::endl;
std::cout << "Line no:" << 84 << " " << (a->insert(12)) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->remove(164)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*a;
std::cout << "Line no:" << 88 << " " << (a->insert(421)) << std::endl;
std::cout << "Line no:" << 89 << " " << ((a->remove(180))==false) << std::endl;
std::cout << "Line no:" << 90 << " " << ((b->insert(467))==false) << std::endl;
std::cout << "Line no:" << 91 << " " << ((a->insert(247))==false) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->insert(171)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 94 << " " << (a->insert(427)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 96 << " " << (a->insert(422)) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->insert(159)) << std::endl;
std::cout << "Line no:" << 98 << " " << ((b->insert(344))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 100 << " " << ((a->insert(125))==false) << std::endl;
*a=*b;
std::cout << "Line no:" << 102 << " " << (a->insert(205)) << std::endl;
std::cout << "Line no:" << 103 << " " << ((a->insert(158))==false) << std::endl;
std::cout << "Line no:" << 104 << " " << (b->remove(427)) << std::endl;
std::cout << "Line no:" << 105 << " " << ((a->insert(159))==false) << std::endl;
std::cout << "Line no:" << 106 << " " << (b->insert(61)) << std::endl;
std::cout << "Line no:" << 107 << " " << ((b->remove(126))==false) << std::endl;
std::cout << "Line no:" << 108 << " " << (a->insert(411)) << std::endl;
std::cout << "Line no:" << 109 << " " << (b->remove(125)) << std::endl;
*a=*a;
a->printPretty();
std::cout << "Line no:" << 112 << " " << (b->remove(247)) << std::endl;
std::cout << "Line no:" << 113 << " " << (b->insert(289)) << std::endl;
try{std::cout <<"Line no:" << 114 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getFloor(422) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getCeiling(422) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getNext(422) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->get(422) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 120 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 121 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 122 << " " << (b->insert(387)) << std::endl;
std::cout << "Line no:" << 123 << " " << (b->insert(326)) << std::endl;
std::cout << "Line no:" << 124 << " " << (a->insert(122)) << std::endl;
std::cout << "Line no:" << 125 << " " << ((b->remove(383))==false) << std::endl;
std::cout << "Line no:" << 126 << " " << (a->remove(189)) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->insert(232)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 129 << " " << (a->insert(428)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 131 << " " << (b->insert(199)) << std::endl;
std::cout << "Line no:" << 132 << " " << (a->remove(234)) << std::endl;
std::cout << "Line no:" << 133 << " " << ((a->insert(411))==false) << std::endl;
std::cout << "Line no:" << 134 << " " << (b->insert(165)) << std::endl;
std::cout << "Line no:" << 135 << " " << (a->remove(269)) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->insert(15)) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->insert(457)) << std::endl;
std::cout << "Line no:" << 138 << " " << (a->insert(189)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 140 << " " << (b->insert(215)) << std::endl;
std::cout << "Line no:" << 141 << " " << (b->insert(396)) << std::endl;
std::cout << "Line no:" << 142 << " " << (a->insert(356)) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->insert(68)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 145 << " " << (b->remove(467)) << std::endl;
std::cout << "Line no:" << 146 << " " << ((a->insert(347))==false) << std::endl;
std::cout << "Line no:" << 147 << " " << (b->remove(287)) << std::endl;
std::cout << "Line no:" << 148 << " " << (b->remove(289)) << std::endl;
std::cout << "Line no:" << 149 << " " << (b->insert(339)) << std::endl;
std::cout << "Line no:" << 150 << " " << (b->remove(344)) << std::endl;
std::cout << "Line no:" << 151 << " " << ((b->insert(421))==false) << std::endl;
std::cout << "Line no:" << 152 << " " << (a->insert(364)) << std::endl;
std::cout << "Line no:" << 153 << " " << (a->remove(428)) << std::endl;
*a=*b;
std::cout << "Line no:" << 155 << " " << (a->remove(61)) << std::endl;
std::cout << "Line no:" << 156 << " " << (a->insert(379)) << std::endl;
std::cout << "Line no:" << 157 << " " << (b->insert(49)) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->insert(468)) << std::endl;
std::cout << "Line no:" << 159 << " " << ((a->remove(24))==false) << std::endl;
std::cout << "Line no:" << 160 << " " << (b->insert(151)) << std::endl;
std::cout << "Line no:" << 161 << " " << (a->insert(242)) << std::endl;
std::cout << "Line no:" << 162 << " " << ((a->remove(114))==false) << std::endl;
std::cout << "Line no:" << 163 << " " << ((a->insert(232))==false) << std::endl;
std::cout << "Line no:" << 164 << " " << (a->insert(444)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 166 << " " << ((b->remove(50))==false) << std::endl;
std::cout << "Line no:" << 167 << " " << (b->insert(53)) << std::endl;
std::cout << "Line no:" << 168 << " " << ((b->insert(326))==false) << std::endl;
std::cout << "Line no:" << 169 << " " << (a->remove(444)) << std::endl;
std::cout << "Line no:" << 170 << " " << (a->remove(396)) << std::endl;
std::cout << "Line no:" << 171 << " " << ((a->insert(387))==false) << std::endl;
try{std::cout <<"Line no:" << 172 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getFloor(422) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getCeiling(422) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getNext(422) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->get(422) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 179 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
a->printPretty();
std::cout << "Line no:" << 181 << " " << ((b->remove(274))==false) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->insert(224)) << std::endl;
std::cout << "Line no:" << 183 << " " << (b->insert(468)) << std::endl;
std::cout << "Line no:" << 184 << " " << (b->remove(82)) << std::endl;
std::cout << "Line no:" << 185 << " " << ((a->insert(359))==false) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->remove(82)) << std::endl;
std::cout << "Line no:" << 187 << " " << (a->insert(349)) << std::endl;
std::cout << "Line no:" << 188 << " " << (a->insert(454)) << std::endl;
std::cout << "Line no:" << 189 << " " << (a->remove(349)) << std::endl;
std::cout << "Line no:" << 190 << " " << (a->insert(444)) << std::endl;
std::cout << "Line no:" << 191 << " " << ((b->insert(189))==false) << std::endl;
std::cout << "Line no:" << 192 << " " << (b->insert(337)) << std::endl;
std::cout << "Line no:" << 193 << " " << (b->remove(468)) << std::endl;
std::cout << "Line no:" << 194 << " " << ((b->insert(53))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 196 << " " << (b->insert(151)) << std::endl;
std::cout << "Line no:" << 197 << " " << (a->remove(359)) << std::endl;
std::cout << "Line no:" << 198 << " " << (a->remove(171)) << std::endl;
std::cout << "Line no:" << 199 << " " << (b->insert(239)) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->insert(428)) << std::endl;
std::cout << "Line no:" << 201 << " " << (a->remove(12)) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->insert(306)) << std::endl;
std::cout << "Line no:" << 203 << " " << (a->insert(93)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 205 << " " << (b->insert(264)) << std::endl;
std::cout << "Line no:" << 206 << " " << (b->insert(63)) << std::endl;
std::cout << "Line no:" << 207 << " " << ((b->insert(269))==false) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->insert(335)) << std::endl;
std::cout << "Line no:" << 209 << " " << (a->remove(68)) << std::endl;
std::cout << "Line no:" << 210 << " " << (b->insert(181)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 212 << " " << (a->insert(196)) << std::endl;
std::cout << "Line no:" << 213 << " " << ((b->remove(169))==false) << std::endl;
std::cout << "Line no:" << 214 << " " << (a->insert(316)) << std::endl;
*a=*b;
std::cout << "Line no:" << 216 << " " << (a->insert(19)) << std::endl;
std::cout << "Line no:" << 217 << " " << ((b->insert(61))==false) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->remove(347)) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->insert(200)) << std::endl;
std::cout << "Line no:" << 220 << " " << ((a->insert(159))==false) << std::endl;
std::cout << "Line no:" << 221 << " " << (b->remove(53)) << std::endl;
std::cout << "Line no:" << 222 << " " << (a->insert(207)) << std::endl;
std::cout << "Line no:" << 223 << " " << (b->insert(151)) << std::endl;
std::cout << "Line no:" << 224 << " " << (a->insert(249)) << std::endl;
std::cout << "Line no:" << 225 << " " << (b->insert(168)) << std::endl;
std::cout << "Line no:" << 226 << " " << ((a->remove(79))==false) << std::endl;
std::cout << "Line no:" << 227 << " " << (b->remove(150)) << std::endl;
std::cout << "Line no:" << 228 << " " << ((a->remove(64))==false) << std::endl;
std::cout << "Line no:" << 229 << " " << (a->remove(68)) << std::endl;
try{std::cout <<"Line no:" << 230 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getFloor(165) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getCeiling(165) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getNext(165) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->get(165) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 237 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 238 << " " << (b->insert(152)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
