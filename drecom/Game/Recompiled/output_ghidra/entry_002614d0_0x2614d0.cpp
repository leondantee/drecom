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

// Function: entry_002614d0
// Address: 0x2614d0 - 0x261508
void entry_002614d0_0x2614d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002614d0_0x2614d0");
#endif

    ctx->pc = 0x2614d0u;

    // 0x2614d0: 0xc7a10248  lwc1        $f1, 0x248($sp)
    ctx->pc = 0x2614d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2614d4: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x2614d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x2614d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2614d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2614dc: 0x0  nop
    ctx->pc = 0x2614dcu;
    // NOP
    // 0x2614e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2614e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2614e4: 0x0  nop
    ctx->pc = 0x2614e4u;
    // NOP
    // 0x2614e8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2614E8u;
    {
        const bool branch_taken_0x2614e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2614e8) {
            ctx->pc = 0x261508u;
            return;
        }
    }
    ctx->pc = 0x2614F0u;
    // 0x2614f0: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x2614f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2614f4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2614f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2614f8: 0x8c4202d4  lw          $v0, 0x2D4($v0)
    ctx->pc = 0x2614f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x2614fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2614fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x261500: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x261500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261504: 0xe7a00248  swc1        $f0, 0x248($sp)
    ctx->pc = 0x261504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
    ctx->pc = 0x261508u;
}
