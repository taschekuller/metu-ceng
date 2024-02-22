#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
a->printPretty();
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
std::cout << "Line no:" << 8 << " " << (a->insert(137)) << std::endl;
*a=*b;
std::cout << "Line no:" << 10 << " " << (b->remove(137)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(143)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->remove(137)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->insert(261)) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(477)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(374)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(340)) << std::endl;
*b=*b;
std::cout << "Line no:" << 18 << " " << (b->insert(487)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 20 << " " << (b->insert(175)) << std::endl;
std::cout << "Line no:" << 21 << " " << (b->insert(193)) << std::endl;
std::cout << "Line no:" << 22 << " " << ((a->insert(340))==false) << std::endl;
std::cout << "Line no:" << 23 << " " << (b->insert(104)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->remove(340)) << std::endl;
std::cout << "Line no:" << 25 << " " << ((b->remove(21))==false) << std::endl;
std::cout << "Line no:" << 26 << " " << (b->insert(201)) << std::endl;
std::cout << "Line no:" << 27 << " " << ((a->insert(477))==false) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->insert(461)) << std::endl;
std::cout << "Line no:" << 29 << " " << (b->insert(313)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 31 << " " << (a->insert(228)) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->insert(74)) << std::endl;
std::cout << "Line no:" << 33 << " " << (b->remove(201)) << std::endl;
std::cout << "Line no:" << 34 << " " << (b->insert(2)) << std::endl;
std::cout << "Line no:" << 35 << " " << ((b->insert(104))==false) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->insert(52)) << std::endl;
std::cout << "Line no:" << 37 << " " << ((b->remove(146))==false) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->insert(344)) << std::endl;
std::cout << "Line no:" << 39 << " " << (b->insert(364)) << std::endl;
std::cout << "Line no:" << 40 << " " << ((b->insert(313))==false) << std::endl;
std::cout << "Line no:" << 41 << " " << ((a->insert(74))==false) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 44 << " " << (b->insert(36)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 46 << " " << (b->remove(104)) << std::endl;
std::cout << "Line no:" << 47 << " " << (a->remove(143)) << std::endl;
std::cout << "Line no:" << 48 << " " << (b->insert(395)) << std::endl;
std::cout << "Line no:" << 49 << " " << (a->insert(328)) << std::endl;
std::cout << "Line no:" << 50 << " " << (b->insert(349)) << std::endl;
try{std::cout <<"Line no:" << 51 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 52 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getFloor(261) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getCeiling(261) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getNext(261) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->get(261) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
a->printPretty();
std::cout << "Line no:" << 60 << " " << (a->insert(283)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 62 << " " << (a->remove(261)) << std::endl;
std::cout << "Line no:" << 63 << " " << (b->remove(2)) << std::endl;
std::cout << "Line no:" << 64 << " " << (b->insert(339)) << std::endl;
std::cout << "Line no:" << 65 << " " << (b->insert(81)) << std::endl;
std::cout << "Line no:" << 66 << " " << (b->insert(13)) << std::endl;
std::cout << "Line no:" << 67 << " " << ((a->insert(328))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 69 << " " << ((a->insert(74))==false) << std::endl;
std::cout << "Line no:" << 70 << " " << (b->insert(188)) << std::endl;
std::cout << "Line no:" << 71 << " " << (a->remove(344)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 73 << " " << ((b->remove(152))==false) << std::endl;
*a=*a;
std::cout << "Line no:" << 75 << " " << (b->remove(487)) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->insert(451)) << std::endl;
std::cout << "Line no:" << 77 << " " << (b->insert(221)) << std::endl;
std::cout << "Line no:" << 78 << " " << ((a->remove(34))==false) << std::endl;
std::cout << "Line no:" << 79 << " " << (b->remove(188)) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->remove(52)) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->insert(86)) << std::endl;
std::cout << "Line no:" << 82 << " " << ((b->insert(395))==false) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->insert(122)) << std::endl;
std::cout << "Line no:" << 84 << " " << (b->insert(109)) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->insert(266)) << std::endl;
std::cout << "Line no:" << 86 << " " << ((b->insert(175))==false) << std::endl;
std::cout << "Line no:" << 87 << " " << (a->remove(461)) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->insert(481)) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->insert(407)) << std::endl;
std::cout << "Line no:" << 90 << " " << (a->insert(349)) << std::endl;
std::cout << "Line no:" << 91 << " " << (a->insert(280)) << std::endl;
std::cout << "Line no:" << 92 << " " << ((b->insert(339))==false) << std::endl;
std::cout << "Line no:" << 93 << " " << ((b->insert(175))==false) << std::endl;
std::cout << "Line no:" << 94 << " " << ((a->insert(228))==false) << std::endl;
std::cout << "Line no:" << 95 << " " << (a->insert(430)) << std::endl;
std::cout << "Line no:" << 96 << " " << ((b->remove(54))==false) << std::endl;
std::cout << "Line no:" << 97 << " " << (b->insert(258)) << std::endl;
std::cout << "Line no:" << 98 << " " << (a->insert(499)) << std::endl;
std::cout << "Line no:" << 99 << " " << (b->remove(122)) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->remove(451)) << std::endl;
std::cout << "Line no:" << 101 << " " << (a->insert(262)) << std::endl;
std::cout << "Line no:" << 102 << " " << (a->insert(452)) << std::endl;
std::cout << "Line no:" << 103 << " " << (a->insert(466)) << std::endl;
std::cout << "Line no:" << 104 << " " << (a->remove(74)) << std::endl;
std::cout << "Line no:" << 105 << " " << (b->remove(86)) << std::endl;
std::cout << "Line no:" << 106 << " " << (b->insert(34)) << std::endl;
std::cout << "Line no:" << 107 << " " << (b->insert(50)) << std::endl;
std::cout << "Line no:" << 108 << " " << (a->insert(71)) << std::endl;
try{std::cout <<"Line no:" << 109 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 110 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 111 << " " << a->getFloor(374) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getCeiling(374) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getNext(374) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->get(374) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 117 << " " << (b->remove(13)) << std::endl;
std::cout << "Line no:" << 118 << " " << (b->remove(221)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 121 << " " << (b->insert(192)) << std::endl;
*a=*b;
std::cout << "Line no:" << 123 << " " << (b->insert(292)) << std::endl;
std::cout << "Line no:" << 124 << " " << (a->insert(432)) << std::endl;
std::cout << "Line no:" << 125 << " " << (b->insert(395)) << std::endl;
std::cout << "Line no:" << 126 << " " << ((b->remove(16))==false) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->insert(105)) << std::endl;
std::cout << "Line no:" << 128 << " " << ((b->insert(50))==false) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->remove(192)) << std::endl;
std::cout << "Line no:" << 130 << " " << (a->remove(34)) << std::endl;
std::cout << "Line no:" << 131 << " " << (a->insert(214)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 133 << " " << ((b->remove(147))==false) << std::endl;
std::cout << "Line no:" << 134 << " " << (a->insert(222)) << std::endl;
std::cout << "Line no:" << 135 << " " << (a->insert(301)) << std::endl;
std::cout << "Line no:" << 136 << " " << (a->remove(81)) << std::endl;
std::cout << "Line no:" << 137 << " " << (b->insert(45)) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->remove(339)) << std::endl;
std::cout << "Line no:" << 139 << " " << ((a->insert(258))==false) << std::endl;
std::cout << "Line no:" << 140 << " " << ((b->remove(111))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 142 << " " << (b->remove(349)) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->insert(253)) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->insert(217)) << std::endl;
std::cout << "Line no:" << 145 << " " << ((a->remove(343))==false) << std::endl;
std::cout << "Line no:" << 146 << " " << (b->insert(100)) << std::endl;
std::cout << "Line no:" << 147 << " " << (b->insert(117)) << std::endl;
std::cout << "Line no:" << 148 << " " << (b->remove(292)) << std::endl;
std::cout << "Line no:" << 149 << " " << (a->remove(50)) << std::endl;
std::cout << "Line no:" << 150 << " " << (a->remove(395)) << std::endl;
std::cout << "Line no:" << 151 << " " << (b->remove(105)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 153 << " " << ((a->insert(301))==false) << std::endl;
std::cout << "Line no:" << 154 << " " << ((a->remove(290))==false) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->insert(204)) << std::endl;
*b=*b;
std::cout << "Line no:" << 157 << " " << (b->remove(217)) << std::endl;
std::cout << "Line no:" << 158 << " " << (a->insert(413)) << std::endl;
std::cout << "Line no:" << 159 << " " << (b->remove(109)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 161 << " " << (a->remove(175)) << std::endl;
std::cout << "Line no:" << 162 << " " << (b->insert(394)) << std::endl;
std::cout << "Line no:" << 163 << " " << (a->insert(474)) << std::endl;
std::cout << "Line no:" << 164 << " " << (a->insert(300)) << std::endl;
std::cout << "Line no:" << 165 << " " << (a->insert(19)) << std::endl;
std::cout << "Line no:" << 166 << " " << (b->remove(481)) << std::endl;
std::cout << "Line no:" << 167 << " " << (a->insert(401)) << std::endl;
try{std::cout <<"Line no:" << 168 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 169 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getFloor(474) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getCeiling(474) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getNext(474) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->get(474) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 176 << " " << (a->remove(401)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 178 << " " << (a->remove(300)) << std::endl;
std::cout << "Line no:" << 179 << " " << ((a->remove(395))==false) << std::endl;
std::cout << "Line no:" << 180 << " " << (a->remove(364)) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->remove(222)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 183 << " " << (b->insert(81)) << std::endl;
*b=*b;
std::cout << "Line no:" << 185 << " " << (b->insert(355)) << std::endl;
std::cout << "Line no:" << 186 << " " << ((a->insert(349))==false) << std::endl;
std::cout << "Line no:" << 187 << " " << (b->insert(136)) << std::endl;
std::cout << "Line no:" << 188 << " " << (b->remove(81)) << std::endl;
std::cout << "Line no:" << 189 << " " << (a->insert(341)) << std::endl;
std::cout << "Line no:" << 190 << " " << (a->insert(364)) << std::endl;
std::cout << "Line no:" << 191 << " " << ((a->remove(65))==false) << std::endl;
std::cout << "Line no:" << 192 << " " << ((a->insert(214))==false) << std::endl;
*a=*a;
std::cout << "Line no:" << 194 << " " << (b->insert(17)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 196 << " " << (a->insert(362)) << std::endl;
*b=*a;
std::cout << "Line no:" << 198 << " " << (b->insert(85)) << std::endl;
std::cout << "Line no:" << 199 << " " << (b->insert(386)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 201 << " " << (a->insert(144)) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->insert(234)) << std::endl;
std::cout << "Line no:" << 203 << " " << (a->remove(313)) << std::endl;
std::cout << "Line no:" << 204 << " " << (a->remove(193)) << std::endl;
std::cout << "Line no:" << 205 << " " << (b->insert(439)) << std::endl;
std::cout << "Line no:" << 206 << " " << (b->remove(413)) << std::endl;
std::cout << "Line no:" << 207 << " " << ((a->remove(488))==false) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->remove(481)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 210 << " " << (a->insert(181)) << std::endl;
std::cout << "Line no:" << 211 << " " << (a->insert(107)) << std::endl;
std::cout << "Line no:" << 212 << " " << (b->remove(339)) << std::endl;
std::cout << "Line no:" << 213 << " " << ((b->remove(104))==false) << std::endl;
b->printPretty();
*a=*a;
std::cout << "Line no:" << 216 << " " << (b->remove(19)) << std::endl;
std::cout << "Line no:" << 217 << " " << ((b->insert(193))==false) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->insert(67)) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->insert(500)) << std::endl;
*b=*a;
std::cout << "Line no:" << 221 << " " << (b->insert(298)) << std::endl;
std::cout << "Line no:" << 222 << " " << (b->insert(34)) << std::endl;
std::cout << "Line no:" << 223 << " " << (b->remove(214)) << std::endl;
std::cout << "Line no:" << 224 << " " << (a->insert(328)) << std::endl;
std::cout << "Line no:" << 225 << " " << (a->insert(390)) << std::endl;
try{std::cout <<"Line no:" << 226 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 227 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getFloor(413) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getCeiling(413) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getNext(413) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->get(413) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 234 << " " << (a->remove(349)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
