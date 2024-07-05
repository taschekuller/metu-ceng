#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(100)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(195)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 8 << " " << (a->insert(85)) << std::endl;
std::cout << "Line no:" << 9 << " " << ((a->remove(210))==false) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(438)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(203)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(248)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->remove(195)) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(496)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(218)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(372)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 18 << " " << (a->insert(432)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(130)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->remove(218)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->insert(382)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->remove(203)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->insert(181)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->insert(428)) << std::endl;
std::cout << "Line no:" << 25 << " " << ((a->remove(163))==false) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->insert(260)) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->insert(127)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 29 << " " << ((a->remove(102))==false) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->insert(253)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->remove(181)) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->remove(253)) << std::endl;
std::cout << "Line no:" << 33 << " " << ((a->insert(260))==false) << std::endl;
std::cout << "Line no:" << 34 << " " << ((a->insert(428))==false) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->remove(372)) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->insert(121)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 38 << " " << ((a->insert(248))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 40 << " " << ((a->remove(349))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 42 << " " << (a->insert(181)) << std::endl;
std::cout << "Line no:" << 43 << " " << ((a->remove(228))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 45 << " " << (a->insert(190)) << std::endl;
std::cout << "Line no:" << 46 << " " << (a->insert(291)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 48 << " " << (a->remove(291)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*a;
*b=*a;
std::cout << "Line no:" << 52 << " " << (a->remove(428)) << std::endl;
std::cout << "Line no:" << 53 << " " << ((b->insert(260))==false) << std::endl;
std::cout << "Line no:" << 54 << " " << (a->insert(415)) << std::endl;
try{std::cout <<"Line no:" << 55 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getFloor(130) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getCeiling(130) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getNext(130) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->get(130) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 62 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 63 << " " << (b->remove(496)) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->remove(190)) << std::endl;
std::cout << "Line no:" << 65 << " " << (b->insert(436)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->insert(452)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->insert(430)) << std::endl;
std::cout << "Line no:" << 68 << " " << (b->insert(452)) << std::endl;
std::cout << "Line no:" << 69 << " " << (b->insert(300)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 71 << " " << (a->insert(433)) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->insert(200)) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 75 << " " << (a->insert(400)) << std::endl;
*a=*b;
std::cout << "Line no:" << 77 << " " << (b->insert(132)) << std::endl;
std::cout << "Line no:" << 78 << " " << ((a->insert(190))==false) << std::endl;
std::cout << "Line no:" << 79 << " " << (a->insert(489)) << std::endl;
std::cout << "Line no:" << 80 << " " << (b->insert(242)) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->insert(317)) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->remove(100)) << std::endl;
std::cout << "Line no:" << 83 << " " << ((b->insert(432))==false) << std::endl;
std::cout << "Line no:" << 84 << " " << (a->remove(130)) << std::endl;
std::cout << "Line no:" << 85 << " " << ((b->insert(300))==false) << std::endl;
std::cout << "Line no:" << 86 << " " << (b->insert(448)) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->remove(127)) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->remove(100)) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->insert(348)) << std::endl;
std::cout << "Line no:" << 90 << " " << (b->remove(432)) << std::endl;
std::cout << "Line no:" << 91 << " " << ((a->remove(115))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 93 << " " << (a->insert(498)) << std::endl;
std::cout << "Line no:" << 94 << " " << (b->insert(382)) << std::endl;
std::cout << "Line no:" << 95 << " " << ((b->remove(440))==false) << std::endl;
std::cout << "Line no:" << 96 << " " << ((b->remove(426))==false) << std::endl;
std::cout << "Line no:" << 97 << " " << (b->insert(207)) << std::endl;
std::cout << "Line no:" << 98 << " " << (b->insert(53)) << std::endl;
std::cout << "Line no:" << 99 << " " << (a->remove(85)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 101 << " " << (a->remove(190)) << std::endl;
std::cout << "Line no:" << 102 << " " << (b->insert(54)) << std::endl;
std::cout << "Line no:" << 103 << " " << (a->insert(323)) << std::endl;
std::cout << "Line no:" << 104 << " " << (a->insert(162)) << std::endl;
std::cout << "Line no:" << 105 << " " << (a->remove(348)) << std::endl;
std::cout << "Line no:" << 106 << " " << (a->insert(213)) << std::endl;
std::cout << "Line no:" << 107 << " " << ((b->remove(320))==false) << std::endl;
std::cout << "Line no:" << 108 << " " << (b->remove(428)) << std::endl;
std::cout << "Line no:" << 109 << " " << (a->insert(451)) << std::endl;
std::cout << "Line no:" << 110 << " " << (a->insert(154)) << std::endl;
std::cout << "Line no:" << 111 << " " << (a->insert(194)) << std::endl;
std::cout << "Line no:" << 112 << " " << (a->insert(75)) << std::endl;
try{std::cout <<"Line no:" << 113 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getFloor(432) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getCeiling(432) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getNext(432) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->get(432) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 120 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 121 << " " << ((b->remove(206))==false) << std::endl;
std::cout << "Line no:" << 122 << " " << ((a->remove(437))==false) << std::endl;
std::cout << "Line no:" << 123 << " " << (b->insert(82)) << std::endl;
std::cout << "Line no:" << 124 << " " << (a->insert(27)) << std::endl;
std::cout << "Line no:" << 125 << " " << ((a->insert(498))==false) << std::endl;
std::cout << "Line no:" << 126 << " " << (b->remove(121)) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->insert(316)) << std::endl;
std::cout << "Line no:" << 128 << " " << (a->remove(194)) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->remove(432)) << std::endl;
std::cout << "Line no:" << 130 << " " << ((a->insert(323))==false) << std::endl;
std::cout << "Line no:" << 131 << " " << (a->insert(366)) << std::endl;
std::cout << "Line no:" << 132 << " " << (b->insert(290)) << std::endl;
std::cout << "Line no:" << 133 << " " << (a->insert(196)) << std::endl;
std::cout << "Line no:" << 134 << " " << (b->insert(68)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 136 << " " << (a->insert(201)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 138 << " " << (b->insert(77)) << std::endl;
*a=*a;
std::cout << "Line no:" << 140 << " " << ((b->insert(68))==false) << std::endl;
std::cout << "Line no:" << 141 << " " << ((a->insert(438))==false) << std::endl;
std::cout << "Line no:" << 142 << " " << (a->insert(305)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 144 << " " << (a->remove(323)) << std::endl;
std::cout << "Line no:" << 145 << " " << ((b->remove(449))==false) << std::endl;
std::cout << "Line no:" << 146 << " " << ((b->remove(495))==false) << std::endl;
std::cout << "Line no:" << 147 << " " << (a->insert(479)) << std::endl;
std::cout << "Line no:" << 148 << " " << (b->insert(289)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 150 << " " << (a->insert(303)) << std::endl;
std::cout << "Line no:" << 151 << " " << (a->remove(451)) << std::endl;
std::cout << "Line no:" << 152 << " " << (a->insert(190)) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->insert(331)) << std::endl;
std::cout << "Line no:" << 154 << " " << (a->insert(197)) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->insert(124)) << std::endl;
std::cout << "Line no:" << 156 << " " << ((a->insert(436))==false) << std::endl;
std::cout << "Line no:" << 157 << " " << (a->remove(479)) << std::endl;
std::cout << "Line no:" << 158 << " " << ((b->remove(496))==false) << std::endl;
std::cout << "Line no:" << 159 << " " << ((a->remove(174))==false) << std::endl;
std::cout << "Line no:" << 160 << " " << (b->remove(53)) << std::endl;
std::cout << "Line no:" << 161 << " " << (a->remove(162)) << std::endl;
std::cout << "Line no:" << 162 << " " << (a->insert(427)) << std::endl;
std::cout << "Line no:" << 163 << " " << ((b->remove(49))==false) << std::endl;
std::cout << "Line no:" << 164 << " " << ((b->insert(248))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 166 << " " << ((a->insert(428))==false) << std::endl;
std::cout << "Line no:" << 167 << " " << ((b->insert(331))==false) << std::endl;
std::cout << "Line no:" << 168 << " " << (b->remove(85)) << std::endl;
std::cout << "Line no:" << 169 << " " << (a->remove(154)) << std::endl;
std::cout << "Line no:" << 170 << " " << (b->insert(340)) << std::endl;
try{std::cout <<"Line no:" << 171 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getFloor(438) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getCeiling(438) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getNext(438) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->get(438) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 179 << " " << (b->insert(66)) << std::endl;
std::cout << "Line no:" << 180 << " " << (b->insert(319)) << std::endl;
std::cout << "Line no:" << 181 << " " << ((b->insert(132))==false) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->insert(372)) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->remove(428)) << std::endl;
std::cout << "Line no:" << 184 << " " << (a->insert(353)) << std::endl;
std::cout << "Line no:" << 185 << " " << (a->insert(337)) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->insert(135)) << std::endl;
std::cout << "Line no:" << 187 << " " << (a->insert(293)) << std::endl;
std::cout << "Line no:" << 188 << " " << (a->remove(452)) << std::endl;
std::cout << "Line no:" << 189 << " " << (b->insert(76)) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->remove(436)) << std::endl;
std::cout << "Line no:" << 191 << " " << (b->remove(289)) << std::endl;
std::cout << "Line no:" << 192 << " " << (b->insert(52)) << std::endl;
std::cout << "Line no:" << 193 << " " << (b->remove(317)) << std::endl;
std::cout << "Line no:" << 194 << " " << (b->insert(280)) << std::endl;
std::cout << "Line no:" << 195 << " " << ((a->insert(372))==false) << std::endl;
std::cout << "Line no:" << 196 << " " << (a->insert(153)) << std::endl;
std::cout << "Line no:" << 197 << " " << (b->insert(374)) << std::endl;
std::cout << "Line no:" << 198 << " " << ((b->insert(52))==false) << std::endl;
std::cout << "Line no:" << 199 << " " << (b->insert(249)) << std::endl;
std::cout << "Line no:" << 200 << " " << ((b->remove(463))==false) << std::endl;
std::cout << "Line no:" << 201 << " " << ((a->remove(472))==false) << std::endl;
std::cout << "Line no:" << 202 << " " << (a->insert(248)) << std::endl;
std::cout << "Line no:" << 203 << " " << (b->remove(260)) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->insert(156)) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->insert(214)) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->remove(190)) << std::endl;
std::cout << "Line no:" << 207 << " " << (a->insert(489)) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->insert(113)) << std::endl;
std::cout << "Line no:" << 209 << " " << (a->insert(454)) << std::endl;
std::cout << "Line no:" << 210 << " " << (b->insert(71)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 212 << " " << (a->insert(393)) << std::endl;
std::cout << "Line no:" << 213 << " " << (a->insert(367)) << std::endl;
std::cout << "Line no:" << 214 << " " << (b->remove(248)) << std::endl;
std::cout << "Line no:" << 215 << " " << ((b->insert(374))==false) << std::endl;
std::cout << "Line no:" << 216 << " " << (a->insert(245)) << std::endl;
std::cout << "Line no:" << 217 << " " << ((a->insert(27))==false) << std::endl;
std::cout << "Line no:" << 218 << " " << (a->insert(99)) << std::endl;
std::cout << "Line no:" << 219 << " " << (b->insert(229)) << std::endl;
std::cout << "Line no:" << 220 << " " << (a->insert(347)) << std::endl;
std::cout << "Line no:" << 221 << " " << ((b->insert(319))==false) << std::endl;
std::cout << "Line no:" << 222 << " " << (a->remove(438)) << std::endl;
std::cout << "Line no:" << 223 << " " << (b->insert(370)) << std::endl;
std::cout << "Line no:" << 224 << " " << ((a->insert(248))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 226 << " " << ((b->insert(340))==false) << std::endl;
std::cout << "Line no:" << 227 << " " << (b->insert(112)) << std::endl;
std::cout << "Line no:" << 228 << " " << ((b->insert(124))==false) << std::endl;
try{std::cout <<"Line no:" << 229 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getFloor(489) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getCeiling(489) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getNext(489) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->get(489) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 237 << " " << (a->remove(113)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
