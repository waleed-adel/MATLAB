/*
 * File: _coder_hamada_info.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 19-Jan-2020 11:36:18
 */

/* Include Files */
#include "_coder_hamada_info.h"

/* Function Definitions */

/*
 * Arguments    : void
 * Return Type  : const mxArray *
 */
const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  const char * data[11] = {
    "789ced5c5b6fdb361466d6346831f432b4c0ba0dd810ec820d05acb403822d40106fa80b7b70da2ced438162f068898a8852a421c999fb66eca93f657f666fdb"
    "50607f636f7b19a98b23334ac849b2232314a028c7e2b990e7e3d1e13165b0d6db07fcb8c94faf0fc006bf5ee3e73b2039aea6f41a3f3f4cafc9e7ebe0464aff",
    "ca4f9bd1084da2e426853e02d9e1301f5348a3e7af4708042864e41839f11d1713f41cfba8cf72441773c27f9cbb3523c4adc00b679201c913c921fa71004efa"
    "b15ed08f8f73fdb89dd22f3b3f3ddab1f661d487c3c1c3ad07dbd61053cb833e7460cb4fe46e29e45e99937b05f87012f37da3e0db90ecd988476d3c2428d13b",
    "52f07f2bf10bfa65afffe2549722c6c8904d2ce4138be0a1e5c388c0a1e5c008ba63cac989e8ea6c1cf3766f14e85dcbe9bd9e7ece8fb7ff0cfffcae027f55fd"
    "b5f17f99e35f2be007b96b99f617e5d7ae42ef3d49afa06de6a0a085f9240f28242d0a83234c6def956a5e64475e5e66c75461475fe2ebabfa1f7a30408e15db",
    "9afebd9f5e32cbad99e5c99094c7c9f4dfcf0eff3038d7683f05cdf373911d57253b04ed12c6024dfe8b8ee38888d91e5b5c471cff7cf70b13c79b10c7cff2ab"
    "2acff944d22b68298ee3f0fb3126518f3e19fb28c0762d389f28f8bb127f57673cc4796a92cbe6b7fc0a78d97af77713cf5719ef1f497a052de13db42181412b",
    "8beaeabc3e3b8af21715ce3b125f47671c0a717e3fb13b372615f2969b7b1f98b8de649cffacd0fb95a457d012cee168445e3f8b41f3784ced0833daa30704da"
    "28a7a7add0734bd22368379536f0207578c01772de28e41c4a720e75c6a9701e9cddad6c002be0eaafbfbf36f342a77dd3fcbda8e7c2a2f320f37c58ed79d0d4",
    "facdfb925e414b78f7317d1aeca7f549555d737d4ede3ab0f9f25ba7ff6dc98eb64eff0bf19d995b29bfeffce0185cd781eb36588c5f55b836754953975c665d"
    "721fccfb59d05571bec9ef0fd0240a903fce9ed306f706f779fecb82fb170a3b3e95ec10b4847b9bd1307ac2e8334c8f088a187d84fd423f94c9df55e3f4bfe7",
    "c399e354d48dcaf3c1e4f19aeda7a019f3a186bc3e5907768e96f27d555be26f971e97ccec4af9fdedb74f0dde9b95dfcffbb5add07b43d22b681cd2e4ab9d48"
    "6c1f5acef7b07b12ff9e4effc5baddc513e48c18efbe3567370fe51570f19e89e3cdc6b50a8fd724bd82c6a18b7d1879cbc0f38ec4bfa3d3ef53784eecada1ce",
    "6ef0acd97e79dfa39fe079d3c54118b9b84c5d5060a40e3c7b0afe6d897f5ba7df0578cef6751a1c2f16c7cbf6675ba14f37cf58545ddce417ab89e337e07cbf"
    "fe08e6fd2ae85ad78983703c3c63bc74f73372dc40aac95f35efa8be3f82ff63c516d7b19ff18ec1793d79f4a2fc6af6339afd8c26ae977b7f4988e36a062e0b",
    "0863a3013b46814bd82f03db43f6ab6afb1ca70a7b0e24be039df1c9c78364b8ceb1bfca3c989ab8afd9fe3770be9f8fc1bc9f055db79f37cf6f30f01019a1a0"
    "5c7e9ead4fbb0a3e8d3a3ba60e9af46864d6ab17c06fe6c1fc3c2893df70d1e2f5d485ae734bd71de7f3c4d8d21aea8ee639a0d9feb2e01fd355c13fa606ff27",
    "fc976d3da0ca57ee4af6085aca570244d82893d756c8d37def4385ff5d49ce6ee9718acdafb8af1ddc32f8d76bdf98dfcfe0017a15ea94b37dfab8963aa5f9fd"
    "0ccdf617e557553c36fb75b5ea3266bfae66fba6e2dcbc6754880bf39e9146fbff0010e3d4e7",
    "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 19576U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/*
 * Arguments    : void
 * Return Type  : mxArray *
 */
mxArray *emlrtMexFcnProperties(void)
{
  mxArray *xResult;
  mxArray *xEntryPoints;
  const char * fldNames[4] = { "Name", "NumberOfInputs", "NumberOfOutputs",
    "ConstantInputs" };

  mxArray *xInputs;
  const char * b_fldNames[4] = { "Version", "ResolvedFunctions", "EntryPoints",
    "CoverageInfo" };

  xEntryPoints = emlrtCreateStructMatrix(1, 1, 4, fldNames);
  xInputs = emlrtCreateLogicalMatrix(1, 1);
  emlrtSetField(xEntryPoints, 0, "Name", mxCreateString("hamada"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", mxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", mxCreateDoubleScalar(2.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  xResult = emlrtCreateStructMatrix(1, 1, 4, b_fldNames);
  emlrtSetField(xResult, 0, "Version", mxCreateString("9.0.0.341360 (R2016a)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions", (mxArray *)
                emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

/*
 * File trailer for _coder_hamada_info.c
 *
 * [EOF]
 */
