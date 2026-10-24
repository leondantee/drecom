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

// Function: entry_00169a48
// Address: 0x169a48 - 0x169a68
void entry_00169a48_0x169a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169a48_0x169a48");
#endif

    ctx->pc = 0x169a48u;

    // 0x169a48: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x169a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169a4c: 0xe6001314  swc1        $f0, 0x1314($s0)
    ctx->pc = 0x169a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4884), bits); }
    // 0x169a50: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x169a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169a54: 0xe6001318  swc1        $f0, 0x1318($s0)
    ctx->pc = 0x169a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4888), bits); }
    // 0x169a58: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169a5c: 0x8c22ab20  lw          $v0, -0x54E0($at)
    ctx->pc = 0x169a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47AB20u));
    // 0x169a60: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x169A60u;
    {
        const bool branch_taken_0x169a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169a60) {
            ctx->pc = 0x169B5Cu;
            return;
        }
    }
    ctx->pc = 0x169A68u;
}
