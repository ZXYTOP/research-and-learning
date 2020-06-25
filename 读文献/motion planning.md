# motion plannning

## 一、motion planning在T-RO上的论文

### 1. PPCPP: A Predator–Prey-Based Approach to Adaptive Coverage Path Planning

- **摘要：**

  ​		大多数现有的**覆盖路径规划（CPP）算法**无法使机器人处理感兴趣的覆盖区域中的意外变化。意外变化主要包括例如在环境中突然引入静止或动态障碍物，以及覆盖的可到达区域发生变化（例如，由于工业机器人的基础定位不完善）。因此，提出了一种**新的自适应CPP方法**，该方法能够**有效地实时响应变化**，同时以最小的成本实现完全覆盖。作为该方法的一部分，设计了一个**包含三个奖励的总奖励函数**，其中第一个奖励**受捕食者-猎物关系**的启发，第二个奖励**与沿直线方向的连续运动**有关，第三个奖励**与覆盖边界**有关。总奖励函数作为一种启发式方法来指导机器人的每一步。对于给定的环境地图，当假设没有障碍物时，模型参数为最先被离线调整去最小化路径长度。结果表明，在**有障碍物的实时自适应规划中应用这些学习参数**，仍然可以得到长度接近最优路径长度的覆盖路径。为了验证该方法并进行**大量的比较**，本文提出了许多不同场景的案例研究。

- **索引项（关键词）：**Adaptive coverage path planning (CPP), complete coverage, dynamic obstacles, three-dimensional (3-D) coverage of complex surfaces.

- 

