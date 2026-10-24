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

// Function: entry_001bcb6c
// Address: 0x1bcb6c - 0x1bcbc0
void entry_001bcb6c_0x1bcb6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcb6c_0x1bcb6c");
#endif

    ctx->pc = 0x1bcb6cu;

    // 0x1bcb6c: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1bcb6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcb70: 0xc5011b50  lwc1        $f1, 0x1B50($t0)
    ctx->pc = 0x1bcb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bcb74: 0x3c043dcc  lui         $a0, 0x3DCC
    ctx->pc = 0x1bcb74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15820 << 16));
    // 0x1bcb78: 0x3485cccd  ori         $a1, $a0, 0xCCCD
    ctx->pc = 0x1bcb78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x1bcb7c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1bcb7cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bcb80: 0x0  nop
    ctx->pc = 0x1bcb80u;
    // NOP
    // 0x1bcb84: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1bcb84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1bcb88: 0xe5001b50  swc1        $f0, 0x1B50($t0)
    ctx->pc = 0x1bcb88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 6992), bits); }
    // 0x1bcb8c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bcb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcb90: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1bcb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bcb94: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1bcb94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1bcb98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bcb98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bcb9c: 0x0  nop
    ctx->pc = 0x1bcb9cu;
    // NOP
    // 0x1bcba0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bcba0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bcba4: 0x0  nop
    ctx->pc = 0x1bcba4u;
    // NOP
    // 0x1bcba8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1BCBA8u;
    {
        const bool branch_taken_0x1bcba8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bcba8) {
            ctx->pc = 0x1BCBC0u;
            return;
        }
    }
    ctx->pc = 0x1BCBB0u;
    // 0x1bcbb0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1bcbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1bcbb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bcbb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bcbb8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bcbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcbbc: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1bcbbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    ctx->pc = 0x1bcbc0u;
}
