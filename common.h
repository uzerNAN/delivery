#include "stdafx.h"

#include "DeliveryManClient.h"
#pragma comment (lib,"DeliveryManClient")

typedef Location Node;
typedef std::vector<std::vector<std::wstring>> GameNodes;
typedef std::vector<std::vector<int>> GameEdgesCosts;
typedef std::vector<VanInfo> VanList;
typedef std::vector<DeliveryInfo> DeliveryList;