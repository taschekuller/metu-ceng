#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*a;
std::cout << "Line no:" << 7 << " " << ((b->remove(319))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 9 << " " << (b->insert(406)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(36)) << std::endl;
std::cout << "Line no:" << 11 << " " << (b->remove(406)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(101)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->insert(97)) << std::endl;
std::cout << "Line no:" << 14 << " " << (b->insert(227)) << std::endl;
std::cout << "Line no:" << 15 << " " << (b->insert(325)) << std::endl;
std::cout << "Line no:" << 16 << " " << ((b->insert(325))==false) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(197)) << std::endl;
*b=*b;
std::cout << "Line no:" << 19 << " " << (a->insert(397)) << std::endl;
*b=*a;
*b=*a;
std::cout << "Line no:" << 22 << " " << ((a->insert(97))==false) << std::endl;
std::cout << "Line no:" << 23 << " " << (b->insert(307)) << std::endl;
std::cout << "Line no:" << 24 << " " << ((a->insert(97))==false) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->insert(143)) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->insert(183)) << std::endl;
std::cout << "Line no:" << 27 << " " << (b->insert(393)) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->insert(124)) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->insert(273)) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->remove(36)) << std::endl;
std::cout << "Line no:" << 31 << " " << ((a->insert(273))==false) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->insert(148)) << std::endl;
std::cout << "Line no:" << 33 << " " << ((a->remove(482))==false) << std::endl;
std::cout << "Line no:" << 34 << " " << (b->remove(97)) << std::endl;
std::cout << "Line no:" << 35 << " " << (b->insert(51)) << std::endl;
std::cout << "Line no:" << 36 << " " << (b->remove(51)) << std::endl;
std::cout << "Line no:" << 37 << " " << (b->insert(82)) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->insert(454)) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->remove(143)) << std::endl;
std::cout << "Line no:" << 40 << " " << (b->remove(393)) << std::endl;
std::cout << "Line no:" << 41 << " " << (b->insert(330)) << std::endl;
*a=*b;
std::cout << "Line no:" << 43 << " " << (b->insert(41)) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->insert(339)) << std::endl;
std::cout << "Line no:" << 45 << " " << (b->remove(330)) << std::endl;
std::cout << "Line no:" << 46 << " " << (a->insert(66)) << std::endl;
std::cout << "Line no:" << 47 << " " << (b->remove(397)) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->remove(82)) << std::endl;
std::cout << "Line no:" << 49 << " " << ((b->insert(197))==false) << std::endl;
std::cout << "Line no:" << 50 << " " << (b->insert(73)) << std::endl;
std::cout << "Line no:" << 51 << " " << (a->insert(171)) << std::endl;
std::cout << "Line no:" << 52 << " " << ((b->insert(82))==false) << std::endl;
std::cout << "Line no:" << 53 << " " << ((a->insert(36))==false) << std::endl;
std::cout << "Line no:" << 54 << " " << (a->insert(417)) << std::endl;
try{std::cout <<"Line no:" << 55 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getFloor(307) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getCeiling(307) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getNext(307) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->get(307) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 62 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 63 << " " << ((b->insert(36))==false) << std::endl;
std::cout << "Line no:" << 64 << " " << (b->insert(224)) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->remove(307)) << std::endl;
std::cout << "Line no:" << 66 << " " << (b->insert(349)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->remove(101)) << std::endl;
*b=*b;
std::cout << "Line no:" << 69 << " " << ((a->insert(330))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 71 << " " << (a->remove(171)) << std::endl;
std::cout << "Line no:" << 72 << " " << ((a->remove(29))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 74 << " " << (a->insert(436)) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->insert(395)) << std::endl;
std::cout << "Line no:" << 76 << " " << ((a->insert(197))==false) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->remove(397)) << std::endl;
std::cout << "Line no:" << 78 << " " << ((b->insert(224))==false) << std::endl;
std::cout << "Line no:" << 79 << " " << (a->remove(66)) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->insert(163)) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->remove(73)) << std::endl;
std::cout << "Line no:" << 82 << " " << ((a->remove(40))==false) << std::endl;
std::cout << "Line no:" << 83 << " " << (a->insert(201)) << std::endl;
std::cout << "Line no:" << 84 << " " << (a->remove(197)) << std::endl;
std::cout << "Line no:" << 85 << " " << (b->insert(379)) << std::endl;
std::cout << "Line no:" << 86 << " " << ((b->insert(82))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 88 << " " << (b->insert(213)) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->insert(127)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 91 << " " << (a->remove(201)) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->remove(127)) << std::endl;
*b=*b;
std::cout << "Line no:" << 94 << " " << (a->insert(360)) << std::endl;
std::cout << "Line no:" << 95 << " " << ((b->remove(166))==false) << std::endl;
std::cout << "Line no:" << 96 << " " << (a->insert(433)) << std::endl;
std::cout << "Line no:" << 97 << " " << (b->remove(307)) << std::endl;
std::cout << "Line no:" << 98 << " " << (b->insert(13)) << std::endl;
std::cout << "Line no:" << 99 << " " << (a->insert(269)) << std::endl;
std::cout << "Line no:" << 100 << " " << (b->remove(349)) << std::endl;
std::cout << "Line no:" << 101 << " " << (a->remove(36)) << std::endl;
std::cout << "Line no:" << 102 << " " << ((a->remove(362))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 104 << " " << (b->remove(197)) << std::endl;
std::cout << "Line no:" << 105 << " " << (b->remove(224)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 107 << " " << (b->remove(13)) << std::endl;
std::cout << "Line no:" << 108 << " " << (b->insert(321)) << std::endl;
std::cout << "Line no:" << 109 << " " << (a->remove(269)) << std::endl;
std::cout << "Line no:" << 110 << " " << (b->remove(82)) << std::endl;
std::cout << "Line no:" << 111 << " " << ((a->insert(330))==false) << std::endl;
std::cout << "Line no:" << 112 << " " << (b->remove(41)) << std::endl;
try{std::cout <<"Line no:" << 113 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getFloor(433) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getCeiling(433) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getNext(433) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->get(433) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 120 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 121 << " " << (b->remove(213)) << std::endl;
std::cout << "Line no:" << 122 << " " << ((b->insert(36))==false) << std::endl;
std::cout << "Line no:" << 123 << " " << (b->remove(379)) << std::endl;
std::cout << "Line no:" << 124 << " " << ((a->remove(132))==false) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->insert(405)) << std::endl;
std::cout << "Line no:" << 126 << " " << (a->remove(436)) << std::endl;
std::cout << "Line no:" << 127 << " " << (a->insert(377)) << std::endl;
std::cout << "Line no:" << 128 << " " << (b->remove(101)) << std::endl;
std::cout << "Line no:" << 129 << " " << (b->remove(321)) << std::endl;
std::cout << "Line no:" << 130 << " " << (a->remove(163)) << std::endl;
std::cout << "Line no:" << 131 << " " << (b->remove(36)) << std::endl;
std::cout << "Line no:" << 132 << " " << ((a->remove(302))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 134 << " " << (b->insert(173)) << std::endl;
std::cout << "Line no:" << 135 << " " << (a->insert(22)) << std::endl;
std::cout << "Line no:" << 136 << " " << (b->insert(436)) << std::endl;
std::cout << "Line no:" << 137 << " " << ((a->insert(330))==false) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->insert(319)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 140 << " " << ((b->insert(319))==false) << std::endl;
std::cout << "Line no:" << 141 << " " << ((a->insert(405))==false) << std::endl;
std::cout << "Line no:" << 142 << " " << ((b->remove(216))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 144 << " " << (b->insert(70)) << std::endl;
std::cout << "Line no:" << 145 << " " << (b->insert(420)) << std::endl;
std::cout << "Line no:" << 146 << " " << (a->insert(448)) << std::endl;
std::cout << "Line no:" << 147 << " " << (b->insert(335)) << std::endl;
std::cout << "Line no:" << 148 << " " << (b->remove(335)) << std::endl;
std::cout << "Line no:" << 149 << " " << (b->insert(273)) << std::endl;
std::cout << "Line no:" << 150 << " " << (b->remove(420)) << std::endl;
std::cout << "Line no:" << 151 << " " << (b->insert(433)) << std::endl;
std::cout << "Line no:" << 152 << " " << (b->remove(319)) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->remove(273)) << std::endl;
std::cout << "Line no:" << 154 << " " << ((b->remove(133))==false) << std::endl;
std::cout << "Line no:" << 155 << " " << ((b->insert(173))==false) << std::endl;
std::cout << "Line no:" << 156 << " " << (b->remove(436)) << std::endl;
std::cout << "Line no:" << 157 << " " << (a->insert(144)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 159 << " " << (b->insert(313)) << std::endl;
std::cout << "Line no:" << 160 << " " << (b->insert(387)) << std::endl;
std::cout << "Line no:" << 161 << " " << (b->insert(180)) << std::endl;
std::cout << "Line no:" << 162 << " " << (a->remove(377)) << std::endl;
std::cout << "Line no:" << 163 << " " << ((a->remove(60))==false) << std::endl;
std::cout << "Line no:" << 164 << " " << (b->remove(433)) << std::endl;
std::cout << "Line no:" << 165 << " " << (b->insert(327)) << std::endl;
std::cout << "Line no:" << 166 << " " << ((b->remove(42))==false) << std::endl;
std::cout << "Line no:" << 167 << " " << (b->insert(156)) << std::endl;
std::cout << "Line no:" << 168 << " " << (b->insert(1)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 170 << " " << (b->remove(387)) << std::endl;
try{std::cout <<"Line no:" << 171 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getFloor(417) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getCeiling(417) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getNext(417) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->get(417) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
a->printPretty();
*a=*b;
std::cout << "Line no:" << 181 << " " << (b->insert(269)) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->remove(327)) << std::endl;
std::cout << "Line no:" << 183 << " " << ((b->remove(330))==false) << std::endl;
std::cout << "Line no:" << 184 << " " << (a->insert(311)) << std::endl;
std::cout << "Line no:" << 185 << " " << ((a->insert(156))==false) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->remove(156)) << std::endl;
std::cout << "Line no:" << 187 << " " << (a->insert(469)) << std::endl;
std::cout << "Line no:" << 188 << " " << ((b->remove(77))==false) << std::endl;
std::cout << "Line no:" << 189 << " " << (b->insert(22)) << std::endl;
std::cout << "Line no:" << 190 << " " << ((b->insert(70))==false) << std::endl;
std::cout << "Line no:" << 191 << " " << ((a->insert(469))==false) << std::endl;
std::cout << "Line no:" << 192 << " " << (a->insert(92)) << std::endl;
std::cout << "Line no:" << 193 << " " << (b->insert(406)) << std::endl;
std::cout << "Line no:" << 194 << " " << (b->remove(1)) << std::endl;
std::cout << "Line no:" << 195 << " " << (b->insert(18)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 197 << " " << (b->insert(408)) << std::endl;
std::cout << "Line no:" << 198 << " " << ((a->insert(173))==false) << std::endl;
std::cout << "Line no:" << 199 << " " << (b->insert(339)) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->remove(313)) << std::endl;
std::cout << "Line no:" << 201 << " " << (b->remove(180)) << std::endl;
std::cout << "Line no:" << 202 << " " << (a->insert(324)) << std::endl;
std::cout << "Line no:" << 203 << " " << (b->insert(197)) << std::endl;
std::cout << "Line no:" << 204 << " " << ((a->remove(284))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 206 << " " << ((a->insert(70))==false) << std::endl;
std::cout << "Line no:" << 207 << " " << (a->insert(245)) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->insert(315)) << std::endl;
std::cout << "Line no:" << 209 << " " << (a->remove(324)) << std::endl;
std::cout << "Line no:" << 210 << " " << (b->remove(156)) << std::endl;
std::cout << "Line no:" << 211 << " " << (a->insert(243)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 213 << " " << (a->remove(173)) << std::endl;
std::cout << "Line no:" << 214 << " " << (a->remove(311)) << std::endl;
std::cout << "Line no:" << 215 << " " << (b->insert(171)) << std::endl;
std::cout << "Line no:" << 216 << " " << ((b->insert(408))==false) << std::endl;
std::cout << "Line no:" << 217 << " " << (b->insert(414)) << std::endl;
std::cout << "Line no:" << 218 << " " << (a->remove(180)) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->remove(245)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 221 << " " << (a->insert(382)) << std::endl;
std::cout << "Line no:" << 222 << " " << (b->remove(173)) << std::endl;
std::cout << "Line no:" << 223 << " " << (a->remove(469)) << std::endl;
std::cout << "Line no:" << 224 << " " << ((b->insert(18))==false) << std::endl;
std::cout << "Line no:" << 225 << " " << ((b->remove(353))==false) << std::endl;
std::cout << "Line no:" << 226 << " " << (b->insert(242)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 228 << " " << ((a->remove(433))==false) << std::endl;
try{std::cout <<"Line no:" << 229 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getFloor(70) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getCeiling(70) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getNext(70) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->get(70) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 237 << " " << (a->remove(70)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
