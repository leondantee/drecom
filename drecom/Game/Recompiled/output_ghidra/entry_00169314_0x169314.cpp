#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00169314
// Address: 0x169314 - 0x169324
void entry_00169314_0x169314(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169314_0x169314");
#endif

    ctx->pc = 0x169314u;

    // 0x169314: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x169314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169318: 0xe6001314  swc1        $f0, 0x1314($s0)
    ctx->pc = 0x169318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4884), bits); }
    // 0x16931c: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x16931cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169320: 0xe6001318  swc1        $f0, 0x1318($s0)
    ctx->pc = 0x169320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4888), bits); }
    ctx->pc = 0x169324u;
}
