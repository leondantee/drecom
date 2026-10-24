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

// Function: entry_0022cd4c
// Address: 0x22cd4c - 0x22cd8c
void entry_0022cd4c_0x22cd4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022cd4c_0x22cd4c");
#endif

    ctx->pc = 0x22cd4cu;

    // 0x22cd4c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22cd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cd50: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x22cd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22cd54: 0x3c034496  lui         $v1, 0x4496
    ctx->pc = 0x22cd54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17558 << 16));
    // 0x22cd58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22cd58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22cd5c: 0x0  nop
    ctx->pc = 0x22cd5cu;
    // NOP
    // 0x22cd60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22cd60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22cd64: 0x0  nop
    ctx->pc = 0x22cd64u;
    // NOP
    // 0x22cd68: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x22CD68u;
    {
        const bool branch_taken_0x22cd68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22cd68) {
            ctx->pc = 0x22CD8Cu;
            return;
        }
    }
    ctx->pc = 0x22CD70u;
    // 0x22cd70: 0x3c03c120  lui         $v1, 0xC120
    ctx->pc = 0x22cd70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49440 << 16));
    // 0x22cd74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22cd74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22cd78: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22cd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cd7c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22cd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22cd80: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x22cd80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x22cd84: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x22CD84u;
    {
        const bool branch_taken_0x22cd84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cd84) {
            ctx->pc = 0x22CDA0u;
            return;
        }
    }
    ctx->pc = 0x22CD8Cu;
}
