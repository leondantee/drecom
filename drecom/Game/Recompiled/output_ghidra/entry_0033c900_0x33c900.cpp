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

// Function: entry_0033c900
// Address: 0x33c900 - 0x33c938
void entry_0033c900_0x33c900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033c900_0x33c900");
#endif

    ctx->pc = 0x33c900u;

    // 0x33c900: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x33c900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33c904: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x33c904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x33c908: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x33c908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x33c90c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33c90cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33c910: 0x0  nop
    ctx->pc = 0x33c910u;
    // NOP
    // 0x33c914: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x33c914u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33c918: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x33c918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x33c91c: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x33c91cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x33c920: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x33c920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33c924: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x33c924u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33c928: 0x0  nop
    ctx->pc = 0x33c928u;
    // NOP
    // 0x33c92c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x33C92Cu;
    {
        const bool branch_taken_0x33c92c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33c92c) {
            ctx->pc = 0x33C938u;
            return;
        }
    }
    ctx->pc = 0x33C934u;
    // 0x33c934: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x33c934u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x33c938u;
}
