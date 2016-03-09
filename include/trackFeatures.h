#ifndef KLT_POINT_HANDLING
#define KLT_POINT_HANDLING

#include <opencv2/core/core.hpp>
#include <cstdio>
#include <vector>

#include "Precision.h"

// extracts points on a grid and tracks them over time. img_r can be a empty cv::Mat, in that case no disparity computation is done
// output variables are z_all and updateVect that need to point to existing arrays of the correct size (3*sizeof(double)*numPoints for z_all and sizeof(unsigned char)*numPoints for updateVect)
// stereo: 0 = never do stereo, 1 = do stereo with new features, 2 = always do stereo
void trackFeatures(const cv::Mat &img_l, const cv::Mat &img_r, std::vector<FloatType> &z_all_l, std::vector<FloatType> &z_all_r,
        std::vector<int> &updateVect, int stereo = 0);

#endif