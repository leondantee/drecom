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

// Function: entry_0025fd40
// Address: 0x25fd40 - 0x25fd64
void entry_0025fd40_0x25fd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025fd40_0x25fd40");
#endif

    ctx->pc = 0x25fd40u;

    // 0x25fd40: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x25fd40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x25fd44: 0x8c24fdf8  lw          $a0, -0x208($at)
    ctx->pc = 0x25fd44u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5CFDF8u));
    // 0x25fd48: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25FD48u;
    {
        const bool branch_taken_0x25fd48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x25fd48) {
            ctx->pc = 0x25FD64u;
            return;
        }
    }
    ctx->pc = 0x25FD50u;
    // 0x25fd50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25fd50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25fd54: 0x0  nop
    ctx->pc = 0x25fd54u;
    // NOP
    // 0x25fd58: 0xe7a00254  swc1        $f0, 0x254($sp)
    ctx->pc = 0x25fd58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 596), bits); }
    // 0x25fd5c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x25FD5Cu;
    {
        const bool branch_taken_0x25fd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25fd5c) {
            ctx->pc = 0x25FDACu;
            return;
        }
    }
    ctx->pc = 0x25FD64u;
}
