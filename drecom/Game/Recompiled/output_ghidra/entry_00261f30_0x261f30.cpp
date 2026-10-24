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

// Function: entry_00261f30
// Address: 0x261f30 - 0x261f68
void entry_00261f30_0x261f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00261f30_0x261f30");
#endif

    ctx->pc = 0x261f30u;

    // 0x261f30: 0xc7a10248  lwc1        $f1, 0x248($sp)
    ctx->pc = 0x261f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261f34: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x261f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x261f38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x261f38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261f3c: 0x0  nop
    ctx->pc = 0x261f3cu;
    // NOP
    // 0x261f40: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x261f40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x261f44: 0x0  nop
    ctx->pc = 0x261f44u;
    // NOP
    // 0x261f48: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x261F48u;
    {
        const bool branch_taken_0x261f48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x261f48) {
            ctx->pc = 0x261F68u;
            return;
        }
    }
    ctx->pc = 0x261F50u;
    // 0x261f50: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x261f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261f54: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x261f54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x261f58: 0x8c4202d4  lw          $v0, 0x2D4($v0)
    ctx->pc = 0x261f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x261f5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x261f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x261f60: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x261f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261f64: 0xe7a00248  swc1        $f0, 0x248($sp)
    ctx->pc = 0x261f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
    ctx->pc = 0x261f68u;
}
