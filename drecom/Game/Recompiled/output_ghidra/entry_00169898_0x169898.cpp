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

// Function: entry_00169898
// Address: 0x169898 - 0x1698b8
void entry_00169898_0x169898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169898_0x169898");
#endif

    ctx->pc = 0x169898u;

    // 0x169898: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x169898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16989c: 0xe6001314  swc1        $f0, 0x1314($s0)
    ctx->pc = 0x16989cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4884), bits); }
    // 0x1698a0: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x1698a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1698a4: 0xe6001318  swc1        $f0, 0x1318($s0)
    ctx->pc = 0x1698a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4888), bits); }
    // 0x1698a8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1698a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1698ac: 0x8c22ab20  lw          $v0, -0x54E0($at)
    ctx->pc = 0x1698acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47AB20u));
    // 0x1698b0: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x1698B0u;
    {
        const bool branch_taken_0x1698b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1698b0) {
            ctx->pc = 0x169B5Cu;
            return;
        }
    }
    ctx->pc = 0x1698B8u;
}
